// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CX/CXSportsCar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCXSportsCar() {}

// Begin Cross Module References
CX_API UClass* Z_Construct_UClass_ACXPawn();
CX_API UClass* Z_Construct_UClass_ACXSportsCar();
CX_API UClass* Z_Construct_UClass_ACXSportsCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_CX();
// End Cross Module References

// Begin Class ACXSportsCar
void ACXSportsCar::StaticRegisterNativesACXSportsCar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACXSportsCar);
UClass* Z_Construct_UClass_ACXSportsCar_NoRegister()
{
	return ACXSportsCar::StaticClass();
}
struct Z_Construct_UClass_ACXSportsCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CXSportsCar.h" },
		{ "ModuleRelativePath", "CXSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACXSportsCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACXSportsCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACXPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACXSportsCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACXSportsCar_Statics::ClassParams = {
	&ACXSportsCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACXSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACXSportsCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACXSportsCar()
{
	if (!Z_Registration_Info_UClass_ACXSportsCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACXSportsCar.OuterSingleton, Z_Construct_UClass_ACXSportsCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACXSportsCar.OuterSingleton;
}
template<> CX_API UClass* StaticClass<ACXSportsCar>()
{
	return ACXSportsCar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACXSportsCar);
ACXSportsCar::~ACXSportsCar() {}
// End Class ACXSportsCar

// Begin Registration
struct Z_CompiledInDeferFile_FID_CX_Source_CX_CXSportsCar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACXSportsCar, ACXSportsCar::StaticClass, TEXT("ACXSportsCar"), &Z_Registration_Info_UClass_ACXSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACXSportsCar), 3381349771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CX_Source_CX_CXSportsCar_h_1778036577(TEXT("/Script/CX"),
	Z_CompiledInDeferFile_FID_CX_Source_CX_CXSportsCar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CX_Source_CX_CXSportsCar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
