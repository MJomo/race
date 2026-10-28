// CXGameMode.cpp

#include "CXGameMode.h"
#include "CXPlayerController.h"
#include "CXPlayerState.h"
#include "CXGameState.h"
#include "EngineUtils.h"
#include "Engine/World.h"
#include "GameFramework/PlayerStart.h"
#include "TimerManager.h"

ACXGameMode::ACXGameMode()
{
	PlayerControllerClass = ACXPlayerController::StaticClass();
	PlayerStateClass = ACXPlayerState::StaticClass();
	GameStateClass = ACXGameState::StaticClass();
}

AActor* ACXGameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	TArray<APlayerStart*> AvailablePlayerStarts;

	for (TActorIterator<APlayerStart> It(GetWorld()); It; ++It)
	{
		APlayerStart* PlayerStart = *It;

		if (IsPlayerStartAvailable(PlayerStart))
		{
			AvailablePlayerStarts.Add(PlayerStart);
		}
	}

	checkf(AvailablePlayerStarts.IsEmpty() == false, TEXT("There is no available Vehicle PlayerStart."));

	const int32 RandomIndex = FMath::RandHelper(AvailablePlayerStarts.Num());
	return Cast<AActor>(AvailablePlayerStarts[RandomIndex]);
}

bool ACXGameMode::IsPlayerStartAvailable(const APlayerStart* PlayerStart) const
{
	if (IsValid(PlayerStart) == false || IsValid(GetWorld()) == false)
	{
		return false;
	}

	const FTransform PlayerStartTransform = PlayerStart->GetActorTransform();
	const FVector CheckLocation = PlayerStartTransform.TransformPosition(VehicleSpawnCheckOffset);
	const FQuat CheckRotation = PlayerStartTransform.GetRotation();
	const FCollisionShape CheckShape = FCollisionShape::MakeBox(VehicleSpawnCheckHalfExtent);
	FCollisionObjectQueryParams ObjectQueryParams;
	ObjectQueryParams.AddObjectTypesToQuery(ECC_Vehicle);

	const FCollisionQueryParams QueryParams(SCENE_QUERY_STAT(VehiclePlayerStartCheck), false);

	const bool bVehicleExists =
		GetWorld()->OverlapAnyTestByObjectType(
			CheckLocation,
			CheckRotation,
			ObjectQueryParams,
			CheckShape,
			QueryParams
		);

	return !bVehicleExists;
}

void ACXGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);

	ACXGameState* CXGameState = GetCXGameState();
	if (IsValid(CXGameState) == false)
	{
		return;
	}

	// 첫 플레이어가 접속했을 때(대기 타이머가 아직 시작되지 않았을 때)만 대기 카운트다운을 시작
	if (CXGameState->GetGameStatus() == ECXGameStatus::Waiting && GetWorldTimerManager().IsTimerActive(CountdownTimerHandle) == false)
	{
		StartWaiting();
	}
}

void ACXGameMode::StartWaiting()
{
	ACXGameState* CXGameState = GetCXGameState();
	if (IsValid(CXGameState) == false)
	{
		return;
	}

	CXGameState->SetGameStatus(ECXGameStatus::Waiting);
	CXGameState->SetRemainingTime(WaitingDuration);

	// 서버 타이머가 1초마다 TickCountdown을 호출해 남은 시간을 감소시킨다.
	GetWorldTimerManager().SetTimer(CountdownTimerHandle, this, &ACXGameMode::TickCountdown, 1.0f, true);
}

void ACXGameMode::TickCountdown()
{
	ACXGameState* CXGameState = GetCXGameState();
	if (IsValid(CXGameState) == false)
	{
		return;
	}

	const int32 NewRemainingTime = FMath::Max(0, CXGameState->GetRemainingTime() - 1);
	CXGameState->SetRemainingTime(NewRemainingTime);

	if (NewRemainingTime > 0)
	{
		return;
	}

	// 대기 카운트다운이 끝나면 진행 상태로, 진행 카운트다운이 끝나면 종료 상태로 전환
	if (CXGameState->GetGameStatus() == ECXGameStatus::Waiting)
	{
		StartPlaying();
	}
	else if (CXGameState->GetGameStatus() == ECXGameStatus::Playing)
	{
		FinishGame();
	}
}

void ACXGameMode::StartPlaying()
{
	ACXGameState* CXGameState = GetCXGameState();
	if (IsValid(CXGameState) == false)
	{
		return;
	}

	CXGameState->SetGameStatus(ECXGameStatus::Playing);
	CXGameState->SetRemainingTime(PlayingDuration);

	// CountdownTimerHandle은 StartWaiting에서 이미 반복(loop) 타이머로 설정되어 있으므로 별도 재설정 불필요
}

void ACXGameMode::FinishGame()
{
	ACXGameState* CXGameState = GetCXGameState();
	if (IsValid(CXGameState) == false)
	{
		return;
	}

	GetWorldTimerManager().ClearTimer(CountdownTimerHandle);

	DetermineWinners();

	CXGameState->SetGameStatus(ECXGameStatus::Finished);
}

void ACXGameMode::DetermineWinners()
{
	ACXGameState* CXGameState = GetCXGameState();
	if (IsValid(CXGameState) == false)
	{
		return;
	}

	int32 HighestCoins = -1;
	TArray<TObjectPtr<APlayerState>> WinnerList;

	for (APlayerState* PlayerState : CXGameState->PlayerArray)
	{
		ACXPlayerState* CXPlayerState = Cast<ACXPlayerState>(PlayerState);
		if (IsValid(CXPlayerState) == false)
		{
			continue;
		}

		if (CXPlayerState->GetCoins() > HighestCoins)
		{
			// 더 높은 기록을 찾으면 기존 목록을 비우고 새로 시작
			HighestCoins = CXPlayerState->GetCoins();
			WinnerList.Reset();
			WinnerList.Add(PlayerState);
		}
		else if (CXPlayerState->GetCoins() == HighestCoins)
		{
			// 최고 기록과 동일하면 공동 우승자로 추가
			WinnerList.Add(PlayerState);
		}
	}

	CXGameState->SetWinners(WinnerList);
}

ACXGameState* ACXGameMode::GetCXGameState() const
{
	return GetGameState<ACXGameState>();
}
