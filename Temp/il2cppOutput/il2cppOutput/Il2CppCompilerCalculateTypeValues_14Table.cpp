#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct MessageEvent_t3542602194;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t3304487641;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t485325298;
// UnityEngine.Experimental.Rendering.IRenderPipelineAsset
struct IRenderPipelineAsset_t2417493407;
// UnityEngine.Experimental.Rendering.IRenderPipeline
struct IRenderPipeline_t854788347;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t1351673492;
// Done_EvasiveManeuver
struct Done_EvasiveManeuver_t3181303260;
// System.Void
struct Void_t648803283;
// System.Char[]
struct CharU5BU5D_t3938341699;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3754885824;
// System.Object[]
struct ObjectU5BU5D_t775387562;
// GameController
struct GameController_t1650485130;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1603905796;
// UnityEngine.GameObject
struct GameObject_t1495603458;
// Done_GameController
struct Done_GameController_t222786251;
// System.IAsyncResult
struct IAsyncResult_t930328726;
// System.AsyncCallback
struct AsyncCallback_t1179324502;
// UnityEngine.Texture2D
struct Texture2D_t1101197751;
// Readme/Section[]
struct SectionU5BU5D_t4170497233;
// UnityEngine.Rigidbody
struct Rigidbody_t1722124148;
// Done_Boundary
struct Done_Boundary_t1559294317;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1619241143;
// UnityEngine.GUIText
struct GUIText_t45696586;
// UnityEngine.Transform
struct Transform_t2538887092;
// Boundary
struct Boundary_t1776107927;
// UnityEngine.AudioSource
struct AudioSource_t3300934512;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T1600843193_H
#define U3CMODULEU3E_T1600843193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1600843193 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1600843193_H
#ifndef SECTION_T2095351664_H
#define SECTION_T2095351664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme/Section
struct  Section_t2095351664  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t2095351664, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((&___heading_0), value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t2095351664, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((&___text_1), value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t2095351664, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((&___linkText_2), value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t2095351664, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((&___url_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECTION_T2095351664_H
#ifndef BOUNDARY_T1776107927_H
#define BOUNDARY_T1776107927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boundary
struct  Boundary_t1776107927  : public RuntimeObject
{
public:
	// System.Single Boundary::xMin
	float ___xMin_0;
	// System.Single Boundary::xMax
	float ___xMax_1;
	// System.Single Boundary::zMin
	float ___zMin_2;
	// System.Single Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Boundary_t1776107927, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Boundary_t1776107927, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Boundary_t1776107927, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Boundary_t1776107927, ___zMax_3)); }
	inline float get_zMax_3() const { return ___zMax_3; }
	inline float* get_address_of_zMax_3() { return &___zMax_3; }
	inline void set_zMax_3(float value)
	{
		___zMax_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARY_T1776107927_H
#ifndef MESSAGETYPESUBSCRIBERS_T2130793604_H
#define MESSAGETYPESUBSCRIBERS_T2130793604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers
struct  MessageTypeSubscribers_t2130793604  : public RuntimeObject
{
public:
	// System.String UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::m_messageTypeId
	String_t* ___m_messageTypeId_0;
	// System.Int32 UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::subscriberCount
	int32_t ___subscriberCount_1;
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageTypeSubscribers::messageCallback
	MessageEvent_t3542602194 * ___messageCallback_2;

public:
	inline static int32_t get_offset_of_m_messageTypeId_0() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2130793604, ___m_messageTypeId_0)); }
	inline String_t* get_m_messageTypeId_0() const { return ___m_messageTypeId_0; }
	inline String_t** get_address_of_m_messageTypeId_0() { return &___m_messageTypeId_0; }
	inline void set_m_messageTypeId_0(String_t* value)
	{
		___m_messageTypeId_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_messageTypeId_0), value);
	}

	inline static int32_t get_offset_of_subscriberCount_1() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2130793604, ___subscriberCount_1)); }
	inline int32_t get_subscriberCount_1() const { return ___subscriberCount_1; }
	inline int32_t* get_address_of_subscriberCount_1() { return &___subscriberCount_1; }
	inline void set_subscriberCount_1(int32_t value)
	{
		___subscriberCount_1 = value;
	}

	inline static int32_t get_offset_of_messageCallback_2() { return static_cast<int32_t>(offsetof(MessageTypeSubscribers_t2130793604, ___messageCallback_2)); }
	inline MessageEvent_t3542602194 * get_messageCallback_2() const { return ___messageCallback_2; }
	inline MessageEvent_t3542602194 ** get_address_of_messageCallback_2() { return &___messageCallback_2; }
	inline void set_messageCallback_2(MessageEvent_t3542602194 * value)
	{
		___messageCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___messageCallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGETYPESUBSCRIBERS_T2130793604_H
#ifndef UNITYEVENTBASE_T733701467_H
#define UNITYEVENTBASE_T733701467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t733701467  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t3304487641 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t485325298 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t733701467, ___m_Calls_0)); }
	inline InvokableCallList_t3304487641 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t3304487641 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t3304487641 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t733701467, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t485325298 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t485325298 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t485325298 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t733701467, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t733701467, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T733701467_H
#ifndef RENDERPIPELINEMANAGER_T2986895236_H
#define RENDERPIPELINEMANAGER_T2986895236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.Rendering.RenderPipelineManager
struct  RenderPipelineManager_t2986895236  : public RuntimeObject
{
public:

public:
};

struct RenderPipelineManager_t2986895236_StaticFields
{
public:
	// UnityEngine.Experimental.Rendering.IRenderPipelineAsset UnityEngine.Experimental.Rendering.RenderPipelineManager::s_CurrentPipelineAsset
	RuntimeObject* ___s_CurrentPipelineAsset_0;
	// UnityEngine.Experimental.Rendering.IRenderPipeline UnityEngine.Experimental.Rendering.RenderPipelineManager::<currentPipeline>k__BackingField
	RuntimeObject* ___U3CcurrentPipelineU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_s_CurrentPipelineAsset_0() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t2986895236_StaticFields, ___s_CurrentPipelineAsset_0)); }
	inline RuntimeObject* get_s_CurrentPipelineAsset_0() const { return ___s_CurrentPipelineAsset_0; }
	inline RuntimeObject** get_address_of_s_CurrentPipelineAsset_0() { return &___s_CurrentPipelineAsset_0; }
	inline void set_s_CurrentPipelineAsset_0(RuntimeObject* value)
	{
		___s_CurrentPipelineAsset_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_CurrentPipelineAsset_0), value);
	}

	inline static int32_t get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderPipelineManager_t2986895236_StaticFields, ___U3CcurrentPipelineU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CcurrentPipelineU3Ek__BackingField_1() const { return ___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CcurrentPipelineU3Ek__BackingField_1() { return &___U3CcurrentPipelineU3Ek__BackingField_1; }
	inline void set_U3CcurrentPipelineU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CcurrentPipelineU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcurrentPipelineU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERPIPELINEMANAGER_T2986895236_H
#ifndef ATTRIBUTE_T2024656619_H
#define ATTRIBUTE_T2024656619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2024656619  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2024656619_H
#ifndef NATIVE_T2589456646_H
#define NATIVE_T2589456646_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.Native
struct  Native_t2589456646  : public RuntimeObject
{
public:

public:
};

struct Native_t2589456646_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> UnityEngine.CSSLayout.Native::s_MeasureFunctions
	Dictionary_2_t1351673492 * ___s_MeasureFunctions_0;

public:
	inline static int32_t get_offset_of_s_MeasureFunctions_0() { return static_cast<int32_t>(offsetof(Native_t2589456646_StaticFields, ___s_MeasureFunctions_0)); }
	inline Dictionary_2_t1351673492 * get_s_MeasureFunctions_0() const { return ___s_MeasureFunctions_0; }
	inline Dictionary_2_t1351673492 ** get_address_of_s_MeasureFunctions_0() { return &___s_MeasureFunctions_0; }
	inline void set_s_MeasureFunctions_0(Dictionary_2_t1351673492 * value)
	{
		___s_MeasureFunctions_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_MeasureFunctions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVE_T2589456646_H
#ifndef U3CEVADEU3EC__ITERATOR0_T635040430_H
#define U3CEVADEU3EC__ITERATOR0_T635040430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_EvasiveManeuver/<Evade>c__Iterator0
struct  U3CEvadeU3Ec__Iterator0_t635040430  : public RuntimeObject
{
public:
	// Done_EvasiveManeuver Done_EvasiveManeuver/<Evade>c__Iterator0::$this
	Done_EvasiveManeuver_t3181303260 * ___U24this_0;
	// System.Object Done_EvasiveManeuver/<Evade>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean Done_EvasiveManeuver/<Evade>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 Done_EvasiveManeuver/<Evade>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t635040430, ___U24this_0)); }
	inline Done_EvasiveManeuver_t3181303260 * get_U24this_0() const { return ___U24this_0; }
	inline Done_EvasiveManeuver_t3181303260 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(Done_EvasiveManeuver_t3181303260 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t635040430, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t635040430, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CEvadeU3Ec__Iterator0_t635040430, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CEVADEU3EC__ITERATOR0_T635040430_H
#ifndef NETFXCOREEXTENSIONS_T551004036_H
#define NETFXCOREEXTENSIONS_T551004036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.NetFxCoreExtensions
struct  NetFxCoreExtensions_t551004036  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETFXCOREEXTENSIONS_T551004036_H
#ifndef DONE_BOUNDARY_T1559294317_H
#define DONE_BOUNDARY_T1559294317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_Boundary
struct  Done_Boundary_t1559294317  : public RuntimeObject
{
public:
	// System.Single Done_Boundary::xMin
	float ___xMin_0;
	// System.Single Done_Boundary::xMax
	float ___xMax_1;
	// System.Single Done_Boundary::zMin
	float ___zMin_2;
	// System.Single Done_Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Done_Boundary_t1559294317, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Done_Boundary_t1559294317, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Done_Boundary_t1559294317, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Done_Boundary_t1559294317, ___zMax_3)); }
	inline float get_zMax_3() const { return ___zMax_3; }
	inline float* get_address_of_zMax_3() { return &___zMax_3; }
	inline void set_zMax_3(float value)
	{
		___zMax_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_BOUNDARY_T1559294317_H
#ifndef VALUETYPE_T1137770746_H
#define VALUETYPE_T1137770746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1137770746  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1137770746_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1137770746_marshaled_com
{
};
#endif // VALUETYPE_T1137770746_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T1069429491_H
#define ENUM_T1069429491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1069429491  : public ValueType_t1137770746
{
public:

public:
};

struct Enum_t1069429491_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3938341699* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1069429491_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3938341699* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3938341699** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3938341699* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1069429491_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1069429491_marshaled_com
{
};
#endif // ENUM_T1069429491_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t3754885824 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t3754885824 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t3754885824 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t3754885824 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef UNITYEVENT_1_T4171114488_H
#define UNITYEVENT_1_T4171114488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_t4171114488  : public UnityEventBase_t733701467
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t775387562* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t4171114488, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t775387562* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t775387562** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t775387562* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T4171114488_H
#ifndef SINGLE_T651044012_H
#define SINGLE_T651044012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t651044012 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t651044012, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T651044012_H
#ifndef VECTOR3_T4187381013_H
#define VECTOR3_T4187381013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t4187381013 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t4187381013, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t4187381013, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t4187381013, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t4187381013_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t4187381013  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t4187381013  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t4187381013  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t4187381013  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t4187381013  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t4187381013  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t4187381013  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t4187381013  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t4187381013  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t4187381013  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___zeroVector_4)); }
	inline Vector3_t4187381013  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t4187381013 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t4187381013  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___oneVector_5)); }
	inline Vector3_t4187381013  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t4187381013 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t4187381013  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___upVector_6)); }
	inline Vector3_t4187381013  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t4187381013 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t4187381013  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___downVector_7)); }
	inline Vector3_t4187381013  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t4187381013 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t4187381013  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___leftVector_8)); }
	inline Vector3_t4187381013  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t4187381013 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t4187381013  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___rightVector_9)); }
	inline Vector3_t4187381013  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t4187381013 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t4187381013  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___forwardVector_10)); }
	inline Vector3_t4187381013  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t4187381013 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t4187381013  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___backVector_11)); }
	inline Vector3_t4187381013  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t4187381013 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t4187381013  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t4187381013  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t4187381013 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t4187381013  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t4187381013_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t4187381013  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t4187381013 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t4187381013  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T4187381013_H
#ifndef QUATERNION_T914492839_H
#define QUATERNION_T914492839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t914492839 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t914492839, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t914492839, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t914492839, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t914492839, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t914492839_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t914492839  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t914492839_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t914492839  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t914492839 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t914492839  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T914492839_H
#ifndef UNITYEVENT_1_T2321115926_H
#define UNITYEVENT_1_T2321115926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs>
struct  UnityEvent_1_t2321115926  : public UnityEventBase_t733701467
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t775387562* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t2321115926, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t775387562* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t775387562** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t775387562* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T2321115926_H
#ifndef CSSSIZE_T438970564_H
#define CSSSIZE_T438970564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSSize
struct  CSSSize_t438970564 
{
public:
	// System.Single UnityEngine.CSSLayout.CSSSize::width
	float ___width_0;
	// System.Single UnityEngine.CSSLayout.CSSSize::height
	float ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(CSSSize_t438970564, ___width_0)); }
	inline float get_width_0() const { return ___width_0; }
	inline float* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(float value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(CSSSize_t438970564, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSSIZE_T438970564_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T2479464500_H
#define USEDBYNATIVECODEATTRIBUTE_T2479464500_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t2479464500  : public Attribute_t2024656619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T2479464500_H
#ifndef TYPEINFERENCERULEATTRIBUTE_T1323471160_H
#define TYPEINFERENCERULEATTRIBUTE_T1323471160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRuleAttribute
struct  TypeInferenceRuleAttribute_t1323471160  : public Attribute_t2024656619
{
public:
	// System.String UnityEngineInternal.TypeInferenceRuleAttribute::_rule
	String_t* ____rule_0;

public:
	inline static int32_t get_offset_of__rule_0() { return static_cast<int32_t>(offsetof(TypeInferenceRuleAttribute_t1323471160, ____rule_0)); }
	inline String_t* get__rule_0() const { return ____rule_0; }
	inline String_t** get_address_of__rule_0() { return &____rule_0; }
	inline void set__rule_0(String_t* value)
	{
		____rule_0 = value;
		Il2CppCodeGenWriteBarrier((&____rule_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULEATTRIBUTE_T1323471160_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T1240174387_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T1240174387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t1240174387  : public Attribute_t2024656619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T1240174387_H
#ifndef VECTOR2_T10002177_H
#define VECTOR2_T10002177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t10002177 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t10002177, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t10002177, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t10002177_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t10002177  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t10002177  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t10002177  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t10002177  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t10002177  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t10002177  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t10002177  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t10002177  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___zeroVector_2)); }
	inline Vector2_t10002177  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t10002177 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t10002177  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___oneVector_3)); }
	inline Vector2_t10002177  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t10002177 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t10002177  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___upVector_4)); }
	inline Vector2_t10002177  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t10002177 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t10002177  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___downVector_5)); }
	inline Vector2_t10002177  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t10002177 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t10002177  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___leftVector_6)); }
	inline Vector2_t10002177  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t10002177 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t10002177  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___rightVector_7)); }
	inline Vector2_t10002177  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t10002177 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t10002177  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t10002177  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t10002177 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t10002177  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t10002177_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t10002177  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t10002177 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t10002177  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T10002177_H
#ifndef FORMERLYSERIALIZEDASATTRIBUTE_T3169436116_H
#define FORMERLYSERIALIZEDASATTRIBUTE_T3169436116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t3169436116  : public Attribute_t2024656619
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t3169436116, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_oldName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMERLYSERIALIZEDASATTRIBUTE_T3169436116_H
#ifndef CONNECTIONCHANGEEVENT_T633191977_H
#define CONNECTIONCHANGEEVENT_T633191977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/ConnectionChangeEvent
struct  ConnectionChangeEvent_t633191977  : public UnityEvent_1_t4171114488
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONCHANGEEVENT_T633191977_H
#ifndef U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T2882768060_H
#define U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T2882768060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0
struct  U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2882768060  : public RuntimeObject
{
public:
	// System.Guid UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/<InvokeMessageIdSubscribers>c__AnonStorey0::messageId
	Guid_t  ___messageId_0;

public:
	inline static int32_t get_offset_of_messageId_0() { return static_cast<int32_t>(offsetof(U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2882768060, ___messageId_0)); }
	inline Guid_t  get_messageId_0() const { return ___messageId_0; }
	inline Guid_t * get_address_of_messageId_0() { return &___messageId_0; }
	inline void set_messageId_0(Guid_t  value)
	{
		___messageId_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINVOKEMESSAGEIDSUBSCRIBERSU3EC__ANONSTOREY0_T2882768060_H
#ifndef U3CSPAWNWAVESU3EC__ITERATOR0_T3915818997_H
#define U3CSPAWNWAVESU3EC__ITERATOR0_T3915818997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<SpawnWaves>c__Iterator0
struct  U3CSpawnWavesU3Ec__Iterator0_t3915818997  : public RuntimeObject
{
public:
	// System.Int32 GameController/<SpawnWaves>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// UnityEngine.Vector3 GameController/<SpawnWaves>c__Iterator0::<spawnPosition>__2
	Vector3_t4187381013  ___U3CspawnPositionU3E__2_1;
	// UnityEngine.Quaternion GameController/<SpawnWaves>c__Iterator0::<spawnRotation>__2
	Quaternion_t914492839  ___U3CspawnRotationU3E__2_2;
	// GameController GameController/<SpawnWaves>c__Iterator0::$this
	GameController_t1650485130 * ___U24this_3;
	// System.Object GameController/<SpawnWaves>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<SpawnWaves>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<SpawnWaves>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3915818997, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3CspawnPositionU3E__2_1() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3915818997, ___U3CspawnPositionU3E__2_1)); }
	inline Vector3_t4187381013  get_U3CspawnPositionU3E__2_1() const { return ___U3CspawnPositionU3E__2_1; }
	inline Vector3_t4187381013 * get_address_of_U3CspawnPositionU3E__2_1() { return &___U3CspawnPositionU3E__2_1; }
	inline void set_U3CspawnPositionU3E__2_1(Vector3_t4187381013  value)
	{
		___U3CspawnPositionU3E__2_1 = value;
	}

	inline static int32_t get_offset_of_U3CspawnRotationU3E__2_2() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3915818997, ___U3CspawnRotationU3E__2_2)); }
	inline Quaternion_t914492839  get_U3CspawnRotationU3E__2_2() const { return ___U3CspawnRotationU3E__2_2; }
	inline Quaternion_t914492839 * get_address_of_U3CspawnRotationU3E__2_2() { return &___U3CspawnRotationU3E__2_2; }
	inline void set_U3CspawnRotationU3E__2_2(Quaternion_t914492839  value)
	{
		___U3CspawnRotationU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3915818997, ___U24this_3)); }
	inline GameController_t1650485130 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t1650485130 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t1650485130 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3915818997, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3915818997, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3915818997, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSPAWNWAVESU3EC__ITERATOR0_T3915818997_H
#ifndef TYPEINFERENCERULES_T2362883092_H
#define TYPEINFERENCERULES_T2362883092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.TypeInferenceRules
struct  TypeInferenceRules_t2362883092 
{
public:
	// System.Int32 UnityEngineInternal.TypeInferenceRules::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeInferenceRules_t2362883092, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFERENCERULES_T2362883092_H
#ifndef DELEGATE_T360127155_H
#define DELEGATE_T360127155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t360127155  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1603905796 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___data_8)); }
	inline DelegateData_t1603905796 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1603905796 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1603905796 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T360127155_H
#ifndef CSSMEASUREMODE_T3616064465_H
#define CSSMEASUREMODE_T3616064465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureMode
struct  CSSMeasureMode_t3616064465 
{
public:
	// System.Int32 UnityEngine.CSSLayout.CSSMeasureMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CSSMeasureMode_t3616064465, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREMODE_T3616064465_H
#ifndef U3CSPAWNWAVESU3EC__ITERATOR0_T3721942310_H
#define U3CSPAWNWAVESU3EC__ITERATOR0_T3721942310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_GameController/<SpawnWaves>c__Iterator0
struct  U3CSpawnWavesU3Ec__Iterator0_t3721942310  : public RuntimeObject
{
public:
	// System.Int32 Done_GameController/<SpawnWaves>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// UnityEngine.GameObject Done_GameController/<SpawnWaves>c__Iterator0::<hazard>__2
	GameObject_t1495603458 * ___U3ChazardU3E__2_1;
	// UnityEngine.Vector3 Done_GameController/<SpawnWaves>c__Iterator0::<spawnPosition>__2
	Vector3_t4187381013  ___U3CspawnPositionU3E__2_2;
	// UnityEngine.Quaternion Done_GameController/<SpawnWaves>c__Iterator0::<spawnRotation>__2
	Quaternion_t914492839  ___U3CspawnRotationU3E__2_3;
	// Done_GameController Done_GameController/<SpawnWaves>c__Iterator0::$this
	Done_GameController_t222786251 * ___U24this_4;
	// System.Object Done_GameController/<SpawnWaves>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean Done_GameController/<SpawnWaves>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 Done_GameController/<SpawnWaves>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3ChazardU3E__2_1() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U3ChazardU3E__2_1)); }
	inline GameObject_t1495603458 * get_U3ChazardU3E__2_1() const { return ___U3ChazardU3E__2_1; }
	inline GameObject_t1495603458 ** get_address_of_U3ChazardU3E__2_1() { return &___U3ChazardU3E__2_1; }
	inline void set_U3ChazardU3E__2_1(GameObject_t1495603458 * value)
	{
		___U3ChazardU3E__2_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ChazardU3E__2_1), value);
	}

	inline static int32_t get_offset_of_U3CspawnPositionU3E__2_2() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U3CspawnPositionU3E__2_2)); }
	inline Vector3_t4187381013  get_U3CspawnPositionU3E__2_2() const { return ___U3CspawnPositionU3E__2_2; }
	inline Vector3_t4187381013 * get_address_of_U3CspawnPositionU3E__2_2() { return &___U3CspawnPositionU3E__2_2; }
	inline void set_U3CspawnPositionU3E__2_2(Vector3_t4187381013  value)
	{
		___U3CspawnPositionU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U3CspawnRotationU3E__2_3() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U3CspawnRotationU3E__2_3)); }
	inline Quaternion_t914492839  get_U3CspawnRotationU3E__2_3() const { return ___U3CspawnRotationU3E__2_3; }
	inline Quaternion_t914492839 * get_address_of_U3CspawnRotationU3E__2_3() { return &___U3CspawnRotationU3E__2_3; }
	inline void set_U3CspawnRotationU3E__2_3(Quaternion_t914492839  value)
	{
		___U3CspawnRotationU3E__2_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U24this_4)); }
	inline Done_GameController_t222786251 * get_U24this_4() const { return ___U24this_4; }
	inline Done_GameController_t222786251 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(Done_GameController_t222786251 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CSpawnWavesU3Ec__Iterator0_t3721942310, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSPAWNWAVESU3EC__ITERATOR0_T3721942310_H
#ifndef OBJECT_T3921596093_H
#define OBJECT_T3921596093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3921596093  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3921596093, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3921596093_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3921596093_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3921596093_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3921596093_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3921596093_H
#ifndef MESSAGEEVENT_T3542602194_H
#define MESSAGEEVENT_T3542602194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents/MessageEvent
struct  MessageEvent_t3542602194  : public UnityEvent_1_t2321115926
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEEVENT_T3542602194_H
#ifndef MULTICASTDELEGATE_T764574315_H
#define MULTICASTDELEGATE_T764574315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t764574315  : public Delegate_t360127155
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t764574315 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t764574315 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t764574315, ___prev_9)); }
	inline MulticastDelegate_t764574315 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t764574315 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t764574315 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t764574315, ___kpm_next_10)); }
	inline MulticastDelegate_t764574315 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t764574315 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t764574315 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T764574315_H
#ifndef SCRIPTABLEOBJECT_T1309062039_H
#define SCRIPTABLEOBJECT_T1309062039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1309062039  : public Object_t3921596093
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1309062039_marshaled_pinvoke : public Object_t3921596093_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1309062039_marshaled_com : public Object_t3921596093_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1309062039_H
#ifndef COMPONENT_T4073965979_H
#define COMPONENT_T4073965979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t4073965979  : public Object_t3921596093
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T4073965979_H
#ifndef BEHAVIOUR_T3463356027_H
#define BEHAVIOUR_T3463356027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t3463356027  : public Component_t4073965979
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T3463356027_H
#ifndef CSSMEASUREFUNC_T931062647_H
#define CSSMEASUREFUNC_T931062647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CSSLayout.CSSMeasureFunc
struct  CSSMeasureFunc_t931062647  : public MulticastDelegate_t764574315
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSSMEASUREFUNC_T931062647_H
#ifndef README_T266816827_H
#define README_T266816827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme
struct  Readme_t266816827  : public ScriptableObject_t1309062039
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t1101197751 * ___icon_2;
	// System.String Readme::title
	String_t* ___title_3;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t4170497233* ___sections_4;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_5;

public:
	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(Readme_t266816827, ___icon_2)); }
	inline Texture2D_t1101197751 * get_icon_2() const { return ___icon_2; }
	inline Texture2D_t1101197751 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(Texture2D_t1101197751 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier((&___icon_2), value);
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(Readme_t266816827, ___title_3)); }
	inline String_t* get_title_3() const { return ___title_3; }
	inline String_t** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(String_t* value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier((&___title_3), value);
	}

	inline static int32_t get_offset_of_sections_4() { return static_cast<int32_t>(offsetof(Readme_t266816827, ___sections_4)); }
	inline SectionU5BU5D_t4170497233* get_sections_4() const { return ___sections_4; }
	inline SectionU5BU5D_t4170497233** get_address_of_sections_4() { return &___sections_4; }
	inline void set_sections_4(SectionU5BU5D_t4170497233* value)
	{
		___sections_4 = value;
		Il2CppCodeGenWriteBarrier((&___sections_4), value);
	}

	inline static int32_t get_offset_of_loadedLayout_5() { return static_cast<int32_t>(offsetof(Readme_t266816827, ___loadedLayout_5)); }
	inline bool get_loadedLayout_5() const { return ___loadedLayout_5; }
	inline bool* get_address_of_loadedLayout_5() { return &___loadedLayout_5; }
	inline void set_loadedLayout_5(bool value)
	{
		___loadedLayout_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // README_T266816827_H
#ifndef MONOBEHAVIOUR_T2450550008_H
#define MONOBEHAVIOUR_T2450550008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t2450550008  : public Behaviour_t3463356027
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T2450550008_H
#ifndef RANDOMROTATOR_T1294698712_H
#define RANDOMROTATOR_T1294698712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRotator
struct  RandomRotator_t1294698712  : public MonoBehaviour_t2450550008
{
public:
	// System.Single RandomRotator::tumble
	float ___tumble_2;
	// UnityEngine.Rigidbody RandomRotator::rb
	Rigidbody_t1722124148 * ___rb_3;

public:
	inline static int32_t get_offset_of_tumble_2() { return static_cast<int32_t>(offsetof(RandomRotator_t1294698712, ___tumble_2)); }
	inline float get_tumble_2() const { return ___tumble_2; }
	inline float* get_address_of_tumble_2() { return &___tumble_2; }
	inline void set_tumble_2(float value)
	{
		___tumble_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(RandomRotator_t1294698712, ___rb_3)); }
	inline Rigidbody_t1722124148 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t1722124148 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t1722124148 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMROTATOR_T1294698712_H
#ifndef DONE_BGSCROLLER_T1944418476_H
#define DONE_BGSCROLLER_T1944418476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_BGScroller
struct  Done_BGScroller_t1944418476  : public MonoBehaviour_t2450550008
{
public:
	// System.Single Done_BGScroller::scrollSpeed
	float ___scrollSpeed_2;
	// System.Single Done_BGScroller::tileSizeZ
	float ___tileSizeZ_3;
	// UnityEngine.Vector3 Done_BGScroller::startPosition
	Vector3_t4187381013  ___startPosition_4;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1944418476, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_tileSizeZ_3() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1944418476, ___tileSizeZ_3)); }
	inline float get_tileSizeZ_3() const { return ___tileSizeZ_3; }
	inline float* get_address_of_tileSizeZ_3() { return &___tileSizeZ_3; }
	inline void set_tileSizeZ_3(float value)
	{
		___tileSizeZ_3 = value;
	}

	inline static int32_t get_offset_of_startPosition_4() { return static_cast<int32_t>(offsetof(Done_BGScroller_t1944418476, ___startPosition_4)); }
	inline Vector3_t4187381013  get_startPosition_4() const { return ___startPosition_4; }
	inline Vector3_t4187381013 * get_address_of_startPosition_4() { return &___startPosition_4; }
	inline void set_startPosition_4(Vector3_t4187381013  value)
	{
		___startPosition_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_BGSCROLLER_T1944418476_H
#ifndef DONE_DESTROYBYBOUNDARY_T4279753471_H
#define DONE_DESTROYBYBOUNDARY_T4279753471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_DestroyByBoundary
struct  Done_DestroyByBoundary_t4279753471  : public MonoBehaviour_t2450550008
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_DESTROYBYBOUNDARY_T4279753471_H
#ifndef DONE_DESTROYBYCONTACT_T3542206613_H
#define DONE_DESTROYBYCONTACT_T3542206613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_DestroyByContact
struct  Done_DestroyByContact_t3542206613  : public MonoBehaviour_t2450550008
{
public:
	// UnityEngine.GameObject Done_DestroyByContact::explosion
	GameObject_t1495603458 * ___explosion_2;
	// UnityEngine.GameObject Done_DestroyByContact::playerExplosion
	GameObject_t1495603458 * ___playerExplosion_3;
	// System.Int32 Done_DestroyByContact::scoreValue
	int32_t ___scoreValue_4;
	// Done_GameController Done_DestroyByContact::gameController
	Done_GameController_t222786251 * ___gameController_5;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t3542206613, ___explosion_2)); }
	inline GameObject_t1495603458 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1495603458 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1495603458 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosion_2), value);
	}

	inline static int32_t get_offset_of_playerExplosion_3() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t3542206613, ___playerExplosion_3)); }
	inline GameObject_t1495603458 * get_playerExplosion_3() const { return ___playerExplosion_3; }
	inline GameObject_t1495603458 ** get_address_of_playerExplosion_3() { return &___playerExplosion_3; }
	inline void set_playerExplosion_3(GameObject_t1495603458 * value)
	{
		___playerExplosion_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerExplosion_3), value);
	}

	inline static int32_t get_offset_of_scoreValue_4() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t3542206613, ___scoreValue_4)); }
	inline int32_t get_scoreValue_4() const { return ___scoreValue_4; }
	inline int32_t* get_address_of_scoreValue_4() { return &___scoreValue_4; }
	inline void set_scoreValue_4(int32_t value)
	{
		___scoreValue_4 = value;
	}

	inline static int32_t get_offset_of_gameController_5() { return static_cast<int32_t>(offsetof(Done_DestroyByContact_t3542206613, ___gameController_5)); }
	inline Done_GameController_t222786251 * get_gameController_5() const { return ___gameController_5; }
	inline Done_GameController_t222786251 ** get_address_of_gameController_5() { return &___gameController_5; }
	inline void set_gameController_5(Done_GameController_t222786251 * value)
	{
		___gameController_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_DESTROYBYCONTACT_T3542206613_H
#ifndef DONE_DESTROYBYTIME_T421749926_H
#define DONE_DESTROYBYTIME_T421749926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_DestroyByTime
struct  Done_DestroyByTime_t421749926  : public MonoBehaviour_t2450550008
{
public:
	// System.Single Done_DestroyByTime::lifetime
	float ___lifetime_2;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(Done_DestroyByTime_t421749926, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_DESTROYBYTIME_T421749926_H
#ifndef DONE_EVASIVEMANEUVER_T3181303260_H
#define DONE_EVASIVEMANEUVER_T3181303260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_EvasiveManeuver
struct  Done_EvasiveManeuver_t3181303260  : public MonoBehaviour_t2450550008
{
public:
	// Done_Boundary Done_EvasiveManeuver::boundary
	Done_Boundary_t1559294317 * ___boundary_2;
	// System.Single Done_EvasiveManeuver::tilt
	float ___tilt_3;
	// System.Single Done_EvasiveManeuver::dodge
	float ___dodge_4;
	// System.Single Done_EvasiveManeuver::smoothing
	float ___smoothing_5;
	// UnityEngine.Vector2 Done_EvasiveManeuver::startWait
	Vector2_t10002177  ___startWait_6;
	// UnityEngine.Vector2 Done_EvasiveManeuver::maneuverTime
	Vector2_t10002177  ___maneuverTime_7;
	// UnityEngine.Vector2 Done_EvasiveManeuver::maneuverWait
	Vector2_t10002177  ___maneuverWait_8;
	// System.Single Done_EvasiveManeuver::currentSpeed
	float ___currentSpeed_9;
	// System.Single Done_EvasiveManeuver::targetManeuver
	float ___targetManeuver_10;

public:
	inline static int32_t get_offset_of_boundary_2() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___boundary_2)); }
	inline Done_Boundary_t1559294317 * get_boundary_2() const { return ___boundary_2; }
	inline Done_Boundary_t1559294317 ** get_address_of_boundary_2() { return &___boundary_2; }
	inline void set_boundary_2(Done_Boundary_t1559294317 * value)
	{
		___boundary_2 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_2), value);
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_dodge_4() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___dodge_4)); }
	inline float get_dodge_4() const { return ___dodge_4; }
	inline float* get_address_of_dodge_4() { return &___dodge_4; }
	inline void set_dodge_4(float value)
	{
		___dodge_4 = value;
	}

	inline static int32_t get_offset_of_smoothing_5() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___smoothing_5)); }
	inline float get_smoothing_5() const { return ___smoothing_5; }
	inline float* get_address_of_smoothing_5() { return &___smoothing_5; }
	inline void set_smoothing_5(float value)
	{
		___smoothing_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___startWait_6)); }
	inline Vector2_t10002177  get_startWait_6() const { return ___startWait_6; }
	inline Vector2_t10002177 * get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(Vector2_t10002177  value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_maneuverTime_7() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___maneuverTime_7)); }
	inline Vector2_t10002177  get_maneuverTime_7() const { return ___maneuverTime_7; }
	inline Vector2_t10002177 * get_address_of_maneuverTime_7() { return &___maneuverTime_7; }
	inline void set_maneuverTime_7(Vector2_t10002177  value)
	{
		___maneuverTime_7 = value;
	}

	inline static int32_t get_offset_of_maneuverWait_8() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___maneuverWait_8)); }
	inline Vector2_t10002177  get_maneuverWait_8() const { return ___maneuverWait_8; }
	inline Vector2_t10002177 * get_address_of_maneuverWait_8() { return &___maneuverWait_8; }
	inline void set_maneuverWait_8(Vector2_t10002177  value)
	{
		___maneuverWait_8 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_9() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___currentSpeed_9)); }
	inline float get_currentSpeed_9() const { return ___currentSpeed_9; }
	inline float* get_address_of_currentSpeed_9() { return &___currentSpeed_9; }
	inline void set_currentSpeed_9(float value)
	{
		___currentSpeed_9 = value;
	}

	inline static int32_t get_offset_of_targetManeuver_10() { return static_cast<int32_t>(offsetof(Done_EvasiveManeuver_t3181303260, ___targetManeuver_10)); }
	inline float get_targetManeuver_10() const { return ___targetManeuver_10; }
	inline float* get_address_of_targetManeuver_10() { return &___targetManeuver_10; }
	inline void set_targetManeuver_10(float value)
	{
		___targetManeuver_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_EVASIVEMANEUVER_T3181303260_H
#ifndef DONE_GAMECONTROLLER_T222786251_H
#define DONE_GAMECONTROLLER_T222786251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_GameController
struct  Done_GameController_t222786251  : public MonoBehaviour_t2450550008
{
public:
	// UnityEngine.GameObject[] Done_GameController::hazards
	GameObjectU5BU5D_t1619241143* ___hazards_2;
	// UnityEngine.Vector3 Done_GameController::spawnValues
	Vector3_t4187381013  ___spawnValues_3;
	// System.Int32 Done_GameController::hazardCount
	int32_t ___hazardCount_4;
	// System.Single Done_GameController::spawnWait
	float ___spawnWait_5;
	// System.Single Done_GameController::startWait
	float ___startWait_6;
	// System.Single Done_GameController::waveWait
	float ___waveWait_7;
	// UnityEngine.GUIText Done_GameController::scoreText
	GUIText_t45696586 * ___scoreText_8;
	// UnityEngine.GUIText Done_GameController::restartText
	GUIText_t45696586 * ___restartText_9;
	// UnityEngine.GUIText Done_GameController::gameOverText
	GUIText_t45696586 * ___gameOverText_10;
	// System.Boolean Done_GameController::gameOver
	bool ___gameOver_11;
	// System.Boolean Done_GameController::restart
	bool ___restart_12;
	// System.Int32 Done_GameController::score
	int32_t ___score_13;

public:
	inline static int32_t get_offset_of_hazards_2() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___hazards_2)); }
	inline GameObjectU5BU5D_t1619241143* get_hazards_2() const { return ___hazards_2; }
	inline GameObjectU5BU5D_t1619241143** get_address_of_hazards_2() { return &___hazards_2; }
	inline void set_hazards_2(GameObjectU5BU5D_t1619241143* value)
	{
		___hazards_2 = value;
		Il2CppCodeGenWriteBarrier((&___hazards_2), value);
	}

	inline static int32_t get_offset_of_spawnValues_3() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___spawnValues_3)); }
	inline Vector3_t4187381013  get_spawnValues_3() const { return ___spawnValues_3; }
	inline Vector3_t4187381013 * get_address_of_spawnValues_3() { return &___spawnValues_3; }
	inline void set_spawnValues_3(Vector3_t4187381013  value)
	{
		___spawnValues_3 = value;
	}

	inline static int32_t get_offset_of_hazardCount_4() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___hazardCount_4)); }
	inline int32_t get_hazardCount_4() const { return ___hazardCount_4; }
	inline int32_t* get_address_of_hazardCount_4() { return &___hazardCount_4; }
	inline void set_hazardCount_4(int32_t value)
	{
		___hazardCount_4 = value;
	}

	inline static int32_t get_offset_of_spawnWait_5() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___spawnWait_5)); }
	inline float get_spawnWait_5() const { return ___spawnWait_5; }
	inline float* get_address_of_spawnWait_5() { return &___spawnWait_5; }
	inline void set_spawnWait_5(float value)
	{
		___spawnWait_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___startWait_6)); }
	inline float get_startWait_6() const { return ___startWait_6; }
	inline float* get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(float value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_waveWait_7() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___waveWait_7)); }
	inline float get_waveWait_7() const { return ___waveWait_7; }
	inline float* get_address_of_waveWait_7() { return &___waveWait_7; }
	inline void set_waveWait_7(float value)
	{
		___waveWait_7 = value;
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___scoreText_8)); }
	inline GUIText_t45696586 * get_scoreText_8() const { return ___scoreText_8; }
	inline GUIText_t45696586 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(GUIText_t45696586 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_8), value);
	}

	inline static int32_t get_offset_of_restartText_9() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___restartText_9)); }
	inline GUIText_t45696586 * get_restartText_9() const { return ___restartText_9; }
	inline GUIText_t45696586 ** get_address_of_restartText_9() { return &___restartText_9; }
	inline void set_restartText_9(GUIText_t45696586 * value)
	{
		___restartText_9 = value;
		Il2CppCodeGenWriteBarrier((&___restartText_9), value);
	}

	inline static int32_t get_offset_of_gameOverText_10() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___gameOverText_10)); }
	inline GUIText_t45696586 * get_gameOverText_10() const { return ___gameOverText_10; }
	inline GUIText_t45696586 ** get_address_of_gameOverText_10() { return &___gameOverText_10; }
	inline void set_gameOverText_10(GUIText_t45696586 * value)
	{
		___gameOverText_10 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverText_10), value);
	}

	inline static int32_t get_offset_of_gameOver_11() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___gameOver_11)); }
	inline bool get_gameOver_11() const { return ___gameOver_11; }
	inline bool* get_address_of_gameOver_11() { return &___gameOver_11; }
	inline void set_gameOver_11(bool value)
	{
		___gameOver_11 = value;
	}

	inline static int32_t get_offset_of_restart_12() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___restart_12)); }
	inline bool get_restart_12() const { return ___restart_12; }
	inline bool* get_address_of_restart_12() { return &___restart_12; }
	inline void set_restart_12(bool value)
	{
		___restart_12 = value;
	}

	inline static int32_t get_offset_of_score_13() { return static_cast<int32_t>(offsetof(Done_GameController_t222786251, ___score_13)); }
	inline int32_t get_score_13() const { return ___score_13; }
	inline int32_t* get_address_of_score_13() { return &___score_13; }
	inline void set_score_13(int32_t value)
	{
		___score_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_GAMECONTROLLER_T222786251_H
#ifndef DONE_PLAYERCONTROLLER_T3659394267_H
#define DONE_PLAYERCONTROLLER_T3659394267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_PlayerController
struct  Done_PlayerController_t3659394267  : public MonoBehaviour_t2450550008
{
public:
	// System.Single Done_PlayerController::speed
	float ___speed_2;
	// System.Single Done_PlayerController::tilt
	float ___tilt_3;
	// Done_Boundary Done_PlayerController::boundary
	Done_Boundary_t1559294317 * ___boundary_4;
	// UnityEngine.GameObject Done_PlayerController::shot
	GameObject_t1495603458 * ___shot_5;
	// UnityEngine.Transform Done_PlayerController::shotSpawn
	Transform_t2538887092 * ___shotSpawn_6;
	// System.Single Done_PlayerController::fireRate
	float ___fireRate_7;
	// System.Single Done_PlayerController::nextFire
	float ___nextFire_8;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Done_PlayerController_t3659394267, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(Done_PlayerController_t3659394267, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(Done_PlayerController_t3659394267, ___boundary_4)); }
	inline Done_Boundary_t1559294317 * get_boundary_4() const { return ___boundary_4; }
	inline Done_Boundary_t1559294317 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Done_Boundary_t1559294317 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(Done_PlayerController_t3659394267, ___shot_5)); }
	inline GameObject_t1495603458 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t1495603458 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t1495603458 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier((&___shot_5), value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(Done_PlayerController_t3659394267, ___shotSpawn_6)); }
	inline Transform_t2538887092 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t2538887092 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t2538887092 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawn_6), value);
	}

	inline static int32_t get_offset_of_fireRate_7() { return static_cast<int32_t>(offsetof(Done_PlayerController_t3659394267, ___fireRate_7)); }
	inline float get_fireRate_7() const { return ___fireRate_7; }
	inline float* get_address_of_fireRate_7() { return &___fireRate_7; }
	inline void set_fireRate_7(float value)
	{
		___fireRate_7 = value;
	}

	inline static int32_t get_offset_of_nextFire_8() { return static_cast<int32_t>(offsetof(Done_PlayerController_t3659394267, ___nextFire_8)); }
	inline float get_nextFire_8() const { return ___nextFire_8; }
	inline float* get_address_of_nextFire_8() { return &___nextFire_8; }
	inline void set_nextFire_8(float value)
	{
		___nextFire_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_PLAYERCONTROLLER_T3659394267_H
#ifndef DONE_RANDOMROTATOR_T1808133580_H
#define DONE_RANDOMROTATOR_T1808133580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_RandomRotator
struct  Done_RandomRotator_t1808133580  : public MonoBehaviour_t2450550008
{
public:
	// System.Single Done_RandomRotator::tumble
	float ___tumble_2;

public:
	inline static int32_t get_offset_of_tumble_2() { return static_cast<int32_t>(offsetof(Done_RandomRotator_t1808133580, ___tumble_2)); }
	inline float get_tumble_2() const { return ___tumble_2; }
	inline float* get_address_of_tumble_2() { return &___tumble_2; }
	inline void set_tumble_2(float value)
	{
		___tumble_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_RANDOMROTATOR_T1808133580_H
#ifndef DONE_WEAPONCONTROLLER_T827985224_H
#define DONE_WEAPONCONTROLLER_T827985224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_WeaponController
struct  Done_WeaponController_t827985224  : public MonoBehaviour_t2450550008
{
public:
	// UnityEngine.GameObject Done_WeaponController::shot
	GameObject_t1495603458 * ___shot_2;
	// UnityEngine.Transform Done_WeaponController::shotSpawn
	Transform_t2538887092 * ___shotSpawn_3;
	// System.Single Done_WeaponController::fireRate
	float ___fireRate_4;
	// System.Single Done_WeaponController::delay
	float ___delay_5;

public:
	inline static int32_t get_offset_of_shot_2() { return static_cast<int32_t>(offsetof(Done_WeaponController_t827985224, ___shot_2)); }
	inline GameObject_t1495603458 * get_shot_2() const { return ___shot_2; }
	inline GameObject_t1495603458 ** get_address_of_shot_2() { return &___shot_2; }
	inline void set_shot_2(GameObject_t1495603458 * value)
	{
		___shot_2 = value;
		Il2CppCodeGenWriteBarrier((&___shot_2), value);
	}

	inline static int32_t get_offset_of_shotSpawn_3() { return static_cast<int32_t>(offsetof(Done_WeaponController_t827985224, ___shotSpawn_3)); }
	inline Transform_t2538887092 * get_shotSpawn_3() const { return ___shotSpawn_3; }
	inline Transform_t2538887092 ** get_address_of_shotSpawn_3() { return &___shotSpawn_3; }
	inline void set_shotSpawn_3(Transform_t2538887092 * value)
	{
		___shotSpawn_3 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawn_3), value);
	}

	inline static int32_t get_offset_of_fireRate_4() { return static_cast<int32_t>(offsetof(Done_WeaponController_t827985224, ___fireRate_4)); }
	inline float get_fireRate_4() const { return ___fireRate_4; }
	inline float* get_address_of_fireRate_4() { return &___fireRate_4; }
	inline void set_fireRate_4(float value)
	{
		___fireRate_4 = value;
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(Done_WeaponController_t827985224, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_WEAPONCONTROLLER_T827985224_H
#ifndef DESTROYBYCONTACT_T2899904880_H
#define DESTROYBYCONTACT_T2899904880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByContact
struct  DestroyByContact_t2899904880  : public MonoBehaviour_t2450550008
{
public:
	// UnityEngine.GameObject DestroyByContact::explosion
	GameObject_t1495603458 * ___explosion_2;
	// UnityEngine.GameObject DestroyByContact::playerExplosion
	GameObject_t1495603458 * ___playerExplosion_3;
	// System.Int32 DestroyByContact::scoreValue
	int32_t ___scoreValue_4;
	// GameController DestroyByContact::gameController
	GameController_t1650485130 * ___gameController_5;

public:
	inline static int32_t get_offset_of_explosion_2() { return static_cast<int32_t>(offsetof(DestroyByContact_t2899904880, ___explosion_2)); }
	inline GameObject_t1495603458 * get_explosion_2() const { return ___explosion_2; }
	inline GameObject_t1495603458 ** get_address_of_explosion_2() { return &___explosion_2; }
	inline void set_explosion_2(GameObject_t1495603458 * value)
	{
		___explosion_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosion_2), value);
	}

	inline static int32_t get_offset_of_playerExplosion_3() { return static_cast<int32_t>(offsetof(DestroyByContact_t2899904880, ___playerExplosion_3)); }
	inline GameObject_t1495603458 * get_playerExplosion_3() const { return ___playerExplosion_3; }
	inline GameObject_t1495603458 ** get_address_of_playerExplosion_3() { return &___playerExplosion_3; }
	inline void set_playerExplosion_3(GameObject_t1495603458 * value)
	{
		___playerExplosion_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerExplosion_3), value);
	}

	inline static int32_t get_offset_of_scoreValue_4() { return static_cast<int32_t>(offsetof(DestroyByContact_t2899904880, ___scoreValue_4)); }
	inline int32_t get_scoreValue_4() const { return ___scoreValue_4; }
	inline int32_t* get_address_of_scoreValue_4() { return &___scoreValue_4; }
	inline void set_scoreValue_4(int32_t value)
	{
		___scoreValue_4 = value;
	}

	inline static int32_t get_offset_of_gameController_5() { return static_cast<int32_t>(offsetof(DestroyByContact_t2899904880, ___gameController_5)); }
	inline GameController_t1650485130 * get_gameController_5() const { return ___gameController_5; }
	inline GameController_t1650485130 ** get_address_of_gameController_5() { return &___gameController_5; }
	inline void set_gameController_5(GameController_t1650485130 * value)
	{
		___gameController_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameController_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYCONTACT_T2899904880_H
#ifndef DESTROYBYTIME_T671487548_H
#define DESTROYBYTIME_T671487548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByTime
struct  DestroyByTime_t671487548  : public MonoBehaviour_t2450550008
{
public:
	// System.Single DestroyByTime::lifetime
	float ___lifetime_2;

public:
	inline static int32_t get_offset_of_lifetime_2() { return static_cast<int32_t>(offsetof(DestroyByTime_t671487548, ___lifetime_2)); }
	inline float get_lifetime_2() const { return ___lifetime_2; }
	inline float* get_address_of_lifetime_2() { return &___lifetime_2; }
	inline void set_lifetime_2(float value)
	{
		___lifetime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYTIME_T671487548_H
#ifndef GAMECONTROLLER_T1650485130_H
#define GAMECONTROLLER_T1650485130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t1650485130  : public MonoBehaviour_t2450550008
{
public:
	// UnityEngine.GameObject GameController::hazard
	GameObject_t1495603458 * ___hazard_2;
	// UnityEngine.Vector3 GameController::spawnValues
	Vector3_t4187381013  ___spawnValues_3;
	// System.Int32 GameController::hazardCount
	int32_t ___hazardCount_4;
	// System.Single GameController::spawnWait
	float ___spawnWait_5;
	// System.Single GameController::startWait
	float ___startWait_6;
	// System.Single GameController::waveWait
	float ___waveWait_7;
	// UnityEngine.GUIText GameController::scoreText
	GUIText_t45696586 * ___scoreText_8;
	// UnityEngine.GUIText GameController::restartText
	GUIText_t45696586 * ___restartText_9;
	// UnityEngine.GUIText GameController::gameOverText
	GUIText_t45696586 * ___gameOverText_10;
	// System.Int32 GameController::score
	int32_t ___score_11;
	// System.Boolean GameController::gameOver
	bool ___gameOver_12;
	// System.Boolean GameController::restart
	bool ___restart_13;

public:
	inline static int32_t get_offset_of_hazard_2() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___hazard_2)); }
	inline GameObject_t1495603458 * get_hazard_2() const { return ___hazard_2; }
	inline GameObject_t1495603458 ** get_address_of_hazard_2() { return &___hazard_2; }
	inline void set_hazard_2(GameObject_t1495603458 * value)
	{
		___hazard_2 = value;
		Il2CppCodeGenWriteBarrier((&___hazard_2), value);
	}

	inline static int32_t get_offset_of_spawnValues_3() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___spawnValues_3)); }
	inline Vector3_t4187381013  get_spawnValues_3() const { return ___spawnValues_3; }
	inline Vector3_t4187381013 * get_address_of_spawnValues_3() { return &___spawnValues_3; }
	inline void set_spawnValues_3(Vector3_t4187381013  value)
	{
		___spawnValues_3 = value;
	}

	inline static int32_t get_offset_of_hazardCount_4() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___hazardCount_4)); }
	inline int32_t get_hazardCount_4() const { return ___hazardCount_4; }
	inline int32_t* get_address_of_hazardCount_4() { return &___hazardCount_4; }
	inline void set_hazardCount_4(int32_t value)
	{
		___hazardCount_4 = value;
	}

	inline static int32_t get_offset_of_spawnWait_5() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___spawnWait_5)); }
	inline float get_spawnWait_5() const { return ___spawnWait_5; }
	inline float* get_address_of_spawnWait_5() { return &___spawnWait_5; }
	inline void set_spawnWait_5(float value)
	{
		___spawnWait_5 = value;
	}

	inline static int32_t get_offset_of_startWait_6() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___startWait_6)); }
	inline float get_startWait_6() const { return ___startWait_6; }
	inline float* get_address_of_startWait_6() { return &___startWait_6; }
	inline void set_startWait_6(float value)
	{
		___startWait_6 = value;
	}

	inline static int32_t get_offset_of_waveWait_7() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___waveWait_7)); }
	inline float get_waveWait_7() const { return ___waveWait_7; }
	inline float* get_address_of_waveWait_7() { return &___waveWait_7; }
	inline void set_waveWait_7(float value)
	{
		___waveWait_7 = value;
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___scoreText_8)); }
	inline GUIText_t45696586 * get_scoreText_8() const { return ___scoreText_8; }
	inline GUIText_t45696586 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(GUIText_t45696586 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_8), value);
	}

	inline static int32_t get_offset_of_restartText_9() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___restartText_9)); }
	inline GUIText_t45696586 * get_restartText_9() const { return ___restartText_9; }
	inline GUIText_t45696586 ** get_address_of_restartText_9() { return &___restartText_9; }
	inline void set_restartText_9(GUIText_t45696586 * value)
	{
		___restartText_9 = value;
		Il2CppCodeGenWriteBarrier((&___restartText_9), value);
	}

	inline static int32_t get_offset_of_gameOverText_10() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___gameOverText_10)); }
	inline GUIText_t45696586 * get_gameOverText_10() const { return ___gameOverText_10; }
	inline GUIText_t45696586 ** get_address_of_gameOverText_10() { return &___gameOverText_10; }
	inline void set_gameOverText_10(GUIText_t45696586 * value)
	{
		___gameOverText_10 = value;
		Il2CppCodeGenWriteBarrier((&___gameOverText_10), value);
	}

	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}

	inline static int32_t get_offset_of_gameOver_12() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___gameOver_12)); }
	inline bool get_gameOver_12() const { return ___gameOver_12; }
	inline bool* get_address_of_gameOver_12() { return &___gameOver_12; }
	inline void set_gameOver_12(bool value)
	{
		___gameOver_12 = value;
	}

	inline static int32_t get_offset_of_restart_13() { return static_cast<int32_t>(offsetof(GameController_t1650485130, ___restart_13)); }
	inline bool get_restart_13() const { return ___restart_13; }
	inline bool* get_address_of_restart_13() { return &___restart_13; }
	inline void set_restart_13(bool value)
	{
		___restart_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECONTROLLER_T1650485130_H
#ifndef MOVER_T2309472588_H
#define MOVER_T2309472588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mover
struct  Mover_t2309472588  : public MonoBehaviour_t2450550008
{
public:
	// System.Single Mover::speed
	float ___speed_2;
	// UnityEngine.Rigidbody Mover::rb
	Rigidbody_t1722124148 * ___rb_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Mover_t2309472588, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(Mover_t2309472588, ___rb_3)); }
	inline Rigidbody_t1722124148 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t1722124148 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t1722124148 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVER_T2309472588_H
#ifndef PLAYERCONTROLLER_T4008153207_H
#define PLAYERCONTROLLER_T4008153207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4008153207  : public MonoBehaviour_t2450550008
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::tilt
	float ___tilt_3;
	// Boundary PlayerController::boundary
	Boundary_t1776107927 * ___boundary_4;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1722124148 * ___rb_5;
	// UnityEngine.AudioSource PlayerController::audioSource
	AudioSource_t3300934512 * ___audioSource_6;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t1495603458 * ___shot_7;
	// UnityEngine.Transform PlayerController::shotSpawn
	Transform_t2538887092 * ___shotSpawn_8;
	// System.Single PlayerController::fireRate
	float ___fireRate_9;
	// System.Single PlayerController::nextFire
	float ___nextFire_10;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_tilt_3() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___tilt_3)); }
	inline float get_tilt_3() const { return ___tilt_3; }
	inline float* get_address_of_tilt_3() { return &___tilt_3; }
	inline void set_tilt_3(float value)
	{
		___tilt_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___boundary_4)); }
	inline Boundary_t1776107927 * get_boundary_4() const { return ___boundary_4; }
	inline Boundary_t1776107927 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Boundary_t1776107927 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___rb_5)); }
	inline Rigidbody_t1722124148 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody_t1722124148 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody_t1722124148 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((&___rb_5), value);
	}

	inline static int32_t get_offset_of_audioSource_6() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___audioSource_6)); }
	inline AudioSource_t3300934512 * get_audioSource_6() const { return ___audioSource_6; }
	inline AudioSource_t3300934512 ** get_address_of_audioSource_6() { return &___audioSource_6; }
	inline void set_audioSource_6(AudioSource_t3300934512 * value)
	{
		___audioSource_6 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_6), value);
	}

	inline static int32_t get_offset_of_shot_7() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___shot_7)); }
	inline GameObject_t1495603458 * get_shot_7() const { return ___shot_7; }
	inline GameObject_t1495603458 ** get_address_of_shot_7() { return &___shot_7; }
	inline void set_shot_7(GameObject_t1495603458 * value)
	{
		___shot_7 = value;
		Il2CppCodeGenWriteBarrier((&___shot_7), value);
	}

	inline static int32_t get_offset_of_shotSpawn_8() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___shotSpawn_8)); }
	inline Transform_t2538887092 * get_shotSpawn_8() const { return ___shotSpawn_8; }
	inline Transform_t2538887092 ** get_address_of_shotSpawn_8() { return &___shotSpawn_8; }
	inline void set_shotSpawn_8(Transform_t2538887092 * value)
	{
		___shotSpawn_8 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawn_8), value);
	}

	inline static int32_t get_offset_of_fireRate_9() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___fireRate_9)); }
	inline float get_fireRate_9() const { return ___fireRate_9; }
	inline float* get_address_of_fireRate_9() { return &___fireRate_9; }
	inline void set_fireRate_9(float value)
	{
		___fireRate_9 = value;
	}

	inline static int32_t get_offset_of_nextFire_10() { return static_cast<int32_t>(offsetof(PlayerController_t4008153207, ___nextFire_10)); }
	inline float get_nextFire_10() const { return ___nextFire_10; }
	inline float* get_address_of_nextFire_10() { return &___nextFire_10; }
	inline void set_nextFire_10(float value)
	{
		___nextFire_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T4008153207_H
#ifndef DONE_MOVER_T665216489_H
#define DONE_MOVER_T665216489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Done_Mover
struct  Done_Mover_t665216489  : public MonoBehaviour_t2450550008
{
public:
	// System.Single Done_Mover::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Done_Mover_t665216489, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONE_MOVER_T665216489_H
#ifndef DESTROYBYBOUNDARY_T2426970507_H
#define DESTROYBYBOUNDARY_T2426970507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyByBoundary
struct  DestroyByBoundary_t2426970507  : public MonoBehaviour_t2450550008
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTROYBYBOUNDARY_T2426970507_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (MessageEvent_t3542602194), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (ConnectionChangeEvent_t633191977), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (MessageTypeSubscribers_t2130793604), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[3] = 
{
	MessageTypeSubscribers_t2130793604::get_offset_of_m_messageTypeId_0(),
	MessageTypeSubscribers_t2130793604::get_offset_of_subscriberCount_1(),
	MessageTypeSubscribers_t2130793604::get_offset_of_messageCallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2882768060), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1403[1] = 
{
	U3CInvokeMessageIdSubscribersU3Ec__AnonStorey0_t2882768060::get_offset_of_messageId_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (RenderPipelineManager_t2986895236), -1, sizeof(RenderPipelineManager_t2986895236_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1406[2] = 
{
	RenderPipelineManager_t2986895236_StaticFields::get_offset_of_s_CurrentPipelineAsset_0(),
	RenderPipelineManager_t2986895236_StaticFields::get_offset_of_U3CcurrentPipelineU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (UsedByNativeCodeAttribute_t2479464500), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (RequiredByNativeCodeAttribute_t1240174387), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (FormerlySerializedAsAttribute_t3169436116), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1409[1] = 
{
	FormerlySerializedAsAttribute_t3169436116::get_offset_of_m_oldName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (TypeInferenceRules_t2362883092)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1410[5] = 
{
	TypeInferenceRules_t2362883092::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (TypeInferenceRuleAttribute_t1323471160), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1411[1] = 
{
	TypeInferenceRuleAttribute_t1323471160::get_offset_of__rule_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (NetFxCoreExtensions_t551004036), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (CSSMeasureFunc_t931062647), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (CSSMeasureMode_t3616064465)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1414[4] = 
{
	CSSMeasureMode_t3616064465::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (CSSSize_t438970564)+ sizeof (RuntimeObject), sizeof(CSSSize_t438970564 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1415[2] = 
{
	CSSSize_t438970564::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CSSSize_t438970564::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (Native_t2589456646), -1, sizeof(Native_t2589456646_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1416[1] = 
{
	Native_t2589456646_StaticFields::get_offset_of_s_MeasureFunctions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (U3CModuleU3E_t1600843193), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (Done_BGScroller_t1944418476), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[3] = 
{
	Done_BGScroller_t1944418476::get_offset_of_scrollSpeed_2(),
	Done_BGScroller_t1944418476::get_offset_of_tileSizeZ_3(),
	Done_BGScroller_t1944418476::get_offset_of_startPosition_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (Done_DestroyByBoundary_t4279753471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (Done_DestroyByContact_t3542206613), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1420[4] = 
{
	Done_DestroyByContact_t3542206613::get_offset_of_explosion_2(),
	Done_DestroyByContact_t3542206613::get_offset_of_playerExplosion_3(),
	Done_DestroyByContact_t3542206613::get_offset_of_scoreValue_4(),
	Done_DestroyByContact_t3542206613::get_offset_of_gameController_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (Done_DestroyByTime_t421749926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1421[1] = 
{
	Done_DestroyByTime_t421749926::get_offset_of_lifetime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (Done_EvasiveManeuver_t3181303260), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1422[9] = 
{
	Done_EvasiveManeuver_t3181303260::get_offset_of_boundary_2(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_tilt_3(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_dodge_4(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_smoothing_5(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_startWait_6(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_maneuverTime_7(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_maneuverWait_8(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_currentSpeed_9(),
	Done_EvasiveManeuver_t3181303260::get_offset_of_targetManeuver_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (U3CEvadeU3Ec__Iterator0_t635040430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1423[4] = 
{
	U3CEvadeU3Ec__Iterator0_t635040430::get_offset_of_U24this_0(),
	U3CEvadeU3Ec__Iterator0_t635040430::get_offset_of_U24current_1(),
	U3CEvadeU3Ec__Iterator0_t635040430::get_offset_of_U24disposing_2(),
	U3CEvadeU3Ec__Iterator0_t635040430::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (Done_GameController_t222786251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1424[12] = 
{
	Done_GameController_t222786251::get_offset_of_hazards_2(),
	Done_GameController_t222786251::get_offset_of_spawnValues_3(),
	Done_GameController_t222786251::get_offset_of_hazardCount_4(),
	Done_GameController_t222786251::get_offset_of_spawnWait_5(),
	Done_GameController_t222786251::get_offset_of_startWait_6(),
	Done_GameController_t222786251::get_offset_of_waveWait_7(),
	Done_GameController_t222786251::get_offset_of_scoreText_8(),
	Done_GameController_t222786251::get_offset_of_restartText_9(),
	Done_GameController_t222786251::get_offset_of_gameOverText_10(),
	Done_GameController_t222786251::get_offset_of_gameOver_11(),
	Done_GameController_t222786251::get_offset_of_restart_12(),
	Done_GameController_t222786251::get_offset_of_score_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (U3CSpawnWavesU3Ec__Iterator0_t3721942310), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1425[8] = 
{
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U3CiU3E__1_0(),
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U3ChazardU3E__2_1(),
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U3CspawnPositionU3E__2_2(),
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U3CspawnRotationU3E__2_3(),
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U24this_4(),
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U24current_5(),
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U24disposing_6(),
	U3CSpawnWavesU3Ec__Iterator0_t3721942310::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (Done_Mover_t665216489), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1426[1] = 
{
	Done_Mover_t665216489::get_offset_of_speed_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (Done_Boundary_t1559294317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1427[4] = 
{
	Done_Boundary_t1559294317::get_offset_of_xMin_0(),
	Done_Boundary_t1559294317::get_offset_of_xMax_1(),
	Done_Boundary_t1559294317::get_offset_of_zMin_2(),
	Done_Boundary_t1559294317::get_offset_of_zMax_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (Done_PlayerController_t3659394267), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1428[7] = 
{
	Done_PlayerController_t3659394267::get_offset_of_speed_2(),
	Done_PlayerController_t3659394267::get_offset_of_tilt_3(),
	Done_PlayerController_t3659394267::get_offset_of_boundary_4(),
	Done_PlayerController_t3659394267::get_offset_of_shot_5(),
	Done_PlayerController_t3659394267::get_offset_of_shotSpawn_6(),
	Done_PlayerController_t3659394267::get_offset_of_fireRate_7(),
	Done_PlayerController_t3659394267::get_offset_of_nextFire_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (Done_RandomRotator_t1808133580), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1429[1] = 
{
	Done_RandomRotator_t1808133580::get_offset_of_tumble_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (Done_WeaponController_t827985224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1430[4] = 
{
	Done_WeaponController_t827985224::get_offset_of_shot_2(),
	Done_WeaponController_t827985224::get_offset_of_shotSpawn_3(),
	Done_WeaponController_t827985224::get_offset_of_fireRate_4(),
	Done_WeaponController_t827985224::get_offset_of_delay_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (DestroyByBoundary_t2426970507), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (DestroyByContact_t2899904880), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1432[4] = 
{
	DestroyByContact_t2899904880::get_offset_of_explosion_2(),
	DestroyByContact_t2899904880::get_offset_of_playerExplosion_3(),
	DestroyByContact_t2899904880::get_offset_of_scoreValue_4(),
	DestroyByContact_t2899904880::get_offset_of_gameController_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (DestroyByTime_t671487548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1433[1] = 
{
	DestroyByTime_t671487548::get_offset_of_lifetime_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (GameController_t1650485130), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1434[12] = 
{
	GameController_t1650485130::get_offset_of_hazard_2(),
	GameController_t1650485130::get_offset_of_spawnValues_3(),
	GameController_t1650485130::get_offset_of_hazardCount_4(),
	GameController_t1650485130::get_offset_of_spawnWait_5(),
	GameController_t1650485130::get_offset_of_startWait_6(),
	GameController_t1650485130::get_offset_of_waveWait_7(),
	GameController_t1650485130::get_offset_of_scoreText_8(),
	GameController_t1650485130::get_offset_of_restartText_9(),
	GameController_t1650485130::get_offset_of_gameOverText_10(),
	GameController_t1650485130::get_offset_of_score_11(),
	GameController_t1650485130::get_offset_of_gameOver_12(),
	GameController_t1650485130::get_offset_of_restart_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (U3CSpawnWavesU3Ec__Iterator0_t3915818997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1435[7] = 
{
	U3CSpawnWavesU3Ec__Iterator0_t3915818997::get_offset_of_U3CiU3E__1_0(),
	U3CSpawnWavesU3Ec__Iterator0_t3915818997::get_offset_of_U3CspawnPositionU3E__2_1(),
	U3CSpawnWavesU3Ec__Iterator0_t3915818997::get_offset_of_U3CspawnRotationU3E__2_2(),
	U3CSpawnWavesU3Ec__Iterator0_t3915818997::get_offset_of_U24this_3(),
	U3CSpawnWavesU3Ec__Iterator0_t3915818997::get_offset_of_U24current_4(),
	U3CSpawnWavesU3Ec__Iterator0_t3915818997::get_offset_of_U24disposing_5(),
	U3CSpawnWavesU3Ec__Iterator0_t3915818997::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (Mover_t2309472588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1436[2] = 
{
	Mover_t2309472588::get_offset_of_speed_2(),
	Mover_t2309472588::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (Boundary_t1776107927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1437[4] = 
{
	Boundary_t1776107927::get_offset_of_xMin_0(),
	Boundary_t1776107927::get_offset_of_xMax_1(),
	Boundary_t1776107927::get_offset_of_zMin_2(),
	Boundary_t1776107927::get_offset_of_zMax_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (PlayerController_t4008153207), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1438[9] = 
{
	PlayerController_t4008153207::get_offset_of_speed_2(),
	PlayerController_t4008153207::get_offset_of_tilt_3(),
	PlayerController_t4008153207::get_offset_of_boundary_4(),
	PlayerController_t4008153207::get_offset_of_rb_5(),
	PlayerController_t4008153207::get_offset_of_audioSource_6(),
	PlayerController_t4008153207::get_offset_of_shot_7(),
	PlayerController_t4008153207::get_offset_of_shotSpawn_8(),
	PlayerController_t4008153207::get_offset_of_fireRate_9(),
	PlayerController_t4008153207::get_offset_of_nextFire_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (RandomRotator_t1294698712), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[2] = 
{
	RandomRotator_t1294698712::get_offset_of_tumble_2(),
	RandomRotator_t1294698712::get_offset_of_rb_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (Readme_t266816827), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1440[4] = 
{
	Readme_t266816827::get_offset_of_icon_2(),
	Readme_t266816827::get_offset_of_title_3(),
	Readme_t266816827::get_offset_of_sections_4(),
	Readme_t266816827::get_offset_of_loadedLayout_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (Section_t2095351664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1441[4] = 
{
	Section_t2095351664::get_offset_of_heading_0(),
	Section_t2095351664::get_offset_of_text_1(),
	Section_t2095351664::get_offset_of_linkText_2(),
	Section_t2095351664::get_offset_of_url_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
