// CXGameState.cpp

#include "CXGameState.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerState.h"
#include "Kismet/GameplayStatics.h"

ACXGameState::ACXGameState()
{
}

void ACXGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// 모든 플레이어가 같은 상태 / 같은 남은 시간 / 같은 우승자 목록을 보도록 조건 없이 복제
	DOREPLIFETIME(ACXGameState, GameStatus);
	DOREPLIFETIME(ACXGameState, RemainingTime);
	DOREPLIFETIME(ACXGameState, Winners);
}

void ACXGameState::SetGameStatus(ECXGameStatus NewStatus)
{
	if (HasAuthority() == false)
	{
		return;
	}

	GameStatus = NewStatus;
	OnRep_GameStatus();
}

void ACXGameState::SetRemainingTime(int32 NewRemainingTime)
{
	if (HasAuthority() == false)
	{
		return;
	}

	RemainingTime = NewRemainingTime;
	OnRep_RemainingTime();
}

void ACXGameState::SetWinners(const TArray<TObjectPtr<APlayerState>>& NewWinners)
{
	if (HasAuthority() == false)
	{
		return;
	}

	Winners = NewWinners;
	OnRep_Winners();
}

bool ACXGameState::IsLocalPlayerWinner() const
{
	if (IsValid(GetWorld()) == false)
	{
		return false;
	}

	const APlayerController* LocalPC = GetWorld()->GetFirstPlayerController();
	if (IsValid(LocalPC) == false || IsValid(LocalPC->PlayerState) == false)
	{
		return false;
	}

	return Winners.Contains(LocalPC->PlayerState);
}

void ACXGameState::OnRep_GameStatus()
{
	OnGameStatusChanged.Broadcast(GameStatus);
}

void ACXGameState::OnRep_RemainingTime()
{
	OnRemainingTimeChanged.Broadcast(RemainingTime);
}

void ACXGameState::OnRep_Winners()
{
	OnWinnersChanged.Broadcast();
}
