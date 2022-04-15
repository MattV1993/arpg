// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_InventoryItem_generated_h
#error "InventoryItem.generated.h already included, missing '#pragma once' in InventoryItem.h"
#endif
#define ARPG_InventoryItem_generated_h

#define ARPG_Source_ARPG_InventoryItem_h_14_SPARSE_DATA
#define ARPG_Source_ARPG_InventoryItem_h_14_RPC_WRAPPERS
#define ARPG_Source_ARPG_InventoryItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_InventoryItem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItem(); \
	friend struct Z_Construct_UClass_UInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UInventoryItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItem)


#define ARPG_Source_ARPG_InventoryItem_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryItem(); \
	friend struct Z_Construct_UClass_UInventoryItem_Statics; \
public: \
	DECLARE_CLASS(UInventoryItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItem)


#define ARPG_Source_ARPG_InventoryItem_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItem(UInventoryItem&&); \
	NO_API UInventoryItem(const UInventoryItem&); \
public:


#define ARPG_Source_ARPG_InventoryItem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItem(UInventoryItem&&); \
	NO_API UInventoryItem(const UInventoryItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItem)


#define ARPG_Source_ARPG_InventoryItem_h_14_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_InventoryItem_h_11_PROLOG
#define ARPG_Source_ARPG_InventoryItem_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_InventoryItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_InventoryItem_h_14_SPARSE_DATA \
	ARPG_Source_ARPG_InventoryItem_h_14_RPC_WRAPPERS \
	ARPG_Source_ARPG_InventoryItem_h_14_INCLASS \
	ARPG_Source_ARPG_InventoryItem_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_InventoryItem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_InventoryItem_h_14_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_InventoryItem_h_14_SPARSE_DATA \
	ARPG_Source_ARPG_InventoryItem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_InventoryItem_h_14_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_InventoryItem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UInventoryItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_InventoryItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
