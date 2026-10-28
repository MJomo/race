// CXGameState.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CXGameState.generated.h"

/** 게임 진행 단계 */
UENUM(BlueprintType)
enum class ECXGameStatus : uint8
{
	Waiting,
	Playing,
	Finished
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameStatusChanged, ECXGameStatus, NewStatus);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemainingTimeChanged, int32, NewRemainingTime);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWinnersChanged);

/**
 *  Vehicle Game State class
 *  Holds the match status, remaining time and winner list.
 *  All three are replicated to every client (not OwnerOnly) so that
 *  everyone sees the same status and the same remaining time.
 */
UCLASS()
class CX_API ACXGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	ACXGameState();

	/** 서버 전용: 게임 상태를 설정한다. */
	void SetGameStatus(ECXGameStatus NewStatus);

	/** 서버 전용: 남은 시간을 설정한다. */
	void SetRemainingTime(int32 NewRemainingTime);

	/** 서버 전용: 우승자 목록을 설정한다 (동점일 경우 모두 포함, 공동 우승). */
	void SetWinners(const TArray<TObjectPtr<APlayerState>>& NewWinners);

	FORCEINLINE ECXGameStatus GetGameStatus() const { return GameStatus; }
	FORCEINLINE int32 GetRemainingTime() const { return RemainingTime; }
	FORCEINLINE const TArray<TObjectPtr<APlayerState>>& GetWinners() const { return Winners; }

	/** 로컬(이 클라이언트를 플레이 중인) 플레이어가 우승자 목록에 포함되어 있는지 여부 */
	bool IsLocalPlayerWinner() const;

	UPROPERTY(BlueprintAssignable, Category = "CX|GameState")
	FOnGameStatusChanged OnGameStatusChanged;

	UPROPERTY(BlueprintAssignable, Category = "CX|GameState")
	FOnRemainingTimeChanged OnRemainingTimeChanged;

	UPROPERTY(BlueprintAssignable, Category = "CX|GameState")
	FOnWinnersChanged OnWinnersChanged;

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** 현재 게임 상태. 모든 플레이어에게 동일하게 복제된다. */
	UPROPERTY(ReplicatedUsing = OnRep_GameStatus, VisibleAnywhere, BlueprintReadOnly, Category = "CX|GameState")
	ECXGameStatus GameStatus = ECXGameStatus::Waiting;

	/** 현재 단계의 남은 시간(초). 모든 플레이어에게 동일하게 복제된다. */
	UPROPERTY(ReplicatedUsing = OnRep_RemainingTime, VisibleAnywhere, BlueprintReadOnly, Category = "CX|GameState")
	int32 RemainingTime = 0;

	/** 우승자 목록 (동점 시 공동 우승자 모두 포함) */
	UPROPERTY(ReplicatedUsing = OnRep_Winners, VisibleAnywhere, BlueprintReadOnly, Category = "CX|GameState")
	TArray<TObjectPtr<APlayerState>> Winners;

	UFUNCTION()
	void OnRep_GameStatus();

	UFUNCTION()
	void OnRep_RemainingTime();

	UFUNCTION()
	void OnRep_Winners();
};
