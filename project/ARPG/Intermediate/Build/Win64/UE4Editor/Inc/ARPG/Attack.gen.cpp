// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Attack/Public/Attack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttack() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAttack_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAttack();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UScriptStruct* Z_Construct_UScriptStruct_FDamageSpec();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAttack::execGetCombo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCombo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttack::execGetDamageSpec)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDamageSpec*)Z_Param__Result=P_THIS->GetDamageSpec();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttack::execGetSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttack::execReset)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAttack::execUse)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Use(Z_Param_Owner);
		P_NATIVE_END;
	}
	void UAttack::StaticRegisterNativesUAttack()
	{
		UClass* Class = UAttack::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCombo", &UAttack::execGetCombo },
			{ "GetDamageSpec", &UAttack::execGetDamageSpec },
			{ "GetSpeed", &UAttack::execGetSpeed },
			{ "Reset", &UAttack::execReset },
			{ "Use", &UAttack::execUse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAttack_GetCombo_Statics
	{
		struct Attack_eventGetCombo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAttack_GetCombo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Attack_eventGetCombo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttack_GetCombo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttack_GetCombo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttack_GetCombo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttack_GetCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttack, nullptr, "GetCombo", nullptr, nullptr, sizeof(Attack_eventGetCombo_Parms), Z_Construct_UFunction_UAttack_GetCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_GetCombo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttack_GetCombo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_GetCombo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttack_GetCombo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttack_GetCombo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttack_GetDamageSpec_Statics
	{
		struct Attack_eventGetDamageSpec_Parms
		{
			FDamageSpec ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Attack_eventGetDamageSpec_Parms, ReturnValue), Z_Construct_UScriptStruct_FDamageSpec, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttack, nullptr, "GetDamageSpec", nullptr, nullptr, sizeof(Attack_eventGetDamageSpec_Parms), Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttack_GetDamageSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttack_GetDamageSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttack_GetSpeed_Statics
	{
		struct Attack_eventGetSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAttack_GetSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Attack_eventGetSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttack_GetSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttack_GetSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttack_GetSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttack_GetSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttack, nullptr, "GetSpeed", nullptr, nullptr, sizeof(Attack_eventGetSpeed_Parms), Z_Construct_UFunction_UAttack_GetSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_GetSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttack_GetSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_GetSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttack_GetSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttack_GetSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttack_Reset_Statics
	{
		struct Attack_eventReset_Parms
		{
			USkeletalMeshComponent* Owner;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttack_Reset_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttack_Reset_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Attack_eventReset_Parms, Owner), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttack_Reset_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_Reset_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttack_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttack_Reset_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttack_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttack_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttack, nullptr, "Reset", nullptr, nullptr, sizeof(Attack_eventReset_Parms), Z_Construct_UFunction_UAttack_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttack_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttack_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttack_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAttack_Use_Statics
	{
		struct Attack_eventUse_Parms
		{
			USkeletalMeshComponent* Owner;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttack_Use_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAttack_Use_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Attack_eventUse_Parms, Owner), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAttack_Use_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_Use_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttack_Use_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttack_Use_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAttack_Use_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttack_Use_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAttack, nullptr, "Use", nullptr, nullptr, sizeof(Attack_eventUse_Parms), Z_Construct_UFunction_UAttack_Use_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_Use_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAttack_Use_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttack_Use_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAttack_Use()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAttack_Use_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAttack_NoRegister()
	{
		return UAttack::StaticClass();
	}
	struct Z_Construct_UClass_UAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anims_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anims_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Anims;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Combo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Combo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAttack_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttack_GetCombo, "GetCombo" }, // 2958499810
		{ &Z_Construct_UFunction_UAttack_GetDamageSpec, "GetDamageSpec" }, // 811297715
		{ &Z_Construct_UFunction_UAttack_GetSpeed, "GetSpeed" }, // 2073716371
		{ &Z_Construct_UFunction_UAttack_Reset, "Reset" }, // 4208445568
		{ &Z_Construct_UFunction_UAttack_Use, "Use" }, // 1210731876
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Attack/Public/Attack.h" },
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttack_Statics::NewProp_Anims_Inner = { "Anims", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttack_Statics::NewProp_Anims_MetaData[] = {
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttack_Statics::NewProp_Anims = { "Anims", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttack, Anims), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAttack_Statics::NewProp_Anims_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttack_Statics::NewProp_Anims_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttack_Statics::NewProp_Combo_MetaData[] = {
		{ "ModuleRelativePath", "Attack/Public/Attack.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAttack_Statics::NewProp_Combo = { "Combo", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAttack, Combo), METADATA_PARAMS(Z_Construct_UClass_UAttack_Statics::NewProp_Combo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttack_Statics::NewProp_Combo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttack_Statics::NewProp_Anims_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttack_Statics::NewProp_Anims,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttack_Statics::NewProp_Combo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttack_Statics::ClassParams = {
		&UAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttack, 859705056);
	template<> ARPG_API UClass* StaticClass<UAttack>()
	{
		return UAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttack(Z_Construct_UClass_UAttack, &UAttack::StaticClass, TEXT("/Script/ARPG"), TEXT("UAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
