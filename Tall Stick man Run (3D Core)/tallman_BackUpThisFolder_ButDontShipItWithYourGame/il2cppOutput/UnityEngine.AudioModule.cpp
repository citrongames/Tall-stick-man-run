﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30;
// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0574E31B2E15797E57C51DEC554AE14E00CCB9CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0FC2A6DFBAD242B7CE1A74ACA9D3224CE2E0163D;
IL2CPP_EXTERN_C String_t* _stringLiteral57186E11345D0E246E80500DE17B8C941EF8A38F;
IL2CPP_EXTERN_C String_t* _stringLiteral706336A4F6F53F903F6BD416474754F528D2A13B;
IL2CPP_EXTERN_C String_t* _stringLiteralC51F74D9F7385459B7E90865166418A267D9A62B;
IL2CPP_EXTERN_C String_t* _stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPlayableBinding_CreateAudioOutput_m94A81E9E8FC663985A4507892C6B19DD34A7DBA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m9A34D349E499987930B568EFE7C9A3F0B8AD47BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t462BCCFB9B78348533823E0754F65F52A5348F89 
{
};
struct Il2CppArrayBounds;

// UnityEngine.Audio.AudioPlayableBinding
struct AudioPlayableBinding_tCEBDA2DEB832C1B7A2698EC9DAB066F7D6D85D3F  : public RuntimeObject
{
};

// UnityEngine.Audio.AudioPlayableGraphExtensions
struct AudioPlayableGraphExtensions_tFE52BCEBCCE023697BAC3291D42A6659E973F50E  : public RuntimeObject
{
};

// UnityEngine.Experimental.Audio.AudioSampleProvider
struct AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2  : public RuntimeObject
{
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesAvailable
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesAvailable_0;
	// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler UnityEngine.Experimental.Audio.AudioSampleProvider::sampleFramesOverflow
	SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* ___sampleFramesOverflow_1;
};

// UnityEngine.AudioSettings
struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD  : public RuntimeObject
{
};

struct AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields
{
	// UnityEngine.AudioSettings/AudioConfigurationChangeHandler UnityEngine.AudioSettings::OnAudioConfigurationChanged
	AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* ___OnAudioConfigurationChanged_0;
	// System.Action UnityEngine.AudioSettings::OnAudioSystemShuttingDown
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemShuttingDown_1;
	// System.Action UnityEngine.AudioSettings::OnAudioSystemStartedUp
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnAudioSystemStartedUp_2;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// UnityEngine.AudioSettings/Mobile
struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD  : public RuntimeObject
{
};

struct Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields
{
	// System.Boolean UnityEngine.AudioSettings/Mobile::<muteState>k__BackingField
	bool ___U3CmuteStateU3Ek__BackingField_0;
	// System.Boolean UnityEngine.AudioSettings/Mobile::_stopAudioOutputOnMute
	bool ____stopAudioOutputOnMute_1;
	// System.Action`1<System.Boolean> UnityEngine.AudioSettings/Mobile::OnMuteStateChanged
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___OnMuteStateChanged_2;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.Playables.PlayableGraph
struct PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E 
{
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_StaticFields
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Null_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Audio.AudioClipPlayable
struct AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioMixerPlayable
struct AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Audio.AudioPlayableOutput
struct AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Playables.Playable
struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

struct Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F_StaticFields
{
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___m_NullPlayable_1;
};

// UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 
{
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t* ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___m_CreateOutputMethod_3;
};

struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_StaticFields
{
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_tC50C3F27A8E4246488F7A5998CAABAC4811A92CD* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_SourceObject_1;
	Type_t* ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

struct PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680_StaticFields
{
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___m_NullPlayableOutput_1;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E  : public MulticastDelegate_t
{
};

// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072  : public MulticastDelegate_t
{
};

// UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler
struct SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30  : public MulticastDelegate_t
{
};

// UnityEngine.AudioSettings/AudioConfigurationChangeHandler
struct AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177  : public MulticastDelegate_t
{
};

// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509  : public MulticastDelegate_t
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableExtensions::SetDuration<UnityEngine.Audio.AudioClipPlayable>(U,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m9A34D349E499987930B568EFE7C9A3F0B8AD47BC_gshared (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___playable0, double ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioClipPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_gshared (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_mE5154CA6072EF2812CD739747D4812960DFD6076_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m68FB4927CF9C01A30690862988CDDF45D14D12BC_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_mBF7E26CCA6C13E32E51714D2FF542F235DC8D73C (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_mCDF36996183E850C64735468A49CCE0A31388AF4 (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m0AB94BFD5A80ED87972BFB693A283D8DD1E6A8BF (const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.AudioSettings::StartAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mF4CCDB1F676838D633FC21A9164EF417C3583E62 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSettings::StopAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_mCC1E7BBBEB3E4E5968E6BB3CB16833CFC59A379F (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_CreateHandle_m3D3EEAD0F584A14B608579167811E5B0497725D0 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, bool ___looping2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableExtensions::SetDuration<UnityEngine.Audio.AudioClipPlayable>(U,System.Double)
inline void PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m9A34D349E499987930B568EFE7C9A3F0B8AD47BC (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___playable0, double ___value1, const RuntimeMethod* method)
{
	((  void (*) (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0, double, const RuntimeMethod*))PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m9A34D349E499987930B568EFE7C9A3F0B8AD47BC_gshared)(___playable0, ___value1, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mB182B6257F637BFE9C0DAEA9656E747CB240AD2C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, bool ___looping2, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioClipPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8 (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___x0, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___other0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetVolumeInternal(UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolumeInternal_mA0A7BCFDD9F1E0761AEFD71C2EA0CBD96B7B069B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, float ___volume1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStereoPanInternal(UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPanInternal_m948B61F4B67962F30C758AF034C6485A38EE5E53 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, float ___stereoPan1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStereoPan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetSpatialBlendInternal(UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlendInternal_m7BEEE6E7D5C276BD591F7103777610CFAFDE364F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, float ___spatialBlend1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetSpatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_mC4222F4234A7414E77D08E4E9E1CF25990FF38F5 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, double ___delay1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetDuration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m58071C3C9A03DEB0B4D9F3D43367CE1F0F11AB32 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, double ___delay1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioClipPlayable::Seek(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___startTime0, double ___startDelay1, double ___duration2, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_CreateHandle_m8D8F9B1AD8C50F1B441F403E16FFCFF60449CBD4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_m7DABB246E18952B463177F30CF4BF3933FF1C14B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, bool ___normalizeInputVolumes1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Audio.AudioMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___other0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableBinding/CreateOutputMethod::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4 (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableBinding UnityEngine.Playables.PlayableBinding::CreateInternal(System.String,UnityEngine.Object,System.Type,UnityEngine.Playables.PlayableBinding/CreateOutputMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 PlayableBinding_CreateInternal_m4CAAB6FB532F76FEA5BDD52D855F36BDA35517B3 (String_t* ___name0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___sourceObject1, Type_t* ___sourceType2, CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* ___createFunction3, const RuntimeMethod* method) ;
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_Create_mD99F7F05DC16052F2BD5A268CD4880FC1AF20E83 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___target2, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutput UnityEngine.Audio.AudioPlayableOutput::op_Implicit(UnityEngine.Audio.AudioPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableOutput_op_Implicit_m547B5B8A78353B77C7597270CE50AD3E748A1343 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 ___output0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_mE3DD360DD1A748A03C8AF4E42C7ED919CE87AD6C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, String_t* ___name1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle2, const RuntimeMethod* method) ;
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_get_Null_mFCED339CCA2255F4E9AB256BEEB19E0374AA16F3 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetTarget(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE (const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Playables.PlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747 (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m79848832BFF56C8AFFD196E429652449E8DEC7DA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___output0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___target1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_mBA74AB313B981B267A663D298B89F8113602ECB1 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___output0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetEvaluateOnSeek(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.AudioSettings::InvokeOnAudioConfigurationChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioConfigurationChanged_m68920E152749F71573C3D10E20967B1850B6EFD8 (bool ___deviceWasChanged0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged_0;
		V_0 = (bool)((!(((RuntimeObject*)(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* L_2 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioConfigurationChanged_0;
		bool L_3 = ___deviceWasChanged0;
		NullCheck(L_2);
		AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline(L_2, L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemShuttingDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemShuttingDown_mFD616504DB4E06637332C1E0AF38485F114B1335 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemShuttingDown_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings::InvokeOnAudioSystemStartedUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSettings_InvokeOnAudioSystemStartedUp_mD0A9BBF2123B903815EEB7099FB60C9141A146A9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_StaticFields*)il2cpp_codegen_static_fields_for(AudioSettings_t66C4BCA1E463B061E2EC9063FB882ACED20D47BD_il2cpp_TypeInfo_var))->___OnAudioSystemStartedUp_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0011;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean UnityEngine.AudioSettings::StartAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StartAudioOutput_mF4CCDB1F676838D633FC21A9164EF417C3583E62 (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StartAudioOutput_mF4CCDB1F676838D633FC21A9164EF417C3583E62_ftn) ();
	static AudioSettings_StartAudioOutput_mF4CCDB1F676838D633FC21A9164EF417C3583E62_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StartAudioOutput_mF4CCDB1F676838D633FC21A9164EF417C3583E62_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StartAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.AudioSettings::StopAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSettings_StopAudioOutput_mCC1E7BBBEB3E4E5968E6BB3CB16833CFC59A379F (const RuntimeMethod* method) 
{
	typedef bool (*AudioSettings_StopAudioOutput_mCC1E7BBBEB3E4E5968E6BB3CB16833CFC59A379F_ftn) ();
	static AudioSettings_StopAudioOutput_mCC1E7BBBEB3E4E5968E6BB3CB16833CFC59A379F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioSettings_StopAudioOutput_mCC1E7BBBEB3E4E5968E6BB3CB16833CFC59A379F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioSettings::StopAudioOutput()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* currentDelegate = reinterpret_cast<AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___deviceWasChanged0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenInst(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___deviceWasChanged0, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___deviceWasChanged0, method);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStaticInvoker(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< bool >::Invoke(__this->___method_ptr_0, method, NULL, ___deviceWasChanged0);
}
void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_ClosedStaticInvoker(AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, bool >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___deviceWasChanged0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(static_cast<int32_t>(___deviceWasChanged0));

}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_Multicast;
}
// System.Void UnityEngine.AudioSettings/AudioConfigurationChangeHandler::Invoke(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___deviceWasChanged0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.AudioSettings/Mobile::get_muteState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_muteState_mE5154CA6072EF2812CD739747D4812960DFD6076 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.AudioSettings/Mobile::set_muteState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_set_muteState_m68FB4927CF9C01A30690862988CDDF45D14D12BC (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.AudioSettings/Mobile::get_stopAudioOutputOnMute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mobile_get_stopAudioOutputOnMute_mBF7E26CCA6C13E32E51714D2FF542F235DC8D73C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->____stopAudioOutputOnMute_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.AudioSettings/Mobile::InvokeOnMuteStateChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_InvokeOnMuteStateChanged_m06F66D92C7B25BFD684DA381E43DCF8BE3BB17CD (bool ___mute0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		bool L_0 = ___mute0;
		bool L_1;
		L_1 = Mobile_get_muteState_mE5154CA6072EF2812CD739747D4812960DFD6076_inline(NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		bool L_3 = ___mute0;
		Mobile_set_muteState_m68FB4927CF9C01A30690862988CDDF45D14D12BC_inline(L_3, NULL);
		bool L_4;
		L_4 = Mobile_get_stopAudioOutputOnMute_mBF7E26CCA6C13E32E51714D2FF542F235DC8D73C(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		bool L_6;
		L_6 = Mobile_get_muteState_mE5154CA6072EF2812CD739747D4812960DFD6076_inline(NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		Mobile_StopAudioOutput_mCDF36996183E850C64735468A49CCE0A31388AF4(NULL);
		goto IL_0039;
	}

IL_0033:
	{
		Mobile_StartAudioOutput_m0AB94BFD5A80ED87972BFB693A283D8DD1E6A8BF(NULL);
	}

IL_0039:
	{
	}

IL_003a:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged_2;
		V_3 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___OnMuteStateChanged_2;
		bool L_11 = ___mute0;
		NullCheck(L_10);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_10, L_11, NULL);
	}

IL_0052:
	{
	}

IL_0053:
	{
		return;
	}
}
// System.Void UnityEngine.AudioSettings/Mobile::StartAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StartAudioOutput_m0AB94BFD5A80ED87972BFB693A283D8DD1E6A8BF (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StartAudioOutput_mF4CCDB1F676838D633FC21A9164EF417C3583E62(NULL);
		return;
	}
}
// System.Void UnityEngine.AudioSettings/Mobile::StopAudioOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mobile_StopAudioOutput_mCDF36996183E850C64735468A49CCE0A31388AF4 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = AudioSettings_StopAudioOutput_mCC1E7BBBEB3E4E5968E6BB3CB16833CFC59A379F(NULL);
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
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef float (*AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_samples_mDEA01CA75E7DEA0F8D480E4AF97FB96085BCF38E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_samples()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn) (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*);
	static AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AudioClip::get_frequency()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_0 = __this->___m_PCMReaderCallback_4;
		V_0 = (bool)((!(((RuntimeObject*)(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* L_2 = __this->___m_PCMReaderCallback_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = ___data0;
		NullCheck(L_2);
		PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_0 = __this->___m_PCMSetPositionCallback_5;
		V_0 = (bool)((!(((RuntimeObject*)(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* L_2 = __this->___m_PCMSetPositionCallback_5;
		int32_t L_3 = ___position0;
		NullCheck(L_2);
		PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline(L_2, L_3, NULL);
	}

IL_001b:
	{
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
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* currentDelegate = reinterpret_cast<PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	NullCheck(___data0);
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___data0, method);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStaticInvoker(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, ___data0);
}
void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_ClosedStaticInvoker(PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___data0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___data0' to native representation
	float* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<float*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_Multicast;
}
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* currentDelegate = reinterpret_cast<PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenInst(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___position0, method);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStaticInvoker(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___position0);
}
void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_ClosedStaticInvoker(PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___position0);

}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_Multicast;
}
// System.Void UnityEngine.AudioClip/PCMSetPositionCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Audio.AudioClipPlayable UnityEngine.Audio.AudioClipPlayable::Create(UnityEngine.Playables.PlayableGraph,UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 AudioClipPlayable_Create_mFDDE873B2BE8D1F691F19E91799DEB178A54BA0D (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, bool ___looping2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m9A34D349E499987930B568EFE7C9A3F0B8AD47BC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip1;
		bool L_2 = ___looping2;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = AudioClipPlayable_CreateHandle_m3D3EEAD0F584A14B608579167811E5B0497725D0(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4 = V_0;
		AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751((&V_1), L_4, NULL);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = ___clip1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_8 = V_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = ___clip1;
		NullCheck(L_9);
		float L_10;
		L_10 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_9, NULL);
		PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m9A34D349E499987930B568EFE7C9A3F0B8AD47BC(L_8, ((double)L_10), PlayableExtensions_SetDuration_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m9A34D349E499987930B568EFE7C9A3F0B8AD47BC_RuntimeMethod_var);
	}

IL_002b:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_11 = V_1;
		V_3 = L_11;
		goto IL_002f;
	}

IL_002f:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_12 = V_3;
		return L_12;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,UnityEngine.AudioClip,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_CreateHandle_m3D3EEAD0F584A14B608579167811E5B0497725D0 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, bool ___looping2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217(NULL);
		V_0 = L_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip1;
		bool L_2 = ___looping2;
		bool L_3;
		L_3 = AudioClipPlayable_InternalCreateAudioClipPlayable_mB182B6257F637BFE9C0DAEA9656E747CB240AD2C((&___graph0), L_1, L_2, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5;
		L_5 = PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217(NULL);
		V_2 = L_5;
		goto IL_0025;
	}

IL_0021:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_0025;
	}

IL_0025:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Audio.AudioClipPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E((&___handle0), PlayableHandle_IsPlayableOfType_TisAudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0_m95809D16DD3494AEB0E9E652B42E0CE3167BEE0E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57186E11345D0E246E80500DE17B8C941EF8A38F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Audio.AudioClipPlayable::op_Implicit(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AudioClipPlayable_op_Implicit_m22CDBB0717207ECCA3892A6281B565246EC2471B (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Audio.AudioClipPlayable UnityEngine.Audio.AudioClipPlayable::op_Explicit(UnityEngine.Playables.Playable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 AudioClipPlayable_op_Explicit_m9A454352B526041DF081B09541EDA59E5190D7AB (Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F ___playable0, const RuntimeMethod* method) 
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = Playable_GetHandle_m39356D23E849DC5428B262092657662C064E04F8((&___playable0), NULL);
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioClipPlayable__ctor_m4E686B92CFA7C6A36AA794B1E8C36B1E60605751((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::Equals(UnityEngine.Audio.AudioClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (RuntimeObject* __this, AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0 ___other0, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetVolume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0574E31B2E15797E57C51DEC554AE14E00CCB9CC)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (&__this->___m_Handle_0);
		float L_7 = ___value0;
		AudioClipPlayable_SetVolumeInternal_mA0A7BCFDD9F1E0761AEFD71C2EA0CBD96B7B069B(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetVolume_m3553EC43CBA43CA7802292710A1A284A6DEF8FCC(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStereoPan(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(-1.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FC2A6DFBAD242B7CE1A74ACA9D3224CE2E0163D)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (&__this->___m_Handle_0);
		float L_7 = ___value0;
		AudioClipPlayable_SetStereoPanInternal_m948B61F4B67962F30C758AF034C6485A38EE5E53(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetStereoPan_mB8403E93B06B2ECCD0D4D6B0D55C151D0CCCC494(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetSpatialBlend(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = ___value0;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			goto IL_0013;
		}
	}
	{
		float L_1 = ___value0;
		G_B3_0 = ((((float)L_1) > ((float)(1.0f)))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___value0), NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral706336A4F6F53F903F6BD416474754F528D2A13B)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_RuntimeMethod_var)));
	}

IL_002f:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_6 = (&__this->___m_Handle_0);
		float L_7 = ___value0;
		AudioClipPlayable_SetSpatialBlendInternal_m7BEEE6E7D5C276BD591F7103777610CFAFDE364F(L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_SetSpatialBlend_m72F1B86E4E5940E8587C1EA32BB48463A00810BB(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::Seek(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391 (AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* __this, double ___startTime0, double ___startDelay1, double ___duration2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (&__this->___m_Handle_0);
		double L_1 = ___startDelay1;
		AudioClipPlayable_SetStartDelayInternal_mC4222F4234A7414E77D08E4E9E1CF25990FF38F5(L_0, L_1, NULL);
		double L_2 = ___duration2;
		V_0 = (bool)((((double)L_2) > ((double)(0.0)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_4 = (&__this->___m_Handle_0);
		double L_5 = ___duration2;
		double L_6 = ___startTime0;
		PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B(L_4, ((double)il2cpp_codegen_add(L_5, L_6)), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_7 = (&__this->___m_Handle_0);
		double L_8 = ___startDelay1;
		double L_9 = ___duration2;
		AudioClipPlayable_SetPauseDelayInternal_m58071C3C9A03DEB0B4D9F3D43367CE1F0F11AB32(L_7, ((double)il2cpp_codegen_add(L_8, L_9)), NULL);
		goto IL_006c;
	}

IL_0040:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_10 = (&__this->___m_Handle_0);
		PlayableHandle_SetDuration_m4E07F9F3A90B2F3CE10325D9F405993F03CCA08B(L_10, (1.7976931348623157E+308), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_11 = (&__this->___m_Handle_0);
		AudioClipPlayable_SetPauseDelayInternal_m58071C3C9A03DEB0B4D9F3D43367CE1F0F11AB32(L_11, (0.0), NULL);
	}

IL_006c:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_12 = (&__this->___m_Handle_0);
		double L_13 = ___startTime0;
		PlayableHandle_SetTime_m6D255AB6779F3DC278813F1C016FE4EBC9F4B1E4(L_12, L_13, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_14 = (&__this->___m_Handle_0);
		PlayableHandle_Play_m1EF8E1105EB6A4A9B0D6638A57CDCBCEEDC6FB2D(L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391_AdjustorThunk (RuntimeObject* __this, double ___startTime0, double ___startDelay1, double ___duration2, const RuntimeMethod* method)
{
	AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioClipPlayable_tD4B758E68CAE03CB0CD31F90C8A3E603B97143A0*>(__this + _offset);
	AudioClipPlayable_Seek_m2AB327B535C677793BBADEA634B7AAC9442B1391(_thisAdjusted, ___startTime0, ___startDelay1, ___duration2, method);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetVolumeInternal(UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetVolumeInternal_mA0A7BCFDD9F1E0761AEFD71C2EA0CBD96B7B069B (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, float ___volume1, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetVolumeInternal_mA0A7BCFDD9F1E0761AEFD71C2EA0CBD96B7B069B_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetVolumeInternal_mA0A7BCFDD9F1E0761AEFD71C2EA0CBD96B7B069B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetVolumeInternal_mA0A7BCFDD9F1E0761AEFD71C2EA0CBD96B7B069B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetVolumeInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___hdl0, ___volume1);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStereoPanInternal(UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStereoPanInternal_m948B61F4B67962F30C758AF034C6485A38EE5E53 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, float ___stereoPan1, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetStereoPanInternal_m948B61F4B67962F30C758AF034C6485A38EE5E53_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetStereoPanInternal_m948B61F4B67962F30C758AF034C6485A38EE5E53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetStereoPanInternal_m948B61F4B67962F30C758AF034C6485A38EE5E53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetStereoPanInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___hdl0, ___stereoPan1);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetSpatialBlendInternal(UnityEngine.Playables.PlayableHandle&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetSpatialBlendInternal_m7BEEE6E7D5C276BD591F7103777610CFAFDE364F (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, float ___spatialBlend1, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetSpatialBlendInternal_m7BEEE6E7D5C276BD591F7103777610CFAFDE364F_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, float);
	static AudioClipPlayable_SetSpatialBlendInternal_m7BEEE6E7D5C276BD591F7103777610CFAFDE364F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetSpatialBlendInternal_m7BEEE6E7D5C276BD591F7103777610CFAFDE364F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetSpatialBlendInternal(UnityEngine.Playables.PlayableHandle&,System.Single)");
	_il2cpp_icall_func(___hdl0, ___spatialBlend1);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetStartDelayInternal_mC4222F4234A7414E77D08E4E9E1CF25990FF38F5 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, double ___delay1, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetStartDelayInternal_mC4222F4234A7414E77D08E4E9E1CF25990FF38F5_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static AudioClipPlayable_SetStartDelayInternal_mC4222F4234A7414E77D08E4E9E1CF25990FF38F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetStartDelayInternal_mC4222F4234A7414E77D08E4E9E1CF25990FF38F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___hdl0, ___delay1);
}
// System.Void UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioClipPlayable_SetPauseDelayInternal_m58071C3C9A03DEB0B4D9F3D43367CE1F0F11AB32 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___hdl0, double ___delay1, const RuntimeMethod* method) 
{
	typedef void (*AudioClipPlayable_SetPauseDelayInternal_m58071C3C9A03DEB0B4D9F3D43367CE1F0F11AB32_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, double);
	static AudioClipPlayable_SetPauseDelayInternal_m58071C3C9A03DEB0B4D9F3D43367CE1F0F11AB32_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_SetPauseDelayInternal_m58071C3C9A03DEB0B4D9F3D43367CE1F0F11AB32_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)");
	_il2cpp_icall_func(___hdl0, ___delay1);
}
// System.Boolean UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClipPlayable_InternalCreateAudioClipPlayable_mB182B6257F637BFE9C0DAEA9656E747CB240AD2C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip1, bool ___looping2, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle3, const RuntimeMethod* method) 
{
	typedef bool (*AudioClipPlayable_InternalCreateAudioClipPlayable_mB182B6257F637BFE9C0DAEA9656E747CB240AD2C_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*, bool, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioClipPlayable_InternalCreateAudioClipPlayable_mB182B6257F637BFE9C0DAEA9656E747CB240AD2C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioClipPlayable_InternalCreateAudioClipPlayable_mB182B6257F637BFE9C0DAEA9656E747CB240AD2C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___clip1, ___looping2, ___handle3);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Audio.AudioMixerPlayable UnityEngine.Audio.AudioMixerPlayable::Create(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C AudioMixerPlayable_Create_m026262C8CC01A49EF65B12B37ADD386D7666C230 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		int32_t L_1 = ___inputCount1;
		bool L_2 = ___normalizeInputVolumes2;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_3;
		L_3 = AudioMixerPlayable_CreateHandle_m8D8F9B1AD8C50F1B441F403E16FFCFF60449CBD4(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4 = V_0;
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_5;
		memset((&L_5), 0, sizeof(L_5));
		AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47((&L_5), L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C L_6 = V_1;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::CreateHandle(UnityEngine.Playables.PlayableGraph,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_CreateHandle_m8D8F9B1AD8C50F1B441F403E16FFCFF60449CBD4 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, int32_t ___inputCount1, bool ___normalizeInputVolumes2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217(NULL);
		V_0 = L_0;
		bool L_1 = ___normalizeInputVolumes2;
		bool L_2;
		L_2 = AudioMixerPlayable_CreateAudioMixerPlayableInternal_m7DABB246E18952B463177F30CF4BF3933FF1C14B((&___graph0), L_1, (&V_0), NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_4;
		L_4 = PlayableHandle_get_Null_m32D9E05C019AC0153C26392C7946F0A1654D1217(NULL);
		V_2 = L_4;
		goto IL_002d;
	}

IL_0020:
	{
		int32_t L_5 = ___inputCount1;
		PlayableHandle_SetInputCount_m6067CD3616C428F777903FCBFD789060A2185DEE((&V_0), L_5, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = V_0;
		V_2 = L_6;
		goto IL_002d;
	}

IL_002d:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_7 = V_2;
		return L_7;
	}
}
// System.Void UnityEngine.Audio.AudioMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB((&___handle0), PlayableHandle_IsPlayableOfType_TisAudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C_m28F89BE3D7CCE69B28258CC5B1C7D4E814F48CAB_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC51F74D9F7385459B7E90865166418A267D9A62B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___handle0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	AudioMixerPlayable__ctor_m2CDDE33FCE0B3F7D9EB482D76515FBF771285F47(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Audio.AudioMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.Playable UnityEngine.Audio.AudioMixerPlayable::op_Implicit(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F AudioMixerPlayable_op_Implicit_m086F43C4E2E38F40AD37C0F3FF9262A84122BF3B (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___playable0, const RuntimeMethod* method) 
{
	Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___playable0), NULL);
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Playable__ctor_mD2EB35E024816AEED68795D0124EAB30E05BF6C4((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		Playable_t95C6B795846BA0C7D96E4DA14897CCCF2554334F L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::Equals(UnityEngine.Audio.AudioMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD((&___other0), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m5E9B847A9D36875C78902727FE36FBEDA4D2D3B9(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (RuntimeObject* __this, AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C ___other0, const RuntimeMethod* method)
{
	AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioMixerPlayable_t6AADDF0C53DF1B4C17969EC24B3B4E4975F3A56C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixerPlayable_CreateAudioMixerPlayableInternal_m7DABB246E18952B463177F30CF4BF3933FF1C14B (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, bool ___normalizeInputVolumes1, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___handle2, const RuntimeMethod* method) 
{
	typedef bool (*AudioMixerPlayable_CreateAudioMixerPlayableInternal_m7DABB246E18952B463177F30CF4BF3933FF1C14B_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, bool, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*);
	static AudioMixerPlayable_CreateAudioMixerPlayableInternal_m7DABB246E18952B463177F30CF4BF3933FF1C14B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioMixerPlayable_CreateAudioMixerPlayableInternal_m7DABB246E18952B463177F30CF4BF3933FF1C14B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Boolean,UnityEngine.Playables.PlayableHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___normalizeInputVolumes1, ___handle2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Playables.PlayableBinding UnityEngine.Audio.AudioPlayableBinding::Create(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 AudioPlayableBinding_Create_mDB746897B08554CCDF9FB4367861DAF364031FBF (String_t* ___name0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___key1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioPlayableBinding_CreateAudioOutput_m94A81E9E8FC663985A4507892C6B19DD34A7DBA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___name0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1 = ___key1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509* L_4 = (CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509*)il2cpp_codegen_object_new(CreateOutputMethod_tD18AFE3B69E6DDD913D82D5FA1D5D909CEEC8509_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CreateOutputMethod__ctor_m5A339017CD8ECB0140EB936FD2A5B589B20166B4(L_4, NULL, (intptr_t)((void*)AudioPlayableBinding_CreateAudioOutput_m94A81E9E8FC663985A4507892C6B19DD34A7DBA5_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4_il2cpp_TypeInfo_var);
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_5;
		L_5 = PlayableBinding_CreateInternal_m4CAAB6FB532F76FEA5BDD52D855F36BDA35517B3(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		PlayableBinding_tB68B3BAC47F4F4C559640472174D5BEF93CB6AB4 L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Audio.AudioPlayableBinding::CreateAudioOutput(UnityEngine.Playables.PlayableGraph,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableBinding_CreateAudioOutput_m94A81E9E8FC663985A4507892C6B19DD34A7DBA5 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E L_0 = ___graph0;
		String_t* L_1 = ___name1;
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2;
		L_2 = AudioPlayableOutput_Create_mD99F7F05DC16052F2BD5A268CD4880FC1AF20E83(L_0, L_1, (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*)NULL, NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_3;
		L_3 = AudioPlayableOutput_op_Implicit_m547B5B8A78353B77C7597270CE50AD3E748A1343(L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_4 = V_0;
		return L_4;
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
// System.Boolean UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioPlayableGraphExtensions_InternalCreateAudioOutput_mE3DD360DD1A748A03C8AF4E42C7ED919CE87AD6C (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E* ___graph0, String_t* ___name1, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___handle2, const RuntimeMethod* method) 
{
	typedef bool (*AudioPlayableGraphExtensions_InternalCreateAudioOutput_mE3DD360DD1A748A03C8AF4E42C7ED919CE87AD6C_ftn) (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E*, String_t*, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*);
	static AudioPlayableGraphExtensions_InternalCreateAudioOutput_mE3DD360DD1A748A03C8AF4E42C7ED919CE87AD6C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableGraphExtensions_InternalCreateAudioOutput_mE3DD360DD1A748A03C8AF4E42C7ED919CE87AD6C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)");
	bool icallRetVal = _il2cpp_icall_func(___graph0, ___name1, ___handle2);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::Create(UnityEngine.Playables.PlayableGraph,System.String,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_Create_mD99F7F05DC16052F2BD5A268CD4880FC1AF20E83 (PlayableGraph_t4A5B0B45343A240F0761574FD7C672E0CFFF7A6E ___graph0, String_t* ___name1, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___target2, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		String_t* L_0 = ___name1;
		bool L_1;
		L_1 = AudioPlayableGraphExtensions_InternalCreateAudioOutput_mE3DD360DD1A748A03C8AF4E42C7ED919CE87AD6C((&___graph0), L_0, (&V_0), NULL);
		V_2 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_3;
		L_3 = AudioPlayableOutput_get_Null_mFCED339CCA2255F4E9AB256BEEB19E0374AA16F3(NULL);
		V_3 = L_3;
		goto IL_002f;
	}

IL_001a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_4 = V_0;
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&V_1), L_4, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ___target2;
		AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04((&V_1), L_5, NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_6 = V_1;
		V_3 = L_6;
		goto IL_002f;
	}

IL_002f:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_7 = V_3;
		return L_7;
	}
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::.ctor(UnityEngine.Playables.PlayableOutputHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = PlayableOutputHandle_IsValid_mA94C343D72B72C3B1C7636C93A8DB5EA71691312((&___handle0), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		bool L_2;
		L_2 = PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6((&___handle0), PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20_mAC4BC6AF8D183B1A972EA239A6D9BEA34054C7C6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7EA9435CDE6F5B13E32FE646D502752ECCD43DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_5 = ___handle0;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409_AdjustorThunk (RuntimeObject* __this, PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___handle0, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409(_thisAdjusted, ___handle0, method);
}
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_get_Null_mFCED339CCA2255F4E9AB256BEEB19E0374AA16F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883_il2cpp_TypeInfo_var);
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutputHandle_get_Null_m4ECA1C6CE17D440F3EC5E2FD03E4D59FF20554DE(NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Audio.AudioPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, const RuntimeMethod* method) 
{
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 _returnValue;
	_returnValue = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Playables.PlayableOutput UnityEngine.Audio.AudioPlayableOutput::op_Implicit(UnityEngine.Audio.AudioPlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 AudioPlayableOutput_op_Implicit_m547B5B8A78353B77C7597270CE50AD3E748A1343 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 ___output0, const RuntimeMethod* method) 
{
	PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = AudioPlayableOutput_GetHandle_m55153D572F8FB9BCFF3843402A20280273B934AE((&___output0), NULL);
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_1;
		memset((&L_1), 0, sizeof(L_1));
		PlayableOutput__ctor_m55FBB20EC479F67641835EA48D84A1AB3DF39747((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Audio.AudioPlayableOutput UnityEngine.Audio.AudioPlayableOutput::op_Explicit(UnityEngine.Playables.PlayableOutput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 AudioPlayableOutput_op_Explicit_m9E8EE0C49D33D0BF5749858B388D9B42F885FCAC (PlayableOutput_t2F7C45A58DA3E788EEDDB439549E21CF3FCF3680 ___output0, const RuntimeMethod* method) 
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 L_0;
		L_0 = PlayableOutput_GetHandle_m12FF2889D15884CBEB92A6CB376827EBA5A607BF((&___output0), NULL);
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AudioPlayableOutput__ctor_mBEA3D7EE652908558720EDC0D40F7BF3EC50D409((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20 L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetTarget(UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (&__this->___m_Handle_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ___value0;
		AudioPlayableOutput_InternalSetTarget_m79848832BFF56C8AFFD196E429652449E8DEC7DA(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04_AdjustorThunk (RuntimeObject* __this, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___value0, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput_SetTarget_m34EE86E5C2833F12993681ABE5AC85961836DE04(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::SetEvaluateOnSeek(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92 (AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* L_0 = (&__this->___m_Handle_0);
		bool L_1 = ___value0;
		AudioPlayableOutput_InternalSetEvaluateOnSeek_mBA74AB313B981B267A663D298B89F8113602ECB1(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AudioPlayableOutput_tC3DFF8095F429D90129A367EAB98A24F6D6ADF20*>(__this + _offset);
	AudioPlayableOutput_SetEvaluateOnSeek_mB3266A8A68E94933A82A0C431B7A2E7321929D92(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetTarget_m79848832BFF56C8AFFD196E429652449E8DEC7DA (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___output0, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___target1, const RuntimeMethod* method) 
{
	typedef void (*AudioPlayableOutput_InternalSetTarget_m79848832BFF56C8AFFD196E429652449E8DEC7DA_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299*);
	static AudioPlayableOutput_InternalSetTarget_m79848832BFF56C8AFFD196E429652449E8DEC7DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetTarget_m79848832BFF56C8AFFD196E429652449E8DEC7DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)");
	_il2cpp_icall_func(___output0, ___target1);
}
// System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioPlayableOutput_InternalSetEvaluateOnSeek_mBA74AB313B981B267A663D298B89F8113602ECB1 (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883* ___output0, bool ___value1, const RuntimeMethod* method) 
{
	typedef void (*AudioPlayableOutput_InternalSetEvaluateOnSeek_mBA74AB313B981B267A663D298B89F8113602ECB1_ftn) (PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883*, bool);
	static AudioPlayableOutput_InternalSetEvaluateOnSeek_mBA74AB313B981B267A663D298B89F8113602ECB1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AudioPlayableOutput_InternalSetEvaluateOnSeek_mBA74AB313B981B267A663D298B89F8113602ECB1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Audio.AudioPlayableOutput::InternalSetEvaluateOnSeek(UnityEngine.Playables.PlayableOutputHandle&,System.Boolean)");
	_il2cpp_icall_func(___output0, ___value1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___sampleFrameCount0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesAvailable_0;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesAvailable_0;
		int32_t L_3 = ___sampleFrameCount0;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InvokeSampleFramesOverflow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* __this, int32_t ___droppedSampleFrameCount0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_0 = __this->___sampleFramesOverflow_1;
		V_0 = (bool)((!(((RuntimeObject*)(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* L_2 = __this->___sampleFramesOverflow_1;
		int32_t L_3 = ___droppedSampleFrameCount0;
		NullCheck(L_2);
		SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline(L_2, __this, L_3, NULL);
	}

IL_001c:
	{
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
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* currentDelegate = reinterpret_cast<SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___provider0, ___sampleFrameCount1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	NullCheck(___provider0);
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___provider0, ___sampleFrameCount1, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___provider0, ___sampleFrameCount1, method);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStaticInvoker(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_ClosedStaticInvoker(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	NullCheck(___provider0);
	VirtualActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	NullCheck(___provider0);
	InterfaceActionInvoker1< uint32_t >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	NullCheck(___provider0);
	GenericVirtualActionInvoker1< uint32_t >::Invoke(method, ___provider0, ___sampleFrameCount1);
}
void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface(SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method)
{
	NullCheck(___provider0);
	GenericInterfaceActionInvoker1< uint32_t >::Invoke(method, ___provider0, ___sampleFrameCount1);
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_Multicast;
}
// System.Void UnityEngine.Experimental.Audio.AudioSampleProvider/SampleFramesHandler::Invoke(UnityEngine.Experimental.Audio.AudioSampleProvider,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___provider0, ___sampleFrameCount1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2_inline (AudioConfigurationChangeHandler_tE071B0CBA3B3A77D3E41F5FCB65B4017885B3177* __this, bool ___deviceWasChanged0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___deviceWasChanged0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mobile_get_muteState_mE5154CA6072EF2812CD739747D4812960DFD6076_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Mobile_set_muteState_m68FB4927CF9C01A30690862988CDDF45D14D12BC_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		((Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_StaticFields*)il2cpp_codegen_static_fields_for(Mobile_t304A73480DF447472BDB16BA19A9E4FE2C8CB2DD_il2cpp_TypeInfo_var))->___U3CmuteStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152_inline (PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___data0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___data0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702_inline (PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* __this, int32_t ___position0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC_inline (SampleFramesHandler_tFE84FF9BBCEFB880D46227188F375BEF680AAA30* __this, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2* ___provider0, uint32_t ___sampleFrameCount1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AudioSampleProvider_t602353124A2F6F2AEC38E56C3C21932344F712E2*, uint32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___provider0, ___sampleFrameCount1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
