// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIExtensionPointWidget.h"
#include "GameplayTagContainer.h"
#include "UIExtensionSystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUIExtensionPointWidget() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointWidget();
UIEXTENSION_API UClass* Z_Construct_UClass_UUIExtensionPointWidget_NoRegister();
UIEXTENSION_API UEnum* Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch();
UIEXTENSION_API UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature();
UIEXTENSION_API UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature();
UIEXTENSION_API UScriptStruct* Z_Construct_UScriptStruct_FUIExtensionHandle();
UMG_API UClass* Z_Construct_UClass_UDynamicEntryBoxBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_UIExtension();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGetWidgetClassForData **********************************************
struct Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics
{
	struct UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms
	{
		UObject* DataItem;
		TSubclassOf<UUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataItem;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_DataItem = { "DataItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms, DataItem), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_DataItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointWidget, nullptr, "OnGetWidgetClassForData__DelegateSignature", Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
TSubclassOf<UUserWidget> UUIExtensionPointWidget::FOnGetWidgetClassForData_DelegateWrapper(const FScriptDelegate& OnGetWidgetClassForData, UObject* DataItem)
{
	struct UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms
	{
		UObject* DataItem;
		TSubclassOf<UUserWidget> ReturnValue;

		/** Constructor, initializes return property only **/
		UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	UIExtensionPointWidget_eventOnGetWidgetClassForData_Parms Parms;
	Parms.DataItem=DataItem;
	OnGetWidgetClassForData.ProcessDelegate<UObject>(&Parms);
	return Parms.ReturnValue;
}
// ********** End Delegate FOnGetWidgetClassForData ************************************************

// ********** Begin Delegate FOnConfigureWidgetForData *********************************************
struct Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics
{
	struct UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms
	{
		UUserWidget* Widget;
		UObject* DataItem;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataItem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_DataItem = { "DataItem", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms, DataItem), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::NewProp_DataItem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UUIExtensionPointWidget, nullptr, "OnConfigureWidgetForData__DelegateSignature", Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UUIExtensionPointWidget::FOnConfigureWidgetForData_DelegateWrapper(const FScriptDelegate& OnConfigureWidgetForData, UUserWidget* Widget, UObject* DataItem)
{
	struct UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms
	{
		UUserWidget* Widget;
		UObject* DataItem;
	};
	UIExtensionPointWidget_eventOnConfigureWidgetForData_Parms Parms;
	Parms.Widget=Widget;
	Parms.DataItem=DataItem;
	OnConfigureWidgetForData.ProcessDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnConfigureWidgetForData ***********************************************

// ********** Begin Class UUIExtensionPointWidget **************************************************
void UUIExtensionPointWidget::StaticRegisterNativesUUIExtensionPointWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUIExtensionPointWidget;
UClass* UUIExtensionPointWidget::GetPrivateStaticClass()
{
	using TClass = UUIExtensionPointWidget;
	if (!Z_Registration_Info_UClass_UUIExtensionPointWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UIExtensionPointWidget"),
			Z_Registration_Info_UClass_UUIExtensionPointWidget.InnerSingleton,
			StaticRegisterNativesUUIExtensionPointWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UUIExtensionPointWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UUIExtensionPointWidget_NoRegister()
{
	return UUIExtensionPointWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUIExtensionPointWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A slot that defines a location in a layout, where content can be added later\n */" },
#endif
		{ "IncludePath", "Widgets/UIExtensionPointWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A slot that defines a location in a layout, where content can be added later" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionPointTag_MetaData[] = {
		{ "Category", "UI Extension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The tag that defines this extension point */" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The tag that defines this extension point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionPointTagMatch_MetaData[] = {
		{ "Category", "UI Extension" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How exactly does the extension need to match the extension point tag. */" },
#endif
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How exactly does the extension need to match the extension point tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataClasses_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GetWidgetClassForData_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigureWidgetForData_MetaData[] = {
		{ "Category", "UI Extension" },
		{ "IsBindableEvent", "True" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtensionMapping_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/UIExtensionPointWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionPointTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExtensionPointTagMatch_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExtensionPointTagMatch;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DataClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DataClasses;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_GetWidgetClassForData;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_ConfigureWidgetForData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExtensionMapping_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtensionMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ExtensionMapping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature, "OnConfigureWidgetForData__DelegateSignature" }, // 3759775703
		{ &Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature, "OnGetWidgetClassForData__DelegateSignature" }, // 2891820068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIExtensionPointWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTag = { "ExtensionPointTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ExtensionPointTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionPointTag_MetaData), NewProp_ExtensionPointTag_MetaData) }; // 133831994
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch = { "ExtensionPointTagMatch", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ExtensionPointTagMatch), Z_Construct_UEnum_UIExtension_EUIExtensionPointMatch, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionPointTagMatch_MetaData), NewProp_ExtensionPointTagMatch_MetaData) }; // 3152702222
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses_Inner = { "DataClasses", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses = { "DataClasses", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIExtensionPointWidget, DataClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataClasses_MetaData), NewProp_DataClasses_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_GetWidgetClassForData = { "GetWidgetClassForData", nullptr, (EPropertyFlags)0x0020080000080015, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIExtensionPointWidget, GetWidgetClassForData), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnGetWidgetClassForData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GetWidgetClassForData_MetaData), NewProp_GetWidgetClassForData_MetaData) }; // 2891820068
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ConfigureWidgetForData = { "ConfigureWidgetForData", nullptr, (EPropertyFlags)0x0020080000080015, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ConfigureWidgetForData), Z_Construct_UDelegateFunction_UUIExtensionPointWidget_OnConfigureWidgetForData__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigureWidgetForData_MetaData), NewProp_ConfigureWidgetForData_MetaData) }; // 3759775703
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_ValueProp = { "ExtensionMapping", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_Key_KeyProp = { "ExtensionMapping_Key", nullptr, (EPropertyFlags)0x0100000000080008, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIExtensionHandle, METADATA_PARAMS(0, nullptr) }; // 2246443122
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping = { "ExtensionMapping", nullptr, (EPropertyFlags)0x0124088000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUIExtensionPointWidget, ExtensionMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtensionMapping_MetaData), NewProp_ExtensionMapping_MetaData) }; // 2246443122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIExtensionPointWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionPointTagMatch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_DataClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_GetWidgetClassForData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ConfigureWidgetForData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIExtensionPointWidget_Statics::NewProp_ExtensionMapping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUIExtensionPointWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDynamicEntryBoxBase,
	(UObject* (*)())Z_Construct_UPackage__Script_UIExtension,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIExtensionPointWidget_Statics::ClassParams = {
	&UUIExtensionPointWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUIExtensionPointWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUIExtensionPointWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUIExtensionPointWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUIExtensionPointWidget()
{
	if (!Z_Registration_Info_UClass_UUIExtensionPointWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIExtensionPointWidget.OuterSingleton, Z_Construct_UClass_UUIExtensionPointWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUIExtensionPointWidget.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUIExtensionPointWidget);
UUIExtensionPointWidget::~UUIExtensionPointWidget() {}
// ********** End Class UUIExtensionPointWidget ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h__Script_UIExtension_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUIExtensionPointWidget, UUIExtensionPointWidget::StaticClass, TEXT("UUIExtensionPointWidget"), &Z_Registration_Info_UClass_UUIExtensionPointWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIExtensionPointWidget), 2067266983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h__Script_UIExtension_1660965796(TEXT("/Script/UIExtension"),
	Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h__Script_UIExtension_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_UIExtension_Source_Public_Widgets_UIExtensionPointWidget_h__Script_UIExtension_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
