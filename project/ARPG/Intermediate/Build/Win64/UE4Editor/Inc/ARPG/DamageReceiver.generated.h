// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_DamageReceiver_generated_h
#error "DamageReceiver.generated.h already included, missing '#pragma once' in DamageReceiver.h"
#endif
#define ARPG_DamageReceiver_generated_h

#define ARPG_Source_ARPG_DamageReceiver_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDamageSpec_Statics; \
	ARPG_API static class UScriptStruct* StaticStruct();


template<> ARPG_API UScriptStruct* StaticStruct<struct FDamageSpec>();

#define ARPG_Source_ARPG_DamageReceiver_h_10_SPARSE_DATA
#define ARPG_Source_ARPG_DamageReceiver_h_10_RPC_WRAPPERS
#define ARPG_Source_ARPG_DamageReceiver_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_DamageReceiver_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UDamageReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UDamageReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UDamageReceiver(UDamageReceiver&&); \
	ARPG_API UDamageReceiver(const UDamageReceiver&); \
public:


#define ARPG_Source_ARPG_DamageReceiver_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UDamageReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UDamageReceiver(UDamageReceiver&&); \
	ARPG_API UDamageReceiver(const UDamageReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UDamageReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageReceiver)


#define ARPG_Source_ARPG_DamageReceiver_h_10_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageReceiver(); \
	friend struct Z_Construct_UClass_UDamageReceiver_Statics; \
public: \
	DECLARE_CLASS(UDamageReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ARPG"), ARPG_API) \
	DECLARE_SERIALIZER(UDamageReceiver)


#define ARPG_Source_ARPG_DamageReceiver_h_10_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_DamageReceiver_h_10_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_DamageReceiver_h_10_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageReceiver_h_10_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_DamageReceiver_h_10_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_DamageReceiver_h_10_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageReceiver_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageReceiver() {} \
public: \
	typedef UDamageReceiver UClassType; \
	typedef IDamageReceiver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_DamageReceiver_h_10_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageReceiver() {} \
public: \
	typedef UDamageReceiver UClassType; \
	typedef IDamageReceiver ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_DamageReceiver_h_7_PROLOG
#define ARPG_Source_ARPG_DamageReceiver_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DamageReceiver_h_10_SPARSE_DATA \
	ARPG_Source_ARPG_DamageReceiver_h_10_RPC_WRAPPERS \
	ARPG_Source_ARPG_DamageReceiver_h_10_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageReceiver_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DamageReceiver_h_10_SPARSE_DATA \
	ARPG_Source_ARPG_DamageReceiver_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_DamageReceiver_h_10_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UDamageReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_DamageReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
