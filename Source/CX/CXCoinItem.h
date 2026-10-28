// CXCoinItem.h

#pragma once

#include "CoreMinimal.h"
#include "CXPickupItem.h"
#include "CXCoinItem.generated.h"

/**
 *  Coin pickup item. Overlapping grants the player Coins.
 */
UCLASS()
class CX_API ACXCoinItem : public ACXPickupItem
{
	GENERATED_BODY()

public:
	ACXCoinItem();

protected:
	/** 획득 시 지급할 원화 */
	UPROPERTY(EditDefaultsOnly, Category = "CX|Item")
	int32 CoinAmount = 10;

	virtual void GrantReward(ACXPlayerState* PlayerState) override;
};
