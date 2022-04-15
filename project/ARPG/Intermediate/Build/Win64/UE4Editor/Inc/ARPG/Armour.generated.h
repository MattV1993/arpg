// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Armour_generated_h
#error "Armour.generated.h already included, missing '#pragma once' in Armour.h"
#endif
#define ARPG_Armour_generated_h

#define ARPG_Source_ARPG_Armour_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FArmourSpec_Statics; \
	ARPG_API static class UScriptStruct* StaticStruct();


template<> ARPG_API UScriptStruct* StaticStruct<struct FArmourSpec>();

#define ARPG_Source_ARPG_Armour_h_36_SPARSE_DATA
#define ARPG_Source_ARPG_Armour_h_36_RPC_WRAPPERS
#define ARPG_Source_ARPG_Armour_h_36_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Armour_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArmour(); \
	friend struct Z_Construct_UClass_AArmour_Statics; \
public: \
	DECLARE_CLASS(AArmour, AEquipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmour)


#define ARPG_Source_ARPG_Armour_h_36_INCLASS \
private: \
	static void StaticRegisterNativesAArmour(); \
	friend struct Z_Construct_UClass_AArmour_Statics; \
public: \
	DECLARE_CLASS(AArmour, AEquipment, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AArmour)


#define ARPG_Source_ARPG_Armour_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmour(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArmour) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmour); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmour(AArmour&&); \
	NO_API AArmour(const AArmour&); \
public:


#define ARPG_Source_ARPG_Armour_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArmour() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArmour(AArmour&&); \
	NO_API AArmour(const AArmour&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArmour); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArmour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArmour)


#define ARPG_Source_ARPG_Armour_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Spec() { return STRUCT_OFFSET(AArmour, Spec); }


#define ARPG_Source_ARPG_Armour_h_33_PROLOG
#define ARPG_Source_ARPG_Armour_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Armour_h_36_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Armour_h_36_SPARSE_DATA \
	ARPG_Source_ARPG_Armour_h_36_RPC_WRAPPERS \
	ARPG_Source_ARPG_Armour_h_36_INCLASS \
	ARPG_Source_ARPG_Armour_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Armour_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Armour_h_36_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Armour_h_36_SPARSE_DATA \
	ARPG_Source_ARPG_Armour_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Armour_h_36_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Armour_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class AArmour>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Armour_h


#define FOREACH_ENUM_ARMOURTYPE(op) \
	op(Head) \
	op(Chest) \
	op(Leg) \
	op(Glove) \
	op(Boot) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
