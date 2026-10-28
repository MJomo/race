// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXItemSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXItemSpawner() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CX_API UClass* Z_Construct_UClass_ACXItemSpawner();
CX_API UClass* Z_Construct_UClass_ACXItemSpawner_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXItemSpawner Function OnItemDestroyed
struct Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics
{
	struct CXItemSpawner_eventOnItemDestroyed_Parms
	{
		AActor* DestroyedActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXItemSpawner.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXItemSpawner_eventOnItemDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::NewProp_DestroyedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXItemSpawner, nullptr, "OnItemDestroyed", nullptr, nullptr, Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::CXItemSpawner_eventOnItemDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::CXItemSpawner_eventOnItemDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXItemSpawner::execOnItemDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemDestroyed(Z_Param_DestroyedActor);
	P_NATIVE_END;
}
// End Class ACXItemSpawner Function OnItemDestroyed

// Begin Class ACXItemSpawner
void ACXItemSpawner::StaticRegisterNativesACXItemSpawner()
{
	UClass* Class = ACXItemSpawner::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnItemDestroyed", &ACXItemSpawner::execOnItemDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXItemSpawner);
UClass* Z_Construct_UClass_ACXItemSpawner_NoRegister()
{
	return ACXItemSpawner::StaticClass();
}
struct Z_Construct_UClass_ACXItemSpawner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Spawns one pickup item (Coin or Speed Buff, set per-instance in the level)\n *  at its own location, and respawns the same type a fixed delay after\n *  the previous one is destroyed.\n */" },
#endif
		{ "IncludePath", "CXItemSpawner.h" },
		{ "ModuleRelativePath", "CXItemSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spawns one pickup item (Coin or Speed Buff, set per-instance in the level)\nat its own location, and respawns the same type a fixed delay after\nthe previous one is destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "CX|Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x8a\xa4\xed\x8f\xb0\xed\x95\xa0 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4. \xeb\xa0\x88\xeb\xb2\xa8\xec\x97\x90 \xeb\xb0\xb0\xec\xb9\x98\xeb\x90\x9c \xec\x8a\xa4\xed\x8f\xac\xeb\x84\x88\xeb\xa7\x88\xeb\x8b\xa4 \xec\xbd\x94\xec\x9d\xb8/\xeb\xb2\x84\xed\x94\x84 \xec\xa4\x91 \xec\x84\xa0\xed\x83\x9d\xed\x95\xb4\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXItemSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x8f\xb0\xed\x95\xa0 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4. \xeb\xa0\x88\xeb\xb2\xa8\xec\x97\x90 \xeb\xb0\xb0\xec\xb9\x98\xeb\x90\x9c \xec\x8a\xa4\xed\x8f\xac\xeb\x84\x88\xeb\xa7\x88\xeb\x8b\xa4 \xec\xbd\x94\xec\x9d\xb8/\xeb\xb2\x84\xed\x94\x84 \xec\xa4\x91 \xec\x84\xa0\xed\x83\x9d\xed\x95\xb4\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RespawnDelay_MetaData[] = {
		{ "Category", "CX|Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\xb4 \xed\x8c\x8c\xea\xb4\xb4\xeb\x90\x9c \xeb\x92\xa4 \xec\x9e\xac\xec\x8a\xa4\xed\x8f\xb0\xea\xb9\x8c\xec\xa7\x80 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84(\xec\xb4\x88) */" },
#endif
		{ "ModuleRelativePath", "CXItemSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\xb4 \xed\x8c\x8c\xea\xb4\xb4\xeb\x90\x9c \xeb\x92\xa4 \xec\x9e\xac\xec\x8a\xa4\xed\x8f\xb0\xea\xb9\x8c\xec\xa7\x80 \xea\xb1\xb8\xeb\xa6\xac\xeb\x8a\x94 \xec\x8b\x9c\xea\xb0\x84(\xec\xb4\x88)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedItem_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x98\x84\xec\x9e\xac \xec\x8a\xa4\xed\x8f\xb0\xeb\x90\x98\xec\x96\xb4 \xec\x9e\x88\xeb\x8a\x94 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x95\xa1\xed\x84\xb0 */" },
#endif
		{ "ModuleRelativePath", "CXItemSpawner.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\x8a\xa4\xed\x8f\xb0\xeb\x90\x98\xec\x96\xb4 \xec\x9e\x88\xeb\x8a\x94 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\x95\xa1\xed\x84\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RespawnDelay;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXItemSpawner_OnItemDestroyed, "OnItemDestroyed" }, // 1639947696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXItemSpawner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXItemSpawner, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_RespawnDelay = { "RespawnDelay", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXItemSpawner, RespawnDelay), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RespawnDelay_MetaData), NewProp_RespawnDelay_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_SpawnedItem = { "SpawnedItem", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXItemSpawner, SpawnedItem), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedItem_MetaData), NewProp_SpawnedItem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_RespawnDelay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXItemSpawner_Statics::NewProp_SpawnedItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXItemSpawner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXItemSpawner_Statics::ClassParams = {
	&ACXItemSpawner::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXItemSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXItemSpawner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXItemSpawner()
{
	if (!Z_Registration_Info_UClass_ACXItemSpawner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXItemSpawner.OuterSingleton, Z_Construct_UClass_ACXItemSpawner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXItemSpawner.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXItemSpawner>()
{
	return ACXItemSpawner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXItemSpawner);
ACXItemSpawner::~ACXItemSpawner() {}
// End Class ACXItemSpawner

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXItemSpawner_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXItemSpawner, ACXItemSpawner::StaticClass, TEXT("ACXItemSpawner"), &Z_Registration_Info_UClass_ACXItemSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXItemSpawner), 3255696976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXItemSpawner_h_4046746036(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXItemSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXItemSpawner_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
