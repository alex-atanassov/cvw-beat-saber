#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CubeMovement
struct CubeMovement_t3934879450143859241EC8BD753BF93704668B24;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// RandomSpawner
struct RandomSpawner_tFB4534F0E3FD8EE54BEFB4916726BFCBB854FCD2;
// RegularSpawner
struct RegularSpawner_t819361CA3BB789BF9254BF79DDD7CEDB0B19F5AE;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Saber
struct Saber_t3690B631082F649722F334CE70CBD2821E90BB40;
// Slicer
struct Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00493845E4B04153F10D804DF33B4B55C2054D82;
IL2CPP_EXTERN_C String_t* _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral8202D17828CDCE521E414931D1F8CF7D7566E02F;
IL2CPP_EXTERN_C String_t* _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD 
{
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;
};

struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystemCache_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.ForceMode
struct ForceMode_t603F3ECB085E4FDD30C91273A469047EA64F4459 
{
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.XR.XRNode
struct XRNode_t41F4B2F0EDD99DB33C49EC731C8C7F9DF142B5FF 
{
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;
};

// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button
struct Button_t7AD0FC3561C9879049047086A08F35B816D61A93 
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button::value__
	int32_t ___value___2;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType
struct UpdateType_tC4A820B292EBF2F240DB4AC578DA56EFB6D59F0E 
{
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CubeMovement
struct CubeMovement_t3934879450143859241EC8BD753BF93704668B24  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CubeMovement::speed
	float ___speed_4;
};

// RandomSpawner
struct RandomSpawner_tFB4534F0E3FD8EE54BEFB4916726BFCBB854FCD2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single RandomSpawner::timeInterval
	float ___timeInterval_4;
	// System.Single RandomSpawner::spawnProbability
	float ___spawnProbability_5;
	// UnityEngine.GameObject[] RandomSpawner::cubes
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___cubes_6;
	// UnityEngine.Transform[] RandomSpawner::points
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___points_7;
};

// RegularSpawner
struct RegularSpawner_t819361CA3BB789BF9254BF79DDD7CEDB0B19F5AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RegularSpawner::gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject_4;
	// System.Single RegularSpawner::timeInterval
	float ___timeInterval_5;
	// System.Single RegularSpawner::spawnProbability
	float ___spawnProbability_6;
};

// Saber
struct Saber_t3690B631082F649722F334CE70CBD2821E90BB40  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.LayerMask Saber::layer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layer_4;
	// UnityEngine.Vector3 Saber::previousPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousPos_5;
};

// Slicer
struct Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Slicer::previousPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___previousPos_4;
	// UnityEngine.Vector3 Slicer::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_5;
	// UnityEngine.XR.Interaction.Toolkit.XRController Slicer::xr
	XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* ___xr_6;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// UnityEngine.XR.Interaction.Toolkit.XRController
struct XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F  : public XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C
{
	// UnityEngine.XR.XRNode UnityEngine.XR.Interaction.Toolkit.XRController::m_ControllerNode
	int32_t ___m_ControllerNode_24;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_SelectUsage
	int32_t ___m_SelectUsage_25;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_ActivateUsage
	int32_t ___m_ActivateUsage_26;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_UIPressUsage
	int32_t ___m_UIPressUsage_27;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRController::m_AxisToPressThreshold
	float ___m_AxisToPressThreshold_28;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_RotateAnchorLeft
	int32_t ___m_RotateAnchorLeft_29;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_RotateAnchorRight
	int32_t ___m_RotateAnchorRight_30;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_MoveObjectIn
	int32_t ___m_MoveObjectIn_31;
	// UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button UnityEngine.XR.Interaction.Toolkit.XRController::m_MoveObjectOut
	int32_t ___m_MoveObjectOut_32;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.XR.Interaction.Toolkit.XRController::m_PoseProvider
	BasePoseProvider_t55E2883DF2C8052200284D64B68471636876FA1D* ___m_PoseProvider_33;
	// UnityEngine.XR.InputDevice UnityEngine.XR.Interaction.Toolkit.XRController::m_InputDevice
	InputDevice_t882EE3EE8A71D8F5F38BA3F9356A49F24510E8BD ___m_InputDevice_34;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void CubeMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMovement_Move_m92D4882C2149EC41BB6A045BDFFECAE4C8A20393 (CubeMovement_t3934879450143859241EC8BD753BF93704668B24* __this, const RuntimeMethod* method) ;
// System.Void CubeMovement::DespawnIfMissed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMovement_DespawnIfMissed_mF708C696FD1C694BB1061BA8E54FFFA98A08E240 (CubeMovement_t3934879450143859241EC8BD753BF93704668B24* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRController>()
inline XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Slicer::SplitMesh(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer_SplitMesh_m03C9B44C4593601498AA47AC47F059E3C7A12592 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// UnityEngine.GameObject Slicer::MakeHalf(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Slicer_MakeHalf_m304E393665051AD3AD584D7BC61A7D9BC04D2751 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, bool ___isLeft1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void Slicer::ActivateHaptic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer_ActivateHaptic_m9BB9906FD36A32574433084F696508D323EE165A (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Plane Slicer::GetPlane(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C Slicer_GetPlane_mE30D0AAD26B2979613274E6323ABA20CD81CAFB0 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, const RuntimeMethod* method) ;
// UnityEngine.Mesh Slicer::CloneMesh(UnityEngine.Plane,UnityEngine.Mesh,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Slicer_CloneMesh_m20ABEF973702111C8807676E317F9F91D965029F (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___oMesh1, bool ___halve2, const RuntimeMethod* method) ;
// System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8 (MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Plane::Set3Points(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane_Set3Points_m33CBC0B01C73FE233AB4192ABBDC66BA84D8C1C4 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Plane::GetSide(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Plane_GetSide_mE71EA98675FA3FA61EAF83A79EA61CFCD6F4F3DC (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Plane_ClosestPointOnPlane_m5350637BF436E1B5039D8AC09E7AADA126E85A84 (Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.Mesh::get_triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CubeMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMovement_Start_m5AE8DEABE63D93831A29B8E71F4DAD463D6E93CA (CubeMovement_t3934879450143859241EC8BD753BF93704668B24* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CubeMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMovement_Update_m76928D14B19A558D40B3479141FBDE2176DAF335 (CubeMovement_t3934879450143859241EC8BD753BF93704668B24* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		CubeMovement_Move_m92D4882C2149EC41BB6A045BDFFECAE4C8A20393(__this, NULL);
		// DespawnIfMissed();
		CubeMovement_DespawnIfMissed_mF708C696FD1C694BB1061BA8E54FFFA98A08E240(__this, NULL);
		// }
		return;
	}
}
// System.Void CubeMovement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMovement_Move_m92D4882C2149EC41BB6A045BDFFECAE4C8A20393 (CubeMovement_t3934879450143859241EC8BD753BF93704668B24* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 currentPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// currentPosition.z -= speed * Time.deltaTime;
		float* L_2 = (&(&V_0)->___z_4);
		float* L_3 = L_2;
		float L_4 = *((float*)L_3);
		float L_5 = __this->___speed_4;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		*((float*)L_3) = (float)((float)il2cpp_codegen_subtract(L_4, ((float)il2cpp_codegen_multiply(L_5, L_6))));
		// transform.position = currentPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void CubeMovement::DespawnIfMissed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMovement_DespawnIfMissed_mF708C696FD1C694BB1061BA8E54FFFA98A08E240 (CubeMovement_t3934879450143859241EC8BD753BF93704668B24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transform.position.z < -7f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___z_4;
		if ((!(((float)L_2) < ((float)(-7.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CubeMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CubeMovement__ctor_mD4F968999354D7414E00980B6F0542F2A8E609FC (CubeMovement_t3934879450143859241EC8BD753BF93704668B24* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 1.0f;
		__this->___speed_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RandomSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSpawner_Start_mDF1394147662D6F2710DBBF3D55FF82F86C73E35 (RandomSpawner_tFB4534F0E3FD8EE54BEFB4916726BFCBB854FCD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("Spawn", 0, timeInterval);
		float L_0 = __this->___timeInterval_4;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, (0.0f), L_0, NULL);
		// }
		return;
	}
}
// System.Void RandomSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSpawner_Update_m6B4DAE1A22E2ADB60EC23CE07963E3298CB6B433 (RandomSpawner_tFB4534F0E3FD8EE54BEFB4916726BFCBB854FCD2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RandomSpawner::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSpawner_Spawn_m713F4E5EDB6A18073C88E0AA887508FB8167008D (RandomSpawner_tFB4534F0E3FD8EE54BEFB4916726BFCBB854FCD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Random.Range(0f, 1f) < spawnProbability)
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (1.0f), NULL);
		float L_1 = __this->___spawnProbability_5;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0068;
		}
	}
	{
		// GameObject cube = Instantiate(cubes[Random.Range(0, 4)], points[Random.Range(0, 4)]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___cubes_6;
		int32_t L_3;
		L_3 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___points_7;
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_5, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		// cube.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_12);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_12, L_13, NULL);
		// cube.transform.Rotate(transform.forward, 90 * Random.Range(0, 4));
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_15, NULL);
		int32_t L_17;
		L_17 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, 4, NULL);
		NullCheck(L_14);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_14, L_16, ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)90), L_17))), NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void RandomSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSpawner__ctor_mACA15D8B3C1D0E6103E8DFCFB112FC058CC9BE47 (RandomSpawner_tFB4534F0E3FD8EE54BEFB4916726BFCBB854FCD2* __this, const RuntimeMethod* method) 
{
	{
		// public float timeInterval = 60f / 105f;
		__this->___timeInterval_4 = (0.571428597f);
		// public float spawnProbability = 0.8f;
		__this->___spawnProbability_5 = (0.800000012f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RegularSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegularSpawner_Start_m95FF2D22D549B5FFCAB7F092EFF36C3BA7EB39D4 (RegularSpawner_t819361CA3BB789BF9254BF79DDD7CEDB0B19F5AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("Spawn", 0, timeInterval);
		float L_0 = __this->___timeInterval_5;
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, (0.0f), L_0, NULL);
		// }
		return;
	}
}
// System.Void RegularSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegularSpawner_Update_mDB7695BE02C95EA944E1E289760B74BB3CE07C4B (RegularSpawner_t819361CA3BB789BF9254BF79DDD7CEDB0B19F5AE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void RegularSpawner::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegularSpawner_Spawn_m318CC0D5E5895AD28288C758CD3E21054EC56827 (RegularSpawner_t819361CA3BB789BF9254BF79DDD7CEDB0B19F5AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Random.Range(0f, 1f) < spawnProbability)
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (1.0f), NULL);
		float L_1 = __this->___spawnProbability_6;
		if ((!(((float)L_0) < ((float)L_1))))
		{
			goto IL_0029;
		}
	}
	{
		// Instantiate(gameObject, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameObject_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_2, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void RegularSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegularSpawner__ctor_m6F9DC9722A3857BC0A83BE23F3B8943E499A316B (RegularSpawner_t819361CA3BB789BF9254BF79DDD7CEDB0B19F5AE* __this, const RuntimeMethod* method) 
{
	{
		// public float timeInterval = 60f / 105f;
		__this->___timeInterval_5 = (0.571428597f);
		// public float spawnProbability = 0.5f;
		__this->___spawnProbability_6 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Saber::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_Start_m25201D71B2A2563EECB34C14F8E1C10F713FE557 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Saber::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber_Update_mA04DC7AC7AE5B28545FEFD4D419DF611C70BEEE6 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, 1, layer))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_4 = __this->___layer_4;
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_4, NULL);
		bool L_6;
		L_6 = Physics_Raycast_mE2B4DD419E8995D4086EA47457A6C36435A67F49(L_1, L_3, (&V_0), (1.0f), L_5, NULL);
		if (!L_6)
		{
			goto IL_009f;
		}
	}
	{
		// float angle = Vector3.Angle(transform.position - previousPos, hit.transform.up);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___previousPos_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_8, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_11, NULL);
		float L_13;
		L_13 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_10, L_12, NULL);
		// Debug.Log(angle);
		float L_14 = L_13;
		RuntimeObject* L_15 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_14);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_15, NULL);
		// if (Vector3.Angle(transform.position - previousPos, hit.transform.up) > 130)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___previousPos_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_17, L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_20, NULL);
		float L_22;
		L_22 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_19, L_21, NULL);
		if ((!(((float)L_22) > ((float)(130.0f)))))
		{
			goto IL_009f;
		}
	}
	{
		// Destroy(hit.transform.gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_24, NULL);
	}

IL_009f:
	{
		// previousPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		__this->___previousPos_5 = L_26;
		// }
		return;
	}
}
// System.Void Saber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Saber__ctor_mE8E122F9452454036AFDFD6E46F1F33D0DA26812 (Saber_t3690B631082F649722F334CE70CBD2821E90BB40* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Slicer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer_Start_m66F6F9ED90EB810F5C1EB273062492BE7C77715C (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// xr = transform.parent.parent.GetComponent<XRController>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		NullCheck(L_2);
		XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* L_3;
		L_3 = Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287(L_2, Component_GetComponent_TisXRController_t928E104C899E51FDE12C0A8AC68874587C46C28F_m125A78A2B11A8DC4E549B5275CFECD06A2B5B287_RuntimeMethod_var);
		__this->___xr_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xr_6), (void*)L_3);
		// }
		return;
	}
}
// System.Void Slicer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer_Update_m4386681EF812CF956C6F831064D9615410C27FBD (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, const RuntimeMethod* method) 
{
	{
		// velocity = transform.position - previousPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___previousPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_1, L_2, NULL);
		__this->___velocity_5 = L_3;
		// previousPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___previousPos_4 = L_5;
		// }
		return;
	}
}
// System.Void Slicer::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer_OnTriggerEnter_m81D36EBDB71500FA53F832EACB3AA85927BBA0A6 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (gameObject.tag == other.tag)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_0, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_2, NULL);
		bool L_4;
		L_4 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_00d5;
		}
	}
	{
		// float angle = Vector3.Angle(velocity, other.transform.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___velocity_5;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6 = ___other0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_7, NULL);
		float L_9;
		L_9 = Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline(L_5, L_8, NULL);
		// Debug.Log(velocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___velocity_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10;
		RuntimeObject* L_12 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_11);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_12, NULL);
		// if (angle > 130 && velocity.magnitude >= 0.05)
		if ((!(((float)L_9) > ((float)(130.0f)))))
		{
			goto IL_00d5;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___velocity_5);
		float L_14;
		L_14 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_13, NULL);
		if ((!(((double)((double)L_14)) >= ((double)(0.050000000000000003)))))
		{
			goto IL_00d5;
		}
	}
	{
		// foreach (Transform child in other.transform.parent.transform)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_15 = ___other0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_16, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_18, NULL);
		V_0 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_20 = V_0;
					V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_21 = V_1;
					if (!L_21)
					{
						goto IL_00a9;
					}
				}
				{
					RuntimeObject* L_22 = V_1;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00a9:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008f_1;
			}

IL_007a_1:
			{
				// foreach (Transform child in other.transform.parent.transform)
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				// child.tag = "Untagged";
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_24, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				Component_set_tag_mAF8B6EC052F8AA67088F1841B57EA37F13D0451E(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_24, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), _stringLiteralB59F0EFCC2B82196C428CFD6D80A08F8B47573FC, NULL);
			}

IL_008f_1:
			{
				// foreach (Transform child in other.transform.parent.transform)
				RuntimeObject* L_25 = V_0;
				NullCheck(L_25);
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				if (L_26)
				{
					goto IL_007a_1;
				}
			}
			{
				goto IL_00aa;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00aa:
	{
		// SplitMesh(other.transform.parent.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_27 = ___other0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_28, NULL);
		NullCheck(L_29);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		Slicer_SplitMesh_m03C9B44C4593601498AA47AC47F059E3C7A12592(__this, L_30, NULL);
		// Destroy(other.transform.parent.gameObject);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_31 = ___other0;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_32, NULL);
		NullCheck(L_33);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_34, NULL);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void Slicer::SplitMesh(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer_SplitMesh_m03C9B44C4593601498AA47AC47F059E3C7A12592 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject leftHalf = MakeHalf(go, true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Slicer_MakeHalf_m304E393665051AD3AD584D7BC61A7D9BC04D2751(__this, L_0, (bool)1, NULL);
		// GameObject rightHalf = MakeHalf(go, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___go0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Slicer_MakeHalf_m304E393665051AD3AD584D7BC61A7D9BC04D2751(__this, L_2, (bool)0, NULL);
		// GetComponent<AudioSource>().Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4;
		L_4 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// ActivateHaptic();
		Slicer_ActivateHaptic_m9BB9906FD36A32574433084F696508D323EE165A(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Slicer::MakeHalf(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Slicer_MakeHalf_m304E393665051AD3AD584D7BC61A7D9BC04D2751 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, bool ___isLeft1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* V_2 = NULL;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_3;
	memset((&V_3), 0, sizeof(V_3));
	RuntimeObject* V_4 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	int32_t G_B3_0 = 0;
	{
		// float sign = isLeft ? -1 : 1;
		bool L_0 = ___isLeft1;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0007;
	}

IL_0006:
	{
		G_B3_0 = (-1);
	}

IL_0007:
	{
		V_0 = ((float)G_B3_0);
		// GameObject half = Instantiate(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___go0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_1 = L_2;
		// MeshFilter filter = half.GetComponent<MeshFilter>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
		NullCheck(L_3);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_4;
		L_4 = GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8(L_3, GameObject_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mDF6525BCE37B444313BE0AA2305BDF4EB8B92FE8_RuntimeMethod_var);
		V_2 = L_4;
		// Plane cuttingPlane = GetPlane(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = ___go0;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_6;
		L_6 = Slicer_GetPlane_mE30D0AAD26B2979613274E6323ABA20CD81CAFB0(__this, L_5, NULL);
		V_3 = L_6;
		// foreach (Transform child in half.transform)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_4 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_6;
					if (!L_11)
					{
						goto IL_0076;
					}
				}
				{
					RuntimeObject* L_12 = V_6;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0076:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0057_1;
			}

IL_002e_1:
			{
				// foreach (Transform child in half.transform)
				RuntimeObject* L_13 = V_4;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_5 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if (child.GetComponent<MeshFilter>() != null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_5;
				NullCheck(L_15);
				MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_16;
				L_16 = Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623(L_15, Component_GetComponent_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mB82F66059DFB5715DD85BDED1D90BC03A6C9E623_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_17;
				L_17 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_17)
				{
					goto IL_0057_1;
				}
			}
			{
				// Destroy(child.gameObject);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_5;
				NullCheck(L_18);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_19, NULL);
			}

IL_0057_1:
			{
				// foreach (Transform child in half.transform)
				RuntimeObject* L_20 = V_4;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0077;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0077:
	{
		// filter.mesh = CloneMesh(cuttingPlane, filter.mesh, isLeft);
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_22 = V_2;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_23 = V_3;
		MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* L_24 = V_2;
		NullCheck(L_24);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25;
		L_25 = MeshFilter_get_mesh_m13172D7EF6682861971817D0A47EE2BE49FBCB1C(L_24, NULL);
		bool L_26 = ___isLeft1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27;
		L_27 = Slicer_CloneMesh_m20ABEF973702111C8807676E317F9F91D965029F(__this, L_23, L_25, L_26, NULL);
		NullCheck(L_22);
		MeshFilter_set_mesh_mD2988E2D835205FD6B6CD35A61E1592844D971F8(L_22, L_27, NULL);
		// half.transform.position = go.transform.position + transform.rotation * new Vector3(sign * 0.05f, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = ___go0;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34;
		L_34 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_33, NULL);
		float L_35 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), ((float)il2cpp_codegen_multiply(L_35, (0.0500000007f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_34, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_32, L_37, NULL);
		NullCheck(L_29);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_29, L_38, NULL);
		// half.GetComponent<Rigidbody>().isKinematic = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_1;
		NullCheck(L_39);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_40;
		L_40 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_39, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		NullCheck(L_40);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_40, (bool)0, NULL);
		// half.GetComponent<Rigidbody>().useGravity = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_1;
		NullCheck(L_41);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_42;
		L_42 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_41, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		NullCheck(L_42);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_42, (bool)1, NULL);
		// half.GetComponent<Rigidbody>().AddForce(cuttingPlane.normal * 5 * sign, ForceMode.Impulse);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_1;
		NullCheck(L_43);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_44;
		L_44 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_43, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Plane_get_normal_mA161D94E6F7327BC111007C880B76E1731729EFB((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_45, (5.0f), NULL);
		float L_47 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_46, L_47, NULL);
		NullCheck(L_44);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_44, L_48, 1, NULL);
		// half.GetComponent<Collider>().isTrigger = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = V_1;
		NullCheck(L_49);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_50;
		L_50 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_49, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_50);
		Collider_set_isTrigger_mFCD22F3EB5E28C97863956AB725D53F7F4B7CA78(L_50, (bool)0, NULL);
		// Destroy(half, 2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_51, (2.0f), NULL);
		// return half;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = V_1;
		return L_52;
	}
}
// UnityEngine.Plane Slicer::GetPlane(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C Slicer_GetPlane_mE30D0AAD26B2979613274E6323ABA20CD81CAFB0 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 pt1 = transform.rotation * new Vector3(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_1, L_2, NULL);
		V_0 = L_3;
		// Vector3 pt2 = transform.rotation * new Vector3(0, 1, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_5, L_6, NULL);
		V_1 = L_7;
		// Vector3 pt3 = transform.rotation * new Vector3(0, 0, 1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_9, L_10, NULL);
		V_2 = L_11;
		// Plane rv = new Plane();
		il2cpp_codegen_initobj((&V_3), sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C));
		// rv.Set3Points(pt1, pt2, pt3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		Plane_Set3Points_m33CBC0B01C73FE233AB4192ABBDC66BA84D8C1C4((&V_3), L_12, L_13, L_14, NULL);
		// return rv;
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_15 = V_3;
		return L_15;
	}
}
// UnityEngine.Mesh Slicer::CloneMesh(UnityEngine.Plane,UnityEngine.Mesh,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* Slicer_CloneMesh_m20ABEF973702111C8807676E317F9F91D965029F (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___p0, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___oMesh1, bool ___halve2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8202D17828CDCE521E414931D1F8CF7D7566E02F);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* V_0 = NULL;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Mesh cMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_0, NULL);
		V_0 = L_0;
		// cMesh.name = "slicedMesh";
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_1 = V_0;
		NullCheck(L_1);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_1, _stringLiteral8202D17828CDCE521E414931D1F8CF7D7566E02F, NULL);
		// Vector3[] vertices = oMesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_2 = ___oMesh1;
		NullCheck(L_2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3;
		L_3 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_2, NULL);
		V_1 = L_3;
		// for (int i = 0; i < vertices.Length; i++)
		V_2 = 0;
		goto IL_0046;
	}

IL_001c:
	{
		// bool side = p.GetSide(vertices[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Plane_GetSide_mE71EA98675FA3FA61EAF83A79EA61CFCD6F4F3DC((&___p0), L_7, NULL);
		// if (side == halve)
		bool L_9 = ___halve2;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0042;
		}
	}
	{
		// vertices[i] = p.ClosestPointOnPlane(vertices[i]);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = V_1;
		int32_t L_11 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Plane_ClosestPointOnPlane_m5350637BF436E1B5039D8AC09E7AADA126E85A84((&___p0), L_15, NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
	}

IL_0042:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < vertices.Length; i++)
		int32_t L_18 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_19 = V_1;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// cMesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_20 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = V_1;
		NullCheck(L_20);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_20, L_21, NULL);
		// cMesh.triangles = oMesh.triangles;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_22 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23 = ___oMesh1;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24;
		L_24 = Mesh_get_triangles_m33E39B4A383CC613C760FA7E297AC417A433F24B(L_23, NULL);
		NullCheck(L_22);
		Mesh_set_triangles_m124405320579A8D92711BB5A124644963A26F60B(L_22, L_24, NULL);
		// cMesh.normals = oMesh.normals;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_25 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = ___oMesh1;
		NullCheck(L_26);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27;
		L_27 = Mesh_get_normals_m2B6B159B799E6E235EA651FCAB2E18EE5B18ED62(L_26, NULL);
		NullCheck(L_25);
		Mesh_set_normals_m85D73193C49211BE9FA135FF72D5749B16A4760B(L_25, L_27, NULL);
		// cMesh.uv = oMesh.uv;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = V_0;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_29 = ___oMesh1;
		NullCheck(L_29);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30;
		L_30 = Mesh_get_uv_mA47805C48AB3493FF3727922C43E77880E73519F(L_29, NULL);
		NullCheck(L_28);
		Mesh_set_uv_m6ED9C50E0DA8166DD48AC40FD6C828B9AD2E9617(L_28, L_30, NULL);
		// return cMesh;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = V_0;
		return L_31;
	}
}
// System.Void Slicer::ActivateHaptic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer_ActivateHaptic_m9BB9906FD36A32574433084F696508D323EE165A (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00493845E4B04153F10D804DF33B4B55C2054D82);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(xr != null)
		XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* L_0 = __this->___xr_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// xr.SendHapticImpulse(0.5f, 0.15f);
		XRController_t928E104C899E51FDE12C0A8AC68874587C46C28F* L_2 = __this->___xr_6;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, float, float >::Invoke(14 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::SendHapticImpulse(System.Single,System.Single) */, L_2, (0.5f), (0.150000006f));
		// Debug.Log("Bzzzt");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral00493845E4B04153F10D804DF33B4B55C2054D82, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Slicer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slicer__ctor_mE903821DCD7395AD81A7595D6C87B2BDDB698BE5 (Slicer_tE39014ED032EF413883650E4D3BFAA9022065B99* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		// foreach (var loader in loaders)
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0071;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0071:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005e_1;
			}

IL_0017_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_6 = V_0;
				NullCheck(L_6);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_7;
				L_7 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_6);
				// if (loader.name.Equals("Oculus Loader"))
				NullCheck(L_7);
				String_t* L_8;
				L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
				NullCheck(L_8);
				bool L_9;
				L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				if (!L_9)
				{
					goto IL_005e_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_RightController_5;
				NullCheck(L_10);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_LeftController_4;
				NullCheck(L_11);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_12);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
			}

IL_005e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_14 = V_0;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_0072;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_m1B9CC61B142C3A0E7EEB0559983CC391D1582F56_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___from0), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___to1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___from0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___to1;
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_mF17EAF521849B0E007AEE3B009727D3DF9EF110F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
