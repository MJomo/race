// CXItemSpawner.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CXItemSpawner.generated.h"

/**
 *  Spawns one pickup item (Coin or Speed Buff, set per-instance in the level)
 *  at its own location, and respawns the same type a fixed delay after
 *  the previous one is destroyed.
 */
UCLASS()
class CX_API ACXItemSpawner : public AActor
{
	GENERATED_BODY()

public:
	ACXItemSpawner();

protected:
	virtual void BeginPlay() override;

	/** 스폰할 아이템 클래스. 레벨에 배치된 스포너마다 코인/버프 중 선택해서 설정한다. */
	UPROPERTY(EditAnywhere, Category = "CX|Spawner")
	TSubclassOf<AActor> ItemClass;

	/** 아이템이 파괴된 뒤 재스폰까지 걸리는 시간(초) */
	UPROPERTY(EditAnywhere, Category = "CX|Spawner")
	float RespawnDelay = 2.0f;

	/** 현재 스폰되어 있는 아이템 액터 */
	UPROPERTY()
	TObjectPtr<AActor> SpawnedItem;

	FTimerHandle RespawnTimerHandle;

	void SpawnItem();

	UFUNCTION()
	void OnItemDestroyed(AActor* DestroyedActor);
};
