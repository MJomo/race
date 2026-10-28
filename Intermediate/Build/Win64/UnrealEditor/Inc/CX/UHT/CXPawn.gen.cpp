// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXPawn.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPawn() {}

// Begin Cross Module References
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
CX_API UClass* Z_Construct_UClass_ACXPawn();
CX_API UClass* Z_Construct_UClass_ACXPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXPawn Function BrakeLights
struct CXPawn_eventBrakeLights_Parms
{
	bool bBraking;
};
static const FName NAME_ACXPawn_BrakeLights = FName(TEXT("BrakeLights"));
void ACXPawn::BrakeLights(bool bBraking)
{
	CXPawn_eventBrakeLights_Parms Parms;
	Parms.bBraking=bBraking ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACXPawn_BrakeLights);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPawn_BrakeLights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the brake lights are turned on or off */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the brake lights are turned on or off" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bBraking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBraking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking_SetBit(void* Obj)
{
	((CXPawn_eventBrakeLights_Parms*)Obj)->bBraking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking = { "bBraking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXPawn_eventBrakeLights_Parms), &Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::NewProp_bBraking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPawn, nullptr, "BrakeLights", nullptr, nullptr, Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::PropPointers), sizeof(CXPawn_eventBrakeLights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPawn_eventBrakeLights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPawn_BrakeLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPawn_BrakeLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ACXPawn Function BrakeLights

// Begin Class ACXPawn Function HandleBonusMaxSpeedChanged
struct Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics
{
	struct CXPawn_eventHandleBonusMaxSpeedChanged_Parms
	{
		float NewBonusMaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -- Bonus Max Speed --\n" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-- Bonus Max Speed --" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBonusMaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::NewProp_NewBonusMaxSpeed = { "NewBonusMaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventHandleBonusMaxSpeedChanged_Parms, NewBonusMaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::NewProp_NewBonusMaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPawn, nullptr, "HandleBonusMaxSpeedChanged", nullptr, nullptr, Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::CXPawn_eventHandleBonusMaxSpeedChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::CXPawn_eventHandleBonusMaxSpeedChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPawn::execHandleBonusMaxSpeedChanged)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewBonusMaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleBonusMaxSpeedChanged(Z_Param_NewBonusMaxSpeed);
	P_NATIVE_END;
}
// End Class ACXPawn Function HandleBonusMaxSpeedChanged

// Begin Class ACXPawn Function MulticastPlayAttackEffect
struct CXPawn_eventMulticastPlayAttackEffect_Parms
{
	FVector_NetQuantize TraceStart;
	FVector_NetQuantize TraceEnd;
	bool bHit;
	FVector_NetQuantize ImpactPoint;
};
static const FName NAME_ACXPawn_MulticastPlayAttackEffect = FName(TEXT("MulticastPlayAttackEffect"));
void ACXPawn::MulticastPlayAttackEffect(FVector_NetQuantize TraceStart, FVector_NetQuantize TraceEnd, bool bHit, FVector_NetQuantize ImpactPoint)
{
	CXPawn_eventMulticastPlayAttackEffect_Parms Parms;
	Parms.TraceStart=TraceStart;
	Parms.TraceEnd=TraceEnd;
	Parms.bHit=bHit ? true : false;
	Parms.ImpactPoint=ImpactPoint;
	UFunction* Func = FindFunctionChecked(NAME_ACXPawn_MulticastPlayAttackEffect);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\xaa\xa8\xeb\x93\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1 \xeb\x94\x94\xeb\xb2\x84\xea\xb7\xb8 \xeb\x9d\xbc\xec\x9d\xb8\xec\x9d\x84 \xea\xb7\xb8\xeb\xa6\xac\xea\xb3\xa0, \xeb\xaa\x85\xec\xa4\x91\xed\x96\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xaa\x85\xec\xa4\x91 \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4\xec\x9d\x84 \xec\x9e\xac\xec\x83\x9d\xed\x95\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xaa\xa8\xeb\x93\xa0 \xed\x81\xb4\xeb\x9d\xbc\xec\x9d\xb4\xec\x96\xb8\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1 \xeb\x94\x94\xeb\xb2\x84\xea\xb7\xb8 \xeb\x9d\xbc\xec\x9d\xb8\xec\x9d\x84 \xea\xb7\xb8\xeb\xa6\xac\xea\xb3\xa0, \xeb\xaa\x85\xec\xa4\x91\xed\x96\x88\xeb\x8b\xa4\xeb\xa9\xb4 \xeb\xaa\x85\xec\xa4\x91 \xec\xa7\x80\xec\xa0\x90\xec\x97\x90 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4\xec\x9d\x84 \xec\x9e\xac\xec\x83\x9d\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraceEnd;
	static void NewProp_bHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_TraceStart = { "TraceStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventMulticastPlayAttackEffect_Parms, TraceStart), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_TraceEnd = { "TraceEnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventMulticastPlayAttackEffect_Parms, TraceEnd), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
void Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_bHit_SetBit(void* Obj)
{
	((CXPawn_eventMulticastPlayAttackEffect_Parms*)Obj)->bHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_bHit = { "bHit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXPawn_eventMulticastPlayAttackEffect_Parms), &Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_bHit_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPawn_eventMulticastPlayAttackEffect_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_TraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_TraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_bHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::NewProp_ImpactPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPawn, nullptr, "MulticastPlayAttackEffect", nullptr, nullptr, Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::PropPointers), sizeof(CXPawn_eventMulticastPlayAttackEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(CXPawn_eventMulticastPlayAttackEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPawn::execMulticastPlayAttackEffect)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceStart);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_TraceEnd);
	P_GET_UBOOL(Z_Param_bHit);
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_ImpactPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastPlayAttackEffect_Implementation(Z_Param_TraceStart,Z_Param_TraceEnd,Z_Param_bHit,Z_Param_ImpactPoint);
	P_NATIVE_END;
}
// End Class ACXPawn Function MulticastPlayAttackEffect

// Begin Class ACXPawn Function ServerAttack
static const FName NAME_ACXPawn_ServerAttack = FName(TEXT("ServerAttack"));
void ACXPawn::ServerAttack()
{
	UFunction* Func = FindFunctionChecked(NAME_ACXPawn_ServerAttack);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_ACXPawn_ServerAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\xb0\xa8\xeb\x9f\x89 \xec\x95\x9e \xeb\xb2\x94\xed\x8d\xbc \xec\xa4\x91\xec\x95\x99\xec\x97\x90\xec\x84\x9c \xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1\xec\x9c\xbc\xeb\xa1\x9c \xec\x83\x81\xeb\x8c\x80 \xec\xb0\xa8\xeb\x9f\x89\xec\x9d\x84 \xea\xb0\x90\xec\xa7\x80\xed\x95\x98\xea\xb3\xa0 ApplyDamage\xeb\xa5\xbc \xed\x98\xb8\xec\xb6\x9c\xed\x95\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb0\xa8\xeb\x9f\x89 \xec\x95\x9e \xeb\xb2\x94\xed\x8d\xbc \xec\xa4\x91\xec\x95\x99\xec\x97\x90\xec\x84\x9c \xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1\xec\x9c\xbc\xeb\xa1\x9c \xec\x83\x81\xeb\x8c\x80 \xec\xb0\xa8\xeb\x9f\x89\xec\x9d\x84 \xea\xb0\x90\xec\xa7\x80\xed\x95\x98\xea\xb3\xa0 ApplyDamage\xeb\xa5\xbc \xed\x98\xb8\xec\xb6\x9c\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPawn_ServerAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPawn, nullptr, "ServerAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPawn_ServerAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPawn_ServerAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ACXPawn_ServerAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPawn_ServerAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPawn::execServerAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerAttack_Implementation();
	P_NATIVE_END;
}
// End Class ACXPawn Function ServerAttack

// Begin Class ACXPawn
void ACXPawn::StaticRegisterNativesACXPawn()
{
	UClass* Class = ACXPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleBonusMaxSpeedChanged", &ACXPawn::execHandleBonusMaxSpeedChanged },
		{ "MulticastPlayAttackEffect", &ACXPawn::execMulticastPlayAttackEffect },
		{ "ServerAttack", &ACXPawn::execServerAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPawn);
UClass* Z_Construct_UClass_ACXPawn_NoRegister()
{
	return ACXPawn::StaticClass();
}
struct Z_Construct_UClass_ACXPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Pawn class\n *  Handles common functionality for all vehicle types,\n *  including input handling, camera management, combat (attack / damage)\n *  and applying the PlayerState's BonusMaxSpeed.\n *  \n *  Specific vehicle configurations are handled in subclasses.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CXPawn.h" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Pawn class\nHandles common functionality for all vehicle types,\nincluding input handling, camera management, combat (attack / damage)\nand applying the PlayerState's BonusMaxSpeed.\n\nSpecific vehicle configurations are handled in subclasses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the front camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the front camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Front Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the back camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the back camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Back Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steering Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throttle Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throttle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brake Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handbrake Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handbrake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Around Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Around Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Camera Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Camera Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetVehicleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset Vehicle Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Vehicle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Attack (\xec\xa2\x8c\xed\x81\xb4\xeb\xa6\xad) Action */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Attack (\xec\xa2\x8c\xed\x81\xb4\xeb\xa6\xad) Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTraceStartOffset_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1 \xec\x8b\x9c\xec\x9e\x91 \xec\xa7\x80\xec\xa0\x90(\xec\xb0\xa8\xeb\x9f\x89 \xec\x95\x9e \xeb\xb2\x94\xed\x8d\xbc \xec\xa4\x91\xec\x95\x99)\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\xa0\x84\xeb\xb0\xa9 \xec\x98\xa4\xed\x94\x84\xec\x85\x8b \xea\xb1\xb0\xeb\xa6\xac */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1 \xec\x8b\x9c\xec\x9e\x91 \xec\xa7\x80\xec\xa0\x90(\xec\xb0\xa8\xeb\x9f\x89 \xec\x95\x9e \xeb\xb2\x94\xed\x8d\xbc \xec\xa4\x91\xec\x95\x99)\xea\xb9\x8c\xec\xa7\x80\xec\x9d\x98 \xec\xa0\x84\xeb\xb0\xa9 \xec\x98\xa4\xed\x94\x84\xec\x85\x8b \xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackTraceDistance_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1 \xea\xb1\xb0\xeb\xa6\xac */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x9d\xbc\xec\x9d\xb8\xed\x8a\xb8\xeb\xa0\x88\xec\x9d\xb4\xec\x8b\xb1 \xea\xb1\xb0\xeb\xa6\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb3\xb5\xea\xb2\xa9 1\xed\x9a\x8c\xeb\x8b\xb9 ApplyDamage\xec\x97\x90 \xec\xa0\x84\xeb\x8b\xac\xed\x95\xa0 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xea\xb0\x92 */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9 1\xed\x9a\x8c\xeb\x8b\xb9 ApplyDamage\xec\x97\x90 \xec\xa0\x84\xeb\x8b\xac\xed\x95\xa0 \xeb\x8d\xb0\xeb\xaf\xb8\xec\xa7\x80 \xea\xb0\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinsStolenPerHit_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x94\xbc\xed\x95\xb4 \xec\xb0\xa8\xeb\x9f\x89\xec\x97\x90\xea\xb2\x8c\xec\x84\x9c \xeb\xb9\xbc\xec\x95\x97\xeb\x8a\x94 \xec\xbd\x94\xec\x9d\xb8 \xec\x88\x98 (\xea\xb0\x80\xed\x95\xb4\xec\x9e\x90\xeb\x8a\x94 \xea\xb0\x99\xec\x9d\x80 \xec\x96\x91\xec\x9d\x84 \xed\x9a\x8d\xeb\x93\x9d) */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\xbc\xed\x95\xb4 \xec\xb0\xa8\xeb\x9f\x89\xec\x97\x90\xea\xb2\x8c\xec\x84\x9c \xeb\xb9\xbc\xec\x95\x97\xeb\x8a\x94 \xec\xbd\x94\xec\x9d\xb8 \xec\x88\x98 (\xea\xb0\x80\xed\x95\xb4\xec\x9e\x90\xeb\x8a\x94 \xea\xb0\x99\xec\x9d\x80 \xec\x96\x91\xec\x9d\x84 \xed\x9a\x8d\xeb\x93\x9d)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCoinsToSteal_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x94\xbc\xed\x95\xb4 \xec\xb0\xa8\xeb\x9f\x89\xec\x9d\xb4 \xec\x9d\xb4 \xea\xb0\x92 \xeb\xaf\xb8\xeb\xa7\x8c\xec\x9d\x98 \xec\xbd\x94\xec\x9d\xb8\xec\x9d\x84 \xea\xb0\x80\xec\xa7\x80\xea\xb3\xa0 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xec\x95\x84\xeb\xac\xb4 \xeb\x8f\x99\xec\x9e\x91\xeb\x8f\x84 \xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xeb\x8a\x94\xeb\x8b\xa4 */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\xbc\xed\x95\xb4 \xec\xb0\xa8\xeb\x9f\x89\xec\x9d\xb4 \xec\x9d\xb4 \xea\xb0\x92 \xeb\xaf\xb8\xeb\xa7\x8c\xec\x9d\x98 \xec\xbd\x94\xec\x9d\xb8\xec\x9d\x84 \xea\xb0\x80\xec\xa7\x80\xea\xb3\xa0 \xec\x9e\x88\xec\x9c\xbc\xeb\xa9\xb4 \xec\x95\x84\xeb\xac\xb4 \xeb\x8f\x99\xec\x9e\x91\xeb\x8f\x84 \xed\x95\x98\xec\xa7\x80 \xec\x95\x8a\xeb\x8a\x94\xeb\x8b\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb3\xb5\xea\xb2\xa9 \xec\x82\xac\xec\x9d\xb4\xec\x9d\x98 \xec\xb5\x9c\xec\x86\x8c \xea\xb0\x84\xea\xb2\xa9(\xec\xb4\x88). \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xea\xb2\x80\xec\x82\xac\xed\x95\x9c\xeb\x8b\xa4. (\xec\x97\xb0\xed\x83\x80\xeb\xa1\x9c \xec\xbd\x94\xec\x9d\xb8\xec\x9d\x84 \xea\xb3\x84\xec\x86\x8d \xeb\xb9\xbc\xec\x95\x97\xeb\x8a\x94 \xea\xb2\x83 \xeb\xb0\xa9\xec\xa7\x80) */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9 \xec\x82\xac\xec\x9d\xb4\xec\x9d\x98 \xec\xb5\x9c\xec\x86\x8c \xea\xb0\x84\xea\xb2\xa9(\xec\xb4\x88). \xec\x84\x9c\xeb\xb2\x84\xec\x97\x90\xec\x84\x9c \xea\xb2\x80\xec\x82\xac\xed\x95\x9c\xeb\x8b\xa4. (\xec\x97\xb0\xed\x83\x80\xeb\xa1\x9c \xec\xbd\x94\xec\x9d\xb8\xec\x9d\x84 \xea\xb3\x84\xec\x86\x8d \xeb\xb9\xbc\xec\x95\x97\xeb\x8a\x94 \xea\xb2\x83 \xeb\xb0\xa9\xec\xa7\x80)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttackOnlyWhilePlaying_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** true\xeb\xa9\xb4 \xea\xb2\x8c\xec\x9e\x84\xec\x9d\xb4 Playing \xec\x83\x81\xed\x83\x9c\xec\x9d\xbc \xeb\x95\x8c\xeb\xa7\x8c \xea\xb3\xb5\xea\xb2\xa9\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "true\xeb\xa9\xb4 \xea\xb2\x8c\xec\x9e\x84\xec\x9d\xb4 Playing \xec\x83\x81\xed\x83\x9c\xec\x9d\xbc \xeb\x95\x8c\xeb\xa7\x8c \xea\xb3\xb5\xea\xb2\xa9\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[] = {
		{ "Category", "CX|Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xea\xb3\xb5\xea\xb2\xa9\xec\x9d\xb4 \xeb\xaa\x85\xec\xa4\x91\xed\x96\x88\xec\x9d\x84 \xeb\x95\x8c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4 */" },
#endif
		{ "ModuleRelativePath", "CXPawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb3\xb5\xea\xb2\xa9\xec\x9d\xb4 \xeb\xaa\x85\xec\xa4\x91\xed\x96\x88\xec\x9d\x84 \xeb\x95\x8c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAroundAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetVehicleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTraceStartOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackTraceDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoinsStolenPerHit;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinCoinsToSteal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
	static void NewProp_bAttackOnlyWhilePlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackOnlyWhilePlaying;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPawn_BrakeLights, "BrakeLights" }, // 694148575
		{ &Z_Construct_UFunction_ACXPawn_HandleBonusMaxSpeedChanged, "HandleBonusMaxSpeedChanged" }, // 690040441
		{ &Z_Construct_UFunction_ACXPawn_MulticastPlayAttackEffect, "MulticastPlayAttackEffect" }, // 2809605742
		{ &Z_Construct_UFunction_ACXPawn_ServerAttack, "ServerAttack" }, // 4067309607
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontSpringArm = { "FrontSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, FrontSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontSpringArm_MetaData), NewProp_FrontSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, FrontCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontCamera_MetaData), NewProp_FrontCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_BackSpringArm = { "BackSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, BackSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSpringArm_MetaData), NewProp_BackSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_BackCamera = { "BackCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, BackCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamera_MetaData), NewProp_BackCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, SteeringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringAction_MetaData), NewProp_SteeringAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, ThrottleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrottleAction_MetaData), NewProp_ThrottleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, BrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeAction_MetaData), NewProp_BrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, HandbrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeAction_MetaData), NewProp_HandbrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_LookAroundAction = { "LookAroundAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, LookAroundAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAroundAction_MetaData), NewProp_LookAroundAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_ToggleCameraAction = { "ToggleCameraAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, ToggleCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCameraAction_MetaData), NewProp_ToggleCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_ResetVehicleAction = { "ResetVehicleAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, ResetVehicleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetVehicleAction_MetaData), NewProp_ResetVehicleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackAction = { "AttackAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, AttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackAction_MetaData), NewProp_AttackAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackTraceStartOffset = { "AttackTraceStartOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, AttackTraceStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTraceStartOffset_MetaData), NewProp_AttackTraceStartOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackTraceDistance = { "AttackTraceDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, AttackTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackTraceDistance_MetaData), NewProp_AttackTraceDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, AttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackDamage_MetaData), NewProp_AttackDamage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_CoinsStolenPerHit = { "CoinsStolenPerHit", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, CoinsStolenPerHit), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinsStolenPerHit_MetaData), NewProp_CoinsStolenPerHit_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_MinCoinsToSteal = { "MinCoinsToSteal", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, MinCoinsToSteal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCoinsToSteal_MetaData), NewProp_MinCoinsToSteal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, AttackCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackCooldown_MetaData), NewProp_AttackCooldown_MetaData) };
void Z_Construct_UClass_ACXPawn_Statics::NewProp_bAttackOnlyWhilePlaying_SetBit(void* Obj)
{
	((ACXPawn*)Obj)->bAttackOnlyWhilePlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_bAttackOnlyWhilePlaying = { "bAttackOnlyWhilePlaying", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACXPawn), &Z_Construct_UClass_ACXPawn_Statics::NewProp_bAttackOnlyWhilePlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttackOnlyWhilePlaying_MetaData), NewProp_bAttackOnlyWhilePlaying_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPawn_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPawn, HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitParticle_MetaData), NewProp_HitParticle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_FrontCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_BackSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_BackCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_SteeringAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_ThrottleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_BrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_HandbrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_LookAroundAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_ToggleCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_ResetVehicleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackTraceStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_CoinsStolenPerHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_MinCoinsToSteal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_AttackCooldown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_bAttackOnlyWhilePlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPawn_Statics::NewProp_HitParticle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPawn_Statics::ClassParams = {
	&ACXPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::PropPointers),
	0,
	0x008000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPawn()
{
	if (!Z_Registration_Info_UClass_ACXPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPawn.OuterSingleton, Z_Construct_UClass_ACXPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPawn.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXPawn>()
{
	return ACXPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPawn);
ACXPawn::~ACXPawn() {}
// End Class ACXPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPawn, ACXPawn::StaticClass, TEXT("ACXPawn"), &Z_Registration_Info_UClass_ACXPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPawn), 912754970U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXPawn_h_282273170(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
