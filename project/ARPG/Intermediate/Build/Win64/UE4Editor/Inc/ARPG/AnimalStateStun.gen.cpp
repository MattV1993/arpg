// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPG/Animal/Public/AnimalStateStun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimalStateStun() {}
// Cross Module References
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateStun_NoRegister();
	ARPG_API UClass* Z_Construct_UClass_UAnimalStateStun();
	ARPG_API UClass* Z_Construct_UClass_UAnimalState();
	UPackage* Z_Construct_UPackage__Script_ARPG();
// End Cross Module References
	void UAnimalStateStun::StaticRegisterNativesUAnimalStateStun()
	{
	}
	UClass* Z_Construct_UClass_UAnimalStateStun_NoRegister()
	{
		return UAnimalStateStun::StaticClass();
	}
	struct Z_Construct_UClass_UAnimalStateStun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimalStateStun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimalState,
		(UObject* (*)())Z_Construct_UPackage__Script_ARPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimalStateStun_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Animal/Public/AnimalStateStun.h" },
		{ "ModuleRelativePath", "Animal/Public/AnimalStateStun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimalStateStun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimalStateStun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimalStateStun_Statics::ClassParams = {
		&UAnimalStateStun::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimalStateStun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimalStateStun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimalStateStun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimalStateStun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimalStateStun, 1341012501);
	template<> ARPG_API UClass* StaticClass<UAnimalStateStun>()
	{
		return UAnimalStateStun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimalStateStun(Z_Construct_UClass_UAnimalStateStun, &UAnimalStateStun::StaticClass, TEXT("/Script/ARPG"), TEXT("UAnimalStateStun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimalStateStun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
