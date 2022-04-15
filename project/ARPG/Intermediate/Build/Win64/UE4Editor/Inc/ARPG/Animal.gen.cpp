// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Animal/Public/Animal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimal() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_AAnimal_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_AAnimal();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateContext_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UHitReceiver_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UDamageReceiver_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAnimal::execGetCurrentStateString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentStateString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimal::execStopRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAnimal::execStartRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRun();
		P_NATIVE_END;
	}
	void AAnimal::StaticRegisterNativesAAnimal()
	{
		UClass* Class = AAnimal::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentStateString", &AAnimal::execGetCurrentStateString },
			{ "StartRun", &AAnimal::execStartRun },
			{ "StopRun", &AAnimal::execStopRun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics
	{
		struct Animal_eventGetCurrentStateString_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Animal_eventGetCurrentStateString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animal/Public/Animal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimal, nullptr, "GetCurrentStateString", nullptr, nullptr, sizeof(Animal_eventGetCurrentStateString_Parms), Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimal_GetCurrentStateString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimal_GetCurrentStateString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimal_StartRun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimal_StartRun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animal/Public/Animal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimal_StartRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimal, nullptr, "StartRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimal_StartRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimal_StartRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimal_StartRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimal_StartRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAnimal_StopRun_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAnimal_StopRun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Animal/Public/Animal.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAnimal_StopRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAnimal, nullptr, "StopRun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAnimal_StopRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAnimal_StopRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAnimal_StopRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAnimal_StopRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAnimal_NoRegister()
	{
		return AAnimal::StaticClass();
	}
	struct Z_Construct_UClass_AAnimal_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeatClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MeatClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimalState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimalState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAnimal_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAnimal_GetCurrentStateString, "GetCurrentStateString" }, // 421780372
		{ &Z_Construct_UFunction_AAnimal_StartRun, "StartRun" }, // 2798166513
		{ &Z_Construct_UFunction_AAnimal_StopRun, "StopRun" }, // 4184971179
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimal_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Animal/Public/Animal.h" },
		{ "ModuleRelativePath", "Animal/Public/Animal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimal_Statics::NewProp_MeatClass_MetaData[] = {
		{ "Category", "Animal" },
		{ "ModuleRelativePath", "Animal/Public/Animal.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAnimal_Statics::NewProp_MeatClass = { "MeatClass", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimal, MeatClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAnimal_Statics::NewProp_MeatClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimal_Statics::NewProp_MeatClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimal_Statics::NewProp_AnimalState_MetaData[] = {
		{ "ModuleRelativePath", "Animal/Public/Animal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimal_Statics::NewProp_AnimalState = { "AnimalState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimal, AnimalState), Z_Construct_UClass_UAnimalStateContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimal_Statics::NewProp_AnimalState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimal_Statics::NewProp_AnimalState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimal_Statics::NewProp_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "Animal/Public/Animal.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAnimal_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnimal, Inventory), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAnimal_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimal_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnimal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimal_Statics::NewProp_MeatClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimal_Statics::NewProp_AnimalState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnimal_Statics::NewProp_Inventory,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAnimal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHitReceiver_NoRegister, (int32)VTABLE_OFFSET(AAnimal, IHitReceiver), false },
			{ Z_Construct_UClass_UDamageReceiver_NoRegister, (int32)VTABLE_OFFSET(AAnimal, IDamageReceiver), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnimal_Statics::ClassParams = {
		&AAnimal::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAnimal_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAnimal_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAnimal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnimal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnimal, 466792192);
	template<> ARPG_API UClass* StaticClass<AAnimal>()
	{
		return AAnimal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnimal(Z_Construct_UClass_AAnimal, &AAnimal::StaticClass, TEXT("/Script/ARPG"), TEXT("AAnimal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
