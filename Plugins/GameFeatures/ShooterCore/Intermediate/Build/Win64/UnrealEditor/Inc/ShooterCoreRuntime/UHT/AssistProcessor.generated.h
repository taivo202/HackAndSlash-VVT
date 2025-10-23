// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MessageProcessors/AssistProcessor.h"

#ifdef SHOOTERCORERUNTIME_AssistProcessor_generated_h
#error "AssistProcessor.generated.h already included, missing '#pragma once' in AssistProcessor.h"
#endif
#define SHOOTERCORERUNTIME_AssistProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPlayerAssistDamageTracking ***************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerAssistDamageTracking_Statics; \
	SHOOTERCORERUNTIME_API static class UScriptStruct* StaticStruct();


struct FPlayerAssistDamageTracking;
// ********** End ScriptStruct FPlayerAssistDamageTracking *****************************************

// ********** Begin Class UAssistProcessor *********************************************************
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAssistProcessor_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAssistProcessor(); \
	friend struct Z_Construct_UClass_UAssistProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAssistProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UAssistProcessor, UGameplayMessageProcessor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterCoreRuntime"), Z_Construct_UClass_UAssistProcessor_NoRegister) \
	DECLARE_SERIALIZER(UAssistProcessor)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAssistProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAssistProcessor(UAssistProcessor&&) = delete; \
	UAssistProcessor(const UAssistProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAssistProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAssistProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAssistProcessor) \
	NO_API virtual ~UAssistProcessor();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h_27_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAssistProcessor;

// ********** End Class UAssistProcessor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_AssistProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
