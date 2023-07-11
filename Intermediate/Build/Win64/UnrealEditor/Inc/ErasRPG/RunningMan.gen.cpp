// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ErasRPG/Public/Character/RunningMan.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunningMan() {}
// Cross Module References
	ERASRPG_API UClass* Z_Construct_UClass_ARunningMan_NoRegister();
	ERASRPG_API UClass* Z_Construct_UClass_ARunningMan();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ErasRPG();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ARunningMan::StaticRegisterNativesARunningMan()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARunningMan);
	UClass* Z_Construct_UClass_ARunningMan_NoRegister()
	{
		return ARunningMan::StaticClass();
	}
	struct Z_Construct_UClass_ARunningMan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErasContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ErasContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Capsule_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Capsule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpringArm;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunningMan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ErasRPG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunningMan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/RunningMan.h" },
		{ "ModuleRelativePath", "Public/Character/RunningMan.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunningMan_Statics::NewProp_ErasContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Character/RunningMan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARunningMan_Statics::NewProp_ErasContext = { "ErasContext", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunningMan, ErasContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunningMan_Statics::NewProp_ErasContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunningMan_Statics::NewProp_ErasContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunningMan_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/RunningMan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARunningMan_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunningMan, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunningMan_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunningMan_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunningMan_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/RunningMan.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ARunningMan_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARunningMan, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARunningMan_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARunningMan_Statics::NewProp_SpringArm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARunningMan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunningMan_Statics::NewProp_ErasContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunningMan_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARunningMan_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunningMan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunningMan>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARunningMan_Statics::ClassParams = {
		&ARunningMan::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARunningMan_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARunningMan_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARunningMan_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunningMan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunningMan()
	{
		if (!Z_Registration_Info_UClass_ARunningMan.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARunningMan.OuterSingleton, Z_Construct_UClass_ARunningMan_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARunningMan.OuterSingleton;
	}
	template<> ERASRPG_API UClass* StaticClass<ARunningMan>()
	{
		return ARunningMan::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunningMan);
	struct Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_Character_RunningMan_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_Character_RunningMan_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARunningMan, ARunningMan::StaticClass, TEXT("ARunningMan"), &Z_Registration_Info_UClass_ARunningMan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARunningMan), 2491112946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_Character_RunningMan_h_1203933785(TEXT("/Script/ErasRPG"),
		Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_Character_RunningMan_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_Character_RunningMan_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
