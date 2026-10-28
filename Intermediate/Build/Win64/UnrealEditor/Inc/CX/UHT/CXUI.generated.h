// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXUI.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXUI_generated_h
#error "CXUI.generated.h already included, missing '#pragma once' in CXUI.h"
#endif
#define CX_CXUI_generated_h

#define FID_race_Source_CX_CXUI_h_17_CALLBACK_WRAPPERS
#define FID_race_Source_CX_CXUI_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCXUI(); \
	friend struct Z_Construct_UClass_UCXUI_Statics; \
public: \
	DECLARE_CLASS(UCXUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(UCXUI)


#define FID_race_Source_CX_CXUI_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCXUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCXUI(UCXUI&&); \
	UCXUI(const UCXUI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCXUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCXUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCXUI) \
	NO_API virtual ~UCXUI();


#define FID_race_Source_CX_CXUI_h_14_PROLOG
#define FID_race_Source_CX_CXUI_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXUI_h_17_CALLBACK_WRAPPERS \
	FID_race_Source_CX_CXUI_h_17_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXUI_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class UCXUI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXUI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
