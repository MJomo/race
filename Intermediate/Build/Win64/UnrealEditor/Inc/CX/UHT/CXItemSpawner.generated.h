// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXItemSpawner.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CX_CXItemSpawner_generated_h
#error "CXItemSpawner.generated.h already included, missing '#pragma once' in CXItemSpawner.h"
#endif
#define CX_CXItemSpawner_generated_h

#define FID_race_Source_CX_CXItemSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemDestroyed);


#define FID_race_Source_CX_CXItemSpawner_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXItemSpawner(); \
	friend struct Z_Construct_UClass_ACXItemSpawner_Statics; \
public: \
	DECLARE_CLASS(ACXItemSpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXItemSpawner)


#define FID_race_Source_CX_CXItemSpawner_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXItemSpawner(ACXItemSpawner&&); \
	ACXItemSpawner(const ACXItemSpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXItemSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXItemSpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXItemSpawner) \
	NO_API virtual ~ACXItemSpawner();


#define FID_race_Source_CX_CXItemSpawner_h_14_PROLOG
#define FID_race_Source_CX_CXItemSpawner_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXItemSpawner_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_race_Source_CX_CXItemSpawner_h_17_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXItemSpawner_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXItemSpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXItemSpawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
