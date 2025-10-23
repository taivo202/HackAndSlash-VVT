// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MessageProcessors/ElimChainProcessor.h"

#ifdef SHOOTERCORERUNTIME_ElimChainProcessor_generated_h
#error "ElimChainProcessor.generated.h already included, missing '#pragma once' in ElimChainProcessor.h"
#endif
#define SHOOTERCORERUNTIME_ElimChainProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FPlayerElimChainInfo **********************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerElimChainInfo_Statics; \
	SHOOTERCORERUNTIME_API static class UScriptStruct* StaticStruct();


struct FPlayerElimChainInfo;
// ********** End ScriptStruct FPlayerElimChainInfo ************************************************

// ********** Begin Class UElimChainProcessor ******************************************************
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UElimChainProcessor_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUElimChainProcessor(); \
	friend struct Z_Construct_UClass_UElimChainProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UElimChainProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UElimChainProcessor, UGameplayMessageProcessor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterCoreRuntime"), Z_Construct_UClass_UElimChainProcessor_NoRegister) \
	DECLARE_SERIALIZER(UElimChainProcessor)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UElimChainProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UElimChainProcessor(UElimChainProcessor&&) = delete; \
	UElimChainProcessor(const UElimChainProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UElimChainProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UElimChainProcessor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UElimChainProcessor) \
	NO_API virtual ~UElimChainProcessor();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_26_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_29_INCLASS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UElimChainProcessor;

// ********** End Class UElimChainProcessor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_MessageProcessors_ElimChainProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
