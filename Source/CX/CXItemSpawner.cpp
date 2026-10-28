// CXItemSpawner.cpp

#include "CXItemSpawner.h"
#include "Components/SceneComponent.h"
#include "TimerManager.h"

ACXItemSpawner::ACXItemSpawner()
{
	PrimaryActorTick.bCanEverTick = false;

	// 스포너 자체는 복제될 필요가 없다. 스폰되는 아이템 액터만 복제되면 된다.
	bReplicates = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void ACXItemSpawner::BeginPlay()
{
	Super::BeginPlay();

	// 스폰 로직은 서버에서만 수행
	if (HasAuthority())
	{
		SpawnItem();
	}
}

void ACXItemSpawner::SpawnItem()
{
	if (IsValid(ItemClass) == false || IsValid(GetWorld()) == false)
	{
		return;
	}

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	SpawnedItem = GetWorld()->SpawnActor<AActor>(ItemClass, GetActorLocation(), GetActorRotation(), SpawnParams);

	if (IsValid(SpawnedItem))
	{
		// 스폰한 아이템이 파괴되면 알림을 받기 위해 OnDestroyed 델리게이트 구독
		SpawnedItem->OnDestroyed.AddDynamic(this, &ACXItemSpawner::OnItemDestroyed);
	}
}

void ACXItemSpawner::OnItemDestroyed(AActor* DestroyedActor)
{
	// 파괴된 뒤 RespawnDelay초 뒤에 같은 종류의 아이템을 다시 스폰
	GetWorldTimerManager().SetTimer(RespawnTimerHandle, this, &ACXItemSpawner::SpawnItem, RespawnDelay, false);
}
