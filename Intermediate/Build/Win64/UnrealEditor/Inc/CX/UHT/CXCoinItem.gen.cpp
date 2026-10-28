// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXCoinItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXCoinItem() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXCoinItem();
CX_API UClass* Z_Construct_UClass_ACXCoinItem_NoRegister();
CX_API UClass* Z_Construct_UClass_ACXPickupItem();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXCoinItem
void ACXCoinItem::StaticRegisterNativesACXCoinItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXCoinItem);
UClass* Z_Construct_UClass_ACXCoinItem_NoRegister()
{
	return ACXCoinItem::StaticClass();
}
struct Z_Construct_UClass_ACXCoinItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Coin pickup item. Overlapping grants the player Coins.\n */" },
#endif
		{ "IncludePath", "CXCoinItem.h" },
		{ "ModuleRelativePath", "CXCoinItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Coin pickup item. Overlapping grants the player Coins." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoinAmount_MetaData[] = {
		{ "Category", "CX|Item" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\xa7\x80\xea\xb8\x89\xed\x95\xa0 \xec\x9b\x90\xed\x99\x94 */" },
#endif
		{ "ModuleRelativePath", "CXCoinItem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x9a\x8d\xeb\x93\x9d \xec\x8b\x9c \xec\xa7\x80\xea\xb8\x89\xed\x95\xa0 \xec\x9b\x90\xed\x99\x94" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CoinAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXCoinItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACXCoinItem_Statics::NewProp_CoinAmount = { "CoinAmount", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACXCoinItem, CoinAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoinAmount_MetaData), NewProp_CoinAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACXCoinItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACXCoinItem_Statics::NewProp_CoinAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXCoinItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACXCoinItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACXPickupItem,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXCoinItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXCoinItem_Statics::ClassParams = {
	&ACXCoinItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACXCoinItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACXCoinItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXCoinItem_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXCoinItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXCoinItem()
{
	if (!Z_Registration_Info_UClass_ACXCoinItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXCoinItem.OuterSingleton, Z_Construct_UClass_ACXCoinItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXCoinItem.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXCoinItem>()
{
	return ACXCoinItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXCoinItem);
ACXCoinItem::~ACXCoinItem() {}
// End Class ACXCoinItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_race_Source_CX_CXCoinItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXCoinItem, ACXCoinItem::StaticClass, TEXT("ACXCoinItem"), &Z_Registration_Info_UClass_ACXCoinItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXCoinItem), 1337715384U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_race_Source_CX_CXCoinItem_h_1896396369(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_race_Source_CX_CXCoinItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_race_Source_CX_CXCoinItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
