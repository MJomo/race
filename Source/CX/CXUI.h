// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CXUI.generated.h"

/**
 *  Simple Vehicle HUD class
 *  Displays the current speed, gear, coins and bonus max speed.
 *  Widget setup is handled in a Blueprint subclass.
 */
UCLASS(abstract)
class CX_API UCXUI : public UUserWidget
{
	GENERATED_BODY()
	
protected:

	/** Controls the display of speed in Km/h or MPH */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Vehicle)
	bool bIsMPH = false;

public:

	/** Called to update the speed display */
	void UpdateSpeed(float NewSpeed);

	/** Called to update the gear display */
	void UpdateGear(int32 NewGear);

	/** Called to update the coins display (자신의 화면에서만 호출됨) */
	void UpdateCoins(int32 NewCoins);

	/** Called to update the bonus max speed display (자신의 화면에서만 호출됨) */
	void UpdateBonusMaxSpeed(float NewBonusMaxSpeed);

protected:

	/** Implemented in Blueprint to display the new speed */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnSpeedUpdate(float NewSpeed);

	/** Implemented in Blueprint to display the new gear */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnGearUpdate(int32 NewGear);

	/** Implemented in Blueprint to display the new coin amount */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnCoinsUpdate(int32 NewCoins);

	/** Implemented in Blueprint to display the new bonus max speed amount */
	UFUNCTION(BlueprintImplementableEvent, Category = Vehicle)
	void OnBonusMaxSpeedUpdate(float NewBonusMaxSpeed);
};
