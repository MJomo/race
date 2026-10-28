// CXChatWidget.cpp

#include "CXChatWidget.h"
#include "CXPlayerController.h"

void UCXChatWidget::SendMessage(const FString& Message)
{
	if (Message.IsEmpty())
	{
		return;
	}

	if (IsValid(OwningController))
	{
		OwningController->SendChatMessage(Message);
	}
}

void UCXChatWidget::AppendChatMessage(const FString& SenderName, const FString& Message)
{
	OnChatMessageReceived(SenderName, Message);
}
