// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_DummyArrow_generated_h
#error "DummyArrow.generated.h already included, missing '#pragma once' in DummyArrow.h"
#endif
#define ARPG_DummyArrow_generated_h

#define ARPG_Source_ARPG_DummyArrow_h_11_SPARSE_DATA
#define ARPG_Source_ARPG_DummyArrow_h_11_RPC_WRAPPERS
#define ARPG_Source_ARPG_DummyArrow_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_DummyArrow_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADummyArrow(); \
	friend struct Z_Construct_UClass_ADummyArrow_Statics; \
public: \
	DECLARE_CLASS(ADummyArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(ADummyArrow)


#define ARPG_Source_ARPG_DummyArrow_h_11_INCLASS \
private: \
	static void StaticRegisterNativesADummyArrow(); \
	friend struct Z_Construct_UClass_ADummyArrow_Statics; \
public: \
	DECLARE_CLASS(ADummyArrow, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(ADummyArrow)


#define ARPG_Source_ARPG_DummyArrow_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADummyArrow(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADummyArrow) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADummyArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADummyArrow); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADummyArrow(ADummyArrow&&); \
	NO_API ADummyArrow(const ADummyArrow&); \
public:


#define ARPG_Source_ARPG_DummyArrow_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADummyArrow(ADummyArrow&&); \
	NO_API ADummyArrow(const ADummyArrow&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADummyArrow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADummyArrow); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADummyArrow)


#define ARPG_Source_ARPG_DummyArrow_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Feather() { return STRUCT_OFFSET(ADummyArrow, Feather); } \
	FORCEINLINE static uint32 __PPO__Shaft() { return STRUCT_OFFSET(ADummyArrow, Shaft); } \
	FORCEINLINE static uint32 __PPO__Head() { return STRUCT_OFFSET(ADummyArrow, Head); }


#define ARPG_Source_ARPG_DummyArrow_h_8_PROLOG
#define ARPG_Source_ARPG_DummyArrow_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DummyArrow_h_11_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_DummyArrow_h_11_SPARSE_DATA \
	ARPG_Source_ARPG_DummyArrow_h_11_RPC_WRAPPERS \
	ARPG_Source_ARPG_DummyArrow_h_11_INCLASS \
	ARPG_Source_ARPG_DummyArrow_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DummyArrow_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DummyArrow_h_11_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_DummyArrow_h_11_SPARSE_DATA \
	ARPG_Source_ARPG_DummyArrow_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_DummyArrow_h_11_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_DummyArrow_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class ADummyArrow>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_DummyArrow_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
