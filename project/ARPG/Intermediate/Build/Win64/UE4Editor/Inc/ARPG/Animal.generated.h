// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Animal_generated_h
#error "Animal.generated.h already included, missing '#pragma once' in Animal.h"
#endif
#define ARPG_Animal_generated_h

#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_SPARSE_DATA
#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentStateString); \
	DECLARE_FUNCTION(execStopRun); \
	DECLARE_FUNCTION(execStartRun);


#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentStateString); \
	DECLARE_FUNCTION(execStopRun); \
	DECLARE_FUNCTION(execStartRun);


#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAnimal(); \
	friend struct Z_Construct_UClass_AAnimal_Statics; \
public: \
	DECLARE_CLASS(AAnimal, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AAnimal) \
	virtual UObject* _getUObject() const override { return const_cast<AAnimal*>(this); }


#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAAnimal(); \
	friend struct Z_Construct_UClass_AAnimal_Statics; \
public: \
	DECLARE_CLASS(AAnimal, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AAnimal) \
	virtual UObject* _getUObject() const override { return const_cast<AAnimal*>(this); }


#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAnimal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAnimal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimal(AAnimal&&); \
	NO_API AAnimal(const AAnimal&); \
public:


#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAnimal(AAnimal&&); \
	NO_API AAnimal(const AAnimal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAnimal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAnimal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAnimal)


#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeatClass() { return STRUCT_OFFSET(AAnimal, MeatClass); } \
	FORCEINLINE static uint32 __PPO__AnimalState() { return STRUCT_OFFSET(AAnimal, AnimalState); } \
	FORCEINLINE static uint32 __PPO__Inventory() { return STRUCT_OFFSET(AAnimal, Inventory); }


#define ARPG_Source_ARPG_Animal_Public_Animal_h_14_PROLOG
#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_RPC_WRAPPERS \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_INCLASS \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Animal_Public_Animal_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Animal_Public_Animal_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class AAnimal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Animal_Public_Animal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
