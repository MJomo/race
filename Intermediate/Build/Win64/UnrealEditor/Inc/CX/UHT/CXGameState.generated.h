// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECXGameStatus : uint8;
#ifdef CX_CXGameState_generated_h
#error "CXGameState.generated.h already included, missing '#pragma once' in CXGameState.h"
#endif
#define CX_CXGameState_generated_h

#define FID_race_Source_CX_CXGameState_h_18_DELEGATE \
CX_API void FOnGameStatusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGameStatusChanged, ECXGameStatus NewStatus);


#define FID_race_Source_CX_CXGameState_h_19_DELEGATE \
CX_API void FOnRemainingTimeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnRemainingTimeChanged, int32 NewRemainingTime);


#define FID_race_Source_CX_CXGameState_h_20_DELEGATE \
CX_API void FOnWinnersChanged_DelegateWrapper(const FMulticastScriptDelegate& OnWinnersChanged);


#define FID_race_Source_CX_CXGameState_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_Winners); \
	DECLARE_FUNCTION(execOnRep_RemainingTime); \
	DECLARE_FUNCTION(execOnRep_GameStatus);


#define FID_race_Source_CX_CXGameState_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXGameState(); \
	friend struct Z_Construct_UClass_ACXGameState_Statics; \
public: \
	DECLARE_CLASS(ACXGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXGameState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		GameStatus=NETFIELD_REP_START, \
		RemainingTime, \
		Winners, \
		NETFIELD_REP_END=Winners	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_race_Source_CX_CXGameState_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXGameState(ACXGameState&&); \
	ACXGameState(const ACXGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACXGameState) \
	NO_API virtual ~ACXGameState();


#define FID_race_Source_CX_CXGameState_h_28_PROLOG
#define FID_race_Source_CX_CXGameState_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXGameState_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_race_Source_CX_CXGameState_h_31_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXGameState_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXGameState_h


#define FOREACH_ENUM_ECXGAMESTATUS(op) \
	op(ECXGameStatus::Waiting) \
	op(ECXGameStatus::Playing) \
	op(ECXGameStatus::Finished) 

enum class ECXGameStatus : uint8;
template<> struct TIsUEnumClass<ECXGameStatus> { enum { Value = true }; };
template<> CX_API UEnum* StaticEnum<ECXGameStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
