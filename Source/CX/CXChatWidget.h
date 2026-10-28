// CXChatWidget.h

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CXChatWidget.generated.h"

class ACXPlayerController;

/**
 *  Simple Chat Widget base class.
 *  The actual text box / scroll box layout is built in a Blueprint
 *  subclass (WBP_ChatWidget). In that Blueprint:
 *   - Bind the EditableTextBox's "OnTextCommitted" event
 *     (CommitMethod == OnEnter) and call SendMessage() with the text.
 *   - Override OnChatMessageReceived to append "SenderName: Message"
 *     to a ScrollBox / rich text block.
 */
UCLASS(abstract)
class CX_API UCXChatWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	/** 이 위젯을 생성한 PlayerController. PlayerController::BeginPlay에서 설정된다. */
	UPROPERTY(BlueprintReadOnly, Category = "CX|Chat")
	TObjectPtr<ACXPlayerController> OwningController;

	/** 채팅창 엔터 입력 시 블루프린트(OnTextCommitted)에서 호출한다. */
	UFUNCTION(BlueprintCallable, Category = "CX|Chat")
	void SendMessage(const FString& Message);

	/** 서버를 거쳐 메세지가 동기화되어 도착했을 때 호출된다 (C++에서 호출). */
	void AppendChatMessage(const FString& SenderName, const FString& Message);

protected:

	/** 블루프린트에서 구현: 수신한 메세지를 화면(채팅창)에 띄운다. */
	UFUNCTION(BlueprintImplementableEvent, Category = "CX|Chat")
	void OnChatMessageReceived(const FString& SenderName, const FString& Message);
};
