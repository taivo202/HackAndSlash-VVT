// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/IAimAssistTargetInterface.h"

#ifdef SHOOTERCORERUNTIME_IAimAssistTargetInterface_generated_h
#error "IAimAssistTargetInterface.generated.h already included, missing '#pragma once' in IAimAssistTargetInterface.h"
#endif
#define SHOOTERCORERUNTIME_IAimAssistTargetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FAimAssistTargetOptions *******************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAimAssistTargetOptions_Statics; \
	SHOOTERCORERUNTIME_API static class UScriptStruct* StaticStruct();


struct FAimAssistTargetOptions;
// ********** End ScriptStruct FAimAssistTargetOptions *********************************************

// ********** Begin Interface UAimAssistTaget ******************************************************
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTaget_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SHOOTERCORERUNTIME_API UAimAssistTaget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAimAssistTaget(UAimAssistTaget&&) = delete; \
	UAimAssistTaget(const UAimAssistTaget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SHOOTERCORERUNTIME_API, UAimAssistTaget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAimAssistTaget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAimAssistTaget) \
	virtual ~UAimAssistTaget() = default;


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_39_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAimAssistTaget(); \
	friend struct Z_Construct_UClass_UAimAssistTaget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTaget_NoRegister(); \
public: \
	DECLARE_CLASS2(UAimAssistTaget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ShooterCoreRuntime"), Z_Construct_UClass_UAimAssistTaget_NoRegister) \
	DECLARE_SERIALIZER(UAimAssistTaget)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_39_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_39_GENERATED_UINTERFACE_BODY() \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_39_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAimAssistTaget() {} \
public: \
	typedef UAimAssistTaget UClassType; \
	typedef IAimAssistTaget ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_36_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_52_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAimAssistTaget;

// ********** End Interface UAimAssistTaget ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_IAimAssistTargetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
