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

	if (IsValid(GameStatusUI) && IsValid(GetWorld()))
	{
		if (ACXGameState* CXGameState = GetWorld()->GetGameState<ACXGameState>())
		{
			GameStatusUI->UpdateGameStatus(CXGameState->GetGameStatus());
			GameStatusUI->UpdateRemainingTime(CXGameState->GetRemainingTime());

			if (CXGameState->GetGameStatus() == ECXGameStatus::Finished)
			{
				GameStatusUI->ShowResult(CXGameState->IsLocalPlayerWinner());
			}
		}
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
	const FString SenderName = IsValid(PlayerState) ? PlayerState->GetPlayerName() : TEXT("Unknown");

	// 접속해 있는 모든 플레이어 컨트롤러에게 메세지를 전달해 채팅을 동기화한다.
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		if (ACXPlayerController* OtherController = Cast<ACXPlayerController>(It->Get()))
		{
			OtherController->ClientReceiveChatMessage(SenderName, Message);
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
