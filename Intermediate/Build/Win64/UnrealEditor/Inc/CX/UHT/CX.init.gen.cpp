// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCX_init() {}
	CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature();
	CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature();
	CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature();
	CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature();
	CX_API UFunction* Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CX;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CX()
	{
		if (!Z_Registration_Info_UPackage__Script_CX.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CX_OnBonusMaxSpeedChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CX_OnCoinsChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CX_OnGameStatusChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CX_OnRemainingTimeChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CX_OnWinnersChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CX",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE09F4FC2,
				0x8AFECEEF,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CX.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CX.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CX(Z_Construct_UPackage__Script_CX, TEXT("/Script/CX"), Z_Registration_Info_UPackage__Script_CX, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE09F4FC2, 0x8AFECEEF));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
