// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actions/AsyncAction_PushContentToLayerForPlayer.h"

#ifdef COMMONGAME_AsyncAction_PushContentToLayerForPlayer_generated_h
#error "AsyncAction_PushContentToLayerForPlayer.generated.h already included, missing '#pragma once' in AsyncAction_PushContentToLayerForPlayer.h"
#endif
#define COMMONGAME_AsyncAction_PushContentToLayerForPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class APlayerController;
class UAsyncAction_PushContentToLayerForPlayer;
class UCommonActivatableWidget;
struct FGameplayTag;

// ********** Begin Delegate FPushContentToLayerForPlayerAsyncDelegate *****************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_19_DELEGATE \
COMMONGAME_API void FPushContentToLayerForPlayerAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& PushContentToLayerForPlayerAsyncDelegate, UCommonActivatableWidget* UserWidget);


// ********** End Delegate FPushContentToLayerForPlayerAsyncDelegate *******************************

// ********** Begin Class UAsyncAction_PushContentToLayerForPlayer *********************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_RPC_WRAPPERS \
	DECLARE_FUNCTION(execPushContentToLayerForPlayer);


COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_PushContentToLayerForPlayer(); \
	friend struct Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMONGAME_API UClass* Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_PushContentToLayerForPlayer, UCancellableAsyncAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CommonGame"), Z_Construct_UClass_UAsyncAction_PushContentToLayerForPlayer_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_PushContentToLayerForPlayer)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMMONGAME_API UAsyncAction_PushContentToLayerForPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_PushContentToLayerForPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMMONGAME_API, UAsyncAction_PushContentToLayerForPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_PushContentToLayerForPlayer); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_PushContentToLayerForPlayer(UAsyncAction_PushContentToLayerForPlayer&&) = delete; \
	UAsyncAction_PushContentToLayerForPlayer(const UAsyncAction_PushContentToLayerForPlayer&) = delete; \
	COMMONGAME_API virtual ~UAsyncAction_PushContentToLayerForPlayer();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_24_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_RPC_WRAPPERS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_INCLASS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_PushContentToLayerForPlayer;

// ********** End Class UAsyncAction_PushContentToLayerForPlayer ***********************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonGame_Source_Public_Actions_AsyncAction_PushContentToLayerForPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
