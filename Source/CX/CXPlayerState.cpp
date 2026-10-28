// CXPlayerState.cpp

#include "CXPlayerState.h"
#include "Net/UnrealNetwork.h"

ACXPlayerState::ACXPlayerState()
{
}

void ACXPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 자신의 화면에서만 확인 가능하도록 소유자에게만 복제되도록 설정
	DOREPLIFETIME_CONDITION(ACXPlayerState, Coins, COND_OwnerOnly);
	DOREPLIFETIME_CONDITION(ACXPlayerState, BonusMaxSpeed, COND_OwnerOnly);
}

void ACXPlayerState::AddCoins(int32 Amount)
{
	// 값의 변경은 반드시 서버에서만 이루어지도록 검사
	if (HasAuthority() == false || Amount <= 0)
	{
		return;
	}

	Coins += Amount;

	// 서버 로컬(리슨 서버의 경우 호스트 화면)에도 즉시 반영되도록 수동 호출
	OnRep_Coins();
}

int32 ACXPlayerState::RemoveCoins(int32 Amount)
{
	if (HasAuthority() == false || Amount <= 0)
	{
		return 0;
	}

	const int32 ActuallyRemoved = FMath::Min(Coins, Amount);
	Coins -= ActuallyRemoved;

	OnRep_Coins();

	return ActuallyRemoved;
}

void ACXPlayerState::AddBonusMaxSpeed(float Amount)
{
	if (HasAuthority() == false || Amount <= 0.0f)
	{
		return;
	}

	BonusMaxSpeed += Amount;

	OnRep_BonusMaxSpeed();
}

void ACXPlayerState::OnRep_Coins()
{
	OnCoinsChanged.Broadcast(Coins);
}

void ACXPlayerState::OnRep_BonusMaxSpeed()
{
	OnBonusMaxSpeedChanged.Broadcast(BonusMaxSpeed);
}
