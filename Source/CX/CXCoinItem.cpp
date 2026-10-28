// CXCoinItem.cpp

#include "CXCoinItem.h"
#include "CXPlayerState.h"

ACXCoinItem::ACXCoinItem()
{
}

void ACXCoinItem::GrantReward(ACXPlayerState* PlayerState)
{
	if (IsValid(PlayerState))
	{
		PlayerState->AddCoins(CoinAmount);
	}
}
