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

	// 스폰 로직은 서버에서만 수행.
	// 주의: 레벨에 배치된 bReplicates=false 액터는 클라이언트에서도 HasAuthority()가 true이므로
	// HasAuthority() 대신 NetMode로 클라이언트를 제외한다.
	if (GetNetMode() != NM_Client)
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
	// 월드 정리(레벨 이동/게임 종료) 중에는 리스폰하지 않는다.
	if (IsValid(GetWorld()) == false || GetWorld()->bIsTearingDown)
	{
		return;
	}

	// 파괴된 뒤 RespawnDelay초 뒤에 같은 종류의 아이템을 다시 스폰
	GetWorldTimerManager().SetTimer(RespawnTimerHandle, this, &ACXItemSpawner::SpawnItem, RespawnDelay, false);
}
