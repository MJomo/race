// CXPlayerController.cpp


#include "CXPlayerController.h"
#include "CXPawn.h"
#include "CXUI.h"
#include "CXChatWidget.h"
#include "CXGameStatusUI.h"
#include "CXPlayerState.h"
#include "CXGameState.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "Net/UnrealNetwork.h"

namespace
{
	/** 채팅 메세지 최대 길이 (서버에서 잘라낸다) */
	constexpr int32 MaxChatMessageLength = 200;
}

void ACXPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (IsLocalController() == false)
	{
		return;
	}
	
	// spawn the vehicle HUD widget and add it to the viewport
	VehicleUI = CreateWidget<UCXUI>(this, VehicleUIClass);

	check(VehicleUI);

	VehicleUI->AddToViewport();

	// spawn the chat widget and add it to the viewport
	if (ChatWidgetClass)
	{
		ChatWidget = CreateWidget<UCXChatWidget>(this, ChatWidgetClass);

		if (IsValid(ChatWidget))
		{
			ChatWidget->OwningController = this;
			ChatWidget->AddToViewport();
		}
	}

	// spawn the match status widget (게임 단계 / 남은 시간 / 승패) and add it to the viewport
	if (GameStatusUIClass)
	{
		GameStatusUI = CreateWidget<UCXGameStatusUI>(this, GameStatusUIClass);

		if (IsValid(GameStatusUI))
		{
			GameStatusUI->AddToViewport();
		}
	}

	// 서버(리슨 서버 호스트)라면 OnRep_PlayerState가 호출되지 않으므로 여기서도 바인딩 시도
	BindPlayerStateDelegates();

	// GameState가 이미 있으면(리슨 서버 호스트 등) 바로 구독
	TryBindGameState();
}

void ACXPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		// optionally add the steering wheel context
		if (bUseSteeringWheelControls && SteeringWheelInputMappingContext)
		{
			Subsystem->AddMappingContext(SteeringWheelInputMappingContext, 1);
		}
	}
}

void ACXPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ThisClass, VehiclePawn);
}

void ACXPlayerController::Tick(float Delta)
{
	Super::Tick(Delta);

	if (IsValid(VehiclePawn) && IsValid(VehicleUI))
	{
		VehicleUI->UpdateSpeed(VehiclePawn->GetChaosVehicleMovement()->GetForwardSpeed());
		VehicleUI->UpdateGear(VehiclePawn->GetChaosVehicleMovement()->GetCurrentGear());
	}

	// GameState는 클라이언트에 늦게 복제될 수 있으므로, 구독이 끝날 때까지만 매 프레임 시도한다.
	// (이후에는 GameState의 델리게이트로만 UI를 갱신한다.)
	if (bGameStateBound == false && IsLocalController())
	{
		TryBindGameState();
	}
}

void ACXPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// get a pointer to the controlled pawn
	VehiclePawn = CastChecked<ACXPawn>(InPawn);
}

void ACXPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	BindPlayerStateDelegates();
}

void ACXPlayerController::BindPlayerStateDelegates()
{
	if (IsLocalController() == false)
	{
		return;
	}

	ACXPlayerState* CXPlayerState = GetPlayerState<ACXPlayerState>();
	if (IsValid(CXPlayerState) == false)
	{
		return;
	}

	CXPlayerState->OnCoinsChanged.AddUniqueDynamic(this, &ACXPlayerController::HandleCoinsChanged);
	CXPlayerState->OnBonusMaxSpeedChanged.AddUniqueDynamic(this, &ACXPlayerController::HandleBonusMaxSpeedChanged);

	// 현재 값을 즉시 UI에 반영
	HandleCoinsChanged(CXPlayerState->GetCoins());
	HandleBonusMaxSpeedChanged(CXPlayerState->GetBonusMaxSpeed());
}

void ACXPlayerController::HandleCoinsChanged(int32 NewCoins)
{
	if (IsValid(VehicleUI))
	{
		VehicleUI->UpdateCoins(NewCoins);
	}
}

void ACXPlayerController::HandleBonusMaxSpeedChanged(float NewBonusMaxSpeed)
{
	if (IsValid(VehicleUI))
	{
		VehicleUI->UpdateBonusMaxSpeed(NewBonusMaxSpeed);
	}
}

void ACXPlayerController::SendChatMessage(const FString& Message)
{
	if (Message.IsEmpty())
	{
		return;
	}

	ServerSendChatMessage(Message);
}

void ACXPlayerController::ServerSendChatMessage_Implementation(const FString& Message)
{
	// 서버에서 공백 제거 및 길이 제한 (클라이언트 입력을 신뢰하지 않는다)
	const FString TrimmedMessage = Message.TrimStartAndEnd().Left(MaxChatMessageLength);
	if (TrimmedMessage.IsEmpty())
	{
		return;
	}

	const FString SenderName = IsValid(PlayerState) ? PlayerState->GetPlayerName() : TEXT("Unknown");

	// 접속해 있는 모든 플레이어 컨트롤러에게 메세지를 전달해 채팅을 동기화한다.
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ACXPlayerController* OtherController = Cast<ACXPlayerController>(It->Get()))
		{
			OtherController->ClientReceiveChatMessage(SenderName, TrimmedMessage);
		}
	}
}

void ACXPlayerController::ClientReceiveChatMessage_Implementation(const FString& SenderName, const FString& Message)
{
	if (IsValid(ChatWidget))
	{
		ChatWidget->AppendChatMessage(SenderName, Message);
	}
}

void ACXPlayerController::TryBindGameState()
{
	if (IsValid(GameStatusUI) == false || IsValid(GetWorld()) == false)
	{
		return;
	}

	ACXGameState* CXGameState = GetWorld()->GetGameState<ACXGameState>();
	if (IsValid(CXGameState) == false)
	{
		return;
	}

	CXGameState->OnGameStatusChanged.AddUniqueDynamic(this, &ACXPlayerController::HandleGameStatusChanged);
	CXGameState->OnRemainingTimeChanged.AddUniqueDynamic(this, &ACXPlayerController::HandleRemainingTimeChanged);
	bGameStateBound = true;

	// 구독 시점의 현재 값을 즉시 UI에 반영
	HandleGameStatusChanged(CXGameState->GetGameStatus());
	HandleRemainingTimeChanged(CXGameState->GetRemainingTime());
}

void ACXPlayerController::HandleGameStatusChanged(ECXGameStatus NewStatus)
{
	if (IsValid(GameStatusUI) == false)
	{
		return;
	}

	GameStatusUI->UpdateGameStatus(NewStatus);

	// 승패 결과는 Finished로 바뀌는 시점에 한 번만 표시한다.
	// (서버는 우승자 목록을 먼저 설정한 뒤 상태를 바꾸고, 클라이언트는 같은 번들의 값이 모두 적용된 뒤 OnRep이 호출된다.)
	if (NewStatus == ECXGameStatus::Finished)
	{
		if (const ACXGameState* CXGameState = GetWorld()->GetGameState<ACXGameState>())
		{
			GameStatusUI->ShowResult(CXGameState->IsLocalPlayerWinner());
		}
	}
}

void ACXPlayerController::HandleRemainingTimeChanged(int32 NewRemainingTime)
{
	if (IsValid(GameStatusUI))
	{
		GameStatusUI->UpdateRemainingTime(NewRemainingTime);
	}
}
