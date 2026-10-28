// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXPlayerState_generated_h
#error "CXPlayerState.generated.h already included, missing '#pragma once' in CXPlayerState.h"
#endif
#define CX_CXPlayerState_generated_h

#define FID_race_Source_CX_CXPlayerState_h_9_DELEGATE \
CX_API void FOnCoinsChanged_DelegateWrapper(const FMulticastScriptDelegate& OnCoinsChanged, int32 NewCoins);


#define FID_race_Source_CX_CXPlayerState_h_10_DELEGATE \
CX_API void FOnBonusMaxSpeedChanged_DelegateWrapper(const FMulticastScriptDelegate& OnBonusMaxSpeedChanged, float NewBonusMaxSpeed);


#define FID_race_Source_CX_CXPlayerState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_BonusMaxSpeed); \
	DECLARE_FUNCTION(execOnRep_Coins);


#define FID_race_Source_CX_CXPlayerState_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPlayerState(); \
	friend struct Z_Construct_UClass_ACXPlayerState_Statics; \
public: \
	DECLARE_CLASS(ACXPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Coins=NETFIELD_REP_START, \
		BonusMaxSpeed, \
		NETFIELD_REP_END=BonusMaxSpeed	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_race_Source_CX_CXPlayerState_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPlayerState(ACXPlayerState&&); \
	ACXPlayerState(const ACXPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXPlayerState) \
	NO_API virtual ~ACXPlayerState();


#define FID_race_Source_CX_CXPlayerState_h_18_PROLOG
#define FID_race_Source_CX_CXPlayerState_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXPlayerState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_race_Source_CX_CXPlayerState_h_21_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXPlayerState_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
