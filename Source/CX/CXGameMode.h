// CXGameMode.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CXGameMode.generated.h"

class ACXGameState;

UCLASS(MinimalAPI)
class ACXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACXGameMode();

protected:
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	virtual void BeginPlay() override;
	virtual void PostLogin(APlayerController* NewPlayer) override;

private:
	bool IsPlayerStartAvailable(const APlayerStart* PlayerStart) const;

	/** 대기 상태로 전환하고 대기 카운트다운을 시작한다. 첫 플레이어 접속 시 1회만 호출된다. */
	void StartWaiting();

	/** 1초마다 호출되어 남은 시간을 1씩 감소시키고, 0이 되면 다음 단계로 전환한다. */
	void TickCountdown();

	/** 진행(Playing) 상태로 전환한다. */
	void StartPlaying();

	/** 종료(Finished) 상태로 전환하고 우승자를 판정한다. */
	void FinishGame();

	/** 모든 플레이어의 코인을 비교해 우승자 목록을 결정한다 (동점 시 공동 우승). */
	void DetermineWinners();

	ACXGameState* GetCXGameState() const;

private:
	UPROPERTY(EditDefaultsOnly)
	FVector VehicleSpawnCheckHalfExtent = FVector(250.0, 120.0, 80.0);

	UPROPERTY(EditDefaultsOnly)
	FVector VehicleSpawnCheckOffset = FVector(0.0, 0.0, 80.0);

	/** 대기(Waiting) 단계 지속 시간(초) */
	UPROPERTY(EditDefaultsOnly, Category = "CX|Match")
	int32 WaitingDuration = 10;

	/** 진행(Playing) 단계 지속 시간(초) */
	UPROPERTY(EditDefaultsOnly, Category = "CX|Match")
	int32 PlayingDuration = 180;

	FTimerHandle CountdownTimerHandle;
};
