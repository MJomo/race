// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "CXPawn.generated.h"

class UCameraComponent;
class USpringArmComponent;
class UInputAction;
class UChaosWheeledVehicleMovementComponent;
class UParticleSystem;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateVehicle, Log, All);

/**
 *  Vehicle Pawn class
 *  Handles common functionality for all vehicle types,
 *  including input handling, camera management, combat (attack / damage)
 *  and applying the PlayerState's BonusMaxSpeed.
 *  
 *  Specific vehicle configurations are handled in subclasses.
 */
UCLASS(abstract)
class ACXPawn : public AWheeledVehiclePawn
{
	GENERATED_BODY()

	/** Spring Arm for the front camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* FrontSpringArm;

	/** Front Camera component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FrontCamera;

	/** Spring Arm for the back camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* BackSpringArm;

	/** Back Camera component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* BackCamera;

	/** Cast pointer to the Chaos Vehicle movement component */
	TObjectPtr<UChaosWheeledVehicleMovementComponent> ChaosVehicleMovement;

protected:

	/** Steering Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* SteeringAction;

	/** Throttle Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* ThrottleAction;

	/** Brake Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* BrakeAction;

	/** Handbrake Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* HandbrakeAction;

	/** Look Around Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAroundAction;

	/** Toggle Camera Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* ToggleCameraAction;

	/** Reset Vehicle Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* ResetVehicleAction;

	/** Attack (좌클릭) Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputAction* AttackAction;

	/** Keeps track of which camera is active */
	bool bFrontCameraActive = false;

	// -- Combat --

	/** 라인트레이싱 시작 지점(차량 앞 범퍼 중앙)까지의 전방 오프셋 거리 */
	UPROPERTY(EditAnywhere, Category = "CX|Combat")
	float AttackTraceStartOffset = 200.0f;

	/** 라인트레이싱 거리 */
	UPROPERTY(EditAnywhere, Category = "CX|Combat")
	float AttackTraceDistance = 300.0f;

	/** 공격 1회당 ApplyDamage에 전달할 데미지 값 */
	UPROPERTY(EditAnywhere, Category = "CX|Combat")
	float AttackDamage = 10.0f;

	/** 피해 차량에게서 빼앗는 코인 수 (가해자는 같은 양을 획득) */
	UPROPERTY(EditAnywhere, Category = "CX|Combat")
	int32 CoinsStolenPerHit = 5;

	/** 피해 차량이 이 값 미만의 코인을 가지고 있으면 아무 동작도 하지 않는다 */
	UPROPERTY(EditAnywhere, Category = "CX|Combat")
	int32 MinCoinsToSteal = 5;

	/** 공격이 명중했을 때 재생할 파티클 */
	UPROPERTY(EditDefaultsOnly, Category = "CX|Combat")
	TObjectPtr<UParticleSystem> HitParticle;

	// -- Bonus Max Speed --

	/** BeginPlay 시점에 캐시해 두는, 아이템 적용 전 기본 EngineSetup.MaxRPM */
	float BaseEngineMaxRPM = 0.0f;

public:
	ACXPawn();

	// Begin Pawn interface

	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	// End Pawn interface

	// Begin Actor interface

	virtual void BeginPlay() override;
	virtual void Tick(float Delta) override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

	// End Actor interface

protected:

	/** Handles steering input */
	void Steering(const FInputActionValue& Value);

	/** Handles throttle input */
	void Throttle(const FInputActionValue& Value);

	/** Handles brake input */
	void Brake(const FInputActionValue& Value);

	/** Handles brake start/stop inputs */
	void StartBrake(const FInputActionValue& Value);
	void StopBrake(const FInputActionValue& Value);

	/** Handles handbrake start/stop inputs */
	void StartHandbrake(const FInputActionValue& Value);
	void StopHandbrake(const FInputActionValue& Value);

	/** Handles look around input */
	void LookAround(const FInputActionValue& Value);

	/** Handles toggle camera input */
	void ToggleCamera(const FInputActionValue& Value);

	/** Handles reset vehicle input */
	void ResetVehicle(const FInputActionValue& Value);

	/** Handles attack (좌클릭) input. ServerAttack RPC를 호출한다. */
	void AttackPressed(const FInputActionValue& Value);

	/** Called when the brake lights are turned on or off */
	UFUNCTION(BlueprintImplementableEvent, Category="Vehicle")
	void BrakeLights(bool bBraking);

	// -- Combat --

	/** 차량 앞 범퍼 중앙에서 라인트레이싱으로 상대 차량을 감지하고 ApplyDamage를 호출한다. */
	UFUNCTION(Server, Reliable)
	void ServerAttack();

	/** 공격이 명중했을 때 모든 클라이언트에서 파티클을 재생한다. */
	UFUNCTION(NetMulticast, Unreliable)
	void MulticastPlayHitEffect(FVector_NetQuantize ImpactPoint);

	// -- Bonus Max Speed --

	UFUNCTION()
	void HandleBonusMaxSpeedChanged(float NewBonusMaxSpeed);

	/** EngineSetup.MaxRPM에 추가 최대 속도를 반영한다. */
	void ApplyBonusMaxSpeed(float NewBonusMaxSpeed);

	/** 현재 빙의된 PlayerState의 BonusMaxSpeed 변경 델리게이트를 구독한다. */
	void BindBonusMaxSpeedDelegate();

public:
	/** Returns the front spring arm subobject */
	FORCEINLINE USpringArmComponent* GetFrontSpringArm() const { return FrontSpringArm; }
	/** Returns the front camera subobject */
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FrontCamera; }
	/** Returns the back spring arm subobject */
	FORCEINLINE USpringArmComponent* GetBackSpringArm() const { return BackSpringArm; }
	/** Returns the back camera subobject */
	FORCEINLINE UCameraComponent* GetBackCamera() const { return BackCamera; }
	/** Returns the cast Chaos Vehicle Movement subobject */
	FORCEINLINE const TObjectPtr<UChaosWheeledVehicleMovementComponent>& GetChaosVehicleMovement() const { return ChaosVehicleMovement; }
};
