// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Equipment_generated_h
#error "Equipment.generated.h already included, missing '#pragma once' in Equipment.h"
#endif
#define ARPG_Equipment_generated_h

#define ARPG_Source_ARPG_Equipment_h_17_SPARSE_DATA
#define ARPG_Source_ARPG_Equipment_h_17_RPC_WRAPPERS
#define ARPG_Source_ARPG_Equipment_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Equipment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEquipment(); \
	friend struct Z_Construct_UClass_AEquipment_Statics; \
public: \
	DECLARE_CLASS(AEquipment, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AEquipment) \
	virtual UObject* _getUObject() const override { return const_cast<AEquipment*>(this); }


#define ARPG_Source_ARPG_Equipment_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEquipment(); \
	friend struct Z_Construct_UClass_AEquipment_Statics; \
public: \
	DECLARE_CLASS(AEquipment, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ARPG"), NO_API) \
	DECLARE_SERIALIZER(AEquipment) \
	virtual UObject* _getUObject() const override { return const_cast<AEquipment*>(this); }


#define ARPG_Source_ARPG_Equipment_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEquipment) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipment); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipment(AEquipment&&); \
	NO_API AEquipment(const AEquipment&); \
public:


#define ARPG_Source_ARPG_Equipment_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEquipment() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEquipment(AEquipment&&); \
	NO_API AEquipment(const AEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEquipment)


#define ARPG_Source_ARPG_Equipment_h_17_PRIVATE_PROPERTY_OFFSET
#define ARPG_Source_ARPG_Equipment_h_14_PROLOG
#define ARPG_Source_ARPG_Equipment_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Equipment_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Equipment_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_Equipment_h_17_RPC_WRAPPERS \
	ARPG_Source_ARPG_Equipment_h_17_INCLASS \
	ARPG_Source_ARPG_Equipment_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Equipment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Equipment_h_17_PRIVATE_PROPERTY_OFFSET \
	ARPG_Source_ARPG_Equipment_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_Equipment_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Equipment_h_17_INCLASS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Equipment_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class AEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Equipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
