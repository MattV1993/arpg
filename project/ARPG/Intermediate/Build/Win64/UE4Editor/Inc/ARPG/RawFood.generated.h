// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_RawFood_generated_h
#error "RawFood.generated.h already included, missing '#pragma once' in RawFood.h"
#endif
#define ARPG_RawFood_generated_h

#define ARPG_Source_ARPG_RawFood_h_12_SPARSE_DATA
#define ARPG_Source_ARPG_RawFood_h_12_RPC_WRAPPERS
#define ARPG_Source_ARPG_RawFood_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_RawFood_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARawFood(); \
	friend struct Z_Construct_UClass_ARawFood_Statics; \
public: \
	DECLARE_CLASS(ARawFood, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(ARawFood) \
	virtual UObject* _getUObject() const override { return const_cast<ARawFood*>(this); }


#define ARPG_Source_ARPG_RawFood_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARawFood(); \
	friend struct Z_Construct_UClass_ARawFood_Statics; \
public: \
	DECLARE_CLASS(ARawFood, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(ARawFood) \
	virtual UObject* _getUObject() const override { return const_cast<ARawFood*>(this); }


#define ARPG_Source_ARPG_RawFood_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARawFood(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARawFood) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARawFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARawFood); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARawFood(ARawFood&&); \
	NO_API ARawFood(const ARawFood&); \
public:


#define ARPG_Source_ARPG_RawFood_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARawFood() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARawFood(ARawFood&&); \
	NO_API ARawFood(const ARawFood&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARawFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARawFood); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARawFood)


#define ARPG_Source_ARPG_RawFood_h_12_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_RawFood_h_9_PROLOG
#define ARPG_Source_ARPG_RawFood_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_RawFood_h_12_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_RawFood_h_12_SPARSE_DATA \
	ARPG_Source_ARPG_RawFood_h_12_RPC_WRAPPERS \
	ARPG_Source_ARPG_RawFood_h_12_INCLASS \
	ARPG_Source_ARPG_RawFood_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_RawFood_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_RawFood_h_12_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_RawFood_h_12_SPARSE_DATA \
	ARPG_Source_ARPG_RawFood_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_RawFood_h_12_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_RawFood_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class ARawFood>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_RawFood_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
