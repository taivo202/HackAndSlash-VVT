// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterTestAsyncMessageTestActor.h"
#include "AsyncMessageId.h"
#include "GameplayTagContainer.h"
#include "StructUtils/InstancedStruct.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShooterTestAsyncMessageTestActor() {}

// ********** Begin Cross Module References ********************************************************
ASYNCMESSAGESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncMessageId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETickingGroup();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AAsyncColorChangeBroadcastActor();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AAsyncColorChangeBroadcastActor_NoRegister();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AColorChangingTestListener();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AColorChangingTestListener_NoRegister();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AHeavyPerformanceBroadcastor();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AHeavyPerformanceBroadcastor_NoRegister();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AHeavyPerformanceListener();
SHOOTERTESTSRUNTIME_API UClass* Z_Construct_UClass_AHeavyPerformanceListener_NoRegister();
SHOOTERTESTSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FColorChangingMessage();
SHOOTERTESTSRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTestHeavyMessage();
UPackage* Z_Construct_UPackage__Script_ShooterTestsRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FColorChangingMessage *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FColorChangingMessage;
class UScriptStruct* FColorChangingMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FColorChangingMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FColorChangingMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FColorChangingMessage, (UObject*)Z_Construct_UPackage__Script_ShooterTestsRuntime(), TEXT("ColorChangingMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FColorChangingMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FColorChangingMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredColorToChange_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredColorToChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FColorChangingMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorChangingMessage_Statics::NewProp_DesiredColorToChange = { "DesiredColorToChange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorChangingMessage, DesiredColorToChange), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredColorToChange_MetaData), NewProp_DesiredColorToChange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorChangingMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorChangingMessage_Statics::NewProp_DesiredColorToChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorChangingMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorChangingMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterTestsRuntime,
	nullptr,
	&NewStructOps,
	"ColorChangingMessage",
	Z_Construct_UScriptStruct_FColorChangingMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorChangingMessage_Statics::PropPointers),
	sizeof(FColorChangingMessage),
	alignof(FColorChangingMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorChangingMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FColorChangingMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FColorChangingMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FColorChangingMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FColorChangingMessage.InnerSingleton, Z_Construct_UScriptStruct_FColorChangingMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FColorChangingMessage.InnerSingleton;
}
// ********** End ScriptStruct FColorChangingMessage ***********************************************

// ********** Begin Class AAsyncColorChangeBroadcastActor ******************************************
void AAsyncColorChangeBroadcastActor::StaticRegisterNativesAAsyncColorChangeBroadcastActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor;
UClass* AAsyncColorChangeBroadcastActor::GetPrivateStaticClass()
{
	using TClass = AAsyncColorChangeBroadcastActor;
	if (!Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncColorChangeBroadcastActor"),
			Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor.InnerSingleton,
			StaticRegisterNativesAAsyncColorChangeBroadcastActor,
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
	return Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAsyncColorChangeBroadcastActor_NoRegister()
{
	return AAsyncColorChangeBroadcastActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A test actor which will spawn a task outside of the game thread to\n * broadcast different color messages\n */" },
#endif
		{ "IncludePath", "ShooterTestAsyncMessageTestActor.h" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A test actor which will spawn a task outside of the game thread to\nbroadcast different color messages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorChangeData_MetaData[] = {
		{ "BaseStruct", "/Script/ShooterTestsRuntime.ColorChangingMessage" },
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMessageToBroadcast_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagToBroadcastA_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagToBroadcastB_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBroadcasts_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorMessageBroadcastFrequency_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagBroadcastFrequency_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorChangeData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorMessageToBroadcast;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagToBroadcastA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagToBroadcastB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBroadcasts;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ColorMessageBroadcastFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GameplayTagBroadcastFrequency;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAsyncColorChangeBroadcastActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_ColorChangeData = { "ColorChangeData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsyncColorChangeBroadcastActor, ColorChangeData), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorChangeData_MetaData), NewProp_ColorChangeData_MetaData) }; // 1627169465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_ColorMessageToBroadcast = { "ColorMessageToBroadcast", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsyncColorChangeBroadcastActor, ColorMessageToBroadcast), Z_Construct_UScriptStruct_FAsyncMessageId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMessageToBroadcast_MetaData), NewProp_ColorMessageToBroadcast_MetaData) }; // 832998718
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_GameplayTagToBroadcastA = { "GameplayTagToBroadcastA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsyncColorChangeBroadcastActor, GameplayTagToBroadcastA), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagToBroadcastA_MetaData), NewProp_GameplayTagToBroadcastA_MetaData) }; // 133831994
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_GameplayTagToBroadcastB = { "GameplayTagToBroadcastB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsyncColorChangeBroadcastActor, GameplayTagToBroadcastB), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagToBroadcastB_MetaData), NewProp_GameplayTagToBroadcastB_MetaData) }; // 133831994
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_NumBroadcasts = { "NumBroadcasts", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsyncColorChangeBroadcastActor, NumBroadcasts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBroadcasts_MetaData), NewProp_NumBroadcasts_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_ColorMessageBroadcastFrequency = { "ColorMessageBroadcastFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsyncColorChangeBroadcastActor, ColorMessageBroadcastFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorMessageBroadcastFrequency_MetaData), NewProp_ColorMessageBroadcastFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_GameplayTagBroadcastFrequency = { "GameplayTagBroadcastFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAsyncColorChangeBroadcastActor, GameplayTagBroadcastFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagBroadcastFrequency_MetaData), NewProp_GameplayTagBroadcastFrequency_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_ColorChangeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_ColorMessageToBroadcast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_GameplayTagToBroadcastA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_GameplayTagToBroadcastB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_NumBroadcasts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_ColorMessageBroadcastFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::NewProp_GameplayTagBroadcastFrequency,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterTestsRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::ClassParams = {
	&AAsyncColorChangeBroadcastActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAsyncColorChangeBroadcastActor()
{
	if (!Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor.OuterSingleton, Z_Construct_UClass_AAsyncColorChangeBroadcastActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAsyncColorChangeBroadcastActor);
AAsyncColorChangeBroadcastActor::~AAsyncColorChangeBroadcastActor() {}
// ********** End Class AAsyncColorChangeBroadcastActor ********************************************

// ********** Begin Class AColorChangingTestListener ***********************************************
void AColorChangingTestListener::StaticRegisterNativesAColorChangingTestListener()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AColorChangingTestListener;
UClass* AColorChangingTestListener::GetPrivateStaticClass()
{
	using TClass = AColorChangingTestListener;
	if (!Z_Registration_Info_UClass_AColorChangingTestListener.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ColorChangingTestListener"),
			Z_Registration_Info_UClass_AColorChangingTestListener.InnerSingleton,
			StaticRegisterNativesAColorChangingTestListener,
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
	return Z_Registration_Info_UClass_AColorChangingTestListener.InnerSingleton;
}
UClass* Z_Construct_UClass_AColorChangingTestListener_NoRegister()
{
	return AColorChangingTestListener::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AColorChangingTestListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An actor which will change the color of its static mesh\n * in response to an async message that it listens to\n */" },
#endif
		{ "IncludePath", "ShooterTestAsyncMessageTestActor.h" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An actor which will change the color of its static mesh\nin response to an async message that it listens to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialColorParamName_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMessageBinding_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagToBindTo_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bListenForParentTag_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSpawnTaskOnOtherThread_MetaData[] = {
		{ "Category", "Test" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Test receiving and binding messages on another thread\n" },
#endif
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Test receiving and binding messages on another thread" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialColorParamName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideMessageBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TagToBindTo;
	static void NewProp_bListenForParentTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bListenForParentTag;
	static void NewProp_bShouldSpawnTaskOnOtherThread_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSpawnTaskOnOtherThread;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColorChangingTestListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AColorChangingTestListener, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_MaterialColorParamName = { "MaterialColorParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AColorChangingTestListener, MaterialColorParamName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialColorParamName_MetaData), NewProp_MaterialColorParamName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_OverrideMessageBinding = { "OverrideMessageBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AColorChangingTestListener, OverrideMessageBinding), Z_Construct_UScriptStruct_FAsyncMessageId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMessageBinding_MetaData), NewProp_OverrideMessageBinding_MetaData) }; // 832998718
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_TagToBindTo = { "TagToBindTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AColorChangingTestListener, TagToBindTo), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagToBindTo_MetaData), NewProp_TagToBindTo_MetaData) }; // 133831994
void Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bListenForParentTag_SetBit(void* Obj)
{
	((AColorChangingTestListener*)Obj)->bListenForParentTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bListenForParentTag = { "bListenForParentTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AColorChangingTestListener), &Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bListenForParentTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bListenForParentTag_MetaData), NewProp_bListenForParentTag_MetaData) };
void Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bShouldSpawnTaskOnOtherThread_SetBit(void* Obj)
{
	((AColorChangingTestListener*)Obj)->bShouldSpawnTaskOnOtherThread = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bShouldSpawnTaskOnOtherThread = { "bShouldSpawnTaskOnOtherThread", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AColorChangingTestListener), &Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bShouldSpawnTaskOnOtherThread_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldSpawnTaskOnOtherThread_MetaData), NewProp_bShouldSpawnTaskOnOtherThread_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AColorChangingTestListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_MaterialColorParamName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_OverrideMessageBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_TagToBindTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bListenForParentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColorChangingTestListener_Statics::NewProp_bShouldSpawnTaskOnOtherThread,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AColorChangingTestListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AColorChangingTestListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterTestsRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AColorChangingTestListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AColorChangingTestListener_Statics::ClassParams = {
	&AColorChangingTestListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AColorChangingTestListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AColorChangingTestListener_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AColorChangingTestListener_Statics::Class_MetaDataParams), Z_Construct_UClass_AColorChangingTestListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AColorChangingTestListener()
{
	if (!Z_Registration_Info_UClass_AColorChangingTestListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AColorChangingTestListener.OuterSingleton, Z_Construct_UClass_AColorChangingTestListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AColorChangingTestListener.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AColorChangingTestListener);
AColorChangingTestListener::~AColorChangingTestListener() {}
// ********** End Class AColorChangingTestListener *************************************************

// ********** Begin ScriptStruct FTestHeavyMessage *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FTestHeavyMessage;
class UScriptStruct* FTestHeavyMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FTestHeavyMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FTestHeavyMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestHeavyMessage, (UObject*)Z_Construct_UPackage__Script_ShooterTestsRuntime(), TEXT("TestHeavyMessage"));
	}
	return Z_Registration_Info_UScriptStruct_FTestHeavyMessage.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FTestHeavyMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredColorToChange_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmountToRotate_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredColorToChange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmountToRotate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestHeavyMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::NewProp_DesiredColorToChange = { "DesiredColorToChange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestHeavyMessage, DesiredColorToChange), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredColorToChange_MetaData), NewProp_DesiredColorToChange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::NewProp_AmountToRotate = { "AmountToRotate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTestHeavyMessage, AmountToRotate), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmountToRotate_MetaData), NewProp_AmountToRotate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::NewProp_DesiredColorToChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::NewProp_AmountToRotate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterTestsRuntime,
	nullptr,
	&NewStructOps,
	"TestHeavyMessage",
	Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::PropPointers),
	sizeof(FTestHeavyMessage),
	alignof(FTestHeavyMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTestHeavyMessage()
{
	if (!Z_Registration_Info_UScriptStruct_FTestHeavyMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FTestHeavyMessage.InnerSingleton, Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FTestHeavyMessage.InnerSingleton;
}
// ********** End ScriptStruct FTestHeavyMessage ***************************************************

// ********** Begin Class AHeavyPerformanceBroadcastor *********************************************
void AHeavyPerformanceBroadcastor::StaticRegisterNativesAHeavyPerformanceBroadcastor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor;
UClass* AHeavyPerformanceBroadcastor::GetPrivateStaticClass()
{
	using TClass = AHeavyPerformanceBroadcastor;
	if (!Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeavyPerformanceBroadcastor"),
			Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor.InnerSingleton,
			StaticRegisterNativesAHeavyPerformanceBroadcastor,
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
	return Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHeavyPerformanceBroadcastor_NoRegister()
{
	return AHeavyPerformanceBroadcastor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This is an actor which will queue a message for broadcast every single tick.\n */" },
#endif
		{ "IncludePath", "ShooterTestAsyncMessageTestActor.h" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is an actor which will queue a message for broadcast every single tick." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageToQueue_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessagePayloadToQueue_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfTimesToQueue_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomTickGroup_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageToQueue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessagePayloadToQueue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfTimesToQueue;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomTickGroup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeavyPerformanceBroadcastor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceBroadcastor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_MessageToQueue = { "MessageToQueue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceBroadcastor, MessageToQueue), Z_Construct_UScriptStruct_FAsyncMessageId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageToQueue_MetaData), NewProp_MessageToQueue_MetaData) }; // 832998718
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_MessagePayloadToQueue = { "MessagePayloadToQueue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceBroadcastor, MessagePayloadToQueue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessagePayloadToQueue_MetaData), NewProp_MessagePayloadToQueue_MetaData) }; // 1627169465
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_NumberOfTimesToQueue = { "NumberOfTimesToQueue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceBroadcastor, NumberOfTimesToQueue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfTimesToQueue_MetaData), NewProp_NumberOfTimesToQueue_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_CustomTickGroup = { "CustomTickGroup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceBroadcastor, CustomTickGroup), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomTickGroup_MetaData), NewProp_CustomTickGroup_MetaData) }; // 3616902692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_MessageToQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_MessagePayloadToQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_NumberOfTimesToQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::NewProp_CustomTickGroup,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterTestsRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::ClassParams = {
	&AHeavyPerformanceBroadcastor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeavyPerformanceBroadcastor()
{
	if (!Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor.OuterSingleton, Z_Construct_UClass_AHeavyPerformanceBroadcastor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeavyPerformanceBroadcastor);
AHeavyPerformanceBroadcastor::~AHeavyPerformanceBroadcastor() {}
// ********** End Class AHeavyPerformanceBroadcastor ***********************************************

// ********** Begin Class AHeavyPerformanceListener ************************************************
void AHeavyPerformanceListener::StaticRegisterNativesAHeavyPerformanceListener()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHeavyPerformanceListener;
UClass* AHeavyPerformanceListener::GetPrivateStaticClass()
{
	using TClass = AHeavyPerformanceListener;
	if (!Z_Registration_Info_UClass_AHeavyPerformanceListener.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HeavyPerformanceListener"),
			Z_Registration_Info_UClass_AHeavyPerformanceListener.InnerSingleton,
			StaticRegisterNativesAHeavyPerformanceListener,
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
	return Z_Registration_Info_UClass_AHeavyPerformanceListener.InnerSingleton;
}
UClass* Z_Construct_UClass_AHeavyPerformanceListener_NoRegister()
{
	return AHeavyPerformanceListener::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHeavyPerformanceListener_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ShooterTestAsyncMessageTestActor.h" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "Test" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageToListenFor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupToListenFor_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/ShooterTestAsyncMessageTestActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MessageToListenFor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GroupToListenFor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeavyPerformanceListener>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeavyPerformanceListener_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceListener, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeavyPerformanceListener_Statics::NewProp_MessageToListenFor = { "MessageToListenFor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceListener, MessageToListenFor), Z_Construct_UScriptStruct_FAsyncMessageId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageToListenFor_MetaData), NewProp_MessageToListenFor_MetaData) }; // 832998718
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeavyPerformanceListener_Statics::NewProp_GroupToListenFor = { "GroupToListenFor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHeavyPerformanceListener, GroupToListenFor), Z_Construct_UEnum_Engine_ETickingGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupToListenFor_MetaData), NewProp_GroupToListenFor_MetaData) }; // 3616902692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeavyPerformanceListener_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceListener_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceListener_Statics::NewProp_MessageToListenFor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeavyPerformanceListener_Statics::NewProp_GroupToListenFor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceListener_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHeavyPerformanceListener_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterTestsRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceListener_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeavyPerformanceListener_Statics::ClassParams = {
	&AHeavyPerformanceListener::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHeavyPerformanceListener_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceListener_Statics::PropPointers),
	0,
	0x008001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHeavyPerformanceListener_Statics::Class_MetaDataParams), Z_Construct_UClass_AHeavyPerformanceListener_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHeavyPerformanceListener()
{
	if (!Z_Registration_Info_UClass_AHeavyPerformanceListener.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeavyPerformanceListener.OuterSingleton, Z_Construct_UClass_AHeavyPerformanceListener_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHeavyPerformanceListener.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHeavyPerformanceListener);
AHeavyPerformanceListener::~AHeavyPerformanceListener() {}
// ********** End Class AHeavyPerformanceListener **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestAsyncMessageTestActor_h__Script_ShooterTestsRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FColorChangingMessage::StaticStruct, Z_Construct_UScriptStruct_FColorChangingMessage_Statics::NewStructOps, TEXT("ColorChangingMessage"), &Z_Registration_Info_UScriptStruct_FColorChangingMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FColorChangingMessage), 2165070200U) },
		{ FTestHeavyMessage::StaticStruct, Z_Construct_UScriptStruct_FTestHeavyMessage_Statics::NewStructOps, TEXT("TestHeavyMessage"), &Z_Registration_Info_UScriptStruct_FTestHeavyMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTestHeavyMessage), 1179023460U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAsyncColorChangeBroadcastActor, AAsyncColorChangeBroadcastActor::StaticClass, TEXT("AAsyncColorChangeBroadcastActor"), &Z_Registration_Info_UClass_AAsyncColorChangeBroadcastActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAsyncColorChangeBroadcastActor), 723166803U) },
		{ Z_Construct_UClass_AColorChangingTestListener, AColorChangingTestListener::StaticClass, TEXT("AColorChangingTestListener"), &Z_Registration_Info_UClass_AColorChangingTestListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AColorChangingTestListener), 4266444858U) },
		{ Z_Construct_UClass_AHeavyPerformanceBroadcastor, AHeavyPerformanceBroadcastor::StaticClass, TEXT("AHeavyPerformanceBroadcastor"), &Z_Registration_Info_UClass_AHeavyPerformanceBroadcastor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeavyPerformanceBroadcastor), 235619865U) },
		{ Z_Construct_UClass_AHeavyPerformanceListener, AHeavyPerformanceListener::StaticClass, TEXT("AHeavyPerformanceListener"), &Z_Registration_Info_UClass_AHeavyPerformanceListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeavyPerformanceListener), 1950403477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestAsyncMessageTestActor_h__Script_ShooterTestsRuntime_1075732325(TEXT("/Script/ShooterTestsRuntime"),
	Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestAsyncMessageTestActor_h__Script_ShooterTestsRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestAsyncMessageTestActor_h__Script_ShooterTestsRuntime_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestAsyncMessageTestActor_h__Script_ShooterTestsRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterTests_Source_ShooterTestsRuntime_Private_ShooterTestAsyncMessageTestActor_h__Script_ShooterTestsRuntime_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
