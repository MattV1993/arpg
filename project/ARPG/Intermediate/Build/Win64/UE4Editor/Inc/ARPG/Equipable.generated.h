// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Equipable_generated_h
#error "Equipable.generated.h already included, missing '#pragma once' in Equipable.h"
#endif
#define ARPG_Equipable_generated_h

#define ARPG_Source_ARPG_Equipable_h_13_SPARSE_DATA
#define ARPG_Source_ARPG_Equipable_h_13_RPC_WRAPPERS
#define ARPG_Source_ARPG_Equipable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Equipable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UEquipable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UEquipable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UEquipable(UEquipable&&); \
	ARPG_API UEquipable(const UEquipable&); \
public:


#define ARPG_Source_ARPG_Equipable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UEquipable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UEquipable(UEquipable&&); \
	ARPG_API UEquipable(const UEquipable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UEquipable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipable)


#define ARPG_Source_ARPG_Equipable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquipable(); \
	friend struct Z_Construct_UClass_UEquipable_Statics; \
public: \
	DECLARE_CLASS(UEquipable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ARPG"), ARPG_API) \
	DECLARE_SERIALIZER(UEquipable)


#define ARPG_Source_ARPG_Equipable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_Equipable_h_13_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_Equipable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Equipable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_Equipable_h_13_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_Equipable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Equipable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquipable() {} \
public: \
	typedef UEquipable UClassType; \
	typedef IEquipable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_Equipable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IEquipable() {} \
public: \
	typedef UEquipable UClassType; \
	typedef IEquipable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_Equipable_h_10_PROLOG
#define ARPG_Source_ARPG_Equipable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Equipable_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_Equipable_h_13_RPC_WRAPPERS \
	ARPG_Source_ARPG_Equipable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Equipable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Equipable_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_Equipable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Equipable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UEquipable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Equipable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
