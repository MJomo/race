// CXSpeedBuffItem.h

#pragma once

#include "CoreMinimal.h"
#include "CXPickupItem.h"
#include "CXSpeedBuffItem.generated.h"

/**
 *  Speed buff pickup item. Overlapping grants the player BonusMaxSpeed.
 */
UCLASS()
class CX_API ACXSpeedBuffItem : public ACXPickupItem
{
	GENERATED_BODY()

public:
	ACXSpeedBuffItem();

protected:
	/** 획득 시 지급할 추가 최대 속도 */
	UPROPERTY(EditDefaultsOnly, Category = "CX|Item")
	float BonusSpeedAmount = 10.0f;

	virtual void GrantReward(ACXPlayerState* PlayerState) override;
};
