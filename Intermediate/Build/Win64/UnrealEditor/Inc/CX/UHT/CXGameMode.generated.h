// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXGameMode_generated_h
#error "CXGameMode.generated.h already included, missing '#pragma once' in CXGameMode.h"
#endif
#define CX_CXGameMode_generated_h

#define FID_CX_Source_CX_CXGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXGameMode(); \
	friend struct Z_Construct_UClass_ACXGameMode_Statics; \
public: \
	DECLARE_CLASS(ACXGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), CX_API) \
	DECLARE_SERIALIZER(ACXGameMode)


#define FID_CX_Source_CX_CXGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXGameMode(ACXGameMode&&); \
	ACXGameMode(const ACXGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(CX_API, ACXGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXGameMode) \
	CX_API virtual ~ACXGameMode();


#define FID_CX_Source_CX_CXGameMode_h_9_PROLOG
#define FID_CX_Source_CX_CXGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CX_Source_CX_CXGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_CX_Source_CX_CXGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CX_Source_CX_CXGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
