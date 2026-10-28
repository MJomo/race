// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXOffroadWheelFront.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXOffroadWheelFront() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_UCXOffroadWheelFront();
CX_API UClass* Z_Construct_UClass_UCXOffroadWheelFront_NoRegister();
CX_API UClass* Z_Construct_UClass_UCXWheelFront();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class UCXOffroadWheelFront
void UCXOffroadWheelFront::StaticRegisterNativesUCXOffroadWheelFront()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCXOffroadWheelFront);
UClass* Z_Construct_UClass_UCXOffroadWheelFront_NoRegister()
{
	return UCXOffroadWheelFront::StaticClass();
}
struct Z_Construct_UClass_UCXOffroadWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "CXOffroadWheelFront.h" },
		{ "ModuleRelativePath", "CXOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCXOffroadWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCXOffroadWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCXWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCXOffroadWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCXOffroadWheelFront_Statics::ClassParams = {
	&UCXOffroadWheelFront::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCXOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCXOffroadWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCXOffroadWheelFront()
{
	if (!Z_Registration_Info_UClass_UCXOffroadWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCXOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UCXOffroadWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCXOffroadWheelFront.OuterSingleton;
}
template<> CX_API UClass* StaticClass<UCXOffroadWheelFront>()
{
	return UCXOffroadWheelFront::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCXOffroadWheelFront);
UCXOffroadWheelFront::~UCXOffroadWheelFront() {}
// End Class UCXOffroadWheelFront

// Begin Registration
struct Z_CompiledInDeferFile_FID_CX_Source_CX_CXOffroadWheelFront_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCXOffroadWheelFront, UCXOffroadWheelFront::StaticClass, TEXT("UCXOffroadWheelFront"), &Z_Registration_Info_UClass_UCXOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCXOffroadWheelFront), 865010392U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CX_Source_CX_CXOffroadWheelFront_h_712086483(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_CX_Source_CX_CXOffroadWheelFront_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_CXOffroadWheelFront_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
