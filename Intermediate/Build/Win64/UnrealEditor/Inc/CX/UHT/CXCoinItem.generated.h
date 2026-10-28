// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXCoinItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXCoinItem_generated_h
#error "CXCoinItem.generated.h already included, missing '#pragma once' in CXCoinItem.h"
#endif
#define CX_CXCoinItem_generated_h

#define FID_race_Source_CX_CXCoinItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXCoinItem(); \
	friend struct Z_Construct_UClass_ACXCoinItem_Statics; \
public: \
	DECLARE_CLASS(ACXCoinItem, ACXPickupItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXCoinItem)


#define FID_race_Source_CX_CXCoinItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXCoinItem(ACXCoinItem&&); \
	ACXCoinItem(const ACXCoinItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXCoinItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXCoinItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXCoinItem) \
	NO_API virtual ~ACXCoinItem();


#define FID_race_Source_CX_CXCoinItem_h_12_PROLOG
#define FID_race_Source_CX_CXCoinItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXCoinItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXCoinItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXCoinItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXCoinItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
