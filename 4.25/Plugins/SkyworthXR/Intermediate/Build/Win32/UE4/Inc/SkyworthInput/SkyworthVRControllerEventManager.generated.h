// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESkyworthVRControllerState : uint8;
#ifdef SKYWORTHINPUT_SkyworthVRControllerEventManager_generated_h
#error "SkyworthVRControllerEventManager.generated.h already included, missing '#pragma once' in SkyworthVRControllerEventManager.h"
#endif
#define SKYWORTHINPUT_SkyworthVRControllerEventManager_generated_h

#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_21_DELEGATE \
struct _Script_SkyworthInput_eventSkyworthVRControllerStateChangeDelegate_Parms \
{ \
	ESkyworthVRControllerState NewControllerState; \
}; \
static inline void FSkyworthVRControllerStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& SkyworthVRControllerStateChangeDelegate, ESkyworthVRControllerState NewControllerState) \
{ \
	_Script_SkyworthInput_eventSkyworthVRControllerStateChangeDelegate_Parms Parms; \
	Parms.NewControllerState=NewControllerState; \
	SkyworthVRControllerStateChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_20_DELEGATE \
static inline void FSkyworthVRControllerRecenterDelegate_DelegateWrapper(const FMulticastScriptDelegate& SkyworthVRControllerRecenterDelegate) \
{ \
	SkyworthVRControllerRecenterDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_SPARSE_DATA
#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_RPC_WRAPPERS
#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS
#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSkyworthVRControllerEventManager(); \
	friend struct Z_Construct_UClass_USkyworthVRControllerEventManager_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRControllerEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRControllerEventManager)


#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUSkyworthVRControllerEventManager(); \
	friend struct Z_Construct_UClass_USkyworthVRControllerEventManager_Statics; \
public: \
	DECLARE_CLASS(USkyworthVRControllerEventManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SkyworthInput"), NO_API) \
	DECLARE_SERIALIZER(USkyworthVRControllerEventManager)


#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRControllerEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRControllerEventManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRControllerEventManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRControllerEventManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRControllerEventManager(USkyworthVRControllerEventManager&&); \
	NO_API USkyworthVRControllerEventManager(const USkyworthVRControllerEventManager&); \
public:


#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USkyworthVRControllerEventManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USkyworthVRControllerEventManager(USkyworthVRControllerEventManager&&); \
	NO_API USkyworthVRControllerEventManager(const USkyworthVRControllerEventManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USkyworthVRControllerEventManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USkyworthVRControllerEventManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USkyworthVRControllerEventManager)


#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_26_PROLOG
#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_SPARSE_DATA \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_RPC_WRAPPERS \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_INCLASS \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_SPARSE_DATA \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h_29_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SkyworthVRControllerEventManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SKYWORTHINPUT_API UClass* StaticClass<class USkyworthVRControllerEventManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SkyworthXR_Source_SkyworthInput_Classes_SkyworthVRControllerEventManager_h


#define FOREACH_ENUM_ESKYWORTHVRCONTROLLERSTATE(op) \
	op(ESkyworthVRControllerState::Disconnected) \
	op(ESkyworthVRControllerState::Scanning) \
	op(ESkyworthVRControllerState::Connecting) \
	op(ESkyworthVRControllerState::Connected) 

enum class ESkyworthVRControllerState : uint8;
template<> SKYWORTHINPUT_API UEnum* StaticEnum<ESkyworthVRControllerState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS