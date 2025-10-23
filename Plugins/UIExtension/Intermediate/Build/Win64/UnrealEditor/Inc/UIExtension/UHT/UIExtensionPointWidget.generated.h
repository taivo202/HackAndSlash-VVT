// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/UIExtensionPointWidget.h"

#ifdef UIEXTENSION_UIExtensionPointWidget_generated_h
#error "UIExtensionPointWidget.generated.h already included, missing '#pragma once' in UIExtensionPointWidget.h"
#endif
#define UIEXTENSION_UIExtensionPointWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UUserWidget;

// ********** Begin Delegate FOnGetWidgetClassForData **********************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_27_DELEGATE \
static UIEXTENSION_API TSubclassOf<UUserWidget> FOnGetWidgetClassForData_DelegateWrapper(const FScriptDelegate& OnGetWidgetClassForData, UObject* DataItem);


// ********** End Delegate FOnGetWidgetClassForData ************************************************

// ********** Begin Delegate FOnConfigureWidgetForData *********************************************
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_28_DELEGATE \
static UIEXTENSION_API void FOnConfigureWidgetForData_DelegateWrapper(const FScriptDelegate& OnConfigureWidgetForData, UUserWidget* Widget, UObject* DataItem);


// ********** End Delegate FOnConfigureWidgetForData ***********************************************

// ********** Begin Class UUIExtensionPointWidget **************************************************
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointWidget_NoRegister();

#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUIExtensionPointWidget(); \
	friend struct Z_Construct_UClass_UUIExtensionPointWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UUIExtensionPointWidget, UDynamicEntryBoxBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UIExtension"), Z_Construct_UClass_UUIExtensionPointWidget_NoRegister) \
	DECLARE_SERIALIZER(UUIExtensionPointWidget)


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UUIExtensionPointWidget(UUIExtensionPointWidget&&) = delete; \
	UUIExtensionPointWidget(const UUIExtensionPointWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UIEXTENSION_API, UUIExtensionPointWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUIExtensionPointWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUIExtensionPointWidget) \
	UIEXTENSION_API virtual ~UUIExtensionPointWidget();


#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_20_PROLOG
#define FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UUIExtensionPointWidget;

// ********** End Class UUIExtensionPointWidget ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
