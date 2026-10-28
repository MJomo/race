// CXGameStatusUI.cpp

#include "CXGameStatusUI.h"

void UCXGameStatusUI::UpdateGameStatus(ECXGameStatus NewStatus)
{
	OnGameStatusUpdate(NewStatus);
}

void UCXGameStatusUI::UpdateRemainingTime(int32 NewRemainingTime)
{
	OnRemainingTimeUpdate(NewRemainingTime);
}

void UCXGameStatusUI::ShowResult(bool bIsWinner)
{
	OnShowResult(bIsWinner);
}
