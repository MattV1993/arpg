// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_Cookable_generated_h
#error "Cookable.generated.h already included, missing '#pragma once' in Cookable.h"
#endif
#define ARPG_Cookable_generated_h

#define ARPG_Source_ARPG_Cookable_h_13_SPARSE_DATA
#define ARPG_Source_ARPG_Cookable_h_13_RPC_WRAPPERS
#define ARPG_Source_ARPG_Cookable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_Cookable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UCookable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UCookable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UCookable(UCookable&&); \
	ARPG_API UCookable(const UCookable&); \
public:


#define ARPG_Source_ARPG_Cookable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UCookable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UCookable(UCookable&&); \
	ARPG_API UCookable(const UCookable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UCookable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCookable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCookable)


#define ARPG_Source_ARPG_Cookable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCookable(); \
	friend struct Z_Construct_UClass_UCookable_Statics; \
public: \
	DECLARE_CLASS(UCookable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ARPG"), ARPG_API) \
	DECLARE_SERIALIZER(UCookable)


#define ARPG_Source_ARPG_Cookable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_Cookable_h_13_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_Cookable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Cookable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_Cookable_h_13_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_Cookable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Cookable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICookable() {} \
public: \
	typedef UCookable UClassType; \
	typedef ICookable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_Cookable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ICookable() {} \
public: \
	typedef UCookable UClassType; \
	typedef ICookable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_Cookable_h_10_PROLOG
#define ARPG_Source_ARPG_Cookable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Cookable_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_Cookable_h_13_RPC_WRAPPERS \
	ARPG_Source_ARPG_Cookable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_Cookable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_Cookable_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_Cookable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_Cookable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UCookable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_Cookable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
