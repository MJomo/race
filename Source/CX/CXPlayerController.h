// CXPlayerController.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CXGameState.h"
#include "CXPlayerController.generated.h"

class UInputMappingContext;
class ACXPawn;
class UCXUI;
class UCXChatWidget;
class UCXGameStatusUI;
class ACXPlayerState;

/**
 *  Vehicle Player Controller class
 *  Handles input mapping, user interface (speed/gear/coins HUD, chat, match status)
 */
UCLASS(abstract)
class CX_API ACXPlayerController : public APlayerController
{
	GENERATED_BODY()

protected:

	/** Input Mapping Context to be used for player input */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* InputMappingContext;

	/** If true, the optional steering wheel input mapping context will be registered */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	bool bUseSteeringWheelControls = false;

	/** Optional Input Mapping Context to be used for steering wheel input.
	 *  This is added alongside the default Input Mapping Context and does not block other forms of input.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta=(EditCondition="bUseSteeringWheelControls"))
	UInputMappingContext* SteeringWheelInputMappingContext;

	/** Pointer to the controlled vehicle pawn */
	UPROPERTY(Replicated)
	TObjectPtr<ACXPawn> VehiclePawn;

	/** Type of the UI to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
	TSubclassOf<UCXUI> VehicleUIClass;

	/** Pointer to the UI widget */
	UPROPERTY()
	TObjectPtr<UCXUI> VehicleUI;

	/** Type of the chat widget to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
	TSubclassOf<UCXChatWidget> ChatWidgetClass;

	/** Pointer to the chat widget */
	UPROPERTY()
	TObjectPtr<UCXChatWidget> ChatWidget;

	/** Type of the match status widget (게임 단계 / 남은 시간 / 승패) to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = UI)
	TSubclassOf<UCXGameStatusUI> GameStatusUIClass;

	/** Pointer to the match status widget */
	UPROPERTY()
	TObjectPtr<UCXGameStatusUI> GameStatusUI;

	

	// Begin Actor interface
protected:

	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:

	virtual void Tick(float Delta) override;

	// End Actor interface

	// Begin PlayerController interface
protected:

	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnRep_PlayerState() override;

	// End PlayerController interface

	// Begin Chat
public:

	/** 로컬에서 호출: 입력한 메세지를 서버로 전송해 모든 플레이어에게 동기화한다. */
	void SendChatMessage(const FString& Message);

protected:

	UFUNCTION(Server, Reliable)
	void ServerSendChatMessage(const FString& Message);

	UFUNCTION(Client, Reliable)
	void ClientReceiveChatMessage(const FString& SenderName, const FString& Message);

	// End Chat

	// Begin Coins / BonusMaxSpeed HUD binding
protected:

	UFUNCTION()
	void HandleCoinsChanged(int32 NewCoins);

	UFUNCTION()
	void HandleBonusMaxSpeedChanged(float NewBonusMaxSpeed);

	/** VehiclePawn, VehicleUI가 모두 준비되었을 때 자신의 PlayerState에 UI 바인딩 델리게이트를 등록한다. */
	void BindPlayerStateDelegates();

	// End Coins / BonusMaxSpeed HUD binding

	// Begin Match status HUD binding
protected:

	/** GameState가 준비되면(클라이언트에서는 복제된 이후) 델리게이트를 한 번만 구독한다. */
	void TryBindGameState();

	UFUNCTION()
	void HandleGameStatusChanged(ECXGameStatus NewStatus);

	UFUNCTION()
	void HandleRemainingTimeChanged(int32 NewRemainingTime);

	/** GameState 델리게이트 구독이 끝났는지 여부 */
	bool bGameStateBound = false;

	// End Match status HUD binding
};
