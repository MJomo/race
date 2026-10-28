// Copyright Epic Games, Inc. All Rights Reserved.

#include "CXPawn.h"
#include "CXWheelFront.h"
#include "CXWheelRear.h"
#include "CXPlayerState.h"
#include "CXGameState.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/DamageType.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystem.h"

#define LOCTEXT_NAMESPACE "VehiclePawn"

DEFINE_LOG_CATEGORY(LogTemplateVehicle);

ACXPawn::ACXPawn()
{
	// construct the front camera boom
	FrontSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Front Spring Arm"));
	FrontSpringArm->SetupAttachment(GetMesh());
	FrontSpringArm->TargetArmLength = 0.0f;
	FrontSpringArm->bDoCollisionTest = false;
	FrontSpringArm->bEnableCameraRotationLag = true;
	FrontSpringArm->CameraRotationLagSpeed = 15.0f;
	FrontSpringArm->SetRelativeLocation(FVector(30.0f, 0.0f, 120.0f));

	FrontCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Front Camera"));
	FrontCamera->SetupAttachment(FrontSpringArm);
	FrontCamera->bAutoActivate = false;

	// construct the back camera boom
	BackSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Back Spring Arm"));
	BackSpringArm->SetupAttachment(GetMesh());
	BackSpringArm->TargetArmLength = 650.0f;
	BackSpringArm->SocketOffset.Z = 150.0f;
	BackSpringArm->bDoCollisionTest = false;
	BackSpringArm->bInheritPitch = false;
	BackSpringArm->bInheritRoll = false;
	BackSpringArm->bEnableCameraRotationLag = true;
	BackSpringArm->CameraRotationLagSpeed = 2.0f;
	BackSpringArm->CameraLagMaxDistance = 50.0f;

	BackCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Back Camera"));
	BackCamera->SetupAttachment(BackSpringArm);

	// Configure the car mesh
	GetMesh()->SetSimulatePhysics(true);
	GetMesh()->SetCollisionProfileName(FName("Vehicle"));

	// get the Chaos Wheeled movement component
	ChaosVehicleMovement = CastChecked<UChaosWheeledVehicleMovementComponent>(GetVehicleMovement());

}

void ACXPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// steering 
		EnhancedInputComponent->BindAction(SteeringAction, ETriggerEvent::Triggered, this, &ACXPawn::Steering);
		EnhancedInputComponent->BindAction(SteeringAction, ETriggerEvent::Completed, this, &ACXPawn::Steering);

		// throttle 
		EnhancedInputComponent->BindAction(ThrottleAction, ETriggerEvent::Triggered, this, &ACXPawn::Throttle);
		EnhancedInputComponent->BindAction(ThrottleAction, ETriggerEvent::Completed, this, &ACXPawn::Throttle);

		// break 
		EnhancedInputComponent->BindAction(BrakeAction, ETriggerEvent::Triggered, this, &ACXPawn::Brake);
		EnhancedInputComponent->BindAction(BrakeAction, ETriggerEvent::Started, this, &ACXPawn::StartBrake);
		EnhancedInputComponent->BindAction(BrakeAction, ETriggerEvent::Completed, this, &ACXPawn::StopBrake);

		// handbrake 
		EnhancedInputComponent->BindAction(HandbrakeAction, ETriggerEvent::Started, this, &ACXPawn::StartHandbrake);
		EnhancedInputComponent->BindAction(HandbrakeAction, ETriggerEvent::Completed, this, &ACXPawn::StopHandbrake);

		// look around 
		EnhancedInputComponent->BindAction(LookAroundAction, ETriggerEvent::Triggered, this, &ACXPawn::LookAround);

		// toggle camera 
		EnhancedInputComponent->BindAction(ToggleCameraAction, ETriggerEvent::Triggered, this, &ACXPawn::ToggleCamera);

		// reset the vehicle 
		EnhancedInputComponent->BindAction(ResetVehicleAction, ETriggerEvent::Triggered, this, &ACXPawn::ResetVehicle);

		// attack (좌클릭)
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &ACXPawn::AttackPressed);
	}
	else
	{
		UE_LOG(LogTemplateVehicle, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void ACXPawn::BeginPlay()
{
	Super::BeginPlay();

	// 아이템에 의한 보너스가 적용되기 전의 기본값을 캐시
	BaseEngineMaxRPM = ChaosVehicleMovement->EngineSetup.MaxRPM;

	// PossessedBy / OnRep_PlayerState가 BeginPlay보다 먼저 불린 경우 BaseEngineMaxRPM이 비어 있어
	// 보너스가 적용되지 못했을 수 있으므로, 캐시 직후 한 번 더 반영한다.
	BindBonusMaxSpeedDelegate();
}

void ACXPawn::Tick(float Delta)
{
	Super::Tick(Delta);

	// add some angular damping if the vehicle is in midair
	bool bMovingOnGround = ChaosVehicleMovement->IsMovingOnGround();
	GetMesh()->SetAngularDamping(bMovingOnGround ? 0.0f : 3.0f);

	// realign the camera yaw to face front
	float CameraYaw = BackSpringArm->GetRelativeRotation().Yaw;
	CameraYaw = FMath::FInterpTo(CameraYaw, 0.0f, Delta, 1.0f);

	BackSpringArm->SetRelativeRotation(FRotator(0.0f, CameraYaw, 0.0f));
}

void ACXPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	// 서버(리슨 서버 호스트 포함)에서 빙의 시점에 바로 바인딩
	BindBonusMaxSpeedDelegate();
}

void ACXPawn::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	// 클라이언트에서는 PlayerState가 복제된 시점에 바인딩
	BindBonusMaxSpeedDelegate();
}

void ACXPawn::BindBonusMaxSpeedDelegate()
{
	ACXPlayerState* CXPlayerState = GetPlayerState<ACXPlayerState>();
	if (IsValid(CXPlayerState) == false)
	{
		return;
	}

	CXPlayerState->OnBonusMaxSpeedChanged.AddUniqueDynamic(this, &ACXPawn::HandleBonusMaxSpeedChanged);

	// 현재 값을 즉시 반영 (재접속, 리스폰 등의 상황 대비)
	ApplyBonusMaxSpeed(CXPlayerState->GetBonusMaxSpeed());
}

void ACXPawn::HandleBonusMaxSpeedChanged(float NewBonusMaxSpeed)
{
	ApplyBonusMaxSpeed(NewBonusMaxSpeed);
}

void ACXPawn::ApplyBonusMaxSpeed(float NewBonusMaxSpeed)
{
	if (ChaosVehicleMovement == nullptr || BaseEngineMaxRPM <= 0.0f)
	{
		return;
	}

	// BonusMaxSpeed 100당 MaxRPM을 100% 추가 (= 2배)하는 식으로 최고 속도를 끌어올린다.
	const float SpeedMultiplier = 1.0f + (NewBonusMaxSpeed / 100.0f);
	ChaosVehicleMovement->EngineSetup.MaxRPM = BaseEngineMaxRPM * SpeedMultiplier;
}

void ACXPawn::Steering(const FInputActionValue& Value)
{
	// get the input magnitude for steering
	float SteeringValue = Value.Get<float>();

	// add the input
	ChaosVehicleMovement->SetSteeringInput(SteeringValue);
}

void ACXPawn::Throttle(const FInputActionValue& Value)
{
	// get the input magnitude for the throttle
	float ThrottleValue = Value.Get<float>();

	// add the input
	ChaosVehicleMovement->SetThrottleInput(ThrottleValue);
}

void ACXPawn::Brake(const FInputActionValue& Value)
{
	// get the input magnitude for the brakes
	float BreakValue = Value.Get<float>();

	// add the input
	ChaosVehicleMovement->SetBrakeInput(BreakValue);
}

void ACXPawn::StartBrake(const FInputActionValue& Value)
{
	// call the Blueprint hook for the break lights
	BrakeLights(true);
}

void ACXPawn::StopBrake(const FInputActionValue& Value)
{
	// call the Blueprint hook for the break lights
	BrakeLights(false);

	// reset brake input to zero
	ChaosVehicleMovement->SetBrakeInput(0.0f);
}

void ACXPawn::StartHandbrake(const FInputActionValue& Value)
{
	// add the input
	ChaosVehicleMovement->SetHandbrakeInput(true);

	// call the Blueprint hook for the break lights
	BrakeLights(true);
}

void ACXPawn::StopHandbrake(const FInputActionValue& Value)
{
	// add the input
	ChaosVehicleMovement->SetHandbrakeInput(false);

	// call the Blueprint hook for the break lights
	BrakeLights(false);
}

void ACXPawn::LookAround(const FInputActionValue& Value)
{
	// get the flat angle value for the input 
	float LookValue = Value.Get<float>();

	// add the input
	BackSpringArm->AddLocalRotation(FRotator(0.0f, LookValue, 0.0f));
}

void ACXPawn::ToggleCamera(const FInputActionValue& Value)
{
	// toggle the active camera flag
	bFrontCameraActive = !bFrontCameraActive;

	FrontCamera->SetActive(bFrontCameraActive);
	BackCamera->SetActive(!bFrontCameraActive);
}

void ACXPawn::ResetVehicle(const FInputActionValue& Value)
{
	// reset to a location slightly above our current one
	FVector ResetLocation = GetActorLocation() + FVector(0.0f, 0.0f, 50.0f);

	// reset to our yaw. Ignore pitch and roll
	FRotator ResetRotation = GetActorRotation();
	ResetRotation.Pitch = 0.0f;
	ResetRotation.Roll = 0.0f;
	
	// teleport the actor to the reset spot and reset physics
	SetActorTransform(FTransform(ResetRotation, ResetLocation, FVector::OneVector), false, nullptr, ETeleportType::TeleportPhysics);

	GetMesh()->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	GetMesh()->SetPhysicsLinearVelocity(FVector::ZeroVector);

	UE_LOG(LogTemplateVehicle, Error, TEXT("Reset Vehicle"));
}

void ACXPawn::AttackPressed(const FInputActionValue& Value)
{
	// 로컬에서는 입력만 감지하고, 실제 판정은 서버에서 수행
	ServerAttack();
}

void ACXPawn::ServerAttack_Implementation()
{
	UWorld* World = GetWorld();
	if (IsValid(World) == false)
	{
		return;
	}

	// 게임이 진행 중일 때만 공격 가능 (대기/종료 중 코인 이동 방지)
	if (bAttackOnlyWhilePlaying)
	{
		const ACXGameState* CXGameState = World->GetGameState<ACXGameState>();
		if (IsValid(CXGameState) == false || CXGameState->GetGameStatus() != ECXGameStatus::Playing)
		{
			return;
		}
	}

	// 서버에서 쿨다운 검사
	const double Now = World->GetTimeSeconds();
	if (Now - LastAttackTime < AttackCooldown)
	{
		return;
	}
	LastAttackTime = Now;

	// 차량 앞 범퍼 중앙에서 전방으로 라인트레이싱
	const FVector Start = GetActorLocation() + GetActorForwardVector() * AttackTraceStartOffset;
	const FVector End = Start + GetActorForwardVector() * AttackTraceDistance;

	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_Vehicle);

	FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(VehicleAttackTrace), false, this);

	FHitResult HitResult;
	const bool bHit = World->LineTraceSingleByObjectType(HitResult, Start, End, ObjectQueryParams, QueryParams);

	ACXPawn* HitVehicle = bHit ? Cast<ACXPawn>(HitResult.GetActor()) : nullptr;
	const bool bHitVehicle = IsValid(HitVehicle) && HitVehicle != this;

	// 디버그 라인(+ 명중 시 파티클)을 서버와 모든 클라이언트에서 보이도록 멀티캐스트
	MulticastPlayAttackEffect(Start, End, bHitVehicle, bHitVehicle ? FVector(HitResult.ImpactPoint) : End);

	if (bHitVehicle == false)
	{
		return;
	}

	// 상대 차량에게 데미지 적용 (실제 코인 이전 로직은 TakeDamage에서 처리)
	UGameplayStatics::ApplyDamage(HitVehicle, AttackDamage, GetController(), this, UDamageType::StaticClass());
}

void ACXPawn::MulticastPlayAttackEffect_Implementation(FVector_NetQuantize TraceStart, FVector_NetQuantize TraceEnd, bool bHit, FVector_NetQuantize ImpactPoint)
{
	// DrawDebugLine을 이용해 라인트레이싱을 표시 (명중: 빨강 / 빗나감: 초록)
	DrawDebugLine(GetWorld(), FVector(TraceStart), FVector(TraceEnd), bHit ? FColor::Red : FColor::Green, false, 1.0f, 0, 3.0f);

	// 닿은 차량에는 파티클 재생
	if (bHit && HitParticle)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, HitParticle, FVector(ImpactPoint));
	}
}

float ACXPawn::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	const float ActualDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	// 코인 이전 로직은 서버에서만 수행
	if (HasAuthority() == false)
	{
		return ActualDamage;
	}

	ACXPlayerState* VictimState = GetPlayerState<ACXPlayerState>();
	if (IsValid(VictimState) == false || VictimState->GetCoins() < MinCoinsToSteal)
	{
		// 피해 차량이 최소 코인 미만을 갖고 있으면 아무 동작도 하지 않는다.
		return ActualDamage;
	}

	ACXPawn* AttackerPawn = Cast<ACXPawn>(DamageCauser);
	if (IsValid(AttackerPawn) == false || AttackerPawn == this)
	{
		return ActualDamage;
	}

	ACXPlayerState* AttackerState = AttackerPawn->GetPlayerState<ACXPlayerState>();
	if (IsValid(AttackerState) == false)
	{
		return ActualDamage;
	}

	const int32 StolenCoins = VictimState->RemoveCoins(CoinsStolenPerHit);
	AttackerState->AddCoins(StolenCoins);

	return ActualDamage;
}

#undef LOCTEXT_NAMESPACE
