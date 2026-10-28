// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXGameStatusUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXGameStatusUI() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_UCXGameStatusUI();
CX_API UClass* Z_Construct_UClass_UCXGameStatusUI_NoRegister();
CX_API UEnum* Z_Construct_UEnum_CX_ECXGameStatus();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class UCXGameStatusUI Function OnGameStatusUpdate
struct CXGameStatusUI_eventOnGameStatusUpdate_Parms
{
	ECXGameStatus NewStatus;
};
static const FName NAME_UCXGameStatusUI_OnGameStatusUpdate = FName(TEXT("OnGameStatusUpdate"));
void UCXGameStatusUI::OnGameStatusUpdate(ECXGameStatus NewStatus)
{
	CXGameStatusUI_eventOnGameStatusUpdate_Parms Parms;
	Parms.NewStatus=NewStatus;
	UFunction* Func = FindFunctionChecked(NAME_UCXGameStatusUI_OnGameStatusUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CX|GameStatus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xed\x98\x84\xec\x9e\xac \xec\x83\x81\xed\x83\x9c(Waiting/Playing/Finished)\xeb\xa5\xbc \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xed\x91\x9c\xec\x8b\x9c */" },
#endif
		{ "ModuleRelativePath", "CXGameStatusUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xed\x98\x84\xec\x9e\xac \xec\x83\x81\xed\x83\x9c(Waiting/Playing/Finished)\xeb\xa5\xbc \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameStatusUI_eventOnGameStatusUpdate_Parms, NewStatus), Z_Construct_UEnum_CX_ECXGameStatus, METADATA_PARAMS(0, nullptr) }; // 2832298618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::NewProp_NewStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::NewProp_NewStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCXGameStatusUI, nullptr, "OnGameStatusUpdate", nullptr, nullptr, Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::PropPointers), sizeof(CXGameStatusUI_eventOnGameStatusUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXGameStatusUI_eventOnGameStatusUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCXGameStatusUI Function OnGameStatusUpdate

// Begin Class UCXGameStatusUI Function OnRemainingTimeUpdate
struct CXGameStatusUI_eventOnRemainingTimeUpdate_Parms
{
	int32 NewRemainingTime;
};
static const FName NAME_UCXGameStatusUI_OnRemainingTimeUpdate = FName(TEXT("OnRemainingTimeUpdate"));
void UCXGameStatusUI::OnRemainingTimeUpdate(int32 NewRemainingTime)
{
	CXGameStatusUI_eventOnRemainingTimeUpdate_Parms Parms;
	Parms.NewRemainingTime=NewRemainingTime;
	UFunction* Func = FindFunctionChecked(NAME_UCXGameStatusUI_OnRemainingTimeUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CX|GameStatus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xed\x91\x9c\xec\x8b\x9c */" },
#endif
		{ "ModuleRelativePath", "CXGameStatusUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84\xec\x9d\x84 \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::NewProp_NewRemainingTime = { "NewRemainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXGameStatusUI_eventOnRemainingTimeUpdate_Parms, NewRemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::NewProp_NewRemainingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCXGameStatusUI, nullptr, "OnRemainingTimeUpdate", nullptr, nullptr, Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::PropPointers), sizeof(CXGameStatusUI_eventOnRemainingTimeUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXGameStatusUI_eventOnRemainingTimeUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCXGameStatusUI Function OnRemainingTimeUpdate

// Begin Class UCXGameStatusUI Function OnShowResult
struct CXGameStatusUI_eventOnShowResult_Parms
{
	bool bIsWinner;
};
static const FName NAME_UCXGameStatusUI_OnShowResult = FName(TEXT("OnShowResult"));
void UCXGameStatusUI::OnShowResult(bool bIsWinner)
{
	CXGameStatusUI_eventOnShowResult_Parms Parms;
	Parms.bIsWinner=bIsWinner ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UCXGameStatusUI_OnShowResult);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CX|GameStatus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xec\x8a\xb9\xeb\xa6\xac/\xed\x8c\xa8\xeb\xb0\xb0 \xea\xb2\xb0\xea\xb3\xbc\xeb\xa5\xbc \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xed\x91\x9c\xec\x8b\x9c */" },
#endif
		{ "ModuleRelativePath", "CXGameStatusUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xec\x8a\xb9\xeb\xa6\xac/\xed\x8c\xa8\xeb\xb0\xb0 \xea\xb2\xb0\xea\xb3\xbc\xeb\xa5\xbc \xed\x99\x94\xeb\xa9\xb4\xec\x97\x90 \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsWinner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWinner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::NewProp_bIsWinner_SetBit(void* Obj)
{
	((CXGameStatusUI_eventOnShowResult_Parms*)Obj)->bIsWinner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::NewProp_bIsWinner = { "bIsWinner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXGameStatusUI_eventOnShowResult_Parms), &Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::NewProp_bIsWinner_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::NewProp_bIsWinner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCXGameStatusUI, nullptr, "OnShowResult", nullptr, nullptr, Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::PropPointers), sizeof(CXGameStatusUI_eventOnShowResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXGameStatusUI_eventOnShowResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCXGameStatusUI_OnShowResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXGameStatusUI_OnShowResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCXGameStatusUI Function OnShowResult

// Begin Class UCXGameStatusUI
void UCXGameStatusUI::StaticRegisterNativesUCXGameStatusUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCXGameStatusUI);
UClass* Z_Construct_UClass_UCXGameStatusUI_NoRegister()
{
	return UCXGameStatusUI::StaticClass();
}
struct Z_Construct_UClass_UCXGameStatusUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Displays the current match status (Waiting / Playing / Finished),\n *  the remaining time, and the local player's win/lose result.\n *  Actual layout is built in a Blueprint subclass.\n */" },
#endif
		{ "IncludePath", "CXGameStatusUI.h" },
		{ "ModuleRelativePath", "CXGameStatusUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Displays the current match status (Waiting / Playing / Finished),\nthe remaining time, and the local player's win/lose result.\nActual layout is built in a Blueprint subclass." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCXGameStatusUI_OnGameStatusUpdate, "OnGameStatusUpdate" }, // 847160274
		{ &Z_Construct_UFunction_UCXGameStatusUI_OnRemainingTimeUpdate, "OnRemainingTimeUpdate" }, // 3449034359
		{ &Z_Construct_UFunction_UCXGameStatusUI_OnShowResult, "OnShowResult" }, // 2380404373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXGameStatusUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXGameStatusUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameStatusUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXGameStatusUI_Statics::ClassParams = {
	&UCXGameStatusUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXGameStatusUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXGameStatusUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXGameStatusUI()
{
	if (!Z_Registration_Info_UClass_UCXGameStatusUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXGameStatusUI.OuterSingleton, Z_Construct_UClass_UCXGameStatusUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXGameStatusUI.OuterSingleton;
}
template<> CX_API UClass* StaticClass<UCXGameStatusUI>()
{
	return UCXGameStatusUI::StaticClass();
}
UCXGameStatusUI::UCXGameStatusUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXGameStatusUI);
UCXGameStatusUI::~UCXGameStatusUI() {}
// End Class UCXGameStatusUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXGameStatusUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXGameStatusUI, UCXGameStatusUI::StaticClass, TEXT("UCXGameStatusUI"), &Z_Registration_Info_UClass_UCXGameStatusUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXGameStatusUI), 1803247265U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXGameStatusUI_h_3762389598(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXGameStatusUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXGameStatusUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
