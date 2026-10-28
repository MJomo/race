// CXGameStatusUI.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CXGameState.h"
#include "CXGameStatusUI.generated.h"

/**
 *  Displays the current match status (Waiting / Playing / Finished),
 *  the remaining time, and the local player's win/lose result.
 *  Actual layout is built in a Blueprint subclass.
 */
UCLASS(abstract)
class CX_API UCXGameStatusUI : public UUserWidget
{
	GENERATED_BODY()

public:

	/** 게임 상태가 바뀔 때 PlayerController가 호출한다. */
	void UpdateGameStatus(ECXGameStatus NewStatus);

	/** 남은 시간이 바뀔 때 PlayerController가 호출한다. */
	void UpdateRemainingTime(int32 NewRemainingTime);

	/** 게임 종료 시 로컬 플레이어의 승패 결과를 전달한다. */
	void ShowResult(bool bIsWinner);

protected:

	/** 블루프린트에서 구현: 현재 상태(Waiting/Playing/Finished)를 화면에 표시 */
	UFUNCTION(BlueprintImplementableEvent, Category = "CX|GameStatus")
	void OnGameStatusUpdate(ECXGameStatus NewStatus);

	/** 블루프린트에서 구현: 남은 시간을 화면에 표시 */
	UFUNCTION(BlueprintImplementableEvent, Category = "CX|GameStatus")
	void OnRemainingTimeUpdate(int32 NewRemainingTime);

	/** 블루프린트에서 구현: 승리/패배 결과를 화면에 표시 */
	UFUNCTION(BlueprintImplementableEvent, Category = "CX|GameStatus")
	void OnShowResult(bool bIsWinner);
};
