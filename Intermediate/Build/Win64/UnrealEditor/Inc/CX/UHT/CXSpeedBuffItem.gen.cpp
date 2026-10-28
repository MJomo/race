// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXSpeedBuffItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXSpeedBuffItem() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXPickupItem();
CX_API UClass* Z_Construct_UClass_ACXSpeedBuffItem();
CX_API UClass* Z_Construct_UClass_ACXSpeedBuffItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXSpeedBuffItem
void ACXSpeedBuffItem::StaticRegisterNativesACXSpeedBuffItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXSpeedBuffItem);
UClass* Z_Construct_UClass_ACXSpeedBuffItem_NoRegister()
{
	return ACXSpeedBuffItem::StaticClass();
}
struct Z_Construct_UClass_ACXSpeedBuffItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Speed buff pickup item. Overlapping grants the player BonusMaxSpeed.\n */" },
#endif
		{ "IncludePath", "CXSpeedBuffItem.h" },
		{ "ModuleRelativePath", "CXSpeedBuffItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Speed buff pickup item. Overlapping grants the player BonusMaxSpeed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BonusSpeedAmount_MetaData[] = {
		{ "Category", "CX|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\xa7\x80\xea\xb8\x89\xed\x95\xa0 \xec\xb6\x94\xea\xb0\x80 \xec\xb5\x9c\xeb\x8c\x80 \xec\x86\x8d\xeb\x8f\x84 */" },
#endif
		{ "ModuleRelativePath", "CXSpeedBuffItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\xa7\x80\xea\xb8\x89\xed\x95\xa0 \xec\xb6\x94\xea\xb0\x80 \xec\xb5\x9c\xeb\x8c\x80 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BonusSpeedAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXSpeedBuffItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACXSpeedBuffItem_Statics::NewProp_BonusSpeedAmount = { "BonusSpeedAmount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXSpeedBuffItem, BonusSpeedAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BonusSpeedAmount_MetaData), NewProp_BonusSpeedAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXSpeedBuffItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXSpeedBuffItem_Statics::NewProp_BonusSpeedAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXSpeedBuffItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXSpeedBuffItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACXPickupItem,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXSpeedBuffItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXSpeedBuffItem_Statics::ClassParams = {
	&ACXSpeedBuffItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACXSpeedBuffItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXSpeedBuffItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXSpeedBuffItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXSpeedBuffItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXSpeedBuffItem()
{
	if (!Z_Registration_Info_UClass_ACXSpeedBuffItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXSpeedBuffItem.OuterSingleton, Z_Construct_UClass_ACXSpeedBuffItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXSpeedBuffItem.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXSpeedBuffItem>()
{
	return ACXSpeedBuffItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXSpeedBuffItem);
ACXSpeedBuffItem::~ACXSpeedBuffItem() {}
// End Class ACXSpeedBuffItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXSpeedBuffItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXSpeedBuffItem, ACXSpeedBuffItem::StaticClass, TEXT("ACXSpeedBuffItem"), &Z_Registration_Info_UClass_ACXSpeedBuffItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXSpeedBuffItem), 2061994051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXSpeedBuffItem_h_3427417444(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXSpeedBuffItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXSpeedBuffItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
