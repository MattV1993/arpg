// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_SpellItem_generated_h
#error "SpellItem.generated.h already included, missing '#pragma once' in SpellItem.h"
#endif
#define ARPG_SpellItem_generated_h

#define ARPG_Source_ARPG_SpellItem_h_14_SPARSE_DATA
#define ARPG_Source_ARPG_SpellItem_h_14_RPC_WRAPPERS
#define ARPG_Source_ARPG_SpellItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_SpellItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpellItem(); \
	friend struct Z_Construct_UClass_USpellItem_Statics; \
public: \
	DECLARE_CLASS(USpellItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(USpellItem)


#define ARPG_Source_ARPG_SpellItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUSpellItem(); \
	friend struct Z_Construct_UClass_USpellItem_Statics; \
public: \
	DECLARE_CLASS(USpellItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(USpellItem)


#define ARPG_Source_ARPG_SpellItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpellItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpellItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpellItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpellItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpellItem(USpellItem&&); \
	NO_API USpellItem(const USpellItem&); \
public:


#define ARPG_Source_ARPG_SpellItem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpellItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USpellItem(USpellItem&&); \
	NO_API USpellItem(const USpellItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpellItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpellItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpellItem)


#define ARPG_Source_ARPG_SpellItem_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Attack() { return STRUCT_OFFSET(USpellItem, Attack); }


#define ARPG_Source_ARPG_SpellItem_h_11_PROLOG
#define ARPG_Source_ARPG_SpellItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_SpellItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_SpellItem_h_14_SPARSE_DATA \
	ARPG_Source_ARPG_SpellItem_h_14_RPC_WRAPPERS \
	ARPG_Source_ARPG_SpellItem_h_14_INCLASS \
	ARPG_Source_ARPG_SpellItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_SpellItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_SpellItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_SpellItem_h_14_SPARSE_DATA \
	ARPG_Source_ARPG_SpellItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_SpellItem_h_14_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_SpellItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class USpellItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_SpellItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
