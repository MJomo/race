// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CX_API UClass* Z_Construct_UClass_ACXPawn_NoRegister();
CX_API UClass* Z_Construct_UClass_ACXPlayerController();
CX_API UClass* Z_Construct_UClass_ACXPlayerController_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXChatWidget_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXGameStatusUI_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXUI_NoRegister();
CX_API UEnum* Z_Construct_UEnum_CX_ECXGameStatus();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXPlayerController Function ClientReceiveChatMessage
struct CXPlayerController_eventClientReceiveChatMessage_Parms
{
	FString SenderName;
	FString Message;
};
static const FName NAME_ACXPlayerController_ClientReceiveChatMessage = FName(TEXT("ClientReceiveChatMessage"));
void ACXPlayerController::ClientReceiveChatMessage(const FString& SenderName, const FString& Message)
{
	CXPlayerController_eventClientReceiveChatMessage_Parms Parms;
	Parms.SenderName=SenderName;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_ClientReceiveChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::NewProp_SenderName = { "SenderName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventClientReceiveChatMessage_Parms, SenderName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SenderName_MetaData), NewProp_SenderName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventClientReceiveChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::NewProp_SenderName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "ClientReceiveChatMessage", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::PropPointers), sizeof(CXPlayerController_eventClientReceiveChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPlayerController_eventClientReceiveChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execClientReceiveChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SenderName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReceiveChatMessage_Implementation(Z_Param_SenderName,Z_Param_Message);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function ClientReceiveChatMessage

// Begin Class ACXPlayerController Function HandleBonusMaxSpeedChanged
struct Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics
{
	struct CXPlayerController_eventHandleBonusMaxSpeedChanged_Parms
	{
		float NewBonusMaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBonusMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::NewProp_NewBonusMaxSpeed = { "NewBonusMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventHandleBonusMaxSpeedChanged_Parms, NewBonusMaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::NewProp_NewBonusMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "HandleBonusMaxSpeedChanged", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::CXPlayerController_eventHandleBonusMaxSpeedChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::CXPlayerController_eventHandleBonusMaxSpeedChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execHandleBonusMaxSpeedChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewBonusMaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBonusMaxSpeedChanged(Z_Param_NewBonusMaxSpeed);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function HandleBonusMaxSpeedChanged

// Begin Class ACXPlayerController Function HandleCoinsChanged
struct Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics
{
	struct CXPlayerController_eventHandleCoinsChanged_Parms
	{
		int32 NewCoins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::NewProp_NewCoins = { "NewCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventHandleCoinsChanged_Parms, NewCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::NewProp_NewCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "HandleCoinsChanged", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::CXPlayerController_eventHandleCoinsChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::CXPlayerController_eventHandleCoinsChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execHandleCoinsChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewCoins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCoinsChanged(Z_Param_NewCoins);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function HandleCoinsChanged

// Begin Class ACXPlayerController Function HandleGameStatusChanged
struct Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics
{
	struct CXPlayerController_eventHandleGameStatusChanged_Parms
	{
		ECXGameStatus NewStatus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStatus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::NewProp_NewStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::NewProp_NewStatus = { "NewStatus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventHandleGameStatusChanged_Parms, NewStatus), Z_Construct_UEnum_CX_ECXGameStatus, METADATA_PARAMS(0, nullptr) }; // 2832298618
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::NewProp_NewStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::NewProp_NewStatus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "HandleGameStatusChanged", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::CXPlayerController_eventHandleGameStatusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::CXPlayerController_eventHandleGameStatusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execHandleGameStatusChanged)
{
	P_GET_ENUM(ECXGameStatus,Z_Param_NewStatus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGameStatusChanged(ECXGameStatus(Z_Param_NewStatus));
	P_NATIVE_END;
}
// End Class ACXPlayerController Function HandleGameStatusChanged

// Begin Class ACXPlayerController Function HandleRemainingTimeChanged
struct Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics
{
	struct CXPlayerController_eventHandleRemainingTimeChanged_Parms
	{
		int32 NewRemainingTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewRemainingTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::NewProp_NewRemainingTime = { "NewRemainingTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventHandleRemainingTimeChanged_Parms, NewRemainingTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::NewProp_NewRemainingTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "HandleRemainingTimeChanged", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::CXPlayerController_eventHandleRemainingTimeChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::CXPlayerController_eventHandleRemainingTimeChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execHandleRemainingTimeChanged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewRemainingTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleRemainingTimeChanged(Z_Param_NewRemainingTime);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function HandleRemainingTimeChanged

// Begin Class ACXPlayerController Function ServerSendChatMessage
struct CXPlayerController_eventServerSendChatMessage_Parms
{
	FString Message;
};
static const FName NAME_ACXPlayerController_ServerSendChatMessage = FName(TEXT("ServerSendChatMessage"));
void ACXPlayerController::ServerSendChatMessage(const FString& Message)
{
	CXPlayerController_eventServerSendChatMessage_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_ACXPlayerController_ServerSendChatMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPlayerController_eventServerSendChatMessage_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPlayerController, nullptr, "ServerSendChatMessage", nullptr, nullptr, Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::PropPointers), sizeof(CXPlayerController_eventServerSendChatMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPlayerController_eventServerSendChatMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPlayerController::execServerSendChatMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSendChatMessage_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// End Class ACXPlayerController Function ServerSendChatMessage

// Begin Class ACXPlayerController
void ACXPlayerController::StaticRegisterNativesACXPlayerController()
{
	UClass* Class = ACXPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientReceiveChatMessage", &ACXPlayerController::execClientReceiveChatMessage },
		{ "HandleBonusMaxSpeedChanged", &ACXPlayerController::execHandleBonusMaxSpeedChanged },
		{ "HandleCoinsChanged", &ACXPlayerController::execHandleCoinsChanged },
		{ "HandleGameStatusChanged", &ACXPlayerController::execHandleGameStatusChanged },
		{ "HandleRemainingTimeChanged", &ACXPlayerController::execHandleRemainingTimeChanged },
		{ "ServerSendChatMessage", &ACXPlayerController::execServerSendChatMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPlayerController);
UClass* Z_Construct_UClass_ACXPlayerController_NoRegister()
{
	return ACXPlayerController::StaticClass();
}
struct Z_Construct_UClass_ACXPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Player Controller class\n *  Handles input mapping, user interface (speed/gear/coins HUD, chat, match status)\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CXPlayerController.h" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Player Controller class\nHandles input mapping, user interface (speed/gear/coins HUD, chat, match status)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringWheelControls_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the optional steering wheel input mapping context will be registered */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the optional steering wheel input mapping context will be registered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringWheelInputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Input Mapping Context to be used for steering wheel input.\n\x09 *  This is added alongside the default Input Mapping Context and does not block other forms of input.\n\x09 */" },
#endif
		{ "EditCondition", "bUseSteeringWheelControls" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Input Mapping Context to be used for steering wheel input.\nThis is added alongside the default Input Mapping Context and does not block other forms of input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehiclePawn_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the controlled vehicle pawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the controlled vehicle pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the UI to spawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the UI to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the UI widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the UI widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the chat widget to spawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the chat widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the chat widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the chat widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameStatusUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the match status widget (\xea\xb2\x8c\xec\x9e\x84 \xeb\x8b\xa8\xea\xb3\x84 / \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84 / \xec\x8a\xb9\xed\x8c\xa8) to spawn */" },
#endif
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the match status widget (\xea\xb2\x8c\xec\x9e\x84 \xeb\x8b\xa8\xea\xb3\x84 / \xeb\x82\xa8\xec\x9d\x80 \xec\x8b\x9c\xea\xb0\x84 / \xec\x8a\xb9\xed\x8c\xa8) to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameStatusUI_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the match status widget */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the match status widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static void NewProp_bUseSteeringWheelControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringWheelControls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringWheelInputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehiclePawn;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleUI;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameStatusUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameStatusUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPlayerController_ClientReceiveChatMessage, "ClientReceiveChatMessage" }, // 4196784132
		{ &Z_Construct_UFunction_ACXPlayerController_HandleBonusMaxSpeedChanged, "HandleBonusMaxSpeedChanged" }, // 3302304319
		{ &Z_Construct_UFunction_ACXPlayerController_HandleCoinsChanged, "HandleCoinsChanged" }, // 2240168341
		{ &Z_Construct_UFunction_ACXPlayerController_HandleGameStatusChanged, "HandleGameStatusChanged" }, // 4096156363
		{ &Z_Construct_UFunction_ACXPlayerController_HandleRemainingTimeChanged, "HandleRemainingTimeChanged" }, // 1501430810
		{ &Z_Construct_UFunction_ACXPlayerController_ServerSendChatMessage, "ServerSendChatMessage" }, // 4261513417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
void Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit(void* Obj)
{
	((ACXPlayerController*)Obj)->bUseSteeringWheelControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls = { "bUseSteeringWheelControls", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACXPlayerController), &Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSteeringWheelControls_MetaData), NewProp_bUseSteeringWheelControls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_SteeringWheelInputMappingContext = { "SteeringWheelInputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, SteeringWheelInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringWheelInputMappingContext_MetaData), NewProp_SteeringWheelInputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehiclePawn = { "VehiclePawn", nullptr, (EPropertyFlags)0x0124080000000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, VehiclePawn), Z_Construct_UClass_ACXPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehiclePawn_MetaData), NewProp_VehiclePawn_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUIClass = { "VehicleUIClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, VehicleUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCXUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleUIClass_MetaData), NewProp_VehicleUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUI = { "VehicleUI", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, VehicleUI), Z_Construct_UClass_UCXUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleUI_MetaData), NewProp_VehicleUI_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_ChatWidgetClass = { "ChatWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, ChatWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCXChatWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatWidgetClass_MetaData), NewProp_ChatWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_ChatWidget = { "ChatWidget", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, ChatWidget), Z_Construct_UClass_UCXChatWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatWidget_MetaData), NewProp_ChatWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_GameStatusUIClass = { "GameStatusUIClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, GameStatusUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCXGameStatusUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameStatusUIClass_MetaData), NewProp_GameStatusUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPlayerController_Statics::NewProp_GameStatusUI = { "GameStatusUI", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPlayerController, GameStatusUI), Z_Construct_UClass_UCXGameStatusUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameStatusUI_MetaData), NewProp_GameStatusUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_bUseSteeringWheelControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_SteeringWheelInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehiclePawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_VehicleUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_ChatWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_ChatWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_GameStatusUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPlayerController_Statics::NewProp_GameStatusUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPlayerController_Statics::ClassParams = {
	&ACXPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPlayerController()
{
	if (!Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton, Z_Construct_UClass_ACXPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPlayerController.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXPlayerController>()
{
	return ACXPlayerController::StaticClass();
}
void ACXPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_VehiclePawn(TEXT("VehiclePawn"));
	const bool bIsValid = true
		&& Name_VehiclePawn == ClassReps[(int32)ENetFields_Private::VehiclePawn].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ACXPlayerController"));
}
ACXPlayerController::ACXPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPlayerController);
ACXPlayerController::~ACXPlayerController() {}
// End Class ACXPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPlayerController, ACXPlayerController::StaticClass, TEXT("ACXPlayerController"), &Z_Registration_Info_UClass_ACXPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPlayerController), 3070466178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerController_h_3379959910(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
