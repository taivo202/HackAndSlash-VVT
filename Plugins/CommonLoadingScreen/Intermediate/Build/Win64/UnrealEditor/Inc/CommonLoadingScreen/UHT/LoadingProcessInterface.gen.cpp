// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LoadingProcessInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLoadingProcessInterface() {}

// ********** Begin Cross Module References ********************************************************
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface();
COMMONLOADINGSCREEN_API UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_CommonLoadingScreen();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface ULoadingProcessInterface *********************************************
void ULoadingProcessInterface::StaticRegisterNativesULoadingProcessInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULoadingProcessInterface;
UClass* ULoadingProcessInterface::GetPrivateStaticClass()
{
	using TClass = ULoadingProcessInterface;
	if (!Z_Registration_Info_UClass_ULoadingProcessInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LoadingProcessInterface"),
			Z_Registration_Info_UClass_ULoadingProcessInterface.InnerSingleton,
			StaticRegisterNativesULoadingProcessInterface,
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
	return Z_Registration_Info_UClass_ULoadingProcessInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_ULoadingProcessInterface_NoRegister()
{
	return ULoadingProcessInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULoadingProcessInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoadingProcessInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILoadingProcessInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULoadingProcessInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_CommonLoadingScreen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingProcessInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadingProcessInterface_Statics::ClassParams = {
	&ULoadingProcessInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadingProcessInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadingProcessInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULoadingProcessInterface()
{
	if (!Z_Registration_Info_UClass_ULoadingProcessInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadingProcessInterface.OuterSingleton, Z_Construct_UClass_ULoadingProcessInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULoadingProcessInterface.OuterSingleton;
}
ULoadingProcessInterface::ULoadingProcessInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadingProcessInterface);
// ********** End Interface ULoadingProcessInterface ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h__Script_CommonLoadingScreen_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULoadingProcessInterface, ULoadingProcessInterface::StaticClass, TEXT("ULoadingProcessInterface"), &Z_Registration_Info_UClass_ULoadingProcessInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadingProcessInterface), 58282997U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h__Script_CommonLoadingScreen_3790061369(TEXT("/Script/CommonLoadingScreen"),
	Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h__Script_CommonLoadingScreen_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_iamatomic_Documents_Unreal_Projects_HackAndSlash_VoVanTai_Plugins_CommonLoadingScreen_Source_CommonLoadingScreen_Public_LoadingProcessInterface_h__Script_CommonLoadingScreen_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
