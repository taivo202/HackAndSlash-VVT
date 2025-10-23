// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopDownArenaAttributeSet.h"

#ifdef TOPDOWNARENARUNTIME_TopDownArenaAttributeSet_generated_h
#error "TopDownArenaAttributeSet.generated.h already included, missing '#pragma once' in TopDownArenaAttributeSet.h"
#endif
#define TOPDOWNARENARUNTIME_TopDownArenaAttributeSet_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayAttributeData;

// ********** Begin Class UTopDownArenaAttributeSet ************************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MovementSpeed); \
	DECLARE_FUNCTION(execOnRep_BombRange); \
	DECLARE_FUNCTION(execOnRep_BombCapacity); \
	DECLARE_FUNCTION(execOnRep_BombsRemaining);


TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaAttributeSet_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTopDownArenaAttributeSet(); \
	friend struct Z_Construct_UClass_UTopDownArenaAttributeSet_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TOPDOWNARENARUNTIME_API UClass* Z_Construct_UClass_UTopDownArenaAttributeSet_NoRegister(); \
public: \
	DECLARE_CLASS2(UTopDownArenaAttributeSet, ULyraAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TopDownArenaRuntime"), Z_Construct_UClass_UTopDownArenaAttributeSet_NoRegister) \
	DECLARE_SERIALIZER(UTopDownArenaAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BombsRemaining=NETFIELD_REP_START, \
		BombCapacity, \
		BombRange, \
		MovementSpeed, \
		NETFIELD_REP_END=MovementSpeed	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API) \
private: \
	REPLICATED_BASE_CLASS(UTopDownArenaAttributeSet) \
public:


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTopDownArenaAttributeSet(UTopDownArenaAttributeSet&&) = delete; \
	UTopDownArenaAttributeSet(const UTopDownArenaAttributeSet&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTopDownArenaAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTopDownArenaAttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTopDownArenaAttributeSet) \
	NO_API virtual ~UTopDownArenaAttributeSet();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_18_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTopDownArenaAttributeSet;

// ********** End Class UTopDownArenaAttributeSet **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_TopDownArena_Source_TopDownArenaRuntime_Private_TopDownArenaAttributeSet_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
