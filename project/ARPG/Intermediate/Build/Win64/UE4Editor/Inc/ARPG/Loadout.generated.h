// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Loadout_generated_h
#error "Loadout.generated.h already included, missing '#pragma once' in Loadout.h"
#endif
#define ARPG_Loadout_generated_h

#define ARPG_Source_ARPG_Loadout_h_21_SPARSE_DATA
#define ARPG_Source_ARPG_Loadout_h_21_RPC_WRAPPERS
#define ARPG_Source_ARPG_Loadout_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Loadout_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadout(); \
	friend struct Z_Construct_UClass_ULoadout_Statics; \
public: \
	DECLARE_CLASS(ULoadout, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(ULoadout) \
	virtual UObject* _getUObject() const override { return const_cast<ULoadout*>(this); }


#define ARPG_Source_ARPG_Loadout_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULoadout(); \
	friend struct Z_Construct_UClass_ULoadout_Statics; \
public: \
	DECLARE_CLASS(ULoadout, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(ULoadout) \
	virtual UObject* _getUObject() const override { return const_cast<ULoadout*>(this); }


#define ARPG_Source_ARPG_Loadout_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadout) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadout); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadout(ULoadout&&); \
	NO_API ULoadout(const ULoadout&); \
public:


#define ARPG_Source_ARPG_Loadout_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadout(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadout(ULoadout&&); \
	NO_API ULoadout(const ULoadout&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadout); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadout); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadout)


#define ARPG_Source_ARPG_Loadout_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Owner() { return STRUCT_OFFSET(ULoadout, Owner); }


#define ARPG_Source_ARPG_Loadout_h_18_PROLOG
#define ARPG_Source_ARPG_Loadout_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Loadout_h_21_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Loadout_h_21_SPARSE_DATA \
	ARPG_Source_ARPG_Loadout_h_21_RPC_WRAPPERS \
	ARPG_Source_ARPG_Loadout_h_21_INCLASS \
	ARPG_Source_ARPG_Loadout_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Loadout_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Loadout_h_21_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Loadout_h_21_SPARSE_DATA \
	ARPG_Source_ARPG_Loadout_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Loadout_h_21_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Loadout_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class ULoadout>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Loadout_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
