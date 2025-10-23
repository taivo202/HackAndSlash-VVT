// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModularGameState() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameState_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayActors();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AModularGameStateBase ****************************************************
void AModularGameStateBase::StaticRegisterNativesAModularGameStateBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AModularGameStateBase;
UClass* AModularGameStateBase::GetPrivateStaticClass()
{
	using TClass = AModularGameStateBase;
	if (!Z_Registration_Info_UClass_AModularGameStateBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModularGameStateBase"),
			Z_Registration_Info_UClass_AModularGameStateBase.InnerSingleton,
			StaticRegisterNativesAModularGameStateBase,
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
	return Z_Registration_Info_UClass_AModularGameStateBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AModularGameStateBase_NoRegister()
{
	return AModularGameStateBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AModularGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameModeBase */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameModeBase" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams = {
	&AModularGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008803A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularGameStateBase()
{
	if (!Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton, Z_Construct_UClass_AModularGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularGameStateBase.OuterSingleton;
}
AModularGameStateBase::AModularGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameStateBase);
AModularGameStateBase::~AModularGameStateBase() {}
// ********** End Class AModularGameStateBase ******************************************************

// ********** Begin Class AModularGameState ********************************************************
void AModularGameState::StaticRegisterNativesAModularGameState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AModularGameState;
UClass* AModularGameState::GetPrivateStaticClass()
{
	using TClass = AModularGameState;
	if (!Z_Registration_Info_UClass_AModularGameState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModularGameState"),
			Z_Registration_Info_UClass_AModularGameState.InnerSingleton,
			StaticRegisterNativesAModularGameState,
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
	return Z_Registration_Info_UClass_AModularGameState.InnerSingleton;
}
UClass* Z_Construct_UClass_AModularGameState_NoRegister()
{
	return AModularGameState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AModularGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pair this with a ModularGameState */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModularGameState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ModularGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pair this with a ModularGameState" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModularGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AModularGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameState,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AModularGameState_Statics::ClassParams = {
	&AModularGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008803A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AModularGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AModularGameState()
{
	if (!Z_Registration_Info_UClass_AModularGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModularGameState.OuterSingleton, Z_Construct_UClass_AModularGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AModularGameState.OuterSingleton;
}
AModularGameState::AModularGameState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AModularGameState);
AModularGameState::~AModularGameState() {}
// ********** End Class AModularGameState **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h__Script_ModularGameplayActors_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AModularGameStateBase, AModularGameStateBase::StaticClass, TEXT("AModularGameStateBase"), &Z_Registration_Info_UClass_AModularGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameStateBase), 3001034334U) },
		{ Z_Construct_UClass_AModularGameState, AModularGameState::StaticClass, TEXT("AModularGameState"), &Z_Registration_Info_UClass_AModularGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModularGameState), 343144844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h__Script_ModularGameplayActors_2542423640(TEXT("/Script/ModularGameplayActors"),
	Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h__Script_ModularGameplayActors_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_ModularGameplayActors_Source_ModularGameplayActors_Public_ModularGameState_h__Script_ModularGameplayActors_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
