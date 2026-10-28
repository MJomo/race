// CXSpeedBuffItem.cpp

#include "CXSpeedBuffItem.h"
#include "CXPlayerState.h"

ACXSpeedBuffItem::ACXSpeedBuffItem()
{
}

void ACXSpeedBuffItem::GrantReward(ACXPlayerState* PlayerState)
{
	if (IsValid(PlayerState))
	{
		PlayerState->AddBonusMaxSpeed(BonusSpeedAmount);
	}
}
