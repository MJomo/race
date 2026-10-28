// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXGameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXGameState() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXGameState();
CX_API UClass* Z_Construct_UClass_ACXGameState_NoRegister();
CX_API UEnum* Z_Construct_UEnum_CX_ECXGameStatus();
CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature();
CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature();
CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Enum ECXGameStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECXGameStatus;
static UEnum* ECXGameStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECXGameStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECXGameStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CX_ECXGameStatus, (UObject*)Z_Construct_UPackage__Script_CX(), TEXT("ECXGameStatus"));
	}
	return Z_Registration_Info_UEnum_ECXGameStatus.OuterSingleton;
}
template<> CX_API UEnum* StaticEnum<ECXGameStatus>()
{
	return ECXGameStatus_StaticEnum();
}
struct Z_Construct_UEnum_CX_ECXGameStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb2\x8c\xec\x9e\x84 \xec\xa7\x84\xed\x96\x89 \xeb\x8b\xa8\xea\xb3\x84 */" },
#endif
		{ "Finished.Name", "ECXGameStatus::Finished" },
		{ "ModuleRelativePath", "CXGameState.h" },
		{ "Playing.Name", "ECXGameStatus::Playing" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\xa7\x84\xed\x96\x89 \xeb\x8b\xa8\xea\xb3\x84" },
#endif
		{ "Waiting.Name", "ECXGameStatus::Waiting" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECXGameStatus::Waiting", (int64)ECXGameStatus::Waiting },
		{ "ECXGameStatus::Playing", (int64)ECXGameStatus::Playing },
		{ "ECXGameStatus::Finished", (int64)ECXGameStatus::Finished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CX_ECXGameStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_CX,
	nullptr,
	"ECXGameStatus",
	"ECXGameStatus",
	Z_Construct_UEnum_CX_ECXGameStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_CX_ECXGameStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_CX_ECXGameStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_CX_ECXGameStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_CX_ECXGameStatus()
{
	if (!Z_Registration_Info_UEnum_ECXGameStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECXGameStatus.InnerSingleton, Z_Construct_UEnum_CX_ECXGameStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECXGameStatus.InnerSingleton;
}
// End Enum ECXGameStatus

// Begin Delegate FOnGameStatusChanged
struct Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics
{
	struct _Script_CX_eventOnGameStatusChanged_Parms
	{
		ECXGameStatus NewStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CX_eventOnGameStatusChanged_Parms, NewStatus), Z_Construct_UEnum_CX_ECXGameStatus, METADATA_PARAMS(0, nullptr) }; // 2832298618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::NewProp_NewStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::NewProp_NewStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CX, nullptr, "OnGameStatusChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::_Script_CX_eventOnGameStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::_Script_CX_eventOnGameStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGameStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameStatusChanged, ECXGameStatus NewStatus)
{
	struct _Script_CX_eventOnGameStatusChanged_Parms
	{
		ECXGameStatus NewStatus;
	};
	_Script_CX_eventOnGameStatusChanged_Parms Parms;
	Parms.NewStatus=NewStatus;
	OnGameStatusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGameStatusChanged

// Begin Delegate FOnRemainingTimeChanged
struct Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics
{
	struct _Script_CX_eventOnRemainingTimeChanged_Parms
	{
		int32 NewRemainingTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::NewProp_NewRemainingTime = { "NewRemainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_CX_eventOnRemainingTimeChanged_Parms, NewRemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::NewProp_NewRemainingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CX, nullptr, "OnRemainingTimeChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::_Script_CX_eventOnRemainingTimeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::_Script_CX_eventOnRemainingTimeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemainingTimeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRemainingTimeChanged, int32 NewRemainingTime)
{
	struct _Script_CX_eventOnRemainingTimeChanged_Parms
	{
		int32 NewRemainingTime;
	};
	_Script_CX_eventOnRemainingTimeChanged_Parms Parms;
	Parms.NewRemainingTime=NewRemainingTime;
	OnRemainingTimeChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemainingTimeChanged

// Begin Delegate FOnWinnersChanged
struct Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CX, nullptr, "OnWinnersChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnWinnersChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWinnersChanged)
{
	OnWinnersChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnWinnersChanged

// Begin Class ACXGameState Function OnRep_GameStatus
struct Z_Construct_UFunction_ACXGameState_OnRep_GameStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXGameState_OnRep_GameStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXGameState, nullptr, "OnRep_GameStatus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_OnRep_GameStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXGameState_OnRep_GameStatus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACXGameState_OnRep_GameStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXGameState_OnRep_GameStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXGameState::execOnRep_GameStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_GameStatus();
	P_NATIVE_END;
}
// End Class ACXGameState Function OnRep_GameStatus

// Begin Class ACXGameState Function OnRep_RemainingTime
struct Z_Construct_UFunction_ACXGameState_OnRep_RemainingTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXGameState_OnRep_RemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXGameState, nullptr, "OnRep_RemainingTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_OnRep_RemainingTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXGameState_OnRep_RemainingTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACXGameState_OnRep_RemainingTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXGameState_OnRep_RemainingTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXGameState::execOnRep_RemainingTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RemainingTime();
	P_NATIVE_END;
}
// End Class ACXGameState Function OnRep_RemainingTime

// Begin Class ACXGameState Function OnRep_Winners
struct Z_Construct_UFunction_ACXGameState_OnRep_Winners_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXGameState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXGameState_OnRep_Winners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXGameState, nullptr, "OnRep_Winners", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXGameState_OnRep_Winners_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXGameState_OnRep_Winners_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACXGameState_OnRep_Winners()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXGameState_OnRep_Winners_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXGameState::execOnRep_Winners)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Winners();
	P_NATIVE_END;
}
// End Class ACXGameState Function OnRep_Winners

// Begin Class ACXGameState
void ACXGameState::StaticRegisterNativesACXGameState()
{
	UClass* Class = ACXGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_GameStatus", &ACXGameState::execOnRep_GameStatus },
		{ "OnRep_RemainingTime", &ACXGameState::execOnRep_RemainingTime },
		{ "OnRep_Winners", &ACXGameState::execOnRep_Winners },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXGameState);
UClass* Z_Construct_UClass_ACXGameState_NoRegister()
{
	return ACXGameState::StaticClass();
}
struct Z_Construct_UClass_ACXGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Game State class\n *  Holds the match status, remaining time and winner list.\n *  All three are replicated to every client (not OwnerOnly) so that\n *  everyone sees the same status and the same remaining time.\n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CXGameState.h" },
		{ "ModuleRelativePath", "CXGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Game State class\nHolds the match status, remaining time and winner list.\nAll three are replicated to every client (not OwnerOnly) so that\neveryone sees the same status and the same remaining time." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGameStatusChanged_MetaData[] = {
		{ "Category", "CX|GameState" },
		{ "ModuleRelativePath", "CXGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemainingTimeChanged_MetaData[] = {
		{ "Category", "CX|GameState" },
		{ "ModuleRelativePath", "CXGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWinnersChanged_MetaData[] = {
		{ "Category", "CX|GameState" },
		{ "ModuleRelativePath", "CXGameState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameStatus_MetaData[] = {
		{ "Category", "CX|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c. \xeb\xaa\xa8\xeb\x93\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x97\x90\xea\xb2\x8c \xeb\x8f\x99\xec\x9d\xbc\xed\x95\x98\xea\xb2\x8c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c. \xeb\xaa\xa8\xeb\x93\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x97\x90\xea\xb2\x8c \xeb\x8f\x99\xec\x9d\xbc\xed\x95\x98\xea\xb2\x8c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[] = {
		{ "Category", "CX|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x98\x84\xec\x9e\xac \xeb\x8b\xa8\xea\xb3\x84\xec\x9d\x98 \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84(\xec\xb4\x88). \xeb\xaa\xa8\xeb\x93\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x97\x90\xea\xb2\x8c \xeb\x8f\x99\xec\x9d\xbc\xed\x95\x98\xea\xb2\x8c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\x8b\xa8\xea\xb3\x84\xec\x9d\x98 \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84(\xec\xb4\x88). \xeb\xaa\xa8\xeb\x93\xa0 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x97\x90\xea\xb2\x8c \xeb\x8f\x99\xec\x9d\xbc\xed\x95\x98\xea\xb2\x8c \xeb\xb3\xb5\xec\xa0\x9c\xeb\x90\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Winners_MetaData[] = {
		{ "Category", "CX|GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9a\xb0\xec\x8a\xb9\xec\x9e\x90 \xeb\xaa\xa9\xeb\xa1\x9d (\xeb\x8f\x99\xec\xa0\x90 \xec\x8b\x9c \xea\xb3\xb5\xeb\x8f\x99 \xec\x9a\xb0\xec\x8a\xb9\xec\x9e\x90 \xeb\xaa\xa8\xeb\x91\x90 \xed\x8f\xac\xed\x95\xa8) */" },
#endif
		{ "ModuleRelativePath", "CXGameState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9a\xb0\xec\x8a\xb9\xec\x9e\x90 \xeb\xaa\xa9\xeb\xa1\x9d (\xeb\x8f\x99\xec\xa0\x90 \xec\x8b\x9c \xea\xb3\xb5\xeb\x8f\x99 \xec\x9a\xb0\xec\x8a\xb9\xec\x9e\x90 \xeb\xaa\xa8\xeb\x91\x90 \xed\x8f\xac\xed\x95\xa8)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStatusChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemainingTimeChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWinnersChanged;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GameStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GameStatus;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RemainingTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Winners_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Winners;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXGameState_OnRep_GameStatus, "OnRep_GameStatus" }, // 3138776242
		{ &Z_Construct_UFunction_ACXGameState_OnRep_RemainingTime, "OnRep_RemainingTime" }, // 2683547313
		{ &Z_Construct_UFunction_ACXGameState_OnRep_Winners, "OnRep_Winners" }, // 2936811650
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_OnGameStatusChanged = { "OnGameStatusChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, OnGameStatusChanged), Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGameStatusChanged_MetaData), NewProp_OnGameStatusChanged_MetaData) }; // 1109998905
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_OnRemainingTimeChanged = { "OnRemainingTimeChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, OnRemainingTimeChanged), Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemainingTimeChanged_MetaData), NewProp_OnRemainingTimeChanged_MetaData) }; // 4219276527
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_OnWinnersChanged = { "OnWinnersChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, OnWinnersChanged), Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWinnersChanged_MetaData), NewProp_OnWinnersChanged_MetaData) }; // 482921471
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_GameStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_GameStatus = { "GameStatus", "OnRep_GameStatus", (EPropertyFlags)0x0020080100020035, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, GameStatus), Z_Construct_UEnum_CX_ECXGameStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameStatus_MetaData), NewProp_GameStatus_MetaData) }; // 2832298618
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_RemainingTime = { "RemainingTime", "OnRep_RemainingTime", (EPropertyFlags)0x0020080100020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, RemainingTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemainingTime_MetaData), NewProp_RemainingTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners_Inner = { "Winners", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners = { "Winners", "OnRep_Winners", (EPropertyFlags)0x0124080100020035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXGameState, Winners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Winners_MetaData), NewProp_Winners_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_OnGameStatusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_OnRemainingTimeChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_OnWinnersChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_GameStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_GameStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_RemainingTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXGameState_Statics::NewProp_Winners,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXGameState_Statics::ClassParams = {
	&ACXGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXGameState()
{
	if (!Z_Registration_Info_UClass_ACXGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXGameState.OuterSingleton, Z_Construct_UClass_ACXGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXGameState.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXGameState>()
{
	return ACXGameState::StaticClass();
}
void ACXGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_GameStatus(TEXT("GameStatus"));
	static const FName Name_RemainingTime(TEXT("RemainingTime"));
	static const FName Name_Winners(TEXT("Winners"));
	const bool bIsValid = true
		&& Name_GameStatus == ClassReps[(int32)ENetFields_Private::GameStatus].Property->GetFName()
		&& Name_RemainingTime == ClassReps[(int32)ENetFields_Private::RemainingTime].Property->GetFName()
		&& Name_Winners == ClassReps[(int32)ENetFields_Private::Winners].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXGameState);
ACXGameState::~ACXGameState() {}
// End Class ACXGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXGameState_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECXGameStatus_StaticEnum, TEXT("ECXGameStatus"), &Z_Registration_Info_UEnum_ECXGameStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2832298618U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXGameState, ACXGameState::StaticClass, TEXT("ACXGameState"), &Z_Registration_Info_UClass_ACXGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXGameState), 4128069199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXGameState_h_311117636(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXGameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXGameState_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_race_Source_CX_CXGameState_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXGameState_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
