// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ErasRPG/Public/ErasCharacter/MyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCharacter() {}
// Cross Module References
	ERASRPG_API UClass* Z_Construct_UClass_Artic_NoRegister();
	ERASRPG_API UClass* Z_Construct_UClass_Artic();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ErasRPG();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(Artic::execSetCanJump)
	{
		P_GET_UBOOL(Z_Param_bCan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanJump(Z_Param_bCan);
		P_NATIVE_END;
	}
	void Artic::StaticRegisterNativesArtic()
	{
		UClass* Class = Artic::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCanJump", &Artic::execSetCanJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Artic_SetCanJump_Statics
	{
		struct rtic_eventSetCanJump_Parms
		{
			bool bCan;
		};
		static void NewProp_bCan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCan;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_Artic_SetCanJump_Statics::NewProp_bCan_SetBit(void* Obj)
	{
		((rtic_eventSetCanJump_Parms*)Obj)->bCan = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_Artic_SetCanJump_Statics::NewProp_bCan = { "bCan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(rtic_eventSetCanJump_Parms), &Z_Construct_UFunction_Artic_SetCanJump_Statics::NewProp_bCan_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_Artic_SetCanJump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_Artic_SetCanJump_Statics::NewProp_bCan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Artic_SetCanJump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Artic_SetCanJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Artic, nullptr, "SetCanJump", nullptr, nullptr, sizeof(Z_Construct_UFunction_Artic_SetCanJump_Statics::rtic_eventSetCanJump_Parms), Z_Construct_UFunction_Artic_SetCanJump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_Artic_SetCanJump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Artic_SetCanJump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Artic_SetCanJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Artic_SetCanJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Artic_SetCanJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Artic);
	UClass* Z_Construct_UClass_Artic_NoRegister()
	{
		return Artic::StaticClass();
	}
	struct Z_Construct_UClass_Artic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErasContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ErasContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[];
#endif
		static void NewProp_bCanJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Camera;
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
	UObject* (*const Z_Construct_UClass_Artic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ErasRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Artic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Artic_SetCanJump, "SetCanJump" }, // 4256509117
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ErasCharacter/MyCharacter.h" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_ErasContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_ErasContext = { "ErasContext", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Artic, ErasContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_ErasContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_ErasContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Artic, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_MovementAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_MovementAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Artic, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Artic, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_bCanJump_MetaData[] = {
		{ "Category", "rtic" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_Artic_Statics::NewProp_bCanJump_SetBit(void* Obj)
	{
		((Artic*)Obj)->bCanJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Artic), &Z_Construct_UClass_Artic_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_bCanJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_bCanJump_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Artic, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_Capsule_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_Capsule = { "Capsule", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Artic, Capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_Capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_Capsule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Artic_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ErasCharacter/MyCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_Artic_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0044000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Artic, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::NewProp_SpringArm_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Artic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_ErasContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_MovementAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_bCanJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_Capsule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Artic_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Artic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Artic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Artic_Statics::ClassParams = {
		&Artic::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Artic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Artic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Artic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Artic()
	{
		if (!Z_Registration_Info_UClass_Artic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Artic.OuterSingleton, Z_Construct_UClass_Artic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Artic.OuterSingleton;
	}
	template<> ERASRPG_API UClass* StaticClass<Artic>()
	{
		return Artic::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Artic);
	struct Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_ErasCharacter_MyCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_ErasCharacter_MyCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Artic, Artic::StaticClass, TEXT("Artic"), &Z_Registration_Info_UClass_Artic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Artic), 865784801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_ErasCharacter_MyCharacter_h_4265570729(TEXT("/Script/ErasRPG"),
		Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_ErasCharacter_MyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ErasRPG_Source_ErasRPG_Public_ErasCharacter_MyCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
