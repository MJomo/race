// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXPawn_generated_h
#error "CXPawn.generated.h already included, missing '#pragma once' in CXPawn.h"
#endif
#define CX_CXPawn_generated_h

#define FID_CX_Source_CX_CXPawn_h_27_CALLBACK_WRAPPERS
#define FID_CX_Source_CX_CXPawn_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPawn(); \
	friend struct Z_Construct_UClass_ACXPawn_Statics; \
public: \
	DECLARE_CLASS(ACXPawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXPawn)


#define FID_CX_Source_CX_CXPawn_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPawn(ACXPawn&&); \
	ACXPawn(const ACXPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACXPawn) \
	NO_API virtual ~ACXPawn();


#define FID_CX_Source_CX_CXPawn_h_24_PROLOG
#define FID_CX_Source_CX_CXPawn_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CX_Source_CX_CXPawn_h_27_CALLBACK_WRAPPERS \
	FID_CX_Source_CX_CXPawn_h_27_INCLASS_NO_PURE_DECLS \
	FID_CX_Source_CX_CXPawn_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CX_Source_CX_CXPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
