// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXSpeedBuffItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXSpeedBuffItem_generated_h
#error "CXSpeedBuffItem.generated.h already included, missing '#pragma once' in CXSpeedBuffItem.h"
#endif
#define CX_CXSpeedBuffItem_generated_h

#define FID_race_Source_CX_CXSpeedBuffItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXSpeedBuffItem(); \
	friend struct Z_Construct_UClass_ACXSpeedBuffItem_Statics; \
public: \
	DECLARE_CLASS(ACXSpeedBuffItem, ACXPickupItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXSpeedBuffItem)


#define FID_race_Source_CX_CXSpeedBuffItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXSpeedBuffItem(ACXSpeedBuffItem&&); \
	ACXSpeedBuffItem(const ACXSpeedBuffItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXSpeedBuffItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXSpeedBuffItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXSpeedBuffItem) \
	NO_API virtual ~ACXSpeedBuffItem();


#define FID_race_Source_CX_CXSpeedBuffItem_h_12_PROLOG
#define FID_race_Source_CX_CXSpeedBuffItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXSpeedBuffItem_h_15_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXSpeedBuffItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXSpeedBuffItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXSpeedBuffItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
