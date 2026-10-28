// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize;
#ifdef CX_CXPawn_generated_h
#error "CXPawn.generated.h already included, missing '#pragma once' in CXPawn.h"
#endif
#define CX_CXPawn_generated_h

#define FID_race_Source_CX_CXPawn_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastPlayAttackEffect_Implementation(FVector_NetQuantize TraceStart, FVector_NetQuantize TraceEnd, bool bHit, FVector_NetQuantize ImpactPoint); \
	virtual void ServerAttack_Implementation(); \
	DECLARE_FUNCTION(execHandleBonusMaxSpeedChanged); \
	DECLARE_FUNCTION(execMulticastPlayAttackEffect); \
	DECLARE_FUNCTION(execServerAttack);


#define FID_race_Source_CX_CXPawn_h_29_CALLBACK_WRAPPERS
#define FID_race_Source_CX_CXPawn_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPawn(); \
	friend struct Z_Construct_UClass_ACXPawn_Statics; \
public: \
	DECLARE_CLASS(ACXPawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXPawn)


#define FID_race_Source_CX_CXPawn_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPawn(ACXPawn&&); \
	ACXPawn(const ACXPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACXPawn) \
	NO_API virtual ~ACXPawn();


#define FID_race_Source_CX_CXPawn_h_26_PROLOG
#define FID_race_Source_CX_CXPawn_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXPawn_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_race_Source_CX_CXPawn_h_29_CALLBACK_WRAPPERS \
	FID_race_Source_CX_CXPawn_h_29_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXPawn_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
