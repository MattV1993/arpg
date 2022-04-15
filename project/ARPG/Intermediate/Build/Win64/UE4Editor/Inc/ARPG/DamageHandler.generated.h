// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_DamageHandler_generated_h
#error "DamageHandler.generated.h already included, missing '#pragma once' in DamageHandler.h"
#endif
#define ARPG_DamageHandler_generated_h

#define ARPG_Source_ARPG_DamageHandler_h_17_SPARSE_DATA
#define ARPG_Source_ARPG_DamageHandler_h_17_RPC_WRAPPERS
#define ARPG_Source_ARPG_DamageHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_DamageHandler_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UDamageHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UDamageHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UDamageHandler(UDamageHandler&&); \
	ARPG_API UDamageHandler(const UDamageHandler&); \
public:


#define ARPG_Source_ARPG_DamageHandler_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UDamageHandler(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UDamageHandler(UDamageHandler&&); \
	ARPG_API UDamageHandler(const UDamageHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UDamageHandler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageHandler); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageHandler)


#define ARPG_Source_ARPG_DamageHandler_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageHandler(); \
	friend struct Z_Construct_UClass_UDamageHandler_Statics; \
public: \
	DECLARE_CLASS(UDamageHandler, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ARPG"), ARPG_API) \
	DECLARE_SERIALIZER(UDamageHandler)


#define ARPG_Source_ARPG_DamageHandler_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_DamageHandler_h_17_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_DamageHandler_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageHandler_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_DamageHandler_h_17_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_DamageHandler_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageHandler_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageHandler() {} \
public: \
	typedef UDamageHandler UClassType; \
	typedef IDamageHandler ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_DamageHandler_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageHandler() {} \
public: \
	typedef UDamageHandler UClassType; \
	typedef IDamageHandler ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_DamageHandler_h_14_PROLOG
#define ARPG_Source_ARPG_DamageHandler_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DamageHandler_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_DamageHandler_h_17_RPC_WRAPPERS \
	ARPG_Source_ARPG_DamageHandler_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageHandler_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DamageHandler_h_17_SPARSE_DATA \
	ARPG_Source_ARPG_DamageHandler_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_DamageHandler_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UDamageHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_DamageHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
