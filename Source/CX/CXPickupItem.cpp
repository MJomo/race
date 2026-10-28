// CXPickupItem.cpp

#include "CXPickupItem.h"
#include "CXPawn.h"
#include "CXPlayerState.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

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
	if (HasAuthority() == false)
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

	GrantReward(PlayerState);

	MulticastPlayPickupEffect();

	// 오버랩된 아이템 액터는 파괴 (서버에서 파괴하면 모든 클라이언트로 복제된다)
	Destroy();
}

void ACXPickupItem::MulticastPlayPickupEffect_Implementation()
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
