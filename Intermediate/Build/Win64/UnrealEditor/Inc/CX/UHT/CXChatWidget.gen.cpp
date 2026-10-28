// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXChatWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXChatWidget() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXPlayerController_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXChatWidget();
CX_API UClass* Z_Construct_UClass_UCXChatWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class UCXChatWidget Function OnChatMessageReceived
struct CXChatWidget_eventOnChatMessageReceived_Parms
{
	FString SenderName;
	FString Message;
};
static const FName NAME_UCXChatWidget_OnChatMessageReceived = FName(TEXT("OnChatMessageReceived"));
void UCXChatWidget::OnChatMessageReceived(const FString& SenderName, const FString& Message)
{
	CXChatWidget_eventOnChatMessageReceived_Parms Parms;
	Parms.SenderName=SenderName;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_UCXChatWidget_OnChatMessageReceived);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CX|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xec\x88\x98\xec\x8b\xa0\xed\x95\x9c \xeb\xa9\x94\xec\x84\xb8\xec\xa7\x80\xeb\xa5\xbc \xed\x99\x94\xeb\xa9\xb4(\xec\xb1\x84\xed\x8c\x85\xec\xb0\xbd)\xec\x97\x90 \xeb\x9d\x84\xec\x9a\xb4\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xea\xb5\xac\xed\x98\x84: \xec\x88\x98\xec\x8b\xa0\xed\x95\x9c \xeb\xa9\x94\xec\x84\xb8\xec\xa7\x80\xeb\xa5\xbc \xed\x99\x94\xeb\xa9\xb4(\xec\xb1\x84\xed\x8c\x85\xec\xb0\xbd)\xec\x97\x90 \xeb\x9d\x84\xec\x9a\xb4\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SenderName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SenderName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXChatWidget_eventOnChatMessageReceived_Parms, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXChatWidget_eventOnChatMessageReceived_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCXChatWidget, nullptr, "OnChatMessageReceived", nullptr, nullptr, Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::PropPointers), sizeof(CXChatWidget_eventOnChatMessageReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXChatWidget_eventOnChatMessageReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCXChatWidget Function OnChatMessageReceived

// Begin Class UCXChatWidget Function SendMessage
struct Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics
{
	struct CXChatWidget_eventSendMessage_Parms
	{
		FString Message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CX|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xb1\x84\xed\x8c\x85\xec\xb0\xbd \xec\x97\x94\xed\x84\xb0 \xec\x9e\x85\xeb\xa0\xa5 \xec\x8b\x9c \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8(OnTextCommitted)\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb1\x84\xed\x8c\x85\xec\xb0\xbd \xec\x97\x94\xed\x84\xb0 \xec\x9e\x85\xeb\xa0\xa5 \xec\x8b\x9c \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8(OnTextCommitted)\xec\x97\x90\xec\x84\x9c \xed\x98\xb8\xec\xb6\x9c\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXChatWidget_eventSendMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCXChatWidget, nullptr, "SendMessage", nullptr, nullptr, Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::CXChatWidget_eventSendMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::CXChatWidget_eventSendMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCXChatWidget_SendMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCXChatWidget_SendMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCXChatWidget::execSendMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMessage(Z_Param_Message);
	P_NATIVE_END;
}
// End Class UCXChatWidget Function SendMessage

// Begin Class UCXChatWidget
void UCXChatWidget::StaticRegisterNativesUCXChatWidget()
{
	UClass* Class = UCXChatWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SendMessage", &UCXChatWidget::execSendMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCXChatWidget);
UClass* Z_Construct_UClass_UCXChatWidget_NoRegister()
{
	return UCXChatWidget::StaticClass();
}
struct Z_Construct_UClass_UCXChatWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Chat Widget base class.\n *  The actual text box / scroll box layout is built in a Blueprint\n *  subclass (WBP_ChatWidget). In that Blueprint:\n *   - Bind the EditableTextBox's \"OnTextCommitted\" event\n *     (CommitMethod == OnEnter) and call SendMessage() with the text.\n *   - Override OnChatMessageReceived to append \"SenderName: Message\"\n *     to a ScrollBox / rich text block.\n */" },
#endif
		{ "IncludePath", "CXChatWidget.h" },
		{ "ModuleRelativePath", "CXChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Chat Widget base class.\nThe actual text box / scroll box layout is built in a Blueprint\nsubclass (WBP_ChatWidget). In that Blueprint:\n - Bind the EditableTextBox's \"OnTextCommitted\" event\n   (CommitMethod == OnEnter) and call SendMessage() with the text.\n - Override OnChatMessageReceived to append \"SenderName: Message\"\n   to a ScrollBox / rich text block." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[] = {
		{ "Category", "CX|Chat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x9d\xb4 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\x84 \xec\x83\x9d\xec\x84\xb1\xed\x95\x9c PlayerController. PlayerController::BeginPlay\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXChatWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\x84 \xec\x83\x9d\xec\x84\xb1\xed\x95\x9c PlayerController. PlayerController::BeginPlay\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xeb\x90\x9c\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCXChatWidget_OnChatMessageReceived, "OnChatMessageReceived" }, // 2767798450
		{ &Z_Construct_UFunction_UCXChatWidget_SendMessage, "SendMessage" }, // 3630935095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXChatWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCXChatWidget_Statics::NewProp_OwningController = { "OwningController", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCXChatWidget, OwningController), Z_Construct_UClass_ACXPlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningController_MetaData), NewProp_OwningController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCXChatWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCXChatWidget_Statics::NewProp_OwningController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXChatWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCXChatWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXChatWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXChatWidget_Statics::ClassParams = {
	&UCXChatWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCXChatWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCXChatWidget_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXChatWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXChatWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXChatWidget()
{
	if (!Z_Registration_Info_UClass_UCXChatWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXChatWidget.OuterSingleton, Z_Construct_UClass_UCXChatWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXChatWidget.OuterSingleton;
}
template<> CX_API UClass* StaticClass<UCXChatWidget>()
{
	return UCXChatWidget::StaticClass();
}
UCXChatWidget::UCXChatWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXChatWidget);
UCXChatWidget::~UCXChatWidget() {}
// End Class UCXChatWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXChatWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXChatWidget, UCXChatWidget::StaticClass, TEXT("UCXChatWidget"), &Z_Registration_Info_UClass_UCXChatWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXChatWidget), 2842221141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXChatWidget_h_1719858321(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXChatWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXChatWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
