// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXPickupItem.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXPickupItem() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXPickupItem();
CX_API UClass* Z_Construct_UClass_ACXPickupItem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXPickupItem Function OnSphereBeginOverlap
struct Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics
{
	struct CXPickupItem_eventOnSphereBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CXPickupItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPickupItem_eventOnSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPickupItem_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPickupItem_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPickupItem_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((CXPickupItem_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CXPickupItem_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CXPickupItem_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACXPickupItem, nullptr, "OnSphereBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::CXPickupItem_eventOnSphereBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::CXPickupItem_eventOnSphereBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACXPickupItem::execOnSphereBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ACXPickupItem Function OnSphereBeginOverlap

// Begin Class ACXPickupItem
void ACXPickupItem::StaticRegisterNativesACXPickupItem()
{
	UClass* Class = ACXPickupItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSphereBeginOverlap", &ACXPickupItem::execOnSphereBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXPickupItem);
UClass* Z_Construct_UClass_ACXPickupItem_NoRegister()
{
	return ACXPickupItem::StaticClass();
}
struct Z_Construct_UClass_ACXPickupItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base class for all pickup items (Coin, Speed Buff, ...).\n *  Handles overlap detection, reward granting (via subclass), and\n *  the destroy VFX/SFX that plays for every connected client.\n *\n *  NetUpdateFrequency is set low (1) since these items are static\n *  and only need to notify clients when they spawn/are destroyed.\n */" },
#endif
		{ "IncludePath", "CXPickupItem.h" },
		{ "ModuleRelativePath", "CXPickupItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all pickup items (Coin, Speed Buff, ...).\nHandles overlap detection, reward granting (via subclass), and\nthe destroy VFX/SFX that plays for every connected client.\n\nNetUpdateFrequency is set low (1) since these items are static\nand only need to notify clients when they spawn/are destroyed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CX|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xeb\xa9\x94\xec\x89\xac */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPickupItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xeb\xa9\x94\xec\x89\xac" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CX|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xec\x98\xa4\xeb\xb2\x84\xeb\x9e\xa9 \xea\xb0\x90\xec\xa7\x80\xec\x9a\xa9 \xec\xbd\x9c\xeb\xa6\xac\xec\xa0\x84 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CXPickupItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x98\xa4\xeb\xb2\x84\xeb\x9e\xa9 \xea\xb0\x90\xec\xa7\x80\xec\x9a\xa9 \xec\xbd\x9c\xeb\xa6\xac\xec\xa0\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupParticle_MetaData[] = {
		{ "Category", "CX|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x9a\x8d\xeb\x93\x9d(\xed\x8c\x8c\xea\xb4\xb4) \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4 */" },
#endif
		{ "ModuleRelativePath", "CXPickupItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9a\x8d\xeb\x93\x9d(\xed\x8c\x8c\xea\xb4\xb4) \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xed\x8c\x8c\xed\x8b\xb0\xed\x81\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "Category", "CX|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x9a\x8d\xeb\x93\x9d(\xed\x8c\x8c\xea\xb4\xb4) \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c */" },
#endif
		{ "ModuleRelativePath", "CXPickupItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9a\x8d\xeb\x93\x9d(\xed\x8c\x8c\xea\xb4\xb4) \xec\x8b\x9c \xec\x9e\xac\xec\x83\x9d\xed\x95\xa0 \xec\x82\xac\xec\x9a\xb4\xeb\x93\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyGrantWhilePlaying_MetaData[] = {
		{ "Category", "CX|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** true\xeb\xa9\xb4 \xea\xb2\x8c\xec\x9e\x84\xec\x9d\xb4 Playing \xec\x83\x81\xed\x83\x9c\xec\x9d\xbc \xeb\x95\x8c\xeb\xa7\x8c \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x84 \xed\x9a\x8d\xeb\x93\x9d\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4. */" },
#endif
		{ "ModuleRelativePath", "CXPickupItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "true\xeb\xa9\xb4 \xea\xb2\x8c\xec\x9e\x84\xec\x9d\xb4 Playing \xec\x83\x81\xed\x83\x9c\xec\x9d\xbc \xeb\x95\x8c\xeb\xa7\x8c \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x84 \xed\x9a\x8d\xeb\x93\x9d\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8b\xa4." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupParticle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static void NewProp_bOnlyGrantWhilePlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyGrantWhilePlaying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACXPickupItem_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 1454941521
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXPickupItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPickupItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPickupItem, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPickupItem_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPickupItem, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSphere_MetaData), NewProp_CollisionSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPickupItem_Statics::NewProp_PickupParticle = { "PickupParticle", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPickupItem, PickupParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupParticle_MetaData), NewProp_PickupParticle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACXPickupItem_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXPickupItem, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
void Z_Construct_UClass_ACXPickupItem_Statics::NewProp_bOnlyGrantWhilePlaying_SetBit(void* Obj)
{
	((ACXPickupItem*)Obj)->bOnlyGrantWhilePlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACXPickupItem_Statics::NewProp_bOnlyGrantWhilePlaying = { "bOnlyGrantWhilePlaying", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACXPickupItem), &Z_Construct_UClass_ACXPickupItem_Statics::NewProp_bOnlyGrantWhilePlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyGrantWhilePlaying_MetaData), NewProp_bOnlyGrantWhilePlaying_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXPickupItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPickupItem_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPickupItem_Statics::NewProp_CollisionSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPickupItem_Statics::NewProp_PickupParticle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPickupItem_Statics::NewProp_PickupSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXPickupItem_Statics::NewProp_bOnlyGrantWhilePlaying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPickupItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXPickupItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPickupItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXPickupItem_Statics::ClassParams = {
	&ACXPickupItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACXPickupItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXPickupItem_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXPickupItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXPickupItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXPickupItem()
{
	if (!Z_Registration_Info_UClass_ACXPickupItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXPickupItem.OuterSingleton, Z_Construct_UClass_ACXPickupItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXPickupItem.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXPickupItem>()
{
	return ACXPickupItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXPickupItem);
ACXPickupItem::~ACXPickupItem() {}
// End Class ACXPickupItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXPickupItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXPickupItem, ACXPickupItem::StaticClass, TEXT("ACXPickupItem"), &Z_Registration_Info_UClass_ACXPickupItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXPickupItem), 1661920337U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXPickupItem_h_3545230734(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXPickupItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXPickupItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
