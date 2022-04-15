// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARPG_DamageSender_generated_h
#error "DamageSender.generated.h already included, missing '#pragma once' in DamageSender.h"
#endif
#define ARPG_DamageSender_generated_h

#define ARPG_Source_ARPG_DamageSender_h_13_SPARSE_DATA
#define ARPG_Source_ARPG_DamageSender_h_13_RPC_WRAPPERS
#define ARPG_Source_ARPG_DamageSender_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ARPG_Source_ARPG_DamageSender_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UDamageSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageSender) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UDamageSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageSender); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UDamageSender(UDamageSender&&); \
	ARPG_API UDamageSender(const UDamageSender&); \
public:


#define ARPG_Source_ARPG_DamageSender_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ARPG_API UDamageSender(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ARPG_API UDamageSender(UDamageSender&&); \
	ARPG_API UDamageSender(const UDamageSender&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ARPG_API, UDamageSender); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDamageSender); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDamageSender)


#define ARPG_Source_ARPG_DamageSender_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDamageSender(); \
	friend struct Z_Construct_UClass_UDamageSender_Statics; \
public: \
	DECLARE_CLASS(UDamageSender, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ARPG"), ARPG_API) \
	DECLARE_SERIALIZER(UDamageSender)


#define ARPG_Source_ARPG_DamageSender_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_DamageSender_h_13_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_DamageSender_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageSender_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	ARPG_Source_ARPG_DamageSender_h_13_GENERATED_UINTERFACE_BODY() \
	ARPG_Source_ARPG_DamageSender_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageSender_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDamageSender() {} \
public: \
	typedef UDamageSender UClassType; \
	typedef IDamageSender ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_DamageSender_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IDamageSender() {} \
public: \
	typedef UDamageSender UClassType; \
	typedef IDamageSender ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define ARPG_Source_ARPG_DamageSender_h_10_PROLOG
#define ARPG_Source_ARPG_DamageSender_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DamageSender_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_DamageSender_h_13_RPC_WRAPPERS \
	ARPG_Source_ARPG_DamageSender_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ARPG_Source_ARPG_DamageSender_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ARPG_Source_ARPG_DamageSender_h_13_SPARSE_DATA \
	ARPG_Source_ARPG_DamageSender_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ARPG_Source_ARPG_DamageSender_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARPG_API UClass* StaticClass<class UDamageSender>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ARPG_Source_ARPG_DamageSender_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
