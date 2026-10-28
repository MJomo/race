// CXPickupItem.cpp

#include "CXPickupItem.h"
#include "CXPawn.h"
#include "CXPlayerState.h"
#include "CXGameState.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Sound/SoundBase.h"

ACXPickupItem::ACXPickupItem()
{
	PrimaryActorTick.bCanEverTick = false;

	bReplicates = true;
	// 정적인 아이템이므로 네트워크 업데이트 빈도를 낮게 설정 (스폰/파괴 시점만 중요)
	NetUpdateFrequency = 1.0f;

	CollisionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionSphere"));
	SetRootComponent(CollisionSphere);
	CollisionSphere->InitSphereRadius(80.0f);
	CollisionSphere->SetCollisionProfileName(FName("OverlapAllDynamic"));

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
	ItemMesh->SetupAttachment(CollisionSphere);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACXPickupItem::BeginPlay()
{
	Super::BeginPlay();

	// 오버랩 판정 및 보상 지급은 서버에서만 수행
	if (HasAuthority())
	{
		CollisionSphere->OnComponentBeginOverlap.AddDynamic(this, &ACXPickupItem::OnSphereBeginOverlap);
	}
}

void ACXPickupItem::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasAuthority() == false || bConsumed)
	{
		return;
	}

	ACXPawn* OverlappedVehicle = Cast<ACXPawn>(OtherActor);
	if (IsValid(OverlappedVehicle) == false)
	{
		return;
	}

	ACXPlayerState* PlayerState = OverlappedVehicle->GetPlayerState<ACXPlayerState>();
	if (IsValid(PlayerState) == false)
	{
		return;
	}

	// 게임이 진행 중일 때만 획득 가능
	if (bOnlyGrantWhilePlaying)
	{
		const ACXGameState* CXGameState = GetWorld()->GetGameState<ACXGameState>();
		if (IsValid(CXGameState) == false || CXGameState->GetGameStatus() != ECXGameStatus::Playing)
		{
			return;
		}
	}

	bConsumed = true;

	GrantReward(PlayerState);

	// 오버랩된 아이템 액터는 파괴 (서버에서 파괴하면 모든 클라이언트로 복제된다)
	// 파티클/사운드는 EndPlay(Destroyed)에서 서버와 각 클라이언트가 직접 재생한다.
	Destroy();
}

void ACXPickupItem::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// 아이템 파괴 시 파티클 및 사운드 재생.
	// Multicast RPC를 보낸 직후 Destroy()하면 RPC가 도착하기 전에 액터 채널이 닫혀 유실될 수 있으므로,
	// 파괴(복제)되는 시점에 각 머신이 직접 재생한다.
	if (EndPlayReason == EEndPlayReason::Destroyed && GetNetMode() != NM_DedicatedServer)
	{
		if (PickupParticle)
		{
			UGameplayStatics::SpawnEmitterAtLocation(this, PickupParticle, GetActorLocation());
		}

		if (PickupSound)
		{
			UGameplayStatics::PlaySoundAtLocation(this, PickupSound, GetActorLocation());
		}
	}

	Super::EndPlay(EndPlayReason);
}
