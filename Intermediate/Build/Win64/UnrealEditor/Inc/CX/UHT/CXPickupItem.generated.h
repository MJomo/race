// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXPickupItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CX_CXPickupItem_generated_h
#error "CXPickupItem.generated.h already included, missing '#pragma once' in CXPickupItem.h"
#endif
#define CX_CXPickupItem_generated_h

#define FID_race_Source_CX_CXPickupItem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_race_Source_CX_CXPickupItem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPickupItem(); \
	friend struct Z_Construct_UClass_ACXPickupItem_Statics; \
public: \
	DECLARE_CLASS(ACXPickupItem, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXPickupItem)


#define FID_race_Source_CX_CXPickupItem_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPickupItem(ACXPickupItem&&); \
	ACXPickupItem(const ACXPickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPickupItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPickupItem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACXPickupItem) \
	NO_API virtual ~ACXPickupItem();


#define FID_race_Source_CX_CXPickupItem_h_23_PROLOG
#define FID_race_Source_CX_CXPickupItem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXPickupItem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_race_Source_CX_CXPickupItem_h_26_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXPickupItem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXPickupItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXPickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
