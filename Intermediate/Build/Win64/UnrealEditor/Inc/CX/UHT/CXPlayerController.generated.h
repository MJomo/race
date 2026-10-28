// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXPlayerController_generated_h
#error "CXPlayerController.generated.h already included, missing '#pragma once' in CXPlayerController.h"
#endif
#define CX_CXPlayerController_generated_h

#define FID_CX_Source_CX_CXPlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACXPlayerController(); \
	friend struct Z_Construct_UClass_ACXPlayerController_Statics; \
public: \
	DECLARE_CLASS(ACXPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(ACXPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		VehiclePawn=NETFIELD_REP_START, \
		NETFIELD_REP_END=VehiclePawn	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_CX_Source_CX_CXPlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACXPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACXPlayerController(ACXPlayerController&&); \
	ACXPlayerController(const ACXPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACXPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACXPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACXPlayerController) \
	NO_API virtual ~ACXPlayerController();


#define FID_CX_Source_CX_CXPlayerController_h_17_PROLOG
#define FID_CX_Source_CX_CXPlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CX_Source_CX_CXPlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_CX_Source_CX_CXPlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class ACXPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CX_Source_CX_CXPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
