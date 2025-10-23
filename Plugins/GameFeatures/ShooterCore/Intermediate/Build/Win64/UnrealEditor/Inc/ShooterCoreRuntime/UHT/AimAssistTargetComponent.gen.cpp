// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/AimAssistTargetComponent.h"
#include "Input/IAimAssistTargetInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAimAssistTargetComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTaget_NoRegister();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetComponent();
SHOOTERCORERUNTIME_API UClass* Z_Construct_UClass_UAimAssistTargetComponent_NoRegister();
SHOOTERCORERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAimAssistTargetOptions();
UPackage* Z_Construct_UPackage__Script_ShooterCoreRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAimAssistTargetComponent ************************************************
void UAimAssistTargetComponent::StaticRegisterNativesUAimAssistTargetComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAimAssistTargetComponent;
UClass* UAimAssistTargetComponent::GetPrivateStaticClass()
{
	using TClass = UAimAssistTargetComponent;
	if (!Z_Registration_Info_UClass_UAimAssistTargetComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AimAssistTargetComponent"),
			Z_Registration_Info_UClass_UAimAssistTargetComponent.InnerSingleton,
			StaticRegisterNativesUAimAssistTargetComponent,
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
	return Z_Registration_Info_UClass_UAimAssistTargetComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAimAssistTargetComponent_NoRegister()
{
	return UAimAssistTargetComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAimAssistTargetComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This component can be added to any actor to have it register with the Aim Assist Target Manager.\n */" },
#endif
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Input/AimAssistTargetComponent.h" },
		{ "ModuleRelativePath", "Public/Input/AimAssistTargetComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This component can be added to any actor to have it register with the Aim Assist Target Manager." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetData_MetaData[] = {
		{ "Category", "AimAssistTargetComponent" },
		{ "ModuleRelativePath", "Public/Input/AimAssistTargetComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimAssistTargetComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAimAssistTargetComponent_Statics::NewProp_TargetData = { "TargetData", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAimAssistTargetComponent, TargetData), Z_Construct_UScriptStruct_FAimAssistTargetOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetData_MetaData), NewProp_TargetData_MetaData) }; // 872566557
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAimAssistTargetComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAimAssistTargetComponent_Statics::NewProp_TargetData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAimAssistTargetComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCapsuleComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterCoreRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAimAssistTargetComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAimAssistTaget_NoRegister, (int32)VTABLE_OFFSET(UAimAssistTargetComponent, IAimAssistTaget), false },  // 3421685443
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimAssistTargetComponent_Statics::ClassParams = {
	&UAimAssistTargetComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAimAssistTargetComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAimAssistTargetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAimAssistTargetComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAimAssistTargetComponent()
{
	if (!Z_Registration_Info_UClass_UAimAssistTargetComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimAssistTargetComponent.OuterSingleton, Z_Construct_UClass_UAimAssistTargetComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAimAssistTargetComponent.OuterSingleton;
}
UAimAssistTargetComponent::UAimAssistTargetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAimAssistTargetComponent);
UAimAssistTargetComponent::~UAimAssistTargetComponent() {}
// ********** End Class UAimAssistTargetComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h__Script_ShooterCoreRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAimAssistTargetComponent, UAimAssistTargetComponent::StaticClass, TEXT("UAimAssistTargetComponent"), &Z_Registration_Info_UClass_UAimAssistTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimAssistTargetComponent), 2333061974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h__Script_ShooterCoreRuntime_2911209207(TEXT("/Script/ShooterCoreRuntime"),
	Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h__Script_ShooterCoreRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_GameFeatures_ShooterCore_Source_ShooterCoreRuntime_Public_Input_AimAssistTargetComponent_h__Script_ShooterCoreRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
