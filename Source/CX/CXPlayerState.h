// CXPlayerState.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "CXPlayerState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCoinsChanged, int32, NewCoins);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBonusMaxSpeedChanged, float, NewBonusMaxSpeed);

/**
 *  Vehicle Player State class
 *  Holds per-player gameplay data (Coins, BonusMaxSpeed).
 *  Both properties are replicated with COND_OwnerOnly so that
 *  only the owning client's screen can see them, per design.
 */
UCLASS()
class CX_API ACXPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	ACXPlayerState();

	/** 코인을 증가시킨다. 서버에서만 동작한다. */
	void AddCoins(int32 Amount);

	/** 코인을 차감한다. 서버에서만 동작하며, 실제로 차감된 양(0 ~ Amount)을 반환한다. */
	int32 RemoveCoins(int32 Amount);

	/** 추가 최대 속도를 증가시킨다. 서버에서만 동작한다. */
	void AddBonusMaxSpeed(float Amount);

	FORCEINLINE int32 GetCoins() const { return Coins; }
	FORCEINLINE float GetBonusMaxSpeed() const { return BonusMaxSpeed; }

	/** Coins 값이 바뀔 때마다 호출된다 (서버/소유 클라이언트 양쪽에서). UI 바인딩용. */
	UPROPERTY(BlueprintAssignable, Category = "CX|PlayerState")
	FOnCoinsChanged OnCoinsChanged;

	/** BonusMaxSpeed 값이 바뀔 때마다 호출된다 (서버/소유 클라이언트 양쪽에서). UI/차량 속도 반영용. */
	UPROPERTY(BlueprintAssignable, Category = "CX|PlayerState")
	FOnBonusMaxSpeedChanged OnBonusMaxSpeedChanged;

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/** 습득한 원화(코인). 자신의 화면에서만 확인 가능하도록 COND_OwnerOnly로 복제된다. */
	UPROPERTY(ReplicatedUsing = OnRep_Coins, VisibleAnywhere, BlueprintReadOnly, Category = "CX|PlayerState")
	int32 Coins = 0;

	/** 아이템으로 획득한 추가 최대 속도. 자신의 화면에서만 확인 가능하도록 COND_OwnerOnly로 복제된다. */
	UPROPERTY(ReplicatedUsing = OnRep_BonusMaxSpeed, VisibleAnywhere, BlueprintReadOnly, Category = "CX|PlayerState")
	float BonusMaxSpeed = 0.0f;

	UFUNCTION()
	void OnRep_Coins();

	UFUNCTION()
	void OnRep_BonusMaxSpeed();
};
