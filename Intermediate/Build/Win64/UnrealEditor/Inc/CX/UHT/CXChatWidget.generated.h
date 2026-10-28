// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CXChatWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CX_CXChatWidget_generated_h
#error "CXChatWidget.generated.h already included, missing '#pragma once' in CXChatWidget.h"
#endif
#define CX_CXChatWidget_generated_h

#define FID_race_Source_CX_CXChatWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSendMessage);


#define FID_race_Source_CX_CXChatWidget_h_23_CALLBACK_WRAPPERS
#define FID_race_Source_CX_CXChatWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCXChatWidget(); \
	friend struct Z_Construct_UClass_UCXChatWidget_Statics; \
public: \
	DECLARE_CLASS(UCXChatWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CX"), NO_API) \
	DECLARE_SERIALIZER(UCXChatWidget)


#define FID_race_Source_CX_CXChatWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCXChatWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCXChatWidget(UCXChatWidget&&); \
	UCXChatWidget(const UCXChatWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCXChatWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCXChatWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCXChatWidget) \
	NO_API virtual ~UCXChatWidget();


#define FID_race_Source_CX_CXChatWidget_h_20_PROLOG
#define FID_race_Source_CX_CXChatWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_race_Source_CX_CXChatWidget_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_race_Source_CX_CXChatWidget_h_23_CALLBACK_WRAPPERS \
	FID_race_Source_CX_CXChatWidget_h_23_INCLASS_NO_PURE_DECLS \
	FID_race_Source_CX_CXChatWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CX_API UClass* StaticClass<class UCXChatWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_race_Source_CX_CXChatWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
