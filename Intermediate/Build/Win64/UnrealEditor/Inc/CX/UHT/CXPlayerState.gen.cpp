// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPlayerState() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXPlayerState();
CX_API UClass* Z_Construct_UClass_ACXPlayerState_NoRegister();
CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature();
CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Delegate FOnCoinsChanged
struct Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics
{
	struct _Script_CX_eventOnCoinsChanged_Parms
	{
		int32 NewCoins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::NewProp_NewCoins = { "NewCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CX_eventOnCoinsChanged_Parms, NewCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::NewProp_NewCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CX, nullptr, "OnCoinsChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::_Script_CX_eventOnCoinsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::_Script_CX_eventOnCoinsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCoinsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCoinsChanged, int32 NewCoins)
{
	struct _Script_CX_eventOnCoinsChanged_Parms
	{
		int32 NewCoins;
	};
	_Script_CX_eventOnCoinsChanged_Parms Parms;
	Parms.NewCoins=NewCoins;
	OnCoinsChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnCoinsChanged

// Begin Delegate FOnBonusMaxSpeedChanged
struct Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics
{
	struct _Script_CX_eventOnBonusMaxSpeedChanged_Parms
	{
		float NewBonusMaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBonusMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::NewProp_NewBonusMaxSpeed = { "NewBonusMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CX_eventOnBonusMaxSpeedChanged_Parms, NewBonusMaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::NewProp_NewBonusMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CX, nullptr, "OnBonusMaxSpeedChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::_Script_CX_eventOnBonusMaxSpeedChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::_Script_CX_eventOnBonusMaxSpeedChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBonusMaxSpeedChanged_DelegateWrapper(const FMulticastScriptDelegate& OnBonusMaxSpeedChanged, float NewBonusMaxSpeed)
{
	struct _Script_CX_eventOnBonusMaxSpeedChanged_Parms
	{
		float NewBonusMaxSpeed;
	};
	_Script_CX_eventOnBonusMaxSpeedChanged_Parms Parms;
	Parms.NewBonusMaxSpeed=NewBonusMaxSpeed;
	OnBonusMaxSpeedChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBonusMaxSpeedChanged

// Begin Class ACXPlayerState Function OnRep_BonusMaxSpeed
struct Z_Construct_UFunction_ACXPlayerState_OnRep_BonusMaxSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerState_OnRep_BonusMaxSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerState, nullptr, "OnRep_BonusMaxSpeed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_OnRep_BonusMaxSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerState_OnRep_BonusMaxSpeed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACXPlayerState_OnRep_BonusMaxSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerState_OnRep_BonusMaxSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerState::execOnRep_BonusMaxSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_BonusMaxSpeed();
	P_NATIVE_END;
}
// End Class ACXPlayerState Function OnRep_BonusMaxSpeed

// Begin Class ACXPlayerState Function OnRep_Coins
struct Z_Construct_UFunction_ACXPlayerState_OnRep_Coins_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerState_OnRep_Coins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerState, nullptr, "OnRep_Coins", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerState_OnRep_Coins_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerState_OnRep_Coins_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACXPlayerState_OnRep_Coins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerState_OnRep_Coins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerState::execOnRep_Coins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Coins();
	P_NATIVE_END;
}
// End Class ACXPlayerState Function OnRep_Coins

// Begin Class ACXPlayerState
void ACXPlayerState::StaticRegisterNativesACXPlayerState()
{
	UClass* Class = ACXPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_BonusMaxSpeed", &ACXPlayerState::execOnRep_BonusMaxSpeed },
		{ "OnRep_Coins", &ACXPlayerState::execOnRep_Coins },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPlayerState);
UClass* Z_Construct_UClass_ACXPlayerState_NoRegister()
{
	return ACXPlayerState::StaticClass();
}
struct Z_Construct_UClass_ACXPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Player State class\n *  Holds per-player gameplay data (Coins, BonusMaxSpeed).\n *  Both properties are replicated with COND_OwnerOnly so that\n *  only the owning client's screen can see them, per design.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CXPlayerState.h" },
		{ "ModuleRelativePath", "CXPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Player State class\nHolds per-player gameplay data (Coins, BonusMaxSpeed).\nBoth properties are replicated with COND_OwnerOnly so that\nonly the owning client's screen can see them, per design." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCoinsChanged_MetaData[] = {
		{ "Category", "CX|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Coins \xea\xb0\x92\xec\x9d\xb4 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c\xeb\xa7\x88\xeb\x8b\xa4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x9c\xeb\x8b\xa4 (\xec\x84\x9c\xeb\xb2\x84/\xec\x86\x8c\xec\x9c\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 \xec\x96\x91\xec\xaa\xbd\xec\x97\x90\xec\x84\x9c). UI \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9\xec\x9a\xa9. */" },
#endif
		{ "ModuleRelativePath", "CXPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Coins \xea\xb0\x92\xec\x9d\xb4 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c\xeb\xa7\x88\xeb\x8b\xa4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x9c\xeb\x8b\xa4 (\xec\x84\x9c\xeb\xb2\x84/\xec\x86\x8c\xec\x9c\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 \xec\x96\x91\xec\xaa\xbd\xec\x97\x90\xec\x84\x9c). UI \xeb\xb0\x94\xec\x9d\xb8\xeb\x94\xa9\xec\x9a\xa9." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnBonusMaxSpeedChanged_MetaData[] = {
		{ "Category", "CX|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** BonusMaxSpeed \xea\xb0\x92\xec\x9d\xb4 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c\xeb\xa7\x88\xeb\x8b\xa4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x9c\xeb\x8b\xa4 (\xec\x84\x9c\xeb\xb2\x84/\xec\x86\x8c\xec\x9c\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 \xec\x96\x91\xec\xaa\xbd\xec\x97\x90\xec\x84\x9c). UI/\xec\xb0\xa8\xeb\x9f\x89 \xec\x86\x8d\xeb\x8f\x84 \xeb\xb0\x98\xec\x98\x81\xec\x9a\xa9. */" },
#endif
		{ "ModuleRelativePath", "CXPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BonusMaxSpeed \xea\xb0\x92\xec\x9d\xb4 \xeb\xb0\x94\xeb\x80\x94 \xeb\x95\x8c\xeb\xa7\x88\xeb\x8b\xa4 \xed\x98\xb8\xec\xb6\x9c\xeb\x90\x9c\xeb\x8b\xa4 (\xec\x84\x9c\xeb\xb2\x84/\xec\x86\x8c\xec\x9c\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8 \xec\x96\x91\xec\xaa\xbd\xec\x97\x90\xec\x84\x9c). UI/\xec\xb0\xa8\xeb\x9f\x89 \xec\x86\x8d\xeb\x8f\x84 \xeb\xb0\x98\xec\x98\x81\xec\x9a\xa9." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "Category", "CX|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xb5\xeb\x93\x9d\xed\x95\x9c \xec\x9b\x90\xed\x99\x94(\xec\xbd\x94\xec\x9d\xb8). \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x98 \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x99\x95\xec\x9d\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d COND_OwnerOnly\xeb\xa1\x9c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xb5\xeb\x93\x9d\xed\x95\x9c \xec\x9b\x90\xed\x99\x94(\xec\xbd\x94\xec\x9d\xb8). \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x98 \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x99\x95\xec\x9d\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d COND_OwnerOnly\xeb\xa1\x9c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusMaxSpeed_MetaData[] = {
		{ "Category", "CX|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9c\xbc\xeb\xa1\x9c \xed\x9a\x8d\xeb\x93\x9d\xed\x95\x9c \xec\xb6\x94\xea\xb0\x80 \xec\xb5\x9c\xeb\x8c\x80 \xec\x86\x8d\xeb\x8f\x84. \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x98 \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x99\x95\xec\x9d\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d COND_OwnerOnly\xeb\xa1\x9c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9c\xbc\xeb\xa1\x9c \xed\x9a\x8d\xeb\x93\x9d\xed\x95\x9c \xec\xb6\x94\xea\xb0\x80 \xec\xb5\x9c\xeb\x8c\x80 \xec\x86\x8d\xeb\x8f\x84. \xec\x9e\x90\xec\x8b\xa0\xec\x9d\x98 \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xed\x99\x95\xec\x9d\xb8 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x98\xeb\x8f\x84\xeb\xa1\x9d COND_OwnerOnly\xeb\xa1\x9c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCoinsChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBonusMaxSpeedChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPlayerState_OnRep_BonusMaxSpeed, "OnRep_BonusMaxSpeed" }, // 3359289287
		{ &Z_Construct_UFunction_ACXPlayerState_OnRep_Coins, "OnRep_Coins" }, // 2508034487
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_OnCoinsChanged = { "OnCoinsChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, OnCoinsChanged), Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCoinsChanged_MetaData), NewProp_OnCoinsChanged_MetaData) }; // 2927384573
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_OnBonusMaxSpeedChanged = { "OnBonusMaxSpeedChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, OnBonusMaxSpeedChanged), Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnBonusMaxSpeedChanged_MetaData), NewProp_OnBonusMaxSpeedChanged_MetaData) }; // 3593177619
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_Coins = { "Coins", "OnRep_Coins", (EPropertyFlags)0x0020080100020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXPlayerState_Statics::NewProp_BonusMaxSpeed = { "BonusMaxSpeed", "OnRep_BonusMaxSpeed", (EPropertyFlags)0x0020080100020035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerState, BonusMaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusMaxSpeed_MetaData), NewProp_BonusMaxSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_OnCoinsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_OnBonusMaxSpeedChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerState_Statics::NewProp_BonusMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPlayerState_Statics::ClassParams = {
	&ACXPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPlayerState()
{
	if (!Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton, Z_Construct_UClass_ACXPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPlayerState.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXPlayerState>()
{
	return ACXPlayerState::StaticClass();
}
void ACXPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Coins(TEXT("Coins"));
	static const FName Name_BonusMaxSpeed(TEXT("BonusMaxSpeed"));
	const bool bIsValid = true
		&& Name_Coins == ClassReps[(int32)ENetFields_Private::Coins].Property->GetFName()
		&& Name_BonusMaxSpeed == ClassReps[(int32)ENetFields_Private::BonusMaxSpeed].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXPlayerState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPlayerState);
ACXPlayerState::~ACXPlayerState() {}
// End Class ACXPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPlayerState, ACXPlayerState::StaticClass, TEXT("ACXPlayerState"), &Z_Registration_Info_UClass_ACXPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPlayerState), 3394916241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerState_h_4006976370(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
