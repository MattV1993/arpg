// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Animal/Public/AnimalStateContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalStateContext() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateContext_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ARPG();
	ARPG_API UClass* Z_Construct_UClass_UAnimalState_NoRegister();
// End Cross Module References
	void UAnimalStateContext::StaticRegisterNativesUAnimalStateContext()
	{
	}
	UClass* Z_Construct_UClass_UAnimalStateContext_NoRegister()
	{
		return UAnimalStateContext::StaticClass();
	}
	struct Z_Construct_UClass_UAnimalStateContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimalStateContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalStateContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animal/Public/AnimalStateContext.h" },
		{ "ModuleRelativePath", "Animal/Public/AnimalStateContext.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalStateContext_Statics::NewProp_CurrentState_MetaData[] = {
		{ "ModuleRelativePath", "Animal/Public/AnimalStateContext.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimalStateContext_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimalStateContext, CurrentState), Z_Construct_UClass_UAnimalState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimalStateContext_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalStateContext_Statics::NewProp_CurrentState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimalStateContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimalStateContext_Statics::NewProp_CurrentState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimalStateContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimalStateContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimalStateContext_Statics::ClassParams = {
		&UAnimalStateContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimalStateContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalStateContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimalStateContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalStateContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimalStateContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimalStateContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimalStateContext, 1178489835);
	template<> ARPG_API UClass* StaticClass<UAnimalStateContext>()
	{
		return UAnimalStateContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimalStateContext(Z_Construct_UClass_UAnimalStateContext, &UAnimalStateContext::StaticClass, TEXT("/Script/ARPG"), TEXT("UAnimalStateContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimalStateContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
