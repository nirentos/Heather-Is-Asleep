// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HIA_UE5_Project/HIA_UE5_ProjectGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHIA_UE5_ProjectGameModeBase() {}
// Cross Module References
	HIA_UE5_PROJECT_API UClass* Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_NoRegister();
	HIA_UE5_PROJECT_API UClass* Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HIA_UE5_Project();
// End Cross Module References
	void AHIA_UE5_ProjectGameModeBase::StaticRegisterNativesAHIA_UE5_ProjectGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHIA_UE5_ProjectGameModeBase);
	UClass* Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_NoRegister()
	{
		return AHIA_UE5_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HIA_UE5_Project,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HIA_UE5_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "HIA_UE5_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHIA_UE5_ProjectGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics::ClassParams = {
		&AHIA_UE5_ProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AHIA_UE5_ProjectGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHIA_UE5_ProjectGameModeBase.OuterSingleton, Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHIA_UE5_ProjectGameModeBase.OuterSingleton;
	}
	template<> HIA_UE5_PROJECT_API UClass* StaticClass<AHIA_UE5_ProjectGameModeBase>()
	{
		return AHIA_UE5_ProjectGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHIA_UE5_ProjectGameModeBase);
	struct Z_CompiledInDeferFile_FID_HIA_UE5_Project_Source_HIA_UE5_Project_HIA_UE5_ProjectGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HIA_UE5_Project_Source_HIA_UE5_Project_HIA_UE5_ProjectGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHIA_UE5_ProjectGameModeBase, AHIA_UE5_ProjectGameModeBase::StaticClass, TEXT("AHIA_UE5_ProjectGameModeBase"), &Z_Registration_Info_UClass_AHIA_UE5_ProjectGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHIA_UE5_ProjectGameModeBase), 1067968397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HIA_UE5_Project_Source_HIA_UE5_Project_HIA_UE5_ProjectGameModeBase_h_549131719(TEXT("/Script/HIA_UE5_Project"),
		Z_CompiledInDeferFile_FID_HIA_UE5_Project_Source_HIA_UE5_Project_HIA_UE5_ProjectGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HIA_UE5_Project_Source_HIA_UE5_Project_HIA_UE5_ProjectGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
