// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UIExtensionSystem.h"

#ifdef UIEXTENSION_UIExtensionSystem_generated_h
#error "UIExtensionSystem.generated.h already included, missing '#pragma once' in UIExtensionSystem.h"
#endif
#define UIEXTENSION_UIExtensionSystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UUserWidget;
enum class EUIExtensionAction : uint8;
enum class EUIExtensionPointMatch : uint8;
struct FGameplayTag;
struct FUIExtensionHandle;
struct FUIExtensionPointHandle;
struct FUIExtensionRequest;

// ********** Begin ScriptStruct FUIExtensionPointHandle *******************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_81_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionPointHandle_Statics; \
	UIEXTENSION_API static class UScriptStruct* StaticStruct();


struct FUIExtensionPointHandle;
// ********** End ScriptStruct FUIExtensionPointHandle *********************************************

// ********** Begin ScriptStruct FUIExtensionHandle ************************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_124_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionHandle_Statics; \
	UIEXTENSION_API static class UScriptStruct* StaticStruct();


struct FUIExtensionHandle;
// ********** End ScriptStruct FUIExtensionHandle **************************************************

// ********** Begin ScriptStruct FUIExtensionRequest ***********************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIExtensionRequest_Statics; \
	UIEXTENSION_API static class UScriptStruct* StaticStruct();


struct FUIExtensionRequest;
// ********** End ScriptStruct FUIExtensionRequest *************************************************

// ********** Begin Delegate FExtendExtensionPointDynamicDelegate **********************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_186_DELEGATE \
UIEXTENSION_API void FExtendExtensionPointDynamicDelegate_DelegateWrapper(const FScriptDelegate& ExtendExtensionPointDynamicDelegate, EUIExtensionAction Action, FUIExtensionRequest const& ExtensionRequest);


// ********** End Delegate FExtendExtensionPointDynamicDelegate ************************************

// ********** Begin Class UUIExtensionSubsystem ****************************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsDataForContext); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsData); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsWidgetForContext); \
	DECLARE_FUNCTION(execK2_RegisterExtensionAsWidget); \
	DECLARE_FUNCTION(execK2_RegisterExtensionPoint); \
	DECLARE_FUNCTION(execUnregisterExtensionPoint); \
	DECLARE_FUNCTION(execUnregisterExtension);


UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionSubsystem_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_194_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionSubsystem(); \
	friend struct Z_Construct_UClass_UUIExtensionSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIExtensionSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), Z_Construct_UClass_UUIExtensionSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UUIExtensionSubsystem)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_194_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UIEXTENSION_API UUIExtensionSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIExtensionSubsystem(UUIExtensionSubsystem&&) = delete; \
	UUIExtensionSubsystem(const UUIExtensionSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIEXTENSION_API, UUIExtensionSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionSubsystem) \
	UIEXTENSION_API virtual ~UUIExtensionSubsystem();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_191_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_194_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_194_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_194_INCLASS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_194_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIExtensionSubsystem;

// ********** End Class UUIExtensionSubsystem ******************************************************

// ********** Begin Class UUIExtensionHandleFunctions **********************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionHandleFunctions_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_258_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionHandleFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionHandleFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIExtensionHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), Z_Construct_UClass_UUIExtensionHandleFunctions_NoRegister) \
	DECLARE_SERIALIZER(UUIExtensionHandleFunctions)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_258_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIExtensionHandleFunctions(UUIExtensionHandleFunctions&&) = delete; \
	UUIExtensionHandleFunctions(const UUIExtensionHandleFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIEXTENSION_API, UUIExtensionHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionHandleFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionHandleFunctions) \
	UIEXTENSION_API virtual ~UUIExtensionHandleFunctions();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_255_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_258_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_258_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_258_INCLASS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_258_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIExtensionHandleFunctions;

// ********** End Class UUIExtensionHandleFunctions ************************************************

// ********** Begin Class UUIExtensionPointHandleFunctions *****************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execUnregister);


UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionPointHandleFunctions(); \
	friend struct Z_Construct_UClass_UUIExtensionPointHandleFunctions_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointHandleFunctions_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIExtensionPointHandleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), Z_Construct_UClass_UUIExtensionPointHandleFunctions_NoRegister) \
	DECLARE_SERIALIZER(UUIExtensionPointHandleFunctions)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_273_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIExtensionPointHandleFunctions(UUIExtensionPointHandleFunctions&&) = delete; \
	UUIExtensionPointHandleFunctions(const UUIExtensionPointHandleFunctions&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIEXTENSION_API, UUIExtensionPointHandleFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionPointHandleFunctions); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UUIExtensionPointHandleFunctions) \
	UIEXTENSION_API virtual ~UUIExtensionPointHandleFunctions();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_270_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_273_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_273_INCLASS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h_273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIExtensionPointHandleFunctions;

// ********** End Class UUIExtensionPointHandleFunctions *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_UIExtensionSystem_h

// ********** Begin Enum EUIExtensionPointMatch ****************************************************
#define FOREACH_ENUM_EUIEXTENSIONPOINTMATCH(op) \
	op(EUIExtensionPointMatch::ExactMatch) \
	op(EUIExtensionPointMatch::PartialMatch) 

enum class EUIExtensionPointMatch : uint8;
template<> struct TIsUEnumClass<EUIExtensionPointMatch> { enum { Value = true }; };
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionPointMatch>();
// ********** End Enum EUIExtensionPointMatch ******************************************************

// ********** Begin Enum EUIExtensionAction ********************************************************
#define FOREACH_ENUM_EUIEXTENSIONACTION(op) \
	op(EUIExtensionAction::Added) \
	op(EUIExtensionAction::Removed) 

enum class EUIExtensionAction : uint8;
template<> struct TIsUEnumClass<EUIExtensionAction> { enum { Value = true }; };
template<> UIEXTENSION_API UEnum* StaticEnum<EUIExtensionAction>();
// ********** End Enum EUIExtensionAction **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
