#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object>
struct Dictionary_2_t4FF21A84FE740BDEF33FFAA0162AAAADBA3DEB56;
// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Cinemachine.TargetPositionCache/CacheEntry>
struct Dictionary_2_t29F94820877E2B83E48075DD7E4FB54F414D1F35;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>
struct GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>
struct GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90;
// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>
struct GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Object>
struct IEqualityComparer_1_tE1B452183381DE5C65F7FA196512AA93494E8076;
// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension>
struct List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Text.StringBuilder>
struct List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9;
// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable>
struct List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4;
// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>
struct List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.Object>[]
struct SlotU5BU5D_tB954CFB6304E7898C4816F5DC15DD8F413A31531;
// UnityEngine.AnimationCurve[]
struct AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Text.StringBuilder[]
struct StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Cinemachine.CinemachineCore/Stage[]
struct StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981;
// Cinemachine.CinemachineImpulseManager/ImpulseEvent[]
struct ImpulseEventU5BU5D_tCF980EF61AF44F71D004A0DD9CD3CF736C5EAFB7;
// Cinemachine.Utility.HeadingTracker/Item[]
struct ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47;
// Cinemachine.NoiseSettings/TransformNoiseParams[]
struct TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Cinemachine.Utility.CinemachineDebug
struct CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390;
// Cinemachine.CinemachineExtension
struct CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73;
// Cinemachine.CinemachineImpulseChannelPropertyAttribute
struct CinemachineImpulseChannelPropertyAttribute_t27658A8AEDEEF3ED48B499EB4C5BD54BD87147A4;
// Cinemachine.CinemachineImpulseDefinition
struct CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705;
// Cinemachine.CinemachineImpulseEnvelopePropertyAttribute
struct CinemachineImpulseEnvelopePropertyAttribute_t35FABBCC02CE5311941C006B1E583EE1A840D19B;
// Cinemachine.CinemachineImpulseListener
struct CinemachineImpulseListener_tEC63D9DEEDB2F4C45B76D36F9593704722EC2039;
// Cinemachine.CinemachineImpulseManager
struct CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F;
// Cinemachine.CinemachineImpulseSource
struct CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83;
// Cinemachine.CinemachineIndependentImpulseListener
struct CinemachineIndependentImpulseListener_t3C68C753A1E5436FAD419083E2935442A251CC6E;
// Cinemachine.PostFX.CinemachinePostProcessing
struct CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5;
// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE;
// Cinemachine.PostFX.CinemachineVolumeSettings
struct CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// Cinemachine.Utility.GaussianWindow1D_CameraRotation
struct GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98;
// Cinemachine.Utility.GaussianWindow1D_Quaternion
struct GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B;
// Cinemachine.Utility.GaussianWindow1D_Vector3
struct GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86;
// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Cinemachine.ICinemachineTargetGroup
struct ICinemachineTargetGroup_t3741E5378B5C1636777589A1BE1811E9E96ADF1B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Cinemachine.ISignalSource6D
struct ISignalSource6D_tFE7BD21AFCDC4FB28E680A0A6885882CB7D88BEB;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Cinemachine.NoiseSettings
struct NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Cinemachine.Utility.PositionPredictor
struct PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Cinemachine.SignalSourceAsset
struct SignalSourceAsset_t187094A020026D70B16096697802137226248D2B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708;
// Cinemachine.CinemachineImpulseDefinition/LegacySignalSource
struct LegacySignalSource_tE86BB3F8A45E424A23A35606DB6A8852633FACF4;
// Cinemachine.CinemachineImpulseDefinition/SignalSource
struct SignalSource_tDDF94C399376B07EC3E5A1F28A10A22ECDF4560E;
// Cinemachine.CinemachineImpulseManager/ImpulseEvent
struct ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISignalSource6D_tFE7BD21AFCDC4FB28E680A0A6885882CB7D88BEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m49C184BEA4867CB04DF2D0836573D52B0F0203E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_RuntimeMethod_var;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com;;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke;
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke;;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47;
struct TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>
struct GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D  : public RuntimeObject
{
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;
};

// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>
struct GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90  : public RuntimeObject
{
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;
};

// Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>
struct GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C  : public RuntimeObject
{
	// T[] Cinemachine.Utility.GaussianWindow1d`1::mData
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___mData_0;
	// System.Single[] Cinemachine.Utility.GaussianWindow1d`1::mKernel
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___mKernel_1;
	// System.Int32 Cinemachine.Utility.GaussianWindow1d`1::mCurrentPos
	int32_t ___mCurrentPos_2;
	// System.Single Cinemachine.Utility.GaussianWindow1d`1::<Sigma>k__BackingField
	float ___U3CSigmaU3Ek__BackingField_3;
};

// System.Collections.Generic.HashSet`1<UnityEngine.Object>
struct HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB954CFB6304E7898C4816F5DC15DD8F413A31531* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Text.StringBuilder>
struct List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringBuilderU5BU5D_t8066814F873F1C7DE48C891911DC277608AF3EC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>
struct List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ImpulseEventU5BU5D_tCF980EF61AF44F71D004A0DD9CD3CF736C5EAFB7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ImpulseEventU5BU5D_tCF980EF61AF44F71D004A0DD9CD3CF736C5EAFB7* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Cinemachine.Utility.CinemachineDebug
struct CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390  : public RuntimeObject
{
};

struct CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields
{
	// System.Collections.Generic.HashSet`1<UnityEngine.Object> Cinemachine.Utility.CinemachineDebug::mClients
	HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* ___mClients_0;
	// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate Cinemachine.Utility.CinemachineDebug::OnGUIHandlers
	OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* ___OnGUIHandlers_1;
	// System.Collections.Generic.List`1<System.Text.StringBuilder> Cinemachine.Utility.CinemachineDebug::mAvailableStringBuilders
	List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* ___mAvailableStringBuilders_2;
};

// Cinemachine.CinemachineImpulseManager
struct CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent> Cinemachine.CinemachineImpulseManager::m_ExpiredEvents
	List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* ___m_ExpiredEvents_2;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent> Cinemachine.CinemachineImpulseManager::m_ActiveEvents
	List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* ___m_ActiveEvents_3;
	// System.Boolean Cinemachine.CinemachineImpulseManager::IgnoreTimeScale
	bool ___IgnoreTimeScale_4;
};

struct CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields
{
	// Cinemachine.CinemachineImpulseManager Cinemachine.CinemachineImpulseManager::sInstance
	CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* ___sInstance_0;
};

// Cinemachine.Utility.Damper
struct Damper_tA61B33592F02578A5F6A3B037AF23B912F384CC1  : public RuntimeObject
{
};

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};

struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// Cinemachine.Utility.SplineHelpers
struct SplineHelpers_t7682CC3DACAE1C386D3E10C698158BB01029CAB1  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Cinemachine.Utility.UnityQuaternionExtensions
struct UnityQuaternionExtensions_tDAD9DA965B9CB6C259F30527DF4869A7416AAC6B  : public RuntimeObject
{
};

// Cinemachine.Utility.UnityRectExtensions
struct UnityRectExtensions_tC7FB52D9541E42CB39B1C1ACCE9552A38477A837  : public RuntimeObject
{
};

// Cinemachine.Utility.UnityVectorExtensions
struct UnityVectorExtensions_t972032C1EC4BF2068F7C9EA58E25CB9A1513ED09  : public RuntimeObject
{
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

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>
struct Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ____current_3;
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

// Cinemachine.Utility.GaussianWindow1D_CameraRotation
struct GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98  : public GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90
{
};

// Cinemachine.Utility.GaussianWindow1D_Quaternion
struct GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B  : public GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D
{
};

// Cinemachine.Utility.GaussianWindow1D_Vector3
struct GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86  : public GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C
{
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_tA818451ADD7D8E0EEB94ABC9AEB57CA1C7C18CF0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_tA818451ADD7D8E0EEB94ABC9AEB57CA1C7C18CF0__padding[12];
	};
};

// Cinemachine.CameraState/CustomBlendable
struct CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB 
{
	// UnityEngine.Object Cinemachine.CameraState/CustomBlendable::m_Custom
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_Custom_0;
	// System.Single Cinemachine.CameraState/CustomBlendable::m_Weight
	float ___m_Weight_1;
};

// Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 
{
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Frequency
	float ___Frequency_0;
	// System.Single Cinemachine.NoiseSettings/NoiseParams::Amplitude
	float ___Amplitude_1;
	// System.Boolean Cinemachine.NoiseSettings/NoiseParams::Constant
	bool ___Constant_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};
// Native definition for COM marshalling of Cinemachine.NoiseSettings/NoiseParams
struct NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com
{
	float ___Frequency_0;
	float ___Amplitude_1;
	int32_t ___Constant_2;
};

// Cinemachine.TargetPositionCache/TimeRange
struct TimeRange_t2D8D9BBC8BD1BB9F2988380CE7D7334899D9D0E0 
{
	// System.Single Cinemachine.TargetPositionCache/TimeRange::Start
	float ___Start_0;
	// System.Single Cinemachine.TargetPositionCache/TimeRange::End
	float ___End_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD2F0BB6468365F48988527DD340B6CADEB144BD6  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tD2F0BB6468365F48988527DD340B6CADEB144BD6_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::AA5072B96927F710758B3E5237A84AC68E397BC4E1BF7E864A950696D743CC32
	__StaticArrayInitTypeSizeU3D12_tA818451ADD7D8E0EEB94ABC9AEB57CA1C7C18CF0 ___AA5072B96927F710758B3E5237A84AC68E397BC4E1BF7E864A950696D743CC32_0;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Cinemachine.CinemachineImpulseChannelPropertyAttribute
struct CinemachineImpulseChannelPropertyAttribute_t27658A8AEDEEF3ED48B499EB4C5BD54BD87147A4  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
};

// Cinemachine.CinemachineImpulseEnvelopePropertyAttribute
struct CinemachineImpulseEnvelopePropertyAttribute_t35FABBCC02CE5311941C006B1E583EE1A840D19B  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
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

// Cinemachine.Utility.HeadingTracker
struct HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA  : public RuntimeObject
{
	// Cinemachine.Utility.HeadingTracker/Item[] Cinemachine.Utility.HeadingTracker::mHistory
	ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* ___mHistory_0;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mTop
	int32_t ___mTop_1;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mBottom
	int32_t ___mBottom_2;
	// System.Int32 Cinemachine.Utility.HeadingTracker::mCount
	int32_t ___mCount_3;
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::mHeadingSum
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mHeadingSum_4;
	// System.Single Cinemachine.Utility.HeadingTracker::mWeightSum
	float ___mWeightSum_5;
	// System.Single Cinemachine.Utility.HeadingTracker::mWeightTime
	float ___mWeightTime_6;
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::mLastGoodHeading
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___mLastGoodHeading_7;
};

struct HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_StaticFields
{
	// System.Single Cinemachine.Utility.HeadingTracker::mDecayExponent
	float ___mDecayExponent_8;
};

// Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE 
{
	// System.Single Cinemachine.LensSettings::FieldOfView
	float ___FieldOfView_1;
	// System.Single Cinemachine.LensSettings::OrthographicSize
	float ___OrthographicSize_2;
	// System.Single Cinemachine.LensSettings::NearClipPlane
	float ___NearClipPlane_3;
	// System.Single Cinemachine.LensSettings::FarClipPlane
	float ___FarClipPlane_4;
	// System.Single Cinemachine.LensSettings::Dutch
	float ___Dutch_5;
	// Cinemachine.LensSettings/OverrideModes Cinemachine.LensSettings::ModeOverride
	int32_t ___ModeOverride_6;
	// UnityEngine.Vector2 Cinemachine.LensSettings::LensShift
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	// UnityEngine.Camera/GateFitMode Cinemachine.LensSettings::GateFit
	int32_t ___GateFit_8;
	// UnityEngine.Vector2 Cinemachine.LensSettings::m_SensorSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	// System.Boolean Cinemachine.LensSettings::m_OrthoFromCamera
	bool ___m_OrthoFromCamera_10;
	// System.Boolean Cinemachine.LensSettings::m_PhysicalFromCamera
	bool ___m_PhysicalFromCamera_11;
};

struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_StaticFields
{
	// Cinemachine.LensSettings Cinemachine.LensSettings::Default
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Default_0;
};
// Native definition for P/Invoke marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
};
// Native definition for COM marshalling of Cinemachine.LensSettings
struct LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com
{
	float ___FieldOfView_1;
	float ___OrthographicSize_2;
	float ___NearClipPlane_3;
	float ___FarClipPlane_4;
	float ___Dutch_5;
	int32_t ___ModeOverride_6;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___LensShift_7;
	int32_t ___GateFit_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SensorSize_9;
	int32_t ___m_OrthoFromCamera_10;
	int32_t ___m_PhysicalFromCamera_11;
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

// Cinemachine.Utility.PositionPredictor
struct PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E  : public RuntimeObject
{
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_0;
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_SmoothDampVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_SmoothDampVelocity_1;
	// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::m_Pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Pos_2;
	// System.Boolean Cinemachine.Utility.PositionPredictor::m_HavePos
	bool ___m_HavePos_3;
	// System.Single Cinemachine.Utility.PositionPredictor::Smoothing
	float ___Smoothing_4;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};

// Cinemachine.TargetPositionCache
struct TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80  : public RuntimeObject
{
};

struct TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_StaticFields
{
	// System.Boolean Cinemachine.TargetPositionCache::UseCache
	bool ___UseCache_0;
	// Cinemachine.TargetPositionCache/Mode Cinemachine.TargetPositionCache::m_CacheMode
	int32_t ___m_CacheMode_2;
	// System.Single Cinemachine.TargetPositionCache::CurrentTime
	float ___CurrentTime_3;
	// System.Int32 Cinemachine.TargetPositionCache::CurrentFrame
	int32_t ___CurrentFrame_4;
	// System.Boolean Cinemachine.TargetPositionCache::IsCameraCut
	bool ___IsCameraCut_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Transform,Cinemachine.TargetPositionCache/CacheEntry> Cinemachine.TargetPositionCache::m_Cache
	Dictionary_2_t29F94820877E2B83E48075DD7E4FB54F414D1F35* ___m_Cache_6;
	// Cinemachine.TargetPositionCache/TimeRange Cinemachine.TargetPositionCache::m_CacheTimeRange
	TimeRange_t2D8D9BBC8BD1BB9F2988380CE7D7334899D9D0E0 ___m_CacheTimeRange_7;
};

// Cinemachine.CinemachineImpulseDefinition/LegacySignalSource
struct LegacySignalSource_tE86BB3F8A45E424A23A35606DB6A8852633FACF4  : public RuntimeObject
{
	// Cinemachine.CinemachineImpulseDefinition Cinemachine.CinemachineImpulseDefinition/LegacySignalSource::m_Def
	CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___m_Def_0;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseDefinition/LegacySignalSource::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
	// System.Single Cinemachine.CinemachineImpulseDefinition/LegacySignalSource::m_StartTimeOffset
	float ___m_StartTimeOffset_2;
};

// Cinemachine.CinemachineImpulseDefinition/SignalSource
struct SignalSource_tDDF94C399376B07EC3E5A1F28A10A22ECDF4560E  : public RuntimeObject
{
	// Cinemachine.CinemachineImpulseDefinition Cinemachine.CinemachineImpulseDefinition/SignalSource::m_Def
	CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___m_Def_0;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseDefinition/SignalSource::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_1;
};

// Cinemachine.CinemachineImpulseListener/ImpulseReaction
struct ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E 
{
	// Cinemachine.NoiseSettings Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_SecondaryNoise
	NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1* ___m_SecondaryNoise_0;
	// System.Single Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_AmplitudeGain
	float ___m_AmplitudeGain_1;
	// System.Single Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_FrequencyGain
	float ___m_FrequencyGain_2;
	// System.Single Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_Duration
	float ___m_Duration_3;
	// System.Single Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_CurrentAmount
	float ___m_CurrentAmount_4;
	// System.Single Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_CurrentTime
	float ___m_CurrentTime_5;
	// System.Single Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_CurrentDamping
	float ___m_CurrentDamping_6;
	// System.Boolean Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_Initialized
	bool ___m_Initialized_7;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseListener/ImpulseReaction::m_NoiseOffsets
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_NoiseOffsets_8;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineImpulseListener/ImpulseReaction
struct ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_pinvoke
{
	NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1* ___m_SecondaryNoise_0;
	float ___m_AmplitudeGain_1;
	float ___m_FrequencyGain_2;
	float ___m_Duration_3;
	float ___m_CurrentAmount_4;
	float ___m_CurrentTime_5;
	float ___m_CurrentDamping_6;
	int32_t ___m_Initialized_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_NoiseOffsets_8;
};
// Native definition for COM marshalling of Cinemachine.CinemachineImpulseListener/ImpulseReaction
struct ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_com
{
	NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1* ___m_SecondaryNoise_0;
	float ___m_AmplitudeGain_1;
	float ___m_FrequencyGain_2;
	float ___m_Duration_3;
	float ___m_CurrentAmount_4;
	float ___m_CurrentTime_5;
	float ___m_CurrentDamping_6;
	int32_t ___m_Initialized_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_NoiseOffsets_8;
};

// Cinemachine.Utility.HeadingTracker/Item
struct Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 
{
	// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker/Item::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_0;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::weight
	float ___weight_1;
	// System.Single Cinemachine.Utility.HeadingTracker/Item::time
	float ___time_2;
};

// Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 
{
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::X
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 ___X_0;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Y
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 ___Y_1;
	// Cinemachine.NoiseSettings/NoiseParams Cinemachine.NoiseSettings/TransformNoiseParams::Z
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240 ___Z_2;
};
// Native definition for P/Invoke marshalling of Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91_marshaled_pinvoke
{
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke ___X_0;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke ___Y_1;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_pinvoke ___Z_2;
};
// Native definition for COM marshalling of Cinemachine.NoiseSettings/TransformNoiseParams
struct TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91_marshaled_com
{
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com ___X_0;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com ___Y_1;
	NoiseParams_tFEE1B5C35BAFA843F32A882125A5967213B50240_marshaled_com ___Z_2;
};

// Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156 
{
	// Cinemachine.LensSettings Cinemachine.CameraState::Lens
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE ___Lens_0;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	// UnityEngine.Vector3 Cinemachine.CameraState::ReferenceLookAt
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	// UnityEngine.Vector3 Cinemachine.CameraState::RawPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	// UnityEngine.Quaternion Cinemachine.CameraState::RawOrientation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionDampingBypass
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	// System.Single Cinemachine.CameraState::ShotQuality
	float ___ShotQuality_7;
	// UnityEngine.Vector3 Cinemachine.CameraState::PositionCorrection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	// UnityEngine.Quaternion Cinemachine.CameraState::OrientationCorrection
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	// Cinemachine.CameraState/BlendHintValue Cinemachine.CameraState::BlendHint
	int32_t ___BlendHint_10;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom0
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom1
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom2
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	// Cinemachine.CameraState/CustomBlendable Cinemachine.CameraState::mCustom3
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	// System.Collections.Generic.List`1<Cinemachine.CameraState/CustomBlendable> Cinemachine.CameraState::m_CustomOverflow
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	// System.Int32 Cinemachine.CameraState::<NumCustomBlendables>k__BackingField
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_StaticFields
{
	// UnityEngine.Vector3 Cinemachine.CameraState::kNoPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___kNoPoint_3;
};
// Native definition for P/Invoke marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_pinvoke
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_pinvoke ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};
// Native definition for COM marshalling of Cinemachine.CameraState
struct CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156_marshaled_com
{
	LensSettings_t6DAB2F204EC22686BF4397E0871B4875414A84FE_marshaled_com ___Lens_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceUp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___ReferenceLookAt_2;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RawPosition_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___RawOrientation_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionDampingBypass_6;
	float ___ShotQuality_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionCorrection_8;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___OrientationCorrection_9;
	int32_t ___BlendHint_10;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom0_11;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom1_12;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom2_13;
	CustomBlendable_t99FF1C1C42F08A7265E2842451D5CB2F4BFF16CB ___mCustom3_14;
	List_1_tECB13E82883EA864AEBA60A256302E1C8CFD6EF4* ___m_CustomOverflow_15;
	int32_t ___U3CNumCustomBlendablesU3Ek__BackingField_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};

struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E 
{
	// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_AttackShape
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_AttackShape_0;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_DecayShape
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_DecayShape_1;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_AttackTime
	float ___m_AttackTime_2;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_SustainTime
	float ___m_SustainTime_3;
	// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_DecayTime
	float ___m_DecayTime_4;
	// System.Boolean Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_ScaleWithImpact
	bool ___m_ScaleWithImpact_5;
	// System.Boolean Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::m_HoldForever
	bool ___m_HoldForever_6;
};
// Native definition for P/Invoke marshalling of Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_pinvoke
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ___m_AttackShape_0;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke ___m_DecayShape_1;
	float ___m_AttackTime_2;
	float ___m_SustainTime_3;
	float ___m_DecayTime_4;
	int32_t ___m_ScaleWithImpact_5;
	int32_t ___m_HoldForever_6;
};
// Native definition for COM marshalling of Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
struct EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_com
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ___m_AttackShape_0;
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com* ___m_DecayShape_1;
	float ___m_AttackTime_2;
	float ___m_SustainTime_3;
	float ___m_DecayTime_4;
	int32_t ___m_ScaleWithImpact_5;
	int32_t ___m_HoldForever_6;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Cinemachine.CinemachineImpulseDefinition
struct CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705  : public RuntimeObject
{
	// System.Int32 Cinemachine.CinemachineImpulseDefinition::m_ImpulseChannel
	int32_t ___m_ImpulseChannel_0;
	// Cinemachine.CinemachineImpulseDefinition/ImpulseShapes Cinemachine.CinemachineImpulseDefinition::m_ImpulseShape
	int32_t ___m_ImpulseShape_1;
	// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseDefinition::m_CustomImpulseShape
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_CustomImpulseShape_2;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_ImpulseDuration
	float ___m_ImpulseDuration_3;
	// Cinemachine.CinemachineImpulseDefinition/ImpulseTypes Cinemachine.CinemachineImpulseDefinition::m_ImpulseType
	int32_t ___m_ImpulseType_4;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_DissipationRate
	float ___m_DissipationRate_5;
	// Cinemachine.SignalSourceAsset Cinemachine.CinemachineImpulseDefinition::m_RawSignal
	SignalSourceAsset_t187094A020026D70B16096697802137226248D2B* ___m_RawSignal_6;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_AmplitudeGain
	float ___m_AmplitudeGain_7;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_FrequencyGain
	float ___m_FrequencyGain_8;
	// Cinemachine.CinemachineImpulseDefinition/RepeatMode Cinemachine.CinemachineImpulseDefinition::m_RepeatMode
	int32_t ___m_RepeatMode_9;
	// System.Boolean Cinemachine.CinemachineImpulseDefinition::m_Randomize
	bool ___m_Randomize_10;
	// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition Cinemachine.CinemachineImpulseDefinition::m_TimeEnvelope
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E ___m_TimeEnvelope_11;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_ImpactRadius
	float ___m_ImpactRadius_12;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode Cinemachine.CinemachineImpulseDefinition::m_DirectionMode
	int32_t ___m_DirectionMode_13;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode Cinemachine.CinemachineImpulseDefinition::m_DissipationMode
	int32_t ___m_DissipationMode_14;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_DissipationDistance
	float ___m_DissipationDistance_15;
	// System.Single Cinemachine.CinemachineImpulseDefinition::m_PropagationSpeed
	float ___m_PropagationSpeed_16;
};

struct CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705_StaticFields
{
	// UnityEngine.AnimationCurve[] Cinemachine.CinemachineImpulseDefinition::sStandardShapes
	AnimationCurveU5BU5D_t2C4A38D7EFA8095F32316A4D9CE4CBB6840FB7EC* ___sStandardShapes_17;
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Cinemachine.SignalSourceAsset
struct SignalSourceAsset_t187094A020026D70B16096697802137226248D2B  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Cinemachine.Utility.CinemachineDebug/OnGUIDelegate
struct OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708  : public MulticastDelegate_t
{
};

// Cinemachine.CinemachineImpulseManager/ImpulseEvent
struct ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59  : public RuntimeObject
{
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_StartTime
	float ___m_StartTime_0;
	// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Envelope
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E ___m_Envelope_1;
	// Cinemachine.ISignalSource6D Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_SignalSource
	RuntimeObject* ___m_SignalSource_2;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Position_3;
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Radius
	float ___m_Radius_4;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DirectionMode Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_DirectionMode
	int32_t ___m_DirectionMode_5;
	// System.Int32 Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_Channel
	int32_t ___m_Channel_6;
	// Cinemachine.CinemachineImpulseManager/ImpulseEvent/DissipationMode Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_DissipationMode
	int32_t ___m_DissipationMode_7;
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_DissipationDistance
	float ___m_DissipationDistance_8;
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_CustomDissipation
	float ___m_CustomDissipation_9;
	// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::m_PropagationSpeed
	float ___m_PropagationSpeed_10;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Cinemachine.NoiseSettings
struct NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1  : public SignalSourceAsset_t187094A020026D70B16096697802137226248D2B
{
	// Cinemachine.NoiseSettings/TransformNoiseParams[] Cinemachine.NoiseSettings::PositionNoise
	TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1* ___PositionNoise_4;
	// Cinemachine.NoiseSettings/TransformNoiseParams[] Cinemachine.NoiseSettings::OrientationNoise
	TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1* ___OrientationNoise_5;
};

// Cinemachine.CinemachineExtension
struct CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineExtension::m_vcamOwner
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_vcamOwner_5;
	// System.Collections.Generic.Dictionary`2<Cinemachine.ICinemachineCamera,System.Object> Cinemachine.CinemachineExtension::mExtraState
	Dictionary_2_t4FF21A84FE740BDEF33FFAA0162AAAADBA3DEB56* ___mExtraState_6;
};

// Cinemachine.CinemachineImpulseSource
struct CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Cinemachine.CinemachineImpulseDefinition Cinemachine.CinemachineImpulseSource::m_ImpulseDefinition
	CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___m_ImpulseDefinition_4;
	// UnityEngine.Vector3 Cinemachine.CinemachineImpulseSource::m_DefaultVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DefaultVelocity_5;
};

// Cinemachine.CinemachineIndependentImpulseListener
struct CinemachineIndependentImpulseListener_t3C68C753A1E5436FAD419083E2935442A251CC6E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Cinemachine.CinemachineIndependentImpulseListener::impulsePosLastFrame
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___impulsePosLastFrame_4;
	// UnityEngine.Quaternion Cinemachine.CinemachineIndependentImpulseListener::impulseRotLastFrame
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___impulseRotLastFrame_5;
	// System.Int32 Cinemachine.CinemachineIndependentImpulseListener::m_ChannelMask
	int32_t ___m_ChannelMask_6;
	// System.Single Cinemachine.CinemachineIndependentImpulseListener::m_Gain
	float ___m_Gain_7;
	// System.Boolean Cinemachine.CinemachineIndependentImpulseListener::m_Use2DDistance
	bool ___m_Use2DDistance_8;
	// System.Boolean Cinemachine.CinemachineIndependentImpulseListener::m_UseLocalSpace
	bool ___m_UseLocalSpace_9;
	// Cinemachine.CinemachineImpulseListener/ImpulseReaction Cinemachine.CinemachineIndependentImpulseListener::m_ReactionSettings
	ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E ___m_ReactionSettings_10;
};

// Cinemachine.CinemachineVirtualCameraBase
struct CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String[] Cinemachine.CinemachineVirtualCameraBase::m_ExcludedPropertiesInInspector
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ExcludedPropertiesInInspector_4;
	// Cinemachine.CinemachineCore/Stage[] Cinemachine.CinemachineVirtualCameraBase::m_LockStageInInspector
	StageU5BU5D_tF198CE3C6DE5C3D67552DAB4B9680F3BFF319981* ___m_LockStageInInspector_5;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ValidatingStreamVersion
	int32_t ___m_ValidatingStreamVersion_6;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_OnValidateCalled
	bool ___m_OnValidateCalled_7;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_StreamingVersion
	int32_t ___m_StreamingVersion_8;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_Priority
	int32_t ___m_Priority_9;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_ActivationId
	int32_t ___m_ActivationId_10;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::FollowTargetAttachment
	float ___FollowTargetAttachment_11;
	// System.Single Cinemachine.CinemachineVirtualCameraBase::LookAtTargetAttachment
	float ___LookAtTargetAttachment_12;
	// Cinemachine.CinemachineVirtualCameraBase/StandbyUpdateMode Cinemachine.CinemachineVirtualCameraBase::m_StandbyUpdate
	int32_t ___m_StandbyUpdate_13;
	// System.Collections.Generic.List`1<Cinemachine.CinemachineExtension> Cinemachine.CinemachineVirtualCameraBase::<mExtensions>k__BackingField
	List_1_tF512ECCA426FF10471372F52B5C8784FC96A7EAC* ___U3CmExtensionsU3Ek__BackingField_14;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<PreviousStateIsValid>k__BackingField
	bool ___U3CPreviousStateIsValidU3Ek__BackingField_15;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::m_WasStarted
	bool ___m_WasStarted_16;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::mSlaveStatusUpdated
	bool ___mSlaveStatusUpdated_17;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_parentVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_parentVcam_18;
	// System.Int32 Cinemachine.CinemachineVirtualCameraBase::m_QueuePriority
	int32_t ___m_QueuePriority_19;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedFollowTarget_20;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedFollowTargetVcam_21;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedFollowTargetGroup
	RuntimeObject* ___m_CachedFollowTargetGroup_22;
	// UnityEngine.Transform Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedLookAtTarget_23;
	// Cinemachine.CinemachineVirtualCameraBase Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetVcam
	CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___m_CachedLookAtTargetVcam_24;
	// Cinemachine.ICinemachineTargetGroup Cinemachine.CinemachineVirtualCameraBase::m_CachedLookAtTargetGroup
	RuntimeObject* ___m_CachedLookAtTargetGroup_25;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<FollowTargetChanged>k__BackingField
	bool ___U3CFollowTargetChangedU3Ek__BackingField_26;
	// System.Boolean Cinemachine.CinemachineVirtualCameraBase::<LookAtTargetChanged>k__BackingField
	bool ___U3CLookAtTargetChangedU3Ek__BackingField_27;
};

// Cinemachine.PostFX.CinemachineVolumeSettings
struct CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Cinemachine.CinemachineImpulseListener
struct CinemachineImpulseListener_tEC63D9DEEDB2F4C45B76D36F9593704722EC2039  : public CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73
{
	// Cinemachine.CinemachineCore/Stage Cinemachine.CinemachineImpulseListener::m_ApplyAfter
	int32_t ___m_ApplyAfter_7;
	// System.Int32 Cinemachine.CinemachineImpulseListener::m_ChannelMask
	int32_t ___m_ChannelMask_8;
	// System.Single Cinemachine.CinemachineImpulseListener::m_Gain
	float ___m_Gain_9;
	// System.Boolean Cinemachine.CinemachineImpulseListener::m_Use2DDistance
	bool ___m_Use2DDistance_10;
	// System.Boolean Cinemachine.CinemachineImpulseListener::m_UseCameraSpace
	bool ___m_UseCameraSpace_11;
	// Cinemachine.CinemachineImpulseListener/ImpulseReaction Cinemachine.CinemachineImpulseListener::m_ReactionSettings
	ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E ___m_ReactionSettings_12;
};

// Cinemachine.PostFX.CinemachinePostProcessing
struct CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5  : public CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Cinemachine.NoiseSettings/TransformNoiseParams[]
struct TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1  : public RuntimeArray
{
	ALIGN_FIELD (8) TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 m_Items[1];

	inline TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransformNoiseParams_t1056C699265C70FECE1BDF04D38CF74997002A91 value)
	{
		m_Items[index] = value;
	}
};
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
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7  : public RuntimeArray
{
	ALIGN_FIELD (8) Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 m_Items[1];

	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 value)
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
// Cinemachine.Utility.HeadingTracker/Item[]
struct ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 m_Items[1];

	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke& marshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com& marshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_back(const AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com& marshaled, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354& unmarshaled);
IL2CPP_EXTERN_C void AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_cleanup(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com& marshaled);

// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_gshared (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_gshared (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_gshared (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_gshared (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_gshared (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::get_KernelSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_gshared (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationCurve Cinemachine.CinemachineImpulseDefinition::get_ImpulseCurve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* CinemachineImpulseDefinition_get_ImpulseCurve_mAA1558EAB001196015FCCE60BB8DF3200AEC5C4E (CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineImpulseDefinition/SignalSource::get_SignalDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SignalSource_get_SignalDuration_mFFE7C306FADED4391BD9545AF68ECFA6CA95B751 (SignalSource_tDDF94C399376B07EC3E5A1F28A10A22ECDF4560E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineImpulseDefinition/LegacySignalSource::get_SignalDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacySignalSource_get_SignalDuration_mAEA4137DACAED4BA10E1161309A87C8305904373 (LegacySignalSource_tE86BB3F8A45E424A23A35606DB6A8852633FACF4* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::SlerpUnclamped(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// Cinemachine.CinemachineImpulseManager Cinemachine.CinemachineImpulseManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* CinemachineImpulseManager_get_Instance_m60CAF899B8E71E36C8DF7072CAB6448A970E7D02 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cinemachine.CameraState::get_FinalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraState_get_FinalPosition_m4D482D1F3E008068C2151FC24FD85CB6F603AE12 (CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* __this, const RuntimeMethod* method) ;
// System.Boolean Cinemachine.CinemachineImpulseManager::GetImpulseAt(UnityEngine.Vector3,System.Boolean,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineImpulseManager_GetImpulseAt_m60503248A6E51D9CB74F28148A982D8FA5C57D04 (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___listenerLocation0, bool ___distance2D1, int32_t ___channelMask2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot4, const RuntimeMethod* method) ;
// System.Boolean Cinemachine.CinemachineImpulseListener/ImpulseReaction::GetReaction(System.Single,UnityEngine.Vector3,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseReaction_GetReaction_mF1A9A410B1F05368B416656512188311E44E8CC3 (ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* __this, float ___deltaTime0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___impulsePos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineExtension__ctor_m8955F80D4A62DE7C3DA510CFECEF722346241C94 (CinemachineExtension_t147DA9A9CF04E95E661DF21504144EDBBDC0DD73* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseListener/ImpulseReaction::ReSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseReaction_ReSeed_m0E5974B5A368FE95D4137FB5A87BF71699535DB5 (ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineCore::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineCore_get_CurrentTime_mE95A89B5053FB5D86EB1E2D855CDC9E4D4CC5459 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// Cinemachine.TargetPositionCache/Mode Cinemachine.TargetPositionCache::get_CacheMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetPositionCache_get_CacheMode_mDCBA178980BB6A8FEEC18CA1238F52FFDFC8B5A4_inline (const RuntimeMethod* method) ;
// System.Boolean Cinemachine.TargetPositionCache::get_HasCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetPositionCache_get_HasCurrentTime_m143562F778152928D6FE2E609F81786513F6ED2F (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cinemachine.NoiseSettings::GetCombinedFilterResults(Cinemachine.NoiseSettings/TransformNoiseParams[],System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 NoiseSettings_GetCombinedFilterResults_mE35B3A4E1826146B200499B62617F8E629434F20 (TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1* ___noiseParams0, float ___time1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___timeOffsets2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.Damper::Damp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2 (float ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager__ctor_m29FD2A34BDDE38151BEEADBEDE5A966E91FFC143 (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.SplineHelpers::Bezier1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_Bezier1_m246A08965553DC26A27A1F63929FC22FA93D7561 (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>::get_Count()
inline int32_t List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_inline (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>::get_Item(System.Int32)
inline ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* (*) (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean Cinemachine.CinemachineImpulseManager/ImpulseEvent::get_Expired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseEvent_get_Expired_mCA721141A1BF8EABF33B58335F3BF081EE517160 (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8 (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>::.ctor()
inline void List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6 (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent_Clear_mBE18EB8EBB0F8F266AB084B44307155CE823C17A (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>::Add(T)
inline void List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_inline (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* __this, ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*, ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Cinemachine.CinemachineImpulseManager/ImpulseEvent::GetDecayedSignal(UnityEngine.Vector3,System.Boolean,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseEvent_GetDecayedSignal_m0A606723EF1C6867ECAC33BBBDCE4826BE5AB78F (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___listenerPosition0, bool ___use2D1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC (const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent__ctor_mC5F7C05F235EB65CED1FF6E0FBC6C83D9BCBF81B (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineImpulseManager::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineImpulseManager_get_CurrentTime_m67D3ABCDB387670ECEF30D37A8E3CBDA5EB530F4 (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Cinemachine.CinemachineImpulseManager/ImpulseEvent>::Clear()
inline void List_1_Clear_m49C184BEA4867CB04DF2D0836573D52B0F0203E1_inline (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::GetValueAt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_GetValueAt_mAF39D22894C1B21FDA3A5D7C50AF4AEB393BEE6D (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, float ___offset0, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::ChangeStopTime(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_ChangeStopTime_mFE038CADEFEBC54B1262B69139C2C8C209CE1196 (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, float ___offset0, bool ___forceNoDecay1, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Clear_m70B8BFD4F76297739F4D6EC3044D46832196D4EF (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Validate_m2DE55071F0E90DAF09281B7735FD96A93D278C37 (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineImpulseManager::EvaluateDissipationScale(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineImpulseManager_EvaluateDissipationScale_m9210CFEA7341A4025B8164E415A7C4789F265D4C (float ___spread0, float ___normalizedDistance1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::DistanceDecay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ImpulseEvent_DistanceDecay_mD470E344C6B95A38CCFFD8EA0869E98D30141C16 (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, float ___distance0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseDefinition::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseDefinition_OnValidate_mC9E8C5D4227DB0C7467BBDE0004C424B72C083ED (CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseDefinition__ctor_m9A793CB4F91B42D9A7D38C1953A0A081A04B4045 (CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseDefinition::CreateEvent(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseDefinition_CreateEvent_m12158346403D3428D6DBC0D3D22DDDCF551E5B41 (CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulseAtPositionWithVelocity(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulseAtPositionWithVelocity_m943E5F58B6A439998A9C427F42FEBF61094F82C1 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity1, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulseWithVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulseWithVelocity_mF16A92675C0D88821A81722EE1CCEA704F17258F (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity0, const RuntimeMethod* method) ;
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulseWithForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulseWithForce_mB82D805193E1A63D2EBAE187F450E110FDFB2780 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, float ___force0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Object>::Contains(T)
inline bool HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Object>::Remove(T)
inline bool HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595 (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.Object>::.ctor()
inline void HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.Object>::Add(T)
inline bool HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5 (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___text0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___content0, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.Object>::GetEnumerator()
inline Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 (*) (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>::Dispose()
inline void Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553 (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>::get_Current()
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_inline (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853* __this, const RuntimeMethod* method)
{
	return ((  Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*) (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.Object>::MoveNext()
inline bool Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645 (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___size1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Text.StringBuilder>::get_Count()
inline int32_t List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Text.StringBuilder>::get_Item(System.Int32)
inline StringBuilder_t* List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8 (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  StringBuilder_t* (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.StringBuilder>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409 (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.StringBuilder>::.ctor()
inline void List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138 (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.StringBuilder>::Add(T)
inline void List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_inline (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* __this, StringBuilder_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*, StringBuilder_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09 (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector3>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_gshared)(__this, method);
}
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8 (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Quaternion>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Normalize(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::.ctor(System.Single,System.Int32)
inline void GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method)
{
	((  void (*) (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*, float, int32_t, const RuntimeMethod*))GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_gshared)(__this, ___sigma0, ___maxKernelRadius1, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.GaussianWindow1d`1<UnityEngine.Vector2>::get_KernelSize()
inline int32_t GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7 (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*, const RuntimeMethod*))GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_gshared)(__this, method);
}
// System.Void Cinemachine.Utility.PositionPredictor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_Reset_mDA454522FB1823437E5538169D712A2E18F956C5 (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPositionDelta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionPredictor_PredictPositionDelta_mC16231F75C5C088B5CC2444D3C2FA12F6DACC4AD (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, float ___lookaheadTime0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.HeadingTracker::ClearHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) ;
// System.Int32 Cinemachine.Utility.HeadingTracker::get_FilterSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.HeadingTracker::PopBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_PopBottom_mCB0D0A7AE4238580CB7FFAAD17497F7B532B57AE (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.HeadingTracker::Decay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeadingTracker_Decay_m66C3EA4E1471E7B820E2A15BF950BF959865655A (float ___time0, const RuntimeMethod* method) ;
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Lerp(UnityEngine.Vector4,UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Lerp_m6503F684342826D70038B2D13DEE7BD56EC1C88C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::set_Item(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_m6D9485358028E3E22A2C17DF2DEFFAF3C02553C2 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___knot0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl11, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl22, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m04883F317B0C35E16E87523EBDFD346551290968_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_m9020166A171C031DA7B163D3261C09EB7090F0AF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.UnityVectorExtensions::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Cross_mF6C7F58D98C3F8A51FFAB0EF9E4CD77DB2BBBD39 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v21, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_positiveInfinity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_positiveInfinity_m03B87ABC38ACBE2160599734C319DD1BA1064B5F_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mB3B310D2D0CAE78AFB2AE6A9FD2902DE4B359211_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m531A3EF1C1C1F49B637BB83F3795128D571A2B93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upwards1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_SlerpWithReferenceUp_m462C015C97FF4D2E7B7E83B6C1E4A29ED4DD1474 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qA0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qB1, float ___t2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mEC66BAD4357C0F5F7ADE082AD38AD1FE70649315 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::Normalize(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m8F4DF140B072B7EC3D03F05AC1EDFB270579A8D2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Magnitude(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mCCDF8803AFB8B4B52D259376C9CD49F065FF0F42_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Division(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector4::Dot(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m77027F378A20620C9F2AC80A06191C412B76FD2E_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineImpulseDefinition/SignalSource::.ctor(Cinemachine.CinemachineImpulseDefinition,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalSource__ctor_mD776DEC5B0B9B1370EC2E238B46C5AD936C9B0B5 (SignalSource_tDDF94C399376B07EC3E5A1F28A10A22ECDF4560E* __this, CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___def0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity1, const RuntimeMethod* method) 
{
	{
		// public SignalSource(CinemachineImpulseDefinition def, Vector3 velocity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Def = def;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = ___def0;
		__this->___m_Def_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Def_0), (void*)L_0);
		// m_Velocity = velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___velocity1;
		__this->___m_Velocity_1 = L_1;
		// }
		return;
	}
}
// System.Single Cinemachine.CinemachineImpulseDefinition/SignalSource::get_SignalDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SignalSource_get_SignalDuration_mFFE7C306FADED4391BD9545AF68ECFA6CA95B751 (SignalSource_tDDF94C399376B07EC3E5A1F28A10A22ECDF4560E* __this, const RuntimeMethod* method) 
{
	{
		// public float SignalDuration { get { return m_Def.m_ImpulseDuration; } }
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = __this->___m_Def_0;
		NullCheck(L_0);
		float L_1 = L_0->___m_ImpulseDuration_3;
		return L_1;
	}
}
// System.Void Cinemachine.CinemachineImpulseDefinition/SignalSource::GetSignal(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SignalSource_GetSignal_mAB4EB25F3B71C410FDF51FA4A2115D5EEFBEA1FE (SignalSource_tDDF94C399376B07EC3E5A1F28A10A22ECDF4560E* __this, float ___timeSinceSignalStart0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot2, const RuntimeMethod* method) 
{
	{
		// pos = m_Velocity * m_Def.ImpulseCurve.Evaluate(timeSinceSignalStart / SignalDuration);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___m_Velocity_1;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_2 = __this->___m_Def_0;
		NullCheck(L_2);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_3;
		L_3 = CinemachineImpulseDefinition_get_ImpulseCurve_mAA1558EAB001196015FCCE60BB8DF3200AEC5C4E(L_2, NULL);
		float L_4 = ___timeSinceSignalStart0;
		float L_5;
		L_5 = SignalSource_get_SignalDuration_mFFE7C306FADED4391BD9545AF68ECFA6CA95B751(__this, NULL);
		NullCheck(L_3);
		float L_6;
		L_6 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_3, ((float)(L_4/L_5)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_6, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_7;
		// rot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___rot2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_8 = L_9;
		// }
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
// System.Void Cinemachine.CinemachineImpulseDefinition/LegacySignalSource::.ctor(Cinemachine.CinemachineImpulseDefinition,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacySignalSource__ctor_mDC721B7D0B692CDD699AB2012C53D81E0864AA8B (LegacySignalSource_tE86BB3F8A45E424A23A35606DB6A8852633FACF4* __this, CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* ___def0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity1, const RuntimeMethod* method) 
{
	{
		// public LegacySignalSource(CinemachineImpulseDefinition def, Vector3 velocity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Def = def;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = ___def0;
		__this->___m_Def_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Def_0), (void*)L_0);
		// m_Velocity = velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___velocity1;
		__this->___m_Velocity_1 = L_1;
		// if (m_Def.m_Randomize && m_Def.m_RawSignal.SignalDuration <= 0)
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_2 = __this->___m_Def_0;
		NullCheck(L_2);
		bool L_3 = L_2->___m_Randomize_10;
		if (!L_3)
		{
			goto IL_004d;
		}
	}
	{
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_4 = __this->___m_Def_0;
		NullCheck(L_4);
		SignalSourceAsset_t187094A020026D70B16096697802137226248D2B* L_5 = L_4->___m_RawSignal_6;
		NullCheck(L_5);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(6 /* System.Single Cinemachine.SignalSourceAsset::get_SignalDuration() */, L_5);
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		// m_StartTimeOffset = UnityEngine.Random.Range(-1000f, 1000f);
		float L_7;
		L_7 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-1000.0f), (1000.0f), NULL);
		__this->___m_StartTimeOffset_2 = L_7;
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Single Cinemachine.CinemachineImpulseDefinition/LegacySignalSource::get_SignalDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegacySignalSource_get_SignalDuration_mAEA4137DACAED4BA10E1161309A87C8305904373 (LegacySignalSource_tE86BB3F8A45E424A23A35606DB6A8852633FACF4* __this, const RuntimeMethod* method) 
{
	{
		// public float SignalDuration { get { return m_Def.m_RawSignal.SignalDuration; } }
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = __this->___m_Def_0;
		NullCheck(L_0);
		SignalSourceAsset_t187094A020026D70B16096697802137226248D2B* L_1 = L_0->___m_RawSignal_6;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(6 /* System.Single Cinemachine.SignalSourceAsset::get_SignalDuration() */, L_1);
		return L_2;
	}
}
// System.Void Cinemachine.CinemachineImpulseDefinition/LegacySignalSource::GetSignal(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegacySignalSource_GetSignal_mC5FAAE1D894534894FE2312D28EE5314919C6D34 (LegacySignalSource_tE86BB3F8A45E424A23A35606DB6A8852633FACF4* __this, float ___timeSinceSignalStart0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float time = m_StartTimeOffset + timeSinceSignalStart * m_Def.m_FrequencyGain;
		float L_0 = __this->___m_StartTimeOffset_2;
		float L_1 = ___timeSinceSignalStart0;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_2 = __this->___m_Def_0;
		NullCheck(L_2);
		float L_3 = L_2->___m_FrequencyGain_8;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_3))));
		// float signalDuration = SignalDuration;
		float L_4;
		L_4 = LegacySignalSource_get_SignalDuration_mAEA4137DACAED4BA10E1161309A87C8305904373(__this, NULL);
		V_1 = L_4;
		// if (signalDuration > 0)
		float L_5 = V_1;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0064;
		}
	}
	{
		// if (m_Def.m_RepeatMode == RepeatMode.Loop)
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_6 = __this->___m_Def_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___m_RepeatMode_9;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0038;
		}
	}
	{
		// time %= signalDuration;
		float L_8 = V_0;
		float L_9 = V_1;
		V_0 = (fmodf(L_8, L_9));
		goto IL_0064;
	}

IL_0038:
	{
		// else if (m_Def.m_TimeEnvelope.Duration > UnityVectorExtensions.Epsilon)
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_10 = __this->___m_Def_0;
		NullCheck(L_10);
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_11 = (&L_10->___m_TimeEnvelope_11);
		float L_12;
		L_12 = EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C(L_11, NULL);
		if ((!(((float)L_12) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0064;
		}
	}
	{
		// time *= m_Def.m_TimeEnvelope.Duration / signalDuration; // stretch
		float L_13 = V_0;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_14 = __this->___m_Def_0;
		NullCheck(L_14);
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_15 = (&L_14->___m_TimeEnvelope_11);
		float L_16;
		L_16 = EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C(L_15, NULL);
		float L_17 = V_1;
		V_0 = ((float)il2cpp_codegen_multiply(L_13, ((float)(L_16/L_17))));
	}

IL_0064:
	{
		// m_Def.m_RawSignal.GetSignal(time, out pos, out rot);
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_18 = __this->___m_Def_0;
		NullCheck(L_18);
		SignalSourceAsset_t187094A020026D70B16096697802137226248D2B* L_19 = L_18->___m_RawSignal_6;
		float L_20 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___pos1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_22 = ___rot2;
		NullCheck(L_19);
		VirtualActionInvoker3< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* >::Invoke(7 /* System.Void Cinemachine.SignalSourceAsset::GetSignal(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&) */, L_19, L_20, L_21, L_22);
		// float gain = m_Velocity.magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&__this->___m_Velocity_1);
		float L_24;
		L_24 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_23, NULL);
		V_2 = L_24;
		// Vector3 dir = m_Velocity.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (&__this->___m_Velocity_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline(L_25, NULL);
		// gain *= m_Def.m_AmplitudeGain;
		float L_27 = V_2;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_28 = __this->___m_Def_0;
		NullCheck(L_28);
		float L_29 = L_28->___m_AmplitudeGain_7;
		V_2 = ((float)il2cpp_codegen_multiply(L_27, L_29));
		// pos *= gain;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_31);
		float L_33 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_32, L_33, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_30 = L_34;
		// pos = Quaternion.FromToRotation(Vector3.down, m_Velocity) * pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->___m_Velocity_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_39 = ___pos1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_38, L_40, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_35 = L_41;
		// rot = Quaternion.SlerpUnclamped(Quaternion.identity, rot, gain);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_42 = ___rot2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_44 = ___rot2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_44);
		float L_46 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_47;
		L_47 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_43, L_45, L_46, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_42 = L_47;
		// }
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
// System.Void Cinemachine.CinemachineImpulseListener::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseListener_Reset_m7B09DF77C46498F557E7DFD9342ACE488AE9FCF6 (CinemachineImpulseListener_tEC63D9DEEDB2F4C45B76D36F9593704722EC2039* __this, const RuntimeMethod* method) 
{
	ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_ApplyAfter = CinemachineCore.Stage.Noise; // this is the default setting
		__this->___m_ApplyAfter_7 = 2;
		// m_ChannelMask = 1;
		__this->___m_ChannelMask_8 = 1;
		// m_Gain = 1;
		__this->___m_Gain_9 = (1.0f);
		// m_Use2DDistance = false;
		__this->___m_Use2DDistance_10 = (bool)0;
		// m_UseCameraSpace = true;
		__this->___m_UseCameraSpace_11 = (bool)1;
		// m_ReactionSettings = new ImpulseReaction
		// {
		//     m_AmplitudeGain = 1,
		//     m_FrequencyGain = 1,
		//     m_Duration = 1f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E));
		(&V_0)->___m_AmplitudeGain_1 = (1.0f);
		(&V_0)->___m_FrequencyGain_2 = (1.0f);
		(&V_0)->___m_Duration_3 = (1.0f);
		ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E L_0 = V_0;
		__this->___m_ReactionSettings_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_ReactionSettings_12))->___m_SecondaryNoise_0), (void*)NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseListener::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseListener_PostPipelineStageCallback_mCEF55A67F8286EA75D6B8930474DFD4F70B6F315 (CinemachineImpulseListener_tEC63D9DEEDB2F4C45B76D36F9593704722EC2039* __this, CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___vcam0, int32_t ___stage1, CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* ___state2, float ___deltaTime3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	bool G_B6_0 = false;
	bool G_B5_0 = false;
	{
		// if (stage == m_ApplyAfter && deltaTime >= 0)
		int32_t L_0 = ___stage1;
		int32_t L_1 = __this->___m_ApplyAfter_7;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_00c3;
		}
	}
	{
		float L_2 = ___deltaTime3;
		if ((!(((float)L_2) >= ((float)(0.0f)))))
		{
			goto IL_00c3;
		}
	}
	{
		// bool haveImpulse = CinemachineImpulseManager.Instance.GetImpulseAt(
		//     state.FinalPosition, m_Use2DDistance, m_ChannelMask,
		//     out var impulsePos, out var impulseRot);
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_3;
		L_3 = CinemachineImpulseManager_get_Instance_m60CAF899B8E71E36C8DF7072CAB6448A970E7D02(NULL);
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_4 = ___state2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = CameraState_get_FinalPosition_m4D482D1F3E008068C2151FC24FD85CB6F603AE12(L_4, NULL);
		bool L_6 = __this->___m_Use2DDistance_10;
		int32_t L_7 = __this->___m_ChannelMask_8;
		NullCheck(L_3);
		bool L_8;
		L_8 = CinemachineImpulseManager_GetImpulseAt_m60503248A6E51D9CB74F28148A982D8FA5C57D04(L_3, L_5, L_6, L_7, (&V_0), (&V_1), NULL);
		// bool haveReaction = m_ReactionSettings.GetReaction(
		//     deltaTime, impulsePos, out var reactionPos, out var reactionRot);
		ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* L_9 = (&__this->___m_ReactionSettings_12);
		float L_10 = ___deltaTime3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		bool L_12;
		L_12 = ImpulseReaction_GetReaction_mF1A9A410B1F05368B416656512188311E44E8CC3(L_9, L_10, L_11, (&V_3), (&V_4), NULL);
		V_2 = L_12;
		// if (haveImpulse)
		bool L_13 = L_8;
		G_B3_0 = L_13;
		if (!L_13)
		{
			G_B4_0 = L_13;
			goto IL_006d;
		}
	}
	{
		// impulseRot = Quaternion.SlerpUnclamped(Quaternion.identity, impulseRot, m_Gain);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		float L_16 = __this->___m_Gain_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_14, L_15, L_16, NULL);
		V_1 = L_17;
		// impulsePos *= m_Gain;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = __this->___m_Gain_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_18, L_19, NULL);
		V_0 = L_20;
		G_B4_0 = G_B3_0;
	}

IL_006d:
	{
		// if (haveReaction)
		bool L_21 = V_2;
		G_B5_0 = G_B4_0;
		if (!L_21)
		{
			G_B6_0 = G_B4_0;
			goto IL_0081;
		}
	}
	{
		// impulsePos += reactionPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_22, L_23, NULL);
		V_0 = L_24;
		// impulseRot *= reactionRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_25, L_26, NULL);
		V_1 = L_27;
		G_B6_0 = G_B5_0;
	}

IL_0081:
	{
		// if (haveImpulse || haveReaction)
		bool L_28 = V_2;
		if (!((int32_t)((int32_t)G_B6_0|(int32_t)L_28)))
		{
			goto IL_00c3;
		}
	}
	{
		// if (m_UseCameraSpace)
		bool L_29 = __this->___m_UseCameraSpace_11;
		if (!L_29)
		{
			goto IL_009a;
		}
	}
	{
		// impulsePos = state.RawOrientation * impulsePos;
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_30 = ___state2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = L_30->___RawOrientation_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_31, L_32, NULL);
		V_0 = L_33;
	}

IL_009a:
	{
		// state.PositionCorrection += impulsePos;
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_34 = ___state2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (&L_34->___PositionCorrection_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_38, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_36 = L_39;
		// state.OrientationCorrection = state.OrientationCorrection * impulseRot;
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_40 = ___state2;
		CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* L_41 = ___state2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = L_41->___OrientationCorrection_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44;
		L_44 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_42, L_43, NULL);
		L_40->___OrientationCorrection_9 = L_44;
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseListener__ctor_m0C42D66C35F6EC6323B195B56B5F4DD2B287CB5A (CinemachineImpulseListener_tEC63D9DEEDB2F4C45B76D36F9593704722EC2039* __this, const RuntimeMethod* method) 
{
	{
		// public CinemachineCore.Stage m_ApplyAfter = CinemachineCore.Stage.Aim; // legacy compatibility setting
		__this->___m_ApplyAfter_7 = 1;
		CinemachineExtension__ctor_m8955F80D4A62DE7C3DA510CFECEF722346241C94(__this, NULL);
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
// Conversion methods for marshalling of: Cinemachine.CinemachineImpulseListener/ImpulseReaction
IL2CPP_EXTERN_C void ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshal_pinvoke(const ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E& unmarshaled, ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_SecondaryNoise_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SecondaryNoise' of type 'ImpulseReaction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SecondaryNoise_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshal_pinvoke_back(const ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_pinvoke& marshaled, ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E& unmarshaled)
{
	Exception_t* ___m_SecondaryNoise_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SecondaryNoise' of type 'ImpulseReaction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SecondaryNoise_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineImpulseListener/ImpulseReaction
IL2CPP_EXTERN_C void ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshal_pinvoke_cleanup(ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Cinemachine.CinemachineImpulseListener/ImpulseReaction
IL2CPP_EXTERN_C void ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshal_com(const ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E& unmarshaled, ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_com& marshaled)
{
	Exception_t* ___m_SecondaryNoise_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SecondaryNoise' of type 'ImpulseReaction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SecondaryNoise_0Exception, NULL);
}
IL2CPP_EXTERN_C void ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshal_com_back(const ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_com& marshaled, ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E& unmarshaled)
{
	Exception_t* ___m_SecondaryNoise_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_SecondaryNoise' of type 'ImpulseReaction': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_SecondaryNoise_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineImpulseListener/ImpulseReaction
IL2CPP_EXTERN_C void ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshal_com_cleanup(ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E_marshaled_com& marshaled)
{
}
// System.Void Cinemachine.CinemachineImpulseListener/ImpulseReaction::ReSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseReaction_ReSeed_m0E5974B5A368FE95D4137FB5A87BF71699535DB5 (ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* __this, const RuntimeMethod* method) 
{
	{
		// m_NoiseOffsets = new Vector3(
		//         UnityEngine.Random.Range(-1000f, 1000f),
		//         UnityEngine.Random.Range(-1000f, 1000f),
		//         UnityEngine.Random.Range(-1000f, 1000f));
		float L_0;
		L_0 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-1000.0f), (1000.0f), NULL);
		float L_1;
		L_1 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-1000.0f), (1000.0f), NULL);
		float L_2;
		L_2 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-1000.0f), (1000.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___m_NoiseOffsets_8 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ImpulseReaction_ReSeed_m0E5974B5A368FE95D4137FB5A87BF71699535DB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E*>(__this + _offset);
	ImpulseReaction_ReSeed_m0E5974B5A368FE95D4137FB5A87BF71699535DB5(_thisAdjusted, method);
}
// System.Boolean Cinemachine.CinemachineImpulseListener/ImpulseReaction::GetReaction(System.Single,UnityEngine.Vector3,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseReaction_GetReaction_mF1A9A410B1F05368B416656512188311E44E8CC3 (ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* __this, float ___deltaTime0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___impulsePos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (!m_Initialized)
		bool L_0 = __this->___m_Initialized_7;
		if (L_0)
		{
			goto IL_004f;
		}
	}
	{
		// m_Initialized = true;
		__this->___m_Initialized_7 = (bool)1;
		// m_CurrentAmount = 0;
		__this->___m_CurrentAmount_4 = (0.0f);
		// m_CurrentDamping = 0;
		__this->___m_CurrentDamping_6 = (0.0f);
		// m_CurrentTime = CinemachineCore.CurrentTime * m_FrequencyGain;
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CinemachineCore_get_CurrentTime_mE95A89B5053FB5D86EB1E2D855CDC9E4D4CC5459(NULL);
		float L_2 = __this->___m_FrequencyGain_2;
		__this->___m_CurrentTime_5 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// if (m_NoiseOffsets == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_NoiseOffsets_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_5;
		L_5 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// ReSeed();
		ImpulseReaction_ReSeed_m0E5974B5A368FE95D4137FB5A87BF71699535DB5(__this, NULL);
	}

IL_004f:
	{
		// pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___pos2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_7;
		// rot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_8 = ___rot3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_8 = L_9;
		// var sqrMag = impulsePos.sqrMagnitude;
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___impulsePos1), NULL);
		V_0 = L_10;
		// if (m_SecondaryNoise == null || (sqrMag < 0.001f && m_CurrentAmount < 0.0001f))
		NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1* L_11 = __this->___m_SecondaryNoise_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_12)
		{
			goto IL_0091;
		}
	}
	{
		float L_13 = V_0;
		if ((!(((float)L_13) < ((float)(0.00100000005f)))))
		{
			goto IL_0093;
		}
	}
	{
		float L_14 = __this->___m_CurrentAmount_4;
		if ((!(((float)L_14) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0093;
		}
	}

IL_0091:
	{
		// return false;
		return (bool)0;
	}

IL_0093:
	{
		// if (TargetPositionCache.CacheMode == TargetPositionCache.Mode.Playback
		//         && TargetPositionCache.HasCurrentTime)
		int32_t L_15;
		L_15 = TargetPositionCache_get_CacheMode_mDCBA178980BB6A8FEEC18CA1238F52FFDFC8B5A4_inline(NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_00b6;
		}
	}
	{
		bool L_16;
		L_16 = TargetPositionCache_get_HasCurrentTime_m143562F778152928D6FE2E609F81786513F6ED2F(NULL);
		if (!L_16)
		{
			goto IL_00b6;
		}
	}
	{
		// m_CurrentTime = TargetPositionCache.CurrentTime * m_FrequencyGain;
		float L_17 = ((TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_StaticFields*)il2cpp_codegen_static_fields_for(TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_il2cpp_TypeInfo_var))->___CurrentTime_3;
		float L_18 = __this->___m_FrequencyGain_2;
		__this->___m_CurrentTime_5 = ((float)il2cpp_codegen_multiply(L_17, L_18));
		goto IL_00cb;
	}

IL_00b6:
	{
		// m_CurrentTime += deltaTime * m_FrequencyGain;
		float L_19 = __this->___m_CurrentTime_5;
		float L_20 = ___deltaTime0;
		float L_21 = __this->___m_FrequencyGain_2;
		__this->___m_CurrentTime_5 = ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(L_20, L_21))));
	}

IL_00cb:
	{
		// m_CurrentAmount = Mathf.Max(m_CurrentAmount, Mathf.Sqrt(sqrMag));
		float L_22 = __this->___m_CurrentAmount_4;
		float L_23 = V_0;
		float L_24;
		L_24 = sqrtf(L_23);
		float L_25;
		L_25 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_22, L_24, NULL);
		__this->___m_CurrentAmount_4 = L_25;
		// m_CurrentDamping = Mathf.Max(m_CurrentDamping, Mathf.Max(1, Mathf.Sqrt(m_CurrentAmount)) * m_Duration);
		float L_26 = __this->___m_CurrentDamping_6;
		float L_27 = __this->___m_CurrentAmount_4;
		float L_28;
		L_28 = sqrtf(L_27);
		float L_29;
		L_29 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((1.0f), L_28, NULL);
		float L_30 = __this->___m_Duration_3;
		float L_31;
		L_31 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_26, ((float)il2cpp_codegen_multiply(L_29, L_30)), NULL);
		__this->___m_CurrentDamping_6 = L_31;
		// var gain = m_CurrentAmount * m_AmplitudeGain;
		float L_32 = __this->___m_CurrentAmount_4;
		float L_33 = __this->___m_AmplitudeGain_1;
		V_1 = ((float)il2cpp_codegen_multiply(L_32, L_33));
		// pos = NoiseSettings.GetCombinedFilterResults(
		//         m_SecondaryNoise.PositionNoise, m_CurrentTime, m_NoiseOffsets) * gain;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = ___pos2;
		NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1* L_35 = __this->___m_SecondaryNoise_0;
		NullCheck(L_35);
		TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1* L_36 = L_35->___PositionNoise_4;
		float L_37 = __this->___m_CurrentTime_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___m_NoiseOffsets_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = NoiseSettings_GetCombinedFilterResults_mE35B3A4E1826146B200499B62617F8E629434F20(L_36, L_37, L_38, NULL);
		float L_40 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_39, L_40, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_34 = L_41;
		// rot = Quaternion.Euler(NoiseSettings.GetCombinedFilterResults(
		//         m_SecondaryNoise.OrientationNoise, m_CurrentTime, m_NoiseOffsets) * gain);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_42 = ___rot3;
		NoiseSettings_tFCB86EB3704D64D89D6D747BEAE83E1757EF68F1* L_43 = __this->___m_SecondaryNoise_0;
		NullCheck(L_43);
		TransformNoiseParamsU5BU5D_tF60A55DA82A2705F76287D97294759C1F37888A1* L_44 = L_43->___OrientationNoise_5;
		float L_45 = __this->___m_CurrentTime_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = __this->___m_NoiseOffsets_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = NoiseSettings_GetCombinedFilterResults_mE35B3A4E1826146B200499B62617F8E629434F20(L_44, L_45, L_46, NULL);
		float L_48 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_47, L_48, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50;
		L_50 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_49, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_42 = L_50;
		// m_CurrentAmount -= Damper.Damp(m_CurrentAmount, m_CurrentDamping, deltaTime);
		float L_51 = __this->___m_CurrentAmount_4;
		float L_52 = __this->___m_CurrentAmount_4;
		float L_53 = __this->___m_CurrentDamping_6;
		float L_54 = ___deltaTime0;
		float L_55;
		L_55 = Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2(L_52, L_53, L_54, NULL);
		__this->___m_CurrentAmount_4 = ((float)il2cpp_codegen_subtract(L_51, L_55));
		// m_CurrentDamping -= Damper.Damp(m_CurrentDamping, m_CurrentDamping, deltaTime);
		float L_56 = __this->___m_CurrentDamping_6;
		float L_57 = __this->___m_CurrentDamping_6;
		float L_58 = __this->___m_CurrentDamping_6;
		float L_59 = ___deltaTime0;
		float L_60;
		L_60 = Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2(L_57, L_58, L_59, NULL);
		__this->___m_CurrentDamping_6 = ((float)il2cpp_codegen_subtract(L_56, L_60));
		// return true;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool ImpulseReaction_GetReaction_mF1A9A410B1F05368B416656512188311E44E8CC3_AdjustorThunk (RuntimeObject* __this, float ___deltaTime0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___impulsePos1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot3, const RuntimeMethod* method)
{
	ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E*>(__this + _offset);
	bool _returnValue;
	_returnValue = ImpulseReaction_GetReaction_mF1A9A410B1F05368B416656512188311E44E8CC3(_thisAdjusted, ___deltaTime0, ___impulsePos1, ___pos2, ___rot3, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.CinemachineImpulseEnvelopePropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseEnvelopePropertyAttribute__ctor_m62808EE32019CC07FAB95B0A2DB0E20A61D5DDF5 (CinemachineImpulseEnvelopePropertyAttribute_t35FABBCC02CE5311941C006B1E583EE1A840D19B* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void Cinemachine.CinemachineImpulseChannelPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseChannelPropertyAttribute__ctor_m26E7D8A1C8D42789392B0CBC9BF4755CA01D2E49 (CinemachineImpulseChannelPropertyAttribute_t27658A8AEDEEF3ED48B499EB4C5BD54BD87147A4* __this, const RuntimeMethod* method) 
{
	{
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
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
// System.Void Cinemachine.CinemachineImpulseManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager__ctor_m29FD2A34BDDE38151BEEADBEDE5A966E91FFC143 (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) 
{
	{
		// private CinemachineImpulseManager() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private CinemachineImpulseManager() {}
		return;
	}
}
// Cinemachine.CinemachineImpulseManager Cinemachine.CinemachineImpulseManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* CinemachineImpulseManager_get_Instance_m60CAF899B8E71E36C8DF7072CAB6448A970E7D02 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sInstance == null)
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_0 = ((CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var))->___sInstance_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// sInstance = new CinemachineImpulseManager();
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_1 = (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F*)il2cpp_codegen_object_new(CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CinemachineImpulseManager__ctor_m29FD2A34BDDE38151BEEADBEDE5A966E91FFC143(L_1, NULL);
		((CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var))->___sInstance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var))->___sInstance_0), (void*)L_1);
	}

IL_0011:
	{
		// return sInstance;
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_2 = ((CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var))->___sInstance_0;
		return L_2;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager::InitializeModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager_InitializeModule_m8F194C4BB5A26A4A66390EA192D3CF9DF16648A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sInstance != null)
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_0 = ((CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var))->___sInstance_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// sInstance.Clear();
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_1 = ((CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F_il2cpp_TypeInfo_var))->___sInstance_0;
		NullCheck(L_1);
		CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA(L_1, NULL);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Single Cinemachine.CinemachineImpulseManager::EvaluateDissipationScale(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineImpulseManager_EvaluateDissipationScale_m9210CFEA7341A4025B8164E415A7C4789F265D4C (float ___spread0, float ___normalizedDistance1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// var b = kMin + (kMax - kMin) * (1f - spread);
		float L_0 = ___spread0;
		V_0 = ((float)il2cpp_codegen_add((-0.800000012f), ((float)il2cpp_codegen_multiply((1.60000002f), ((float)il2cpp_codegen_subtract((1.0f), L_0))))));
		// b = (1f - b) * 0.5f;
		float L_1 = V_0;
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_1)), (0.5f)));
		// var t = Mathf.Clamp01(normalizedDistance) / ((((1f/Mathf.Clamp01(b)) - 2f) * (1f - normalizedDistance)) + 1f);
		float L_2 = ___normalizedDistance1;
		float L_3;
		L_3 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_2, NULL);
		float L_4 = V_0;
		float L_5;
		L_5 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_4, NULL);
		float L_6 = ___normalizedDistance1;
		V_1 = ((float)(L_3/((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)((1.0f)/L_5)), (2.0f))), ((float)il2cpp_codegen_subtract((1.0f), L_6)))), (1.0f)))));
		// return 1 - SplineHelpers.Bezier1(t, 0, 0, 1, 1);
		float L_7 = V_1;
		float L_8;
		L_8 = SplineHelpers_Bezier1_m246A08965553DC26A27A1F63929FC22FA93D7561(L_7, (0.0f), (0.0f), (1.0f), (1.0f), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_8));
	}
}
// System.Boolean Cinemachine.CinemachineImpulseManager::GetImpulseAt(UnityEngine.Vector3,System.Boolean,System.Int32,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CinemachineImpulseManager_GetImpulseAt_m60503248A6E51D9CB74F28148A982D8FA5C57D04 (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___listenerLocation0, bool ___distance2D1, int32_t ___channelMask2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* V_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// bool nontrivialResult = false;
		V_0 = (bool)0;
		// pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___pos3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_0 = L_1;
		// rot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_2 = ___rot4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_2 = L_3;
		// if (m_ActiveEvents != null)
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_4 = __this->___m_ActiveEvents_3;
		if (!L_4)
		{
			goto IL_00e1;
		}
	}
	{
		// for (int i = m_ActiveEvents.Count - 1; i >= 0; --i)
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_5 = __this->___m_ActiveEvents_3;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_inline(L_5, List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		goto IL_00da;
	}

IL_0038:
	{
		// ImpulseEvent e = m_ActiveEvents[i];
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_7 = __this->___m_ActiveEvents_3;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_9;
		L_9 = List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D(L_7, L_8, List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D_RuntimeMethod_var);
		V_2 = L_9;
		// if (e == null || e.Expired)
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_10 = V_2;
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_11 = V_2;
		NullCheck(L_11);
		bool L_12;
		L_12 = ImpulseEvent_get_Expired_mCA721141A1BF8EABF33B58335F3BF081EE517160(L_11, NULL);
		if (!L_12)
		{
			goto IL_0086;
		}
	}

IL_0050:
	{
		// m_ActiveEvents.RemoveAt(i);
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_13 = __this->___m_ActiveEvents_3;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8(L_13, L_14, List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8_RuntimeMethod_var);
		// if (e != null)
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_15 = V_2;
		if (!L_15)
		{
			goto IL_00d6;
		}
	}
	{
		// if (m_ExpiredEvents == null)
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_16 = __this->___m_ExpiredEvents_2;
		if (L_16)
		{
			goto IL_0072;
		}
	}
	{
		// m_ExpiredEvents = new List<ImpulseEvent>();
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_17 = (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*)il2cpp_codegen_object_new(List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6(L_17, List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6_RuntimeMethod_var);
		__this->___m_ExpiredEvents_2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ExpiredEvents_2), (void*)L_17);
	}

IL_0072:
	{
		// e.Clear();
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_18 = V_2;
		NullCheck(L_18);
		ImpulseEvent_Clear_mBE18EB8EBB0F8F266AB084B44307155CE823C17A(L_18, NULL);
		// m_ExpiredEvents.Add(e);
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_19 = __this->___m_ExpiredEvents_2;
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_20 = V_2;
		NullCheck(L_19);
		List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_inline(L_19, L_20, List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_RuntimeMethod_var);
		goto IL_00d6;
	}

IL_0086:
	{
		// else if ((e.m_Channel & channelMask) != 0)
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = L_21->___m_Channel_6;
		int32_t L_23 = ___channelMask2;
		if (!((int32_t)(L_22&L_23)))
		{
			goto IL_00d6;
		}
	}
	{
		// Vector3 pos0 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_3 = L_24;
		// Quaternion rot0 = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		V_4 = L_25;
		// if (e.GetDecayedSignal(listenerLocation, distance2D, out pos0, out rot0))
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___listenerLocation0;
		bool L_28 = ___distance2D1;
		NullCheck(L_26);
		bool L_29;
		L_29 = ImpulseEvent_GetDecayedSignal_m0A606723EF1C6867ECAC33BBBDCE4826BE5AB78F(L_26, L_27, L_28, (&V_3), (&V_4), NULL);
		if (!L_29)
		{
			goto IL_00d6;
		}
	}
	{
		// nontrivialResult = true;
		V_0 = (bool)1;
		// pos += pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___pos3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = ___pos3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_32, L_33, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_30 = L_34;
		// rot *= rot0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_35 = ___rot4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_36 = ___rot4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_36);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_37, L_38, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_35 = L_39;
	}

IL_00d6:
	{
		// for (int i = m_ActiveEvents.Count - 1; i >= 0; --i)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_40, 1));
	}

IL_00da:
	{
		// for (int i = m_ActiveEvents.Count - 1; i >= 0; --i)
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) >= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}

IL_00e1:
	{
		// return nontrivialResult;
		bool L_42 = V_0;
		return L_42;
	}
}
// System.Single Cinemachine.CinemachineImpulseManager::get_CurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CinemachineImpulseManager_get_CurrentTime_m67D3ABCDB387670ECEF30D37A8E3CBDA5EB530F4 (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float CurrentTime => IgnoreTimeScale ? Time.realtimeSinceStartup : CinemachineCore.CurrentTime;
		bool L_0 = __this->___IgnoreTimeScale_4;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CinemachineCore_get_CurrentTime_mE95A89B5053FB5D86EB1E2D855CDC9E4D4CC5459(NULL);
		return L_1;
	}

IL_000e:
	{
		float L_2;
		L_2 = Time_get_realtimeSinceStartup_mB49A5622E38FFE9589EB9B3E75573E443B8D63EC(NULL);
		return L_2;
	}
}
// Cinemachine.CinemachineImpulseManager/ImpulseEvent Cinemachine.CinemachineImpulseManager::NewImpulseEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* CinemachineImpulseManager_NewImpulseEvent_m10EB7672F67FB33CD98758F3CED27E168241508C (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ExpiredEvents == null || m_ExpiredEvents.Count == 0)
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_0 = __this->___m_ExpiredEvents_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_1 = __this->___m_ExpiredEvents_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_inline(L_1, List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0026;
		}
	}

IL_0015:
	{
		// return new ImpulseEvent() { m_CustomDissipation = -1 };
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_3 = (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59*)il2cpp_codegen_object_new(ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ImpulseEvent__ctor_mC5F7C05F235EB65CED1FF6E0FBC6C83D9BCBF81B(L_3, NULL);
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_4 = L_3;
		NullCheck(L_4);
		L_4->___m_CustomDissipation_9 = (-1.0f);
		return L_4;
	}

IL_0026:
	{
		// e = m_ExpiredEvents[m_ExpiredEvents.Count-1];
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_5 = __this->___m_ExpiredEvents_2;
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_6 = __this->___m_ExpiredEvents_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_inline(L_6, List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		NullCheck(L_5);
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_8;
		L_8 = List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D_RuntimeMethod_var);
		// m_ExpiredEvents.RemoveAt(m_ExpiredEvents.Count-1);
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_9 = __this->___m_ExpiredEvents_2;
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_10 = __this->___m_ExpiredEvents_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_inline(L_10, List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8(L_9, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), List_1_RemoveAt_m32A69CBC1233D343A53384C4CFA27F2752C88CE8_RuntimeMethod_var);
		// return e;
		return L_8;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager::AddImpulseEvent(Cinemachine.CinemachineImpulseManager/ImpulseEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager_AddImpulseEvent_m248DA95ECD499D4B501E282B5886389C02F0D223 (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_ActiveEvents == null)
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_0 = __this->___m_ActiveEvents_3;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// m_ActiveEvents = new List<ImpulseEvent>();
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_1 = (List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529*)il2cpp_codegen_object_new(List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6(L_1, List_1__ctor_m509AD93C52D556C90659A1D2169BD9465FEBE3A6_RuntimeMethod_var);
		__this->___m_ActiveEvents_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveEvents_3), (void*)L_1);
	}

IL_0013:
	{
		// if (e != null)
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_2 = ___e0;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		// e.m_StartTime = CurrentTime;
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_3 = ___e0;
		float L_4;
		L_4 = CinemachineImpulseManager_get_CurrentTime_m67D3ABCDB387670ECEF30D37A8E3CBDA5EB530F4(__this, NULL);
		NullCheck(L_3);
		L_3->___m_StartTime_0 = L_4;
		// m_ActiveEvents.Add(e);
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_5 = __this->___m_ActiveEvents_3;
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_6 = ___e0;
		NullCheck(L_5);
		List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_inline(L_5, L_6, List_1_Add_m377C03D36224B5F9483C43D81AD70FA5E7673057_RuntimeMethod_var);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseManager_Clear_mA6DC571A238EB0C4C7B07C06D2263B5743FB82BA (CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m49C184BEA4867CB04DF2D0836573D52B0F0203E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (m_ActiveEvents != null)
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_0 = __this->___m_ActiveEvents_3;
		if (!L_0)
		{
			goto IL_003a;
		}
	}
	{
		// for (int i = 0; i < m_ActiveEvents.Count; ++i)
		V_0 = 0;
		goto IL_0021;
	}

IL_000c:
	{
		// m_ActiveEvents[i].Clear();
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_1 = __this->___m_ActiveEvents_3;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* L_3;
		L_3 = List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D(L_1, L_2, List_1_get_Item_m1243A00DD59758A177736939D0225376A8104E3D_RuntimeMethod_var);
		NullCheck(L_3);
		ImpulseEvent_Clear_mBE18EB8EBB0F8F266AB084B44307155CE823C17A(L_3, NULL);
		// for (int i = 0; i < m_ActiveEvents.Count; ++i)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0021:
	{
		// for (int i = 0; i < m_ActiveEvents.Count; ++i)
		int32_t L_5 = V_0;
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_6 = __this->___m_ActiveEvents_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_inline(L_6, List_1_get_Count_m72857760A633DF106389E4F0D286B279F72BF515_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_000c;
		}
	}
	{
		// m_ActiveEvents.Clear();
		List_1_t0EB1E63A5485B6AA5D47FE017C2ACC80AC10A529* L_8 = __this->___m_ActiveEvents_3;
		NullCheck(L_8);
		List_1_Clear_m49C184BEA4867CB04DF2D0836573D52B0F0203E1_inline(L_8, List_1_Clear_m49C184BEA4867CB04DF2D0836573D52B0F0203E1_RuntimeMethod_var);
	}

IL_003a:
	{
		// }
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




// Conversion methods for marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshal_pinvoke(const EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E& unmarshaled, EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___m_AttackShape_0 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(*unmarshaled.___m_AttackShape_0, marshaled.___m_AttackShape_0);
	}
	if (unmarshaled.___m_DecayShape_1 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke(*unmarshaled.___m_DecayShape_1, marshaled.___m_DecayShape_1);
	}
	marshaled.___m_AttackTime_2 = unmarshaled.___m_AttackTime_2;
	marshaled.___m_SustainTime_3 = unmarshaled.___m_SustainTime_3;
	marshaled.___m_DecayTime_4 = unmarshaled.___m_DecayTime_4;
	marshaled.___m_ScaleWithImpact_5 = static_cast<int32_t>(unmarshaled.___m_ScaleWithImpact_5);
	marshaled.___m_HoldForever_6 = static_cast<int32_t>(unmarshaled.___m_HoldForever_6);
}
IL2CPP_EXTERN_C void EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshal_pinvoke_back(const EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_pinvoke& marshaled, EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___m_AttackShape_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_AttackShape_0), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var));
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(marshaled.___m_AttackShape_0, *unmarshaled.___m_AttackShape_0);
	unmarshaled.___m_DecayShape_1 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_DecayShape_1), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var));
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_back(marshaled.___m_DecayShape_1, *unmarshaled.___m_DecayShape_1);
	float unmarshaledm_AttackTime_temp_2 = 0.0f;
	unmarshaledm_AttackTime_temp_2 = marshaled.___m_AttackTime_2;
	unmarshaled.___m_AttackTime_2 = unmarshaledm_AttackTime_temp_2;
	float unmarshaledm_SustainTime_temp_3 = 0.0f;
	unmarshaledm_SustainTime_temp_3 = marshaled.___m_SustainTime_3;
	unmarshaled.___m_SustainTime_3 = unmarshaledm_SustainTime_temp_3;
	float unmarshaledm_DecayTime_temp_4 = 0.0f;
	unmarshaledm_DecayTime_temp_4 = marshaled.___m_DecayTime_4;
	unmarshaled.___m_DecayTime_4 = unmarshaledm_DecayTime_temp_4;
	bool unmarshaledm_ScaleWithImpact_temp_5 = false;
	unmarshaledm_ScaleWithImpact_temp_5 = static_cast<bool>(marshaled.___m_ScaleWithImpact_5);
	unmarshaled.___m_ScaleWithImpact_5 = unmarshaledm_ScaleWithImpact_temp_5;
	bool unmarshaledm_HoldForever_temp_6 = false;
	unmarshaledm_HoldForever_temp_6 = static_cast<bool>(marshaled.___m_HoldForever_6);
	unmarshaled.___m_HoldForever_6 = unmarshaledm_HoldForever_temp_6;
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshal_pinvoke_cleanup(EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_pinvoke& marshaled)
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(marshaled.___m_AttackShape_0);
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_pinvoke_cleanup(marshaled.___m_DecayShape_1);
}




// Conversion methods for marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshal_com(const EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E& unmarshaled, EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_com& marshaled)
{
	if (unmarshaled.___m_AttackShape_0 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com(*unmarshaled.___m_AttackShape_0, *marshaled.___m_AttackShape_0);
	}
	if (unmarshaled.___m_DecayShape_1 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com(*unmarshaled.___m_DecayShape_1, *marshaled.___m_DecayShape_1);
	}
	marshaled.___m_AttackTime_2 = unmarshaled.___m_AttackTime_2;
	marshaled.___m_SustainTime_3 = unmarshaled.___m_SustainTime_3;
	marshaled.___m_DecayTime_4 = unmarshaled.___m_DecayTime_4;
	marshaled.___m_ScaleWithImpact_5 = static_cast<int32_t>(unmarshaled.___m_ScaleWithImpact_5);
	marshaled.___m_HoldForever_6 = static_cast<int32_t>(unmarshaled.___m_HoldForever_6);
}
IL2CPP_EXTERN_C void EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshal_com_back(const EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_com& marshaled, EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E& unmarshaled)
{
	if (unmarshaled.___m_AttackShape_0 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_back(*marshaled.___m_AttackShape_0, *unmarshaled.___m_AttackShape_0);
	}
	if (unmarshaled.___m_DecayShape_1 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_back(*marshaled.___m_DecayShape_1, *unmarshaled.___m_DecayShape_1);
	}
	float unmarshaledm_AttackTime_temp_2 = 0.0f;
	unmarshaledm_AttackTime_temp_2 = marshaled.___m_AttackTime_2;
	unmarshaled.___m_AttackTime_2 = unmarshaledm_AttackTime_temp_2;
	float unmarshaledm_SustainTime_temp_3 = 0.0f;
	unmarshaledm_SustainTime_temp_3 = marshaled.___m_SustainTime_3;
	unmarshaled.___m_SustainTime_3 = unmarshaledm_SustainTime_temp_3;
	float unmarshaledm_DecayTime_temp_4 = 0.0f;
	unmarshaledm_DecayTime_temp_4 = marshaled.___m_DecayTime_4;
	unmarshaled.___m_DecayTime_4 = unmarshaledm_DecayTime_temp_4;
	bool unmarshaledm_ScaleWithImpact_temp_5 = false;
	unmarshaledm_ScaleWithImpact_temp_5 = static_cast<bool>(marshaled.___m_ScaleWithImpact_5);
	unmarshaled.___m_ScaleWithImpact_5 = unmarshaledm_ScaleWithImpact_temp_5;
	bool unmarshaledm_HoldForever_temp_6 = false;
	unmarshaledm_HoldForever_temp_6 = static_cast<bool>(marshaled.___m_HoldForever_6);
	unmarshaled.___m_HoldForever_6 = unmarshaledm_HoldForever_temp_6;
}
// Conversion method for clean up from marshalling of: Cinemachine.CinemachineImpulseManager/EnvelopeDefinition
IL2CPP_EXTERN_C void EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshal_com_cleanup(EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E_marshaled_com& marshaled)
{
	if (marshaled.___m_AttackShape_0 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_cleanup(*marshaled.___m_AttackShape_0);
	}
	if (marshaled.___m_DecayShape_1 != NULL)
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshal_com_cleanup(*marshaled.___m_DecayShape_1);
	}
}
// Cinemachine.CinemachineImpulseManager/EnvelopeDefinition Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E EnvelopeDefinition_Default_m0400FA6F5054C586ADBC8512A1205D09A5933C80 (const RuntimeMethod* method) 
{
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new EnvelopeDefinition { m_DecayTime = 0.7f, m_SustainTime = 0.2f, m_ScaleWithImpact = true };
		il2cpp_codegen_initobj((&V_0), sizeof(EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E));
		(&V_0)->___m_DecayTime_4 = (0.699999988f);
		(&V_0)->___m_SustainTime_3 = (0.200000003f);
		(&V_0)->___m_ScaleWithImpact_5 = (bool)1;
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E L_0 = V_0;
		return L_0;
	}
}
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::get_Duration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, const RuntimeMethod* method) 
{
	{
		// if (m_HoldForever)
		bool L_0 = __this->___m_HoldForever_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_000e:
	{
		// return m_AttackTime + m_SustainTime + m_DecayTime;
		float L_1 = __this->___m_AttackTime_2;
		float L_2 = __this->___m_SustainTime_3;
		float L_3 = __this->___m_DecayTime_4;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_1, L_2)), L_3));
	}
}
IL2CPP_EXTERN_C  float EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E*>(__this + _offset);
	float _returnValue;
	_returnValue = EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::GetValueAt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnvelopeDefinition_GetValueAt_mAF39D22894C1B21FDA3A5D7C50AF4AEB393BEE6D (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, float ___offset0, const RuntimeMethod* method) 
{
	{
		// if (offset >= 0)
		float L_0 = ___offset0;
		if ((!(((float)L_0) >= ((float)(0.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		// if (offset < m_AttackTime && m_AttackTime > Epsilon)
		float L_1 = ___offset0;
		float L_2 = __this->___m_AttackTime_2;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_005d;
		}
	}
	{
		float L_3 = __this->___m_AttackTime_2;
		if ((!(((float)L_3) > ((float)(9.99999975E-05f)))))
		{
			goto IL_005d;
		}
	}
	{
		// if (m_AttackShape == null || m_AttackShape.length < 2)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = __this->___m_AttackShape_0;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___m_AttackShape_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_5, NULL);
		if ((((int32_t)L_6) >= ((int32_t)2)))
		{
			goto IL_0049;
		}
	}

IL_0037:
	{
		// return Damper.Damp(1, m_AttackTime, offset);
		float L_7 = __this->___m_AttackTime_2;
		float L_8 = ___offset0;
		float L_9;
		L_9 = Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2((1.0f), L_7, L_8, NULL);
		return L_9;
	}

IL_0049:
	{
		// return m_AttackShape.Evaluate(offset / m_AttackTime);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_10 = __this->___m_AttackShape_0;
		float L_11 = ___offset0;
		float L_12 = __this->___m_AttackTime_2;
		NullCheck(L_10);
		float L_13;
		L_13 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_10, ((float)(L_11/L_12)), NULL);
		return L_13;
	}

IL_005d:
	{
		// offset -= m_AttackTime;
		float L_14 = ___offset0;
		float L_15 = __this->___m_AttackTime_2;
		___offset0 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// if (m_HoldForever || offset < m_SustainTime)
		bool L_16 = __this->___m_HoldForever_6;
		if (L_16)
		{
			goto IL_0078;
		}
	}
	{
		float L_17 = ___offset0;
		float L_18 = __this->___m_SustainTime_3;
		if ((!(((float)L_17) < ((float)L_18))))
		{
			goto IL_007e;
		}
	}

IL_0078:
	{
		// return 1;
		return (1.0f);
	}

IL_007e:
	{
		// offset -= m_SustainTime;
		float L_19 = ___offset0;
		float L_20 = __this->___m_SustainTime_3;
		___offset0 = ((float)il2cpp_codegen_subtract(L_19, L_20));
		// if (offset < m_DecayTime && m_DecayTime > Epsilon)
		float L_21 = ___offset0;
		float L_22 = __this->___m_DecayTime_4;
		if ((!(((float)L_21) < ((float)L_22))))
		{
			goto IL_00e0;
		}
	}
	{
		float L_23 = __this->___m_DecayTime_4;
		if ((!(((float)L_23) > ((float)(9.99999975E-05f)))))
		{
			goto IL_00e0;
		}
	}
	{
		// if (m_DecayShape == null || m_DecayShape.length < 2)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_24 = __this->___m_DecayShape_1;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_25 = __this->___m_DecayShape_1;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_25, NULL);
		if ((((int32_t)L_26) >= ((int32_t)2)))
		{
			goto IL_00cc;
		}
	}

IL_00b4:
	{
		// return 1 - Damper.Damp(1, m_DecayTime, offset);
		float L_27 = __this->___m_DecayTime_4;
		float L_28 = ___offset0;
		float L_29;
		L_29 = Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2((1.0f), L_27, L_28, NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_29));
	}

IL_00cc:
	{
		// return m_DecayShape.Evaluate(offset / m_DecayTime);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_30 = __this->___m_DecayShape_1;
		float L_31 = ___offset0;
		float L_32 = __this->___m_DecayTime_4;
		NullCheck(L_30);
		float L_33;
		L_33 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_30, ((float)(L_31/L_32)), NULL);
		return L_33;
	}

IL_00e0:
	{
		// return 0;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C  float EnvelopeDefinition_GetValueAt_mAF39D22894C1B21FDA3A5D7C50AF4AEB393BEE6D_AdjustorThunk (RuntimeObject* __this, float ___offset0, const RuntimeMethod* method)
{
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E*>(__this + _offset);
	float _returnValue;
	_returnValue = EnvelopeDefinition_GetValueAt_mAF39D22894C1B21FDA3A5D7C50AF4AEB393BEE6D(_thisAdjusted, ___offset0, method);
	return _returnValue;
}
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::ChangeStopTime(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_ChangeStopTime_mFE038CADEFEBC54B1262B69139C2C8C209CE1196 (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, float ___offset0, bool ___forceNoDecay1, const RuntimeMethod* method) 
{
	{
		// if (offset < 0)
		float L_0 = ___offset0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// offset = 0;
		___offset0 = (0.0f);
	}

IL_000f:
	{
		// if (offset < m_AttackTime)
		float L_1 = ___offset0;
		float L_2 = __this->___m_AttackTime_2;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		// m_AttackTime = 0; // How to prevent pop? GML
		__this->___m_AttackTime_2 = (0.0f);
	}

IL_0023:
	{
		// m_SustainTime = offset - m_AttackTime;
		float L_3 = ___offset0;
		float L_4 = __this->___m_AttackTime_2;
		__this->___m_SustainTime_3 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// if (forceNoDecay)
		bool L_5 = ___forceNoDecay1;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		// m_DecayTime = 0;
		__this->___m_DecayTime_4 = (0.0f);
	}

IL_003f:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EnvelopeDefinition_ChangeStopTime_mFE038CADEFEBC54B1262B69139C2C8C209CE1196_AdjustorThunk (RuntimeObject* __this, float ___offset0, bool ___forceNoDecay1, const RuntimeMethod* method)
{
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E*>(__this + _offset);
	EnvelopeDefinition_ChangeStopTime_mFE038CADEFEBC54B1262B69139C2C8C209CE1196(_thisAdjusted, ___offset0, ___forceNoDecay1, method);
}
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Clear_m70B8BFD4F76297739F4D6EC3044D46832196D4EF (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, const RuntimeMethod* method) 
{
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* V_0 = NULL;
	float V_1 = 0.0f;
	{
		// m_AttackShape = m_DecayShape = null;
		V_0 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		__this->___m_DecayShape_1 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DecayShape_1), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_0 = V_0;
		__this->___m_AttackShape_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AttackShape_0), (void*)L_0);
		// m_AttackTime = m_SustainTime = m_DecayTime = 0;
		float L_1 = (0.0f);
		V_1 = L_1;
		__this->___m_DecayTime_4 = L_1;
		float L_2 = V_1;
		float L_3 = L_2;
		V_1 = L_3;
		__this->___m_SustainTime_3 = L_3;
		float L_4 = V_1;
		__this->___m_AttackTime_2 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EnvelopeDefinition_Clear_m70B8BFD4F76297739F4D6EC3044D46832196D4EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E*>(__this + _offset);
	EnvelopeDefinition_Clear_m70B8BFD4F76297739F4D6EC3044D46832196D4EF(_thisAdjusted, method);
}
// System.Void Cinemachine.CinemachineImpulseManager/EnvelopeDefinition::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnvelopeDefinition_Validate_m2DE55071F0E90DAF09281B7735FD96A93D278C37 (EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* __this, const RuntimeMethod* method) 
{
	{
		// m_AttackTime = Mathf.Max(0, m_AttackTime);
		float L_0 = __this->___m_AttackTime_2;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_0, NULL);
		__this->___m_AttackTime_2 = L_1;
		// m_DecayTime = Mathf.Max(0, m_DecayTime);
		float L_2 = __this->___m_DecayTime_4;
		float L_3;
		L_3 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_2, NULL);
		__this->___m_DecayTime_4 = L_3;
		// m_SustainTime = Mathf.Max(0, m_SustainTime);
		float L_4 = __this->___m_SustainTime_3;
		float L_5;
		L_5 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), L_4, NULL);
		__this->___m_SustainTime_3 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EnvelopeDefinition_Validate_m2DE55071F0E90DAF09281B7735FD96A93D278C37_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E*>(__this + _offset);
	EnvelopeDefinition_Validate_m2DE55071F0E90DAF09281B7735FD96A93D278C37(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Cinemachine.CinemachineImpulseManager/ImpulseEvent::get_Expired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseEvent_get_Expired_mCA721141A1BF8EABF33B58335F3BF081EE517160 (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// var d = m_Envelope.Duration;
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_0 = (&__this->___m_Envelope_1);
		float L_1;
		L_1 = EnvelopeDefinition_get_Duration_m3CF863DC6B71344BE096AD9CBFC6C86AD2FF634C(L_0, NULL);
		V_0 = L_1;
		// var maxDistance = m_Radius + m_DissipationDistance;
		float L_2 = __this->___m_Radius_4;
		float L_3 = __this->___m_DissipationDistance_8;
		V_1 = ((float)il2cpp_codegen_add(L_2, L_3));
		// float time = Instance.CurrentTime - maxDistance / Mathf.Max(1, m_PropagationSpeed);
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_4;
		L_4 = CinemachineImpulseManager_get_Instance_m60CAF899B8E71E36C8DF7072CAB6448A970E7D02(NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = CinemachineImpulseManager_get_CurrentTime_m67D3ABCDB387670ECEF30D37A8E3CBDA5EB530F4(L_4, NULL);
		float L_6 = V_1;
		float L_7 = __this->___m_PropagationSpeed_10;
		float L_8;
		L_8 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((1.0f), L_7, NULL);
		V_2 = ((float)il2cpp_codegen_subtract(L_5, ((float)(L_6/L_8))));
		// return d > 0 && m_StartTime + d <= time;
		float L_9 = V_0;
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_004f;
		}
	}
	{
		float L_10 = __this->___m_StartTime_0;
		float L_11 = V_0;
		float L_12 = V_2;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add(L_10, L_11))) <= ((float)L_12)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		return (bool)0;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::Cancel(System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent_Cancel_m9B2DA20770168C09A4245378190B67A574444BC2 (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, float ___time0, bool ___forceNoDecay1, const RuntimeMethod* method) 
{
	{
		// m_Envelope.m_HoldForever = false;
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_0 = (&__this->___m_Envelope_1);
		L_0->___m_HoldForever_6 = (bool)0;
		// m_Envelope.ChangeStopTime(time - m_StartTime, forceNoDecay);
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_1 = (&__this->___m_Envelope_1);
		float L_2 = ___time0;
		float L_3 = __this->___m_StartTime_0;
		bool L_4 = ___forceNoDecay1;
		EnvelopeDefinition_ChangeStopTime_mFE038CADEFEBC54B1262B69139C2C8C209CE1196(L_1, ((float)il2cpp_codegen_subtract(L_2, L_3)), L_4, NULL);
		// }
		return;
	}
}
// System.Single Cinemachine.CinemachineImpulseManager/ImpulseEvent::DistanceDecay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ImpulseEvent_DistanceDecay_mD470E344C6B95A38CCFFD8EA0869E98D30141C16 (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, float ___distance0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float radius = Mathf.Max(m_Radius, 0);
		float L_0 = __this->___m_Radius_4;
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, (0.0f), NULL);
		V_0 = L_1;
		// if (distance < radius)
		float L_2 = ___distance0;
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_001b:
	{
		// distance -= radius;
		float L_4 = ___distance0;
		float L_5 = V_0;
		___distance0 = ((float)il2cpp_codegen_subtract(L_4, L_5));
		// if (distance >= m_DissipationDistance)
		float L_6 = ___distance0;
		float L_7 = __this->___m_DissipationDistance_8;
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_002f;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_002f:
	{
		// if (m_CustomDissipation >= 0)
		float L_8 = __this->___m_CustomDissipation_9;
		if ((!(((float)L_8) >= ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		// return EvaluateDissipationScale(m_CustomDissipation, distance / m_DissipationDistance);
		float L_9 = __this->___m_CustomDissipation_9;
		float L_10 = ___distance0;
		float L_11 = __this->___m_DissipationDistance_8;
		float L_12;
		L_12 = CinemachineImpulseManager_EvaluateDissipationScale_m9210CFEA7341A4025B8164E415A7C4789F265D4C(L_9, ((float)(L_10/L_11)), NULL);
		return L_12;
	}

IL_0050:
	{
		// switch (m_DissipationMode)
		int32_t L_13 = __this->___m_DissipationMode_7;
		V_1 = L_13;
		int32_t L_14 = V_1;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0069;
			}
			case 1:
			{
				goto IL_0081;
			}
			case 2:
			{
				goto IL_00a1;
			}
		}
	}

IL_0069:
	{
		// return Mathf.Lerp(1, 0, distance / m_DissipationDistance);
		float L_15 = ___distance0;
		float L_16 = __this->___m_DissipationDistance_8;
		float L_17;
		L_17 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline((1.0f), (0.0f), ((float)(L_15/L_16)), NULL);
		return L_17;
	}

IL_0081:
	{
		// return 0.5f * (1 + Mathf.Cos(Mathf.PI * (distance / m_DissipationDistance)));
		float L_18 = ___distance0;
		float L_19 = __this->___m_DissipationDistance_8;
		float L_20;
		L_20 = cosf(((float)il2cpp_codegen_multiply((3.14159274f), ((float)(L_18/L_19)))));
		return ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add((1.0f), L_20))));
	}

IL_00a1:
	{
		// return 1 - Damper.Damp(1, m_DissipationDistance, distance);
		float L_21 = __this->___m_DissipationDistance_8;
		float L_22 = ___distance0;
		float L_23;
		L_23 = Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2((1.0f), L_21, L_22, NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_23));
	}
}
// System.Boolean Cinemachine.CinemachineImpulseManager/ImpulseEvent::GetDecayedSignal(UnityEngine.Vector3,System.Boolean,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImpulseEvent_GetDecayedSignal_m0A606723EF1C6867ECAC33BBBDCE4826BE5AB78F (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___listenerPosition0, bool ___use2D1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___pos2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___rot3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISignalSource6D_tFE7BD21AFCDC4FB28E680A0A6885882CB7D88BEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B4_0 = 0.0f;
	{
		// if (m_SignalSource != null)
		RuntimeObject* L_0 = __this->___m_SignalSource_2;
		if (!L_0)
		{
			goto IL_0129;
		}
	}
	{
		// float distance = use2D ? Vector2.Distance(listenerPosition, m_Position)
		//     : Vector3.Distance(listenerPosition, m_Position);
		bool L_1 = ___use2D1;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___listenerPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___m_Position_3;
		float L_4;
		L_4 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_2, L_3, NULL);
		G_B4_0 = L_4;
		goto IL_0032;
	}

IL_001c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___listenerPosition0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___m_Position_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_7, NULL);
		float L_9;
		L_9 = Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline(L_6, L_8, NULL);
		G_B4_0 = L_9;
	}

IL_0032:
	{
		V_0 = G_B4_0;
		// float time = Instance.CurrentTime - m_StartTime
		//     - distance / Mathf.Max(1, m_PropagationSpeed);
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_10;
		L_10 = CinemachineImpulseManager_get_Instance_m60CAF899B8E71E36C8DF7072CAB6448A970E7D02(NULL);
		NullCheck(L_10);
		float L_11;
		L_11 = CinemachineImpulseManager_get_CurrentTime_m67D3ABCDB387670ECEF30D37A8E3CBDA5EB530F4(L_10, NULL);
		float L_12 = __this->___m_StartTime_0;
		float L_13 = V_0;
		float L_14 = __this->___m_PropagationSpeed_10;
		float L_15;
		L_15 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((1.0f), L_14, NULL);
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(L_11, L_12)), ((float)(L_13/L_15))));
		// float scale = m_Envelope.GetValueAt(time) * DistanceDecay(distance);
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_16 = (&__this->___m_Envelope_1);
		float L_17 = V_1;
		float L_18;
		L_18 = EnvelopeDefinition_GetValueAt_mAF39D22894C1B21FDA3A5D7C50AF4AEB393BEE6D(L_16, L_17, NULL);
		float L_19 = V_0;
		float L_20;
		L_20 = ImpulseEvent_DistanceDecay_mD470E344C6B95A38CCFFD8EA0869E98D30141C16(__this, L_19, NULL);
		V_2 = ((float)il2cpp_codegen_multiply(L_18, L_20));
		// if (scale != 0)
		float L_21 = V_2;
		if ((((float)L_21) == ((float)(0.0f))))
		{
			goto IL_0129;
		}
	}
	{
		// m_SignalSource.GetSignal(time, out pos, out rot);
		RuntimeObject* L_22 = __this->___m_SignalSource_2;
		float L_23 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ___pos2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_25 = ___rot3;
		NullCheck(L_22);
		InterfaceActionInvoker3< float, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* >::Invoke(1 /* System.Void Cinemachine.ISignalSource6D::GetSignal(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&) */, ISignalSource6D_tFE7BD21AFCDC4FB28E680A0A6885882CB7D88BEB_il2cpp_TypeInfo_var, L_22, L_23, L_24, L_25);
		// pos *= scale;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = ___pos2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = ___pos2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_27);
		float L_29 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_26 = L_30;
		// rot = Quaternion.SlerpUnclamped(Quaternion.identity, rot, scale);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_31 = ___rot3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_33 = ___rot3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_33);
		float L_35 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36;
		L_36 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_32, L_34, L_35, NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_31 = L_36;
		// if (m_DirectionMode == DirectionMode.RotateTowardSource && distance > Epsilon)
		int32_t L_37 = __this->___m_DirectionMode_5;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}
	{
		float L_38 = V_0;
		if ((!(((float)L_38) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0127;
		}
	}
	{
		// Quaternion q = Quaternion.FromToRotation(Vector3.up, listenerPosition - m_Position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ___listenerPosition0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___m_Position_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_40, L_41, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_39, L_42, NULL);
		V_3 = L_43;
		// if (m_Radius > Epsilon)
		float L_44 = __this->___m_Radius_4;
		if ((!(((float)L_44) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0115;
		}
	}
	{
		// float t = Mathf.Clamp01(distance / m_Radius);
		float L_45 = V_0;
		float L_46 = __this->___m_Radius_4;
		float L_47;
		L_47 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_45/L_46)), NULL);
		V_4 = L_47;
		// q = Quaternion.Slerp(
		//     q, Quaternion.identity, Mathf.Cos(Mathf.PI * t / 2));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		float L_50 = V_4;
		float L_51;
		L_51 = cosf(((float)(((float)il2cpp_codegen_multiply((3.14159274f), L_50))/(2.0f))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_48, L_49, L_51, NULL);
		V_3 = L_52;
	}

IL_0115:
	{
		// pos = q * pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = ___pos2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_55 = ___pos2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_54, L_56, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_53 = L_57;
	}

IL_0127:
	{
		// return true;
		return (bool)1;
	}

IL_0129:
	{
		// pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = ___pos2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_58 = L_59;
		// rot = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_60 = ___rot3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_61;
		L_61 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)L_60 = L_61;
		// return false;
		return (bool)0;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent_Clear_mBE18EB8EBB0F8F266AB084B44307155CE823C17A (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, const RuntimeMethod* method) 
{
	{
		// m_Envelope.Clear();
		EnvelopeDefinition_tC875D919977CE4B1876A7CAAF64F9A087C86207E* L_0 = (&__this->___m_Envelope_1);
		EnvelopeDefinition_Clear_m70B8BFD4F76297739F4D6EC3044D46832196D4EF(L_0, NULL);
		// m_StartTime = 0;
		__this->___m_StartTime_0 = (0.0f);
		// m_SignalSource = null;
		__this->___m_SignalSource_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SignalSource_2), (void*)(RuntimeObject*)NULL);
		// m_Position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_Position_3 = L_1;
		// m_Channel = 0;
		__this->___m_Channel_6 = 0;
		// m_Radius = 0;
		__this->___m_Radius_4 = (0.0f);
		// m_DissipationDistance = 100;
		__this->___m_DissipationDistance_8 = (100.0f);
		// m_DissipationMode = DissipationMode.ExponentialDecay;
		__this->___m_DissipationMode_7 = 2;
		// m_CustomDissipation = -1;
		__this->___m_CustomDissipation_9 = (-1.0f);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseManager/ImpulseEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImpulseEvent__ctor_mC5F7C05F235EB65CED1FF6E0FBC6C83D9BCBF81B (ImpulseEvent_t47B7A7F746F12CA62759422A5F71DBBD4C53DC59* __this, const RuntimeMethod* method) 
{
	{
		// internal ImpulseEvent() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// internal ImpulseEvent() {}
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
// System.Void Cinemachine.CinemachineImpulseSource::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_OnValidate_m5AF490404689D1FD50FA16C1A3621FF85B4E9D28 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, const RuntimeMethod* method) 
{
	{
		// m_ImpulseDefinition.OnValidate();
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = __this->___m_ImpulseDefinition_4;
		NullCheck(L_0);
		CinemachineImpulseDefinition_OnValidate_mC9E8C5D4227DB0C7467BBDE0004C424B72C083ED(L_0, NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_Reset_m6D1F0F55B77C67D7D03992E820A189D52DF9EDB9 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ImpulseDefinition = new CinemachineImpulseDefinition
		// {
		//     m_ImpulseChannel = 1,
		//     m_ImpulseShape = CinemachineImpulseDefinition.ImpulseShapes.Bump,
		//     m_CustomImpulseShape = new AnimationCurve(),
		//     m_ImpulseDuration = 0.2f,
		//     m_ImpulseType = CinemachineImpulseDefinition.ImpulseTypes.Uniform,
		//     m_DissipationDistance = 100,
		//     m_DissipationRate = 0.25f,
		//     m_PropagationSpeed = 343
		// };
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = (CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705*)il2cpp_codegen_object_new(CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CinemachineImpulseDefinition__ctor_m9A793CB4F91B42D9A7D38C1953A0A081A04B4045(L_0, NULL);
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_1 = L_0;
		NullCheck(L_1);
		L_1->___m_ImpulseChannel_0 = 1;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_2 = L_1;
		NullCheck(L_2);
		L_2->___m_ImpulseShape_1 = 2;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_3 = L_2;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_4 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AnimationCurve__ctor_m0D976567166F92383307DC8EB8D7082CD34E226F(L_4, NULL);
		NullCheck(L_3);
		L_3->___m_CustomImpulseShape_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___m_CustomImpulseShape_2), (void*)L_4);
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_5 = L_3;
		NullCheck(L_5);
		L_5->___m_ImpulseDuration_3 = (0.200000003f);
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_6 = L_5;
		NullCheck(L_6);
		L_6->___m_ImpulseType_4 = 0;
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_7 = L_6;
		NullCheck(L_7);
		L_7->___m_DissipationDistance_15 = (100.0f);
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_8 = L_7;
		NullCheck(L_8);
		L_8->___m_DissipationRate_5 = (0.25f);
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_9 = L_8;
		NullCheck(L_9);
		L_9->___m_PropagationSpeed_16 = (343.0f);
		__this->___m_ImpulseDefinition_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ImpulseDefinition_4), (void*)L_9);
		// m_DefaultVelocity = Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		__this->___m_DefaultVelocity_5 = L_10;
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulseAtPositionWithVelocity(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulseAtPositionWithVelocity_m943E5F58B6A439998A9C427F42FEBF61094F82C1 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity1, const RuntimeMethod* method) 
{
	{
		// if (m_ImpulseDefinition != null)
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = __this->___m_ImpulseDefinition_4;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// m_ImpulseDefinition.CreateEvent(position, velocity);
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_1 = __this->___m_ImpulseDefinition_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___velocity1;
		NullCheck(L_1);
		CinemachineImpulseDefinition_CreateEvent_m12158346403D3428D6DBC0D3D22DDDCF551E5B41(L_1, L_2, L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulseWithVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulseWithVelocity_mF16A92675C0D88821A81722EE1CCEA704F17258F (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity0, const RuntimeMethod* method) 
{
	{
		// GenerateImpulseAtPositionWithVelocity(transform.position, velocity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___velocity0;
		CinemachineImpulseSource_GenerateImpulseAtPositionWithVelocity_m943E5F58B6A439998A9C427F42FEBF61094F82C1(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulseWithForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulseWithForce_mB82D805193E1A63D2EBAE187F450E110FDFB2780 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, float ___force0, const RuntimeMethod* method) 
{
	{
		// GenerateImpulseAtPositionWithVelocity(
		//     transform.position, m_DefaultVelocity * force);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___m_DefaultVelocity_5;
		float L_3 = ___force0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		CinemachineImpulseSource_GenerateImpulseAtPositionWithVelocity_m943E5F58B6A439998A9C427F42FEBF61094F82C1(__this, L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulse_m0AE0716BE48B2DE1186BF9757917BB0BD8E9999A (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, const RuntimeMethod* method) 
{
	{
		// GenerateImpulseWithVelocity(m_DefaultVelocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_DefaultVelocity_5;
		CinemachineImpulseSource_GenerateImpulseWithVelocity_mF16A92675C0D88821A81722EE1CCEA704F17258F(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulseAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulseAt_mC9E45E6ABBB7111E7553994C17F3AA71A3E025A8 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity1, const RuntimeMethod* method) 
{
	{
		// => GenerateImpulseAtPositionWithVelocity(position, velocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___velocity1;
		CinemachineImpulseSource_GenerateImpulseAtPositionWithVelocity_m943E5F58B6A439998A9C427F42FEBF61094F82C1(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulse(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulse_m700534622EE72CDDAFEBEFAB2E60F88654660B6A (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity0, const RuntimeMethod* method) 
{
	{
		// public void GenerateImpulse(Vector3 velocity) => GenerateImpulseWithVelocity(velocity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___velocity0;
		CinemachineImpulseSource_GenerateImpulseWithVelocity_mF16A92675C0D88821A81722EE1CCEA704F17258F(__this, L_0, NULL);
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::GenerateImpulse(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource_GenerateImpulse_m64F06385534151C880B380839786BC1C1B59D5C6 (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, float ___force0, const RuntimeMethod* method) 
{
	{
		// public void GenerateImpulse(float force) => GenerateImpulseWithForce(force);
		float L_0 = ___force0;
		CinemachineImpulseSource_GenerateImpulseWithForce_mB82D805193E1A63D2EBAE187F450E110FDFB2780(__this, L_0, NULL);
		return;
	}
}
// System.Void Cinemachine.CinemachineImpulseSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineImpulseSource__ctor_mAC87ADE7ACFB4405EE58B0C6AA0AE5D93EA3915E (CinemachineImpulseSource_t48D0DCECD3CD8432BF4442EB45399BBD383A1B83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CinemachineImpulseDefinition m_ImpulseDefinition = new CinemachineImpulseDefinition();
		CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705* L_0 = (CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705*)il2cpp_codegen_object_new(CinemachineImpulseDefinition_t3F6992431B5EE7132783754081C473BABF2F4705_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CinemachineImpulseDefinition__ctor_m9A793CB4F91B42D9A7D38C1953A0A081A04B4045(L_0, NULL);
		__this->___m_ImpulseDefinition_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ImpulseDefinition_4), (void*)L_0);
		// public Vector3 m_DefaultVelocity = Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		__this->___m_DefaultVelocity_5 = L_1;
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
// System.Void Cinemachine.CinemachineIndependentImpulseListener::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineIndependentImpulseListener_Reset_m73C4B1F95F2A15991E711CC74A4AEE221108AF29 (CinemachineIndependentImpulseListener_t3C68C753A1E5436FAD419083E2935442A251CC6E* __this, const RuntimeMethod* method) 
{
	ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_ChannelMask = 1;
		__this->___m_ChannelMask_6 = 1;
		// m_Gain = 1;
		__this->___m_Gain_7 = (1.0f);
		// m_Use2DDistance = false;
		__this->___m_Use2DDistance_8 = (bool)0;
		// m_UseLocalSpace = true;
		__this->___m_UseLocalSpace_9 = (bool)1;
		// m_ReactionSettings = new CinemachineImpulseListener.ImpulseReaction
		// {
		//     m_AmplitudeGain = 1,
		//     m_FrequencyGain = 1,
		//     m_Duration = 1f
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E));
		(&V_0)->___m_AmplitudeGain_1 = (1.0f);
		(&V_0)->___m_FrequencyGain_2 = (1.0f);
		(&V_0)->___m_Duration_3 = (1.0f);
		ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E L_0 = V_0;
		__this->___m_ReactionSettings_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___m_ReactionSettings_10))->___m_SecondaryNoise_0), (void*)NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineIndependentImpulseListener::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineIndependentImpulseListener_OnEnable_m5439B23A0659AC177EB940684D9C1D17BC03F470 (CinemachineIndependentImpulseListener_t3C68C753A1E5436FAD419083E2935442A251CC6E* __this, const RuntimeMethod* method) 
{
	{
		// impulsePosLastFrame = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___impulsePosLastFrame_4 = L_0;
		// impulseRotLastFrame = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___impulseRotLastFrame_5 = L_1;
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineIndependentImpulseListener::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineIndependentImpulseListener_Update_m6869DA3648BEE15F08D80FBC4EEF6842D7023C6D (CinemachineIndependentImpulseListener_t3C68C753A1E5436FAD419083E2935442A251CC6E* __this, const RuntimeMethod* method) 
{
	{
		// transform.position -= impulsePosLastFrame;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___impulsePosLastFrame_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_4, NULL);
		// transform.rotation = transform.rotation * Quaternion.Inverse(impulseRotLastFrame);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = __this->___impulseRotLastFrame_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_9, NULL);
		NullCheck(L_5);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_10, NULL);
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineIndependentImpulseListener::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineIndependentImpulseListener_LateUpdate_m7F9FFDFE7E2C8ABFF7DC8D9B723DAC97B966ACDC (CinemachineIndependentImpulseListener_t3C68C753A1E5436FAD419083E2935442A251CC6E* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool G_B2_0 = false;
	bool G_B1_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		// bool haveImpulse = CinemachineImpulseManager.Instance.GetImpulseAt(
		//     transform.position, m_Use2DDistance, m_ChannelMask,
		//     out impulsePosLastFrame, out impulseRotLastFrame);
		CinemachineImpulseManager_t19F063379BE6FCCBDB8F5D04F1ABAD447FACBA8F* L_0;
		L_0 = CinemachineImpulseManager_get_Instance_m60CAF899B8E71E36C8DF7072CAB6448A970E7D02(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		bool L_3 = __this->___m_Use2DDistance_8;
		int32_t L_4 = __this->___m_ChannelMask_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___impulsePosLastFrame_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_6 = (&__this->___impulseRotLastFrame_5);
		NullCheck(L_0);
		bool L_7;
		L_7 = CinemachineImpulseManager_GetImpulseAt_m60503248A6E51D9CB74F28148A982D8FA5C57D04(L_0, L_2, L_3, L_4, L_5, L_6, NULL);
		// bool haveReaction = m_ReactionSettings.GetReaction(
		//     Time.deltaTime, impulsePosLastFrame, out var reactionPos, out var reactionRot);
		ImpulseReaction_t2D8610BADC4C769F3E5E84D416DED789249A8A8E* L_8 = (&__this->___m_ReactionSettings_10);
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___impulsePosLastFrame_4;
		bool L_11;
		L_11 = ImpulseReaction_GetReaction_mF1A9A410B1F05368B416656512188311E44E8CC3(L_8, L_9, L_10, (&V_1), (&V_2), NULL);
		V_0 = L_11;
		// if (haveImpulse)
		bool L_12 = L_7;
		G_B1_0 = L_12;
		if (!L_12)
		{
			G_B2_0 = L_12;
			goto IL_007e;
		}
	}
	{
		// impulseRotLastFrame = Quaternion.SlerpUnclamped(
		//     Quaternion.identity, impulseRotLastFrame, m_Gain);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___impulseRotLastFrame_5;
		float L_15 = __this->___m_Gain_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_SlerpUnclamped_mB38920352A1B11369D782F78E183568CAFA82C0F(L_13, L_14, L_15, NULL);
		__this->___impulseRotLastFrame_5 = L_16;
		// impulsePosLastFrame *= m_Gain;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___impulsePosLastFrame_4;
		float L_18 = __this->___m_Gain_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_17, L_18, NULL);
		__this->___impulsePosLastFrame_4 = L_19;
		G_B2_0 = G_B1_0;
	}

IL_007e:
	{
		// if (haveReaction)
		bool L_20 = V_0;
		G_B3_0 = G_B2_0;
		if (!L_20)
		{
			G_B4_0 = G_B2_0;
			goto IL_00a5;
		}
	}
	{
		// impulsePosLastFrame += reactionPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___impulsePosLastFrame_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_21, L_22, NULL);
		__this->___impulsePosLastFrame_4 = L_23;
		// impulseRotLastFrame *= reactionRot;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = __this->___impulseRotLastFrame_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_24, L_25, NULL);
		__this->___impulseRotLastFrame_5 = L_26;
		G_B4_0 = G_B3_0;
	}

IL_00a5:
	{
		// if (haveImpulse || haveReaction)
		bool L_27 = V_0;
		if (!((int32_t)((int32_t)G_B4_0|(int32_t)L_27)))
		{
			goto IL_010a;
		}
	}
	{
		// if (m_UseLocalSpace)
		bool L_28 = __this->___m_UseLocalSpace_9;
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		// impulsePosLastFrame = transform.rotation * impulsePosLastFrame;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_29);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = __this->___impulsePosLastFrame_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_30, L_31, NULL);
		__this->___impulsePosLastFrame_4 = L_32;
	}

IL_00cd:
	{
		// transform.position += impulsePosLastFrame;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = L_33;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___impulsePosLastFrame_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_35, L_36, NULL);
		NullCheck(L_34);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_34, L_37, NULL);
		// transform.rotation = transform.rotation * impulseRotLastFrame;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40;
		L_40 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_39, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = __this->___impulseRotLastFrame_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42;
		L_42 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_40, L_41, NULL);
		NullCheck(L_38);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_38, L_42, NULL);
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.CinemachineIndependentImpulseListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineIndependentImpulseListener__ctor_mE2B8C7909A17100C4E1F08A3B2889187C7E58261 (CinemachineIndependentImpulseListener_t3C68C753A1E5436FAD419083E2935442A251CC6E* __this, const RuntimeMethod* method) 
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
// System.Void Cinemachine.PostFX.CinemachinePostProcessing::PostPipelineStageCallback(Cinemachine.CinemachineVirtualCameraBase,Cinemachine.CinemachineCore/Stage,Cinemachine.CameraState&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachinePostProcessing_PostPipelineStageCallback_m4E796F5B2758A2E4DB5CCE4FCFCF6545BC248033 (CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5* __this, CinemachineVirtualCameraBase_tAD070AA799E9D3990F0B2DA9AC5889CF138261DE* ___vcam0, int32_t ___stage1, CameraState_tBC57F8D313D0D19718B24CFBD690C089C2140156* ___state2, float ___deltaTime3, const RuntimeMethod* method) 
{
	{
		// CinemachineCore.Stage stage, ref CameraState state, float deltaTime) {}
		return;
	}
}
// System.Void Cinemachine.PostFX.CinemachinePostProcessing::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachinePostProcessing__ctor_mCB4146D6BBBE2356147A9DB6D2E0F349B89A908A (CinemachinePostProcessing_t1D2E39360B2745E47A9DDFE4CF9090999D7D85E5* __this, const RuntimeMethod* method) 
{
	{
		CinemachineExtension__ctor_m8955F80D4A62DE7C3DA510CFECEF722346241C94(__this, NULL);
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
// System.Void Cinemachine.PostFX.CinemachineVolumeSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineVolumeSettings__ctor_mB23ECA31DF611267B81182121229A3B5EF12014B (CinemachineVolumeSettings_tBC1FC85EB8A3FC626AAE7A900B91E1FD0C84E5E6* __this, const RuntimeMethod* method) 
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
// System.Void Cinemachine.Utility.CinemachineDebug::ReleaseScreenPos(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineDebug_ReleaseScreenPos_mFF92D5D7AF6902FE80339C872BE9DDEB7517BDF9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mClients != null && mClients.Contains(client))
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_1 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___client0;
		NullCheck(L_1);
		bool L_3;
		L_3 = HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D(L_1, L_2, HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// mClients.Remove(client);
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_4 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_5 = ___client0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595(L_4, L_5, HashSet_1_Remove_m914B0A1ED80B8FBC1879912D39E8DAEE80413595_RuntimeMethod_var);
	}

IL_0020:
	{
		// }
		return;
	}
}
// UnityEngine.Rect Cinemachine.Utility.CinemachineDebug::GetScreenPos(UnityEngine.Object,System.String,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D CinemachineDebug_GetScreenPos_m83EB9F49FA225AE0A22A4B7FA9BACB94FB1C4A3D (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___client0, String_t* ___text1, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___style2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (mClients == null)
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// mClients = new HashSet<Object>();
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_1 = (HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614*)il2cpp_codegen_object_new(HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A(L_1, HashSet_1__ctor_m452F5282ED2E6E6974666067E813E40FE163967A_RuntimeMethod_var);
		((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0), (void*)L_1);
	}

IL_0011:
	{
		// if (!mClients.Contains(client))
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_2 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3 = ___client0;
		NullCheck(L_2);
		bool L_4;
		L_4 = HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D(L_2, L_3, HashSet_1_Contains_m1BE59057D1E3F46D988D984F1093243A5382B00D_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		// mClients.Add(client);
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_5 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = ___client0;
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5(L_5, L_6, HashSet_1_Add_mF7FF6A8ABB5678A42FF5EF549292C0626C0696A5_RuntimeMethod_var);
	}

IL_002a:
	{
		// var pos = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_0 = L_8;
		// Vector2 size = style.CalcSize(new GUIContent(text));
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9 = ___style2;
		String_t* L_10 = ___text1;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_11 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_11, L_10, NULL);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_9, L_11, NULL);
		V_1 = L_12;
		// if (mClients != null)
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_13 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		if (!L_13)
		{
			goto IL_008c;
		}
	}
	{
		// foreach (var c in mClients)
		HashSet_1_tCBC2AED809446FE95DDA990CA99F2527D9CF6614* L_14 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mClients_0;
		NullCheck(L_14);
		Enumerator_tCB7393AAD90AFBDA99361CCFF444797F5C888853 L_15;
		L_15 = HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB(L_14, HashSet_1_GetEnumerator_mD15C58F93B8FF17D7F8FE0B3AD1E0C16ADEE43DB_RuntimeMethod_var);
		V_2 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553((&V_2), Enumerator_Dispose_m7FE6D6D2AC8F2B7347A7247B8A5E1F76A6E31553_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0073_1;
			}

IL_0051_1:
			{
				// foreach (var c in mClients)
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_16;
				L_16 = Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_inline((&V_2), Enumerator_get_Current_m83BF055FC97331647786F4CB9611F09CD6843017_RuntimeMethod_var);
				// if (c == client)
				Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_17 = ___client0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_16, L_17, NULL);
				if (!L_18)
				{
					goto IL_0062_1;
				}
			}
			{
				// break;
				goto IL_008c;
			}

IL_0062_1:
			{
				// pos.y += size.y;
				float* L_19 = (&(&V_0)->___y_1);
				float* L_20 = L_19;
				float L_21 = *((float*)L_20);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
				float L_23 = L_22.___y_1;
				*((float*)L_20) = (float)((float)il2cpp_codegen_add(L_21, L_23));
			}

IL_0073_1:
			{
				// foreach (var c in mClients)
				bool L_24;
				L_24 = Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645((&V_2), Enumerator_MoveNext_m7228B41EC67FC46BF3AC2461B5FE4DBFC602E645_RuntimeMethod_var);
				if (L_24)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		// return new Rect(pos, size);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m503705FE0E4E413041E3CE7F09270489F401C675((&L_27), L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Text.StringBuilder Cinemachine.Utility.CinemachineDebug::SBFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* CinemachineDebug_SBFromPool_m6F20FF73A5A0C5B5CD7D53ADC0887782A70DB5E5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAvailableStringBuilders == null || mAvailableStringBuilders.Count == 0)
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_1 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline(L_1, List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		// return new StringBuilder();
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		return L_3;
	}

IL_0019:
	{
		// var sb = mAvailableStringBuilders[mAvailableStringBuilders.Count - 1];
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_4 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_5 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline(L_5, List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8(L_4, ((int32_t)il2cpp_codegen_subtract(L_6, 1)), List_1_get_Item_mBD7E40942F24A5B305A70B750BD9E9BE5601CAA8_RuntimeMethod_var);
		// mAvailableStringBuilders.RemoveAt(mAvailableStringBuilders.Count - 1);
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_8 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_9 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_inline(L_9, List_1_get_Count_m0A16929D8B4521A714BFB9B8C4F94B2A5587C64D_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409(L_8, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), List_1_RemoveAt_m808D0A31B600613C828E9B4DD3DADB85661F9409_RuntimeMethod_var);
		// sb.Length = 0;
		StringBuilder_t* L_11 = L_7;
		NullCheck(L_11);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_11, 0, NULL);
		// return sb;
		return L_11;
	}
}
// System.Void Cinemachine.Utility.CinemachineDebug::ReturnToPool(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineDebug_ReturnToPool_m486386674DD5B04481BC7B3FAB351E6122EE8630 (StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mAvailableStringBuilders == null)
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_0 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// mAvailableStringBuilders = new List<StringBuilder>();
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_1 = (List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9*)il2cpp_codegen_object_new(List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138(L_1, List_1__ctor_mA2785EB3108A801D84106FCD04DAC3E7DD672138_RuntimeMethod_var);
		((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2), (void*)L_1);
	}

IL_0011:
	{
		// mAvailableStringBuilders.Add(sb);
		List_1_tF7A85406B1E07A43CE2AD7A590CA5354CAC5A8E9* L_2 = ((CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_StaticFields*)il2cpp_codegen_static_fields_for(CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390_il2cpp_TypeInfo_var))->___mAvailableStringBuilders_2;
		StringBuilder_t* L_3 = ___sb0;
		NullCheck(L_2);
		List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_inline(L_2, L_3, List_1_Add_m9F09B395F546BA77EA1435F1B5C6F8235D8F32F4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.CinemachineDebug::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CinemachineDebug__ctor_mAF77C21C69B520883959BEC3DE58BBDD83CE5F8E (CinemachineDebug_tF7AD4D43CFCD221D11A0A0F2B254CE8426C00390* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_Multicast(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* currentDelegate = reinterpret_cast<OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenInst(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStatic(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStaticInvoker(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_ClosedStaticInvoker(OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate__ctor_mB8767C1FEE32279209BC7F763E7C133C62B92FB0 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464_Multicast;
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_Invoke_mA8B9CF3C0FA6CD716557C7E66D18F061E6410464 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGUIDelegate_BeginInvoke_m7F8DBBFCF5F26BB61396A8DACB90A543E942EE20 (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Cinemachine.Utility.CinemachineDebug/OnGUIDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGUIDelegate_EndInvoke_m333ABE0CEA01B43E00AE0D77A7CE8279DDF2604F (OnGUIDelegate_tB3BF50E2F15C77EEBC4EA0011B8764FF41C29708* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cinemachine.Utility.GaussianWindow1D_Vector3::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_Vector3__ctor_m24BDA3F6806B2C7687313112EF321052C4FFA574 (GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09(__this, L_0, L_1, GaussianWindow1d_1__ctor_mB410AAC105BC40A99870D8D487140D0C53D65C09_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.GaussianWindow1D_Vector3::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GaussianWindow1D_Vector3_Compute_m50CFE925DFF71745A8032D15E19D650B6A4AB4A4 (GaussianWindow1D_Vector3_t2392E8CA14D412847A8C8FFC9E548D1AF61A4D86* __this, int32_t ___windowPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// Vector3 sum = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_0 = L_0;
		// for (int i = 0; i < KernelSize; ++i)
		V_1 = 0;
		goto IL_003f;
	}

IL_000a:
	{
		// sum += mData[windowPos] * mKernel[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = ((GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*)__this)->___mData_0;
		int32_t L_3 = ___windowPos0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ((GaussianWindow1d_1_tF7BE5FADFFA7F69294A7C3F8C49F0FBF3E92682C*)__this)->___mKernel_1;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_10, NULL);
		V_0 = L_11;
		// if (++windowPos == KernelSize)
		int32_t L_12 = ___windowPos0;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___windowPos0 = L_13;
		int32_t L_14;
		L_14 = GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A(__this, GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_003b;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_003b:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A(__this, GaussianWindow1d_1_get_KernelSize_m3F57073A9FC142565561A92DF71AE54530B9E26A_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_000a;
		}
	}
	{
		// return sum;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		return L_18;
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
// System.Void Cinemachine.Utility.GaussianWindow1D_Quaternion::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_Quaternion__ctor_m34E6A4BE5AEDDB27919FB447706477666FDEF7BE (GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8(__this, L_0, L_1, GaussianWindow1d_1__ctor_mD1A5E428BE3BFE2928736FD6E36FB6E6E136D3F8_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.GaussianWindow1D_Quaternion::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GaussianWindow1D_Quaternion_Compute_m7482A5084DE01B7B0AAF60567BF9FBBE2C3A1738 (GaussianWindow1D_Quaternion_t81313B62477A5C087C4DD0D5A4CAC929C2F7938B* __this, int32_t ___windowPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Quaternion sum = new Quaternion(0, 0, 0, 0);
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_0), (0.0f), (0.0f), (0.0f), (0.0f), NULL);
		// Quaternion q = mData[mCurrentPos];
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_0 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mData_0;
		int32_t L_1 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mCurrentPos_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		// Quaternion qInverse = Quaternion.Inverse(q);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_4, NULL);
		V_2 = L_5;
		// for (int i = 0; i < KernelSize; ++i)
		V_3 = 0;
		goto IL_00da;
	}

IL_003b:
	{
		// float scale = mKernel[i];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mKernel_1;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		float L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// Quaternion q2 = qInverse * mData[windowPos];
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_2;
		QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* L_11 = ((GaussianWindow1d_1_t2FCE0AA88653951CC32741376FD39AE5FF63678D*)__this)->___mData_0;
		int32_t L_12 = ___windowPos0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_10, L_14, NULL);
		V_5 = L_15;
		// if (Quaternion.Dot(Quaternion.identity, q2) < 0)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_5;
		float L_18;
		L_18 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_16, L_17, NULL);
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// scale = -scale;
		float L_19 = V_4;
		V_4 = ((-L_19));
	}

IL_0071:
	{
		// sum.x += q2.x * scale;
		float* L_20 = (&(&V_0)->___x_0);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = V_5;
		float L_24 = L_23.___x_0;
		float L_25 = V_4;
		*((float*)L_21) = (float)((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(L_24, L_25))));
		// sum.y += q2.y * scale;
		float* L_26 = (&(&V_0)->___y_1);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_5;
		float L_30 = L_29.___y_1;
		float L_31 = V_4;
		*((float*)L_27) = (float)((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(L_30, L_31))));
		// sum.z += q2.z * scale;
		float* L_32 = (&(&V_0)->___z_2);
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35 = V_5;
		float L_36 = L_35.___z_2;
		float L_37 = V_4;
		*((float*)L_33) = (float)((float)il2cpp_codegen_add(L_34, ((float)il2cpp_codegen_multiply(L_36, L_37))));
		// sum.w += q2.w * scale;
		float* L_38 = (&(&V_0)->___w_3);
		float* L_39 = L_38;
		float L_40 = *((float*)L_39);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = V_5;
		float L_42 = L_41.___w_3;
		float L_43 = V_4;
		*((float*)L_39) = (float)((float)il2cpp_codegen_add(L_40, ((float)il2cpp_codegen_multiply(L_42, L_43))));
		// if (++windowPos == KernelSize)
		int32_t L_44 = ___windowPos0;
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		___windowPos0 = L_45;
		int32_t L_46;
		L_46 = GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC(__this, GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var);
		if ((!(((uint32_t)L_45) == ((uint32_t)L_46))))
		{
			goto IL_00d6;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_00d6:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_47 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00da:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_48 = V_3;
		int32_t L_49;
		L_49 = GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC(__this, GaussianWindow1d_1_get_KernelSize_m11C6A4C90FB7FFDE893B37D2119DBD80C29963FC_RuntimeMethod_var);
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_003b;
		}
	}
	{
		// return q * Quaternion.Normalize(sum);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_51 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52;
		L_52 = Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline(L_51, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_53;
		L_53 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_50, L_52, NULL);
		return L_53;
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
// System.Void Cinemachine.Utility.GaussianWindow1D_CameraRotation::.ctor(System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GaussianWindow1D_CameraRotation__ctor_m93E64892C4CC9FFE4D20A5AE0EDB3761E0D357C5 (GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98* __this, float ___sigma0, int32_t ___maxKernelRadius1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(sigma, maxKernelRadius) {}
		float L_0 = ___sigma0;
		int32_t L_1 = ___maxKernelRadius1;
		GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB(__this, L_0, L_1, GaussianWindow1d_1__ctor_mEC3F1FAF64D12B232A689153F44790B1AB81D4BB_RuntimeMethod_var);
		// : base(sigma, maxKernelRadius) {}
		return;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.GaussianWindow1D_CameraRotation::Compute(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GaussianWindow1D_CameraRotation_Compute_m5D42413D3C9A040A0E75B1B3FFFE24DA04628AD2 (GaussianWindow1D_CameraRotation_t038ADB42DAC4B627909A377F105CBD40260BBC98* __this, int32_t ___windowPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 sum = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_0 = L_0;
		// Vector2 v = mData[mCurrentPos];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mData_0;
		int32_t L_2 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mCurrentPos_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// for (int i = 0; i < KernelSize; ++i)
		V_2 = 0;
		goto IL_0093;
	}

IL_001c:
	{
		// Vector2 v2 = mData[windowPos] - v;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mData_0;
		int32_t L_6 = ___windowPos0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_8, L_9, NULL);
		V_3 = L_10;
		// if (v2.y > 180f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_3;
		float L_12 = L_11.___y_1;
		if ((!(((float)L_12) > ((float)(180.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// v2.y -= 360f;
		float* L_13 = (&(&V_3)->___y_1);
		float* L_14 = L_13;
		float L_15 = *((float*)L_14);
		*((float*)L_14) = (float)((float)il2cpp_codegen_subtract(L_15, (360.0f)));
	}

IL_004c:
	{
		// if (v2.y < -180f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_3;
		float L_17 = L_16.___y_1;
		if ((!(((float)L_17) < ((float)(-180.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// v2.y += 360f;
		float* L_18 = (&(&V_3)->___y_1);
		float* L_19 = L_18;
		float L_20 = *((float*)L_19);
		*((float*)L_19) = (float)((float)il2cpp_codegen_add(L_20, (360.0f)));
	}

IL_0069:
	{
		// sum += v2 * mKernel[i];
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ((GaussianWindow1d_1_tFA21DA86D157C554464FE846A28A5B5B060B9E90*)__this)->___mKernel_1;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		float L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_22, L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_21, L_27, NULL);
		V_0 = L_28;
		// if (++windowPos == KernelSize)
		int32_t L_29 = ___windowPos0;
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		___windowPos0 = L_30;
		int32_t L_31;
		L_31 = GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7(__this, GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var);
		if ((!(((uint32_t)L_30) == ((uint32_t)L_31))))
		{
			goto IL_008f;
		}
	}
	{
		// windowPos = 0;
		___windowPos0 = 0;
	}

IL_008f:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0093:
	{
		// for (int i = 0; i < KernelSize; ++i)
		int32_t L_33 = V_2;
		int32_t L_34;
		L_34 = GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7(__this, GaussianWindow1d_1_get_KernelSize_mAC67CB73A35607D3954AB4322639B028D847E6E7_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_001c;
		}
	}
	{
		// return v + sum;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_35, L_36, NULL);
		return L_37;
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
// System.Boolean Cinemachine.Utility.PositionPredictor::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PositionPredictor_IsEmpty_m61F4928BCB8526CD0A823F2B2A46FDE04905C97B (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty() { return !m_HavePos; }
		bool L_0 = __this->___m_HavePos_3;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::ApplyTransformDelta(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_ApplyTransformDelta_mDA012CCA329F143DDF342616369F0E75B2E2C97A (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionDelta0, const RuntimeMethod* method) 
{
	{
		// public void ApplyTransformDelta(Vector3 positionDelta) { m_Pos += positionDelta; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Pos_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___positionDelta0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_1, NULL);
		__this->___m_Pos_2 = L_2;
		// public void ApplyTransformDelta(Vector3 positionDelta) { m_Pos += positionDelta; }
		return;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_Reset_mDA454522FB1823437E5538169D712A2E18F956C5 (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) 
{
	{
		// m_HavePos = false;
		__this->___m_HavePos_3 = (bool)0;
		// m_SmoothDampVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_SmoothDampVelocity_1 = L_0;
		// m_Velocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___m_Velocity_0 = L_1;
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::AddPosition(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor_AddPosition_mB5EFA6BB6598A9D52D1CE6BD50400E56938C433C (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___deltaTime1, float ___lookaheadTime2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float G_B6_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B6_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_2;
	memset((&G_B6_2), 0, sizeof(G_B6_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B6_3;
	memset((&G_B6_3), 0, sizeof(G_B6_3));
	PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* G_B6_4 = NULL;
	float G_B5_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B5_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_2;
	memset((&G_B5_2), 0, sizeof(G_B5_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B5_3;
	memset((&G_B5_3), 0, sizeof(G_B5_3));
	PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* G_B5_4 = NULL;
	int32_t G_B7_0 = 0;
	float G_B7_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B7_2 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_3;
	memset((&G_B7_3), 0, sizeof(G_B7_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B7_4;
	memset((&G_B7_4), 0, sizeof(G_B7_4));
	PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* G_B7_5 = NULL;
	{
		// if (deltaTime < 0)
		float L_0 = ___deltaTime1;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000e;
		}
	}
	{
		// Reset();
		PositionPredictor_Reset_mDA454522FB1823437E5538169D712A2E18F956C5(__this, NULL);
	}

IL_000e:
	{
		// if (m_HavePos && deltaTime > UnityVectorExtensions.Epsilon)
		bool L_1 = __this->___m_HavePos_3;
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		float L_2 = ___deltaTime1;
		if ((!(((float)L_2) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0075;
		}
	}
	{
		// var vel = (pos - m_Pos) / deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___m_Pos_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		float L_6 = ___deltaTime1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// bool slowing = vel.sqrMagnitude < m_Velocity.sqrMagnitude;
		float L_8;
		L_8 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___m_Velocity_0);
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline(L_9, NULL);
		V_1 = (bool)((((float)L_8) < ((float)L_10))? 1 : 0);
		// m_Velocity = Vector3.SmoothDamp(
		//     m_Velocity, vel, ref m_SmoothDampVelocity, Smoothing / (slowing ? 30 : 10),
		//     float.PositiveInfinity, deltaTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___m_Velocity_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___m_SmoothDampVelocity_1);
		float L_14 = __this->___Smoothing_4;
		bool L_15 = V_1;
		G_B5_0 = L_14;
		G_B5_1 = L_13;
		G_B5_2 = L_12;
		G_B5_3 = L_11;
		G_B5_4 = __this;
		if (L_15)
		{
			G_B6_0 = L_14;
			G_B6_1 = L_13;
			G_B6_2 = L_12;
			G_B6_3 = L_11;
			G_B6_4 = __this;
			goto IL_0061;
		}
	}
	{
		G_B7_0 = ((int32_t)10);
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		G_B7_5 = G_B5_4;
		goto IL_0063;
	}

IL_0061:
	{
		G_B7_0 = ((int32_t)30);
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
		G_B7_5 = G_B6_4;
	}

IL_0063:
	{
		float L_16 = ___deltaTime1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_SmoothDamp_mA20AB2E3DFAE680D742E9A17D969AF8A3E849711(G_B7_4, G_B7_3, G_B7_2, ((float)(G_B7_1/((float)G_B7_0))), (std::numeric_limits<float>::infinity()), L_16, NULL);
		NullCheck(G_B7_5);
		G_B7_5->___m_Velocity_0 = L_17;
	}

IL_0075:
	{
		// m_Pos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___pos0;
		__this->___m_Pos_2 = L_18;
		// m_HavePos = true;
		__this->___m_HavePos_3 = (bool)1;
		// }
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPositionDelta(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionPredictor_PredictPositionDelta_mC16231F75C5C088B5CC2444D3C2FA12F6DACC4AD (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, float ___lookaheadTime0, const RuntimeMethod* method) 
{
	{
		// return m_Velocity * lookaheadTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Velocity_0;
		float L_1 = ___lookaheadTime0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.PositionPredictor::PredictPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 PositionPredictor_PredictPosition_mB280F23A4D236037F339758BDEC4AD2DE89AB18F (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, float ___lookaheadTime0, const RuntimeMethod* method) 
{
	{
		// return m_Pos + PredictPositionDelta(lookaheadTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Pos_2;
		float L_1 = ___lookaheadTime0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = PositionPredictor_PredictPositionDelta_mC16231F75C5C088B5CC2444D3C2FA12F6DACC4AD(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void Cinemachine.Utility.PositionPredictor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionPredictor__ctor_m98DC334F817608D8CA4FA09966193AA59A16DB25 (PositionPredictor_t088813DB07D6355BB293350EB983299B866F974E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Single Cinemachine.Utility.Damper::DecayConstant(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_DecayConstant_m2B4374D14857EA333A14F8642E911A9CA67932B9 (float ___time0, float ___residual1, const RuntimeMethod* method) 
{
	{
		// return Mathf.Log(1f / residual) / time;
		float L_0 = ___residual1;
		float L_1;
		L_1 = logf(((float)((1.0f)/L_0)));
		float L_2 = ___time0;
		return ((float)(L_1/L_2));
	}
}
// System.Single Cinemachine.Utility.Damper::DecayedRemainder(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_DecayedRemainder_mA6F8C7A10DA912B47DB78DA8A892734AA7EC6FD8 (float ___initial0, float ___decayConstant1, float ___deltaTime2, const RuntimeMethod* method) 
{
	{
		// return initial / Mathf.Exp(decayConstant * deltaTime);
		float L_0 = ___initial0;
		float L_1 = ___decayConstant1;
		float L_2 = ___deltaTime2;
		float L_3;
		L_3 = expf(((float)il2cpp_codegen_multiply(L_1, L_2)));
		return ((float)(L_0/L_3));
	}
}
// System.Single Cinemachine.Utility.Damper::Damp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2 (float ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// if (dampTime < Epsilon || Mathf.Abs(initial) < Epsilon)
		float L_0 = ___dampTime1;
		if ((((float)L_0) < ((float)(9.99999975E-05f))))
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ___initial0;
		float L_2;
		L_2 = fabsf(L_1);
		if ((!(((float)L_2) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0017;
		}
	}

IL_0015:
	{
		// return initial;
		float L_3 = ___initial0;
		return L_3;
	}

IL_0017:
	{
		// if (deltaTime < Epsilon)
		float L_4 = ___deltaTime2;
		if ((!(((float)L_4) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0025;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0025:
	{
		// float k = -kLogNegligibleResidual / dampTime; //DecayConstant(dampTime, kNegligibleResidual);
		float L_5 = ___dampTime1;
		V_0 = ((float)((4.60517025f)/L_5));
		// return initial * (1 - Mathf.Exp(-k * deltaTime));
		float L_6 = ___initial0;
		float L_7 = V_0;
		float L_8 = ___deltaTime2;
		float L_9;
		L_9 = expf(((float)il2cpp_codegen_multiply(((-L_7)), L_8)));
		return ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_subtract((1.0f), L_9))));
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.Damper::Damp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Damper_Damp_mC9AFD35CB8F0ADFC8A169489A0F839CE52891D62 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initial0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// initial[i] = Damp(initial[i], dampTime[i], deltaTime);
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		float L_2;
		L_2 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___initial0), L_1, NULL);
		int32_t L_3 = V_0;
		float L_4;
		L_4 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___dampTime1), L_3, NULL);
		float L_5 = ___deltaTime2;
		float L_6;
		L_6 = Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2(L_2, L_4, L_5, NULL);
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline((&___initial0), L_0, L_6, NULL);
		// for (int i = 0; i < 3; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// return initial;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___initial0;
		return L_9;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.Damper::Damp(UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Damper_Damp_mF0862EDA3BDC1B7119E3E6310B12B2DA72420E47 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initial0, float ___dampTime1, float ___deltaTime2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; ++i)
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		// initial[i] = Damp(initial[i], dampTime, deltaTime);
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		float L_2;
		L_2 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline((&___initial0), L_1, NULL);
		float L_3 = ___dampTime1;
		float L_4 = ___deltaTime2;
		float L_5;
		L_5 = Damper_Damp_mFB62278C063E2CAA706D30E8D68AF55D50AE95D2(L_2, L_3, L_4, NULL);
		Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline((&___initial0), L_0, L_5, NULL);
		// for (int i = 0; i < 3; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001f:
	{
		// for (int i = 0; i < 3; ++i)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// return initial;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___initial0;
		return L_8;
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
// System.Void Cinemachine.Utility.HeadingTracker::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker__ctor_m65E930C6FC3B44B9DE66B61332E4A960A14BE25B (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, int32_t ___filterSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Vector3 mLastGoodHeading = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___mLastGoodHeading_7 = L_0;
		// public HeadingTracker(int filterSize)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mHistory = new Item[filterSize];
		int32_t L_1 = ___filterSize0;
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_2 = (ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47*)(ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47*)SZArrayNew(ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___mHistory_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mHistory_0), (void*)L_2);
		// float historyHalfLife = filterSize / 5f; // somewhat arbitrarily
		int32_t L_3 = ___filterSize0;
		V_0 = ((float)(((float)L_3)/(5.0f)));
		// mDecayExponent = -Mathf.Log(2f) / historyHalfLife;
		float L_4;
		L_4 = logf((2.0f));
		float L_5 = V_0;
		((HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_StaticFields*)il2cpp_codegen_static_fields_for(HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var))->___mDecayExponent_8 = ((float)(((-L_4))/L_5));
		// ClearHistory();
		HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5(__this, NULL);
		// }
		return;
	}
}
// System.Int32 Cinemachine.Utility.HeadingTracker::get_FilterSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	{
		// public int FilterSize { get { return mHistory.Length; } }
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_0 = __this->___mHistory_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::ClearHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// mTop = mBottom = mCount = 0;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___mCount_3 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = L_2;
		__this->___mBottom_2 = L_2;
		int32_t L_3 = V_0;
		__this->___mTop_1 = L_3;
		// mWeightSum = 0;
		__this->___mWeightSum_5 = (0.0f);
		// mHeadingSum = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___mHeadingSum_4 = L_4;
		// }
		return;
	}
}
// System.Single Cinemachine.Utility.HeadingTracker::Decay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeadingTracker_Decay_m66C3EA4E1471E7B820E2A15BF950BF959865655A (float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static float Decay(float time) { return Mathf.Exp(time * mDecayExponent); }
		float L_0 = ___time0;
		float L_1 = ((HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_StaticFields*)il2cpp_codegen_static_fields_for(HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA_il2cpp_TypeInfo_var))->___mDecayExponent_8;
		float L_2;
		L_2 = expf(((float)il2cpp_codegen_multiply(L_0, L_1)));
		return L_2;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::Add(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_Add_m9FC794FA982A8598BC1FA0DB46EFAA7507CB861D (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// if (FilterSize == 0)
		int32_t L_0;
		L_0 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// mLastGoodHeading = velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___velocity0;
		__this->___mLastGoodHeading_7 = L_1;
		// return;
		return;
	}

IL_0010:
	{
		// float weight = velocity.magnitude;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___velocity0), NULL);
		V_0 = L_2;
		// if (weight > UnityVectorExtensions.Epsilon)
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(9.99999975E-05f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// Item item = new Item();
		il2cpp_codegen_initobj((&V_1), sizeof(Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2));
		// item.velocity = velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___velocity0;
		(&V_1)->___velocity_0 = L_4;
		// item.weight = weight;
		float L_5 = V_0;
		(&V_1)->___weight_1 = L_5;
		// item.time = CinemachineCore.CurrentTime;
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_6;
		L_6 = CinemachineCore_get_CurrentTime_mE95A89B5053FB5D86EB1E2D855CDC9E4D4CC5459(NULL);
		(&V_1)->___time_2 = L_6;
		// if (mCount == FilterSize)
		int32_t L_7 = __this->___mCount_3;
		int32_t L_8;
		L_8 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_005b;
		}
	}
	{
		// PopBottom();
		HeadingTracker_PopBottom_mCB0D0A7AE4238580CB7FFAAD17497F7B532B57AE(__this, NULL);
	}

IL_005b:
	{
		// ++mCount;
		int32_t L_9 = __this->___mCount_3;
		__this->___mCount_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// mHistory[mTop] = item;
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_10 = __this->___mHistory_0;
		int32_t L_11 = __this->___mTop_1;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_12 = V_1;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2)L_12);
		// if (++mTop == FilterSize)
		int32_t L_13 = __this->___mTop_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_2;
		__this->___mTop_1 = L_14;
		int32_t L_15 = V_2;
		int32_t L_16;
		L_16 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_009b;
		}
	}
	{
		// mTop = 0;
		__this->___mTop_1 = 0;
	}

IL_009b:
	{
		// mWeightSum *= Decay(item.time - mWeightTime);
		float L_17 = __this->___mWeightSum_5;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_18 = V_1;
		float L_19 = L_18.___time_2;
		float L_20 = __this->___mWeightTime_6;
		float L_21;
		L_21 = HeadingTracker_Decay_m66C3EA4E1471E7B820E2A15BF950BF959865655A(((float)il2cpp_codegen_subtract(L_19, L_20)), NULL);
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_multiply(L_17, L_21));
		// mWeightTime = item.time;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_22 = V_1;
		float L_23 = L_22.___time_2;
		__this->___mWeightTime_6 = L_23;
		// mWeightSum += weight;
		float L_24 = __this->___mWeightSum_5;
		float L_25 = V_0;
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_add(L_24, L_25));
		// mHeadingSum += item.velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___mHeadingSum_4;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27.___velocity_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_26, L_28, NULL);
		__this->___mHeadingSum_4 = L_29;
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::PopBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_PopBottom_mCB0D0A7AE4238580CB7FFAAD17497F7B532B57AE (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	{
		// if (mCount > 0)
		int32_t L_0 = __this->___mCount_3;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ab;
		}
	}
	{
		// float time = CinemachineCore.CurrentTime;
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = CinemachineCore_get_CurrentTime_mE95A89B5053FB5D86EB1E2D855CDC9E4D4CC5459(NULL);
		// Item item = mHistory[mBottom];
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_2 = __this->___mHistory_0;
		int32_t L_3 = __this->___mBottom_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		// if (++mBottom == FilterSize)
		int32_t L_6 = __this->___mBottom_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_2;
		__this->___mBottom_2 = L_7;
		int32_t L_8 = V_2;
		int32_t L_9;
		L_9 = HeadingTracker_get_FilterSize_mEF06A6674D9D5FE8F1802922DECACF11BA7BE151(__this, NULL);
		G_B2_0 = L_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			G_B3_0 = L_1;
			goto IL_0043;
		}
	}
	{
		// mBottom = 0;
		__this->___mBottom_2 = 0;
		G_B3_0 = G_B2_0;
	}

IL_0043:
	{
		// --mCount;
		int32_t L_10 = __this->___mCount_3;
		__this->___mCount_3 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		// float decay = Decay(time - item.time);
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_11 = V_0;
		float L_12 = L_11.___time_2;
		float L_13;
		L_13 = HeadingTracker_Decay_m66C3EA4E1471E7B820E2A15BF950BF959865655A(((float)il2cpp_codegen_subtract(G_B3_0, L_12)), NULL);
		V_1 = L_13;
		// mWeightSum -= item.weight * decay;
		float L_14 = __this->___mWeightSum_5;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_15 = V_0;
		float L_16 = L_15.___weight_1;
		float L_17 = V_1;
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_subtract(L_14, ((float)il2cpp_codegen_multiply(L_16, L_17))));
		// mHeadingSum -= item.velocity * decay;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___mHeadingSum_4;
		Item_t1EFD7CEF70AEEEEF881CD805A70A3B224E68BAC2 L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19.___velocity_0;
		float L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_18, L_22, NULL);
		__this->___mHeadingSum_4 = L_23;
		// if (mWeightSum <= UnityVectorExtensions.Epsilon || mCount == 0)
		float L_24 = __this->___mWeightSum_5;
		if ((((float)L_24) <= ((float)(9.99999975E-05f))))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_25 = __this->___mCount_3;
		if (L_25)
		{
			goto IL_00ab;
		}
	}

IL_00a5:
	{
		// ClearHistory();
		HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5(__this, NULL);
	}

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.HeadingTracker::DecayHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeadingTracker_DecayHistory_m9E2B8A0731C6C492AE78B36925860F4A3EFA1BB7 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float time = CinemachineCore.CurrentTime;
		il2cpp_codegen_runtime_class_init_inline(CinemachineCore_tDF9B8A03802F28C49A554F76418E61DFC12AC0FD_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CinemachineCore_get_CurrentTime_mE95A89B5053FB5D86EB1E2D855CDC9E4D4CC5459(NULL);
		V_0 = L_0;
		// float decay = Decay(time - mWeightTime);
		float L_1 = V_0;
		float L_2 = __this->___mWeightTime_6;
		float L_3;
		L_3 = HeadingTracker_Decay_m66C3EA4E1471E7B820E2A15BF950BF959865655A(((float)il2cpp_codegen_subtract(L_1, L_2)), NULL);
		V_1 = L_3;
		// mWeightSum *= decay;
		float L_4 = __this->___mWeightSum_5;
		float L_5 = V_1;
		__this->___mWeightSum_5 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// mWeightTime = time;
		float L_6 = V_0;
		__this->___mWeightTime_6 = L_6;
		// if (mWeightSum < UnityVectorExtensions.Epsilon)
		float L_7 = __this->___mWeightSum_5;
		if ((!(((float)L_7) < ((float)(9.99999975E-05f)))))
		{
			goto IL_003d;
		}
	}
	{
		// ClearHistory();
		HeadingTracker_ClearHistory_m220EDE26052383AFAD5F74F885541BF3797352A5(__this, NULL);
		return;
	}

IL_003d:
	{
		// mHeadingSum = mHeadingSum * decay;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___mHeadingSum_4;
		float L_9 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		__this->___mHeadingSum_4 = L_10;
		// }
		return;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.HeadingTracker::GetReliableHeading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HeadingTracker_GetReliableHeading_m3277A5C1F94F1269E38655527EB71AACF594F695 (HeadingTracker_tAB917CE7B50C972CE3BD85A6086AE8FE2BF931FA* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (mWeightSum > UnityVectorExtensions.Epsilon
		//     && (mCount == mHistory.Length || mLastGoodHeading.AlmostZero()))
		float L_0 = __this->___mWeightSum_5;
		if ((!(((float)L_0) > ((float)(9.99999975E-05f)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_1 = __this->___mCount_3;
		ItemU5BU5D_t60EF694EBD97EE6EE5145043113A4E06D1DCAC47* L_2 = __this->___mHistory_0;
		NullCheck(L_2);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_002a;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___mLastGoodHeading_7;
		bool L_4;
		L_4 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_3, NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}

IL_002a:
	{
		// Vector3  h = mHeadingSum / mWeightSum;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___mHeadingSum_4;
		float L_6 = __this->___mWeightSum_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// if (!h.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_0;
		bool L_9;
		L_9 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_8, NULL);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		// mLastGoodHeading = h.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		__this->___mLastGoodHeading_7 = L_10;
	}

IL_0051:
	{
		// return mLastGoodHeading;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___mLastGoodHeading_7;
		return L_11;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::Bezier3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineHelpers_Bezier3_m935102CE5B6C97AD8712C946E3D8C0CB83FBB724 (float ___t0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p23, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p34, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t0 = L_1;
		// float d = 1f - t;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return d * d * d * p0 + 3f * d * d * t * p1
		//     + 3f * d * t * t * p2 + t * t * t * p3;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6, NULL);
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_8)), L_9)), L_10)), L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_12, NULL);
		float L_14 = V_0;
		float L_15 = ___t0;
		float L_16 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___p23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_14)), L_15)), L_16)), L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_13, L_18, NULL);
		float L_20 = ___t0;
		float L_21 = ___t0;
		float L_22 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___p34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_20, L_21)), L_22)), L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_19, L_24, NULL);
		return L_25;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.SplineHelpers::BezierTangent3(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineHelpers_BezierTangent3_m72E63A4B34652A914979345566179CBC3719FB62 (float ___t0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p12, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p23, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p34, const RuntimeMethod* method) 
{
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t0 = L_1;
		// return (-3f * p0 + 9f * p1 - 9f * p2 + 3f * p3) * (t * t)
		//     +  (6f * p0 - 12f * p1 + 6f * p2) * t
		//     -  3f * p0 + 3f * p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((-3.0f), L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((9.0f), L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_3, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___p23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((9.0f), L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___p34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((3.0f), L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_11, NULL);
		float L_13 = ___t0;
		float L_14 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((6.0f), L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((12.0f), L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_17, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___p23;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((6.0f), L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_22, NULL);
		float L_24 = ___t0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_15, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___p01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((3.0f), L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_26, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___p12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline((3.0f), L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_29, L_31, NULL);
		return L_32;
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::Bezier1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_Bezier1_m246A08965553DC26A27A1F63929FC22FA93D7561 (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t0 = L_1;
		// float d = 1f - t;
		float L_2 = ___t0;
		V_0 = ((float)il2cpp_codegen_subtract((1.0f), L_2));
		// return d * d * d * p0 + 3f * d * d * t * p1
		//     + 3f * d * t * t * p2 + t * t * t * p3;
		float L_3 = V_0;
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6 = ___p01;
		float L_7 = V_0;
		float L_8 = V_0;
		float L_9 = ___t0;
		float L_10 = ___p12;
		float L_11 = V_0;
		float L_12 = ___t0;
		float L_13 = ___t0;
		float L_14 = ___p23;
		float L_15 = ___t0;
		float L_16 = ___t0;
		float L_17 = ___t0;
		float L_18 = ___p34;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5)), L_6)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_7)), L_8)), L_9)), L_10)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_11)), L_12)), L_13)), L_14)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, L_16)), L_17)), L_18))));
	}
}
// System.Single Cinemachine.Utility.SplineHelpers::BezierTangent1(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineHelpers_BezierTangent1_mFEDEF82B9449F9CD6D69E9CB93B5F3A28B28E053 (float ___t0, float ___p01, float ___p12, float ___p23, float ___p34, const RuntimeMethod* method) 
{
	{
		// t = Mathf.Clamp01(t);
		float L_0 = ___t0;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t0 = L_1;
		// return (-3f * p0 + 9f * p1 - 9f * p2 + 3f * p3) * t * t
		//     +  (6f * p0 - 12f * p1 + 6f * p2) * t
		//     -  3f * p0 + 3f * p1;
		float L_2 = ___p01;
		float L_3 = ___p12;
		float L_4 = ___p23;
		float L_5 = ___p34;
		float L_6 = ___t0;
		float L_7 = ___t0;
		float L_8 = ___p01;
		float L_9 = ___p12;
		float L_10 = ___p23;
		float L_11 = ___t0;
		float L_12 = ___p01;
		float L_13 = ___p12;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-3.0f), L_2)), ((float)il2cpp_codegen_multiply((9.0f), L_3)))), ((float)il2cpp_codegen_multiply((9.0f), L_4)))), ((float)il2cpp_codegen_multiply((3.0f), L_5)))), L_6)), L_7)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((6.0f), L_8)), ((float)il2cpp_codegen_multiply((12.0f), L_9)))), ((float)il2cpp_codegen_multiply((6.0f), L_10)))), L_11)))), ((float)il2cpp_codegen_multiply((3.0f), L_12)))), ((float)il2cpp_codegen_multiply((3.0f), L_13))));
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPoints(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPoints_m6D9485358028E3E22A2C17DF2DEFFAF3C02553C2 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___knot0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl11, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_4 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// int numPoints = knot.Length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_0 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// if (numPoints <= 2)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		// if (numPoints == 2)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		// ctrl1[0] = Vector4.Lerp(knot[0], knot[1], 0.33333f);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_4 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_6 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_6);
		NullCheck(L_7);
		int32_t L_8 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_10 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_11 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_10);
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14;
		L_14 = Vector4_Lerp_m6503F684342826D70038B2D13DEE7BD56EC1C88C_inline(L_9, L_13, (0.333330005f), NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_14);
		// ctrl2[0] = Vector4.Lerp(knot[0], knot[1], 0.66666f);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_15 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_16 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_15);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_17 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_17);
		NullCheck(L_18);
		int32_t L_19 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_21 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_22 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_21);
		NullCheck(L_22);
		int32_t L_23 = 1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Vector4_Lerp_m6503F684342826D70038B2D13DEE7BD56EC1C88C_inline(L_20, L_24, (0.666660011f), NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_25);
		return;
	}

IL_0052:
	{
		// else if (numPoints == 1)
		int32_t L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		// ctrl1[0] = ctrl2[0] = knot[0];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_27 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_28 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_27);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_29 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_30 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_29);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_31 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_32 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_31);
		NullCheck(L_32);
		int32_t L_33 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35 = L_34;
		V_5 = L_35;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_35);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36 = V_5;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_36);
	}

IL_0073:
	{
		// return;
		return;
	}

IL_0074:
	{
		// var a = new float[numPoints];
		int32_t L_37 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_37);
		V_1 = L_38;
		// var b = new float[numPoints];
		int32_t L_39 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_39);
		V_2 = L_40;
		// var c = new float[numPoints];
		int32_t L_41 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_42 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_41);
		V_3 = L_42;
		// var r = new float[numPoints];
		int32_t L_43 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_43);
		V_4 = L_44;
		// for (int axis = 0; axis < 4; ++axis)
		V_6 = 0;
		goto IL_02c9;
	}

IL_0099:
	{
		// int n = numPoints - 1;
		int32_t L_45 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_subtract(L_45, 1));
		// a[0] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.0f));
		// b[0] = 2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = V_2;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(2.0f));
		// c[0] = 1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = V_3;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		// r[0] = knot[0][axis] + 2 * knot[1][axis];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_4;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_50 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_51 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_50);
		NullCheck(L_51);
		int32_t L_52 = V_6;
		float L_53;
		L_53 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), L_52, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_54 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_55 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_54);
		NullCheck(L_55);
		int32_t L_56 = V_6;
		float L_57;
		L_57 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), L_56, NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_add(L_53, ((float)il2cpp_codegen_multiply((2.0f), L_57)))));
		// for (int i = 1; i < n - 1; ++i)
		V_8 = 1;
		goto IL_0139;
	}

IL_00e4:
	{
		// a[i] = 1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = V_1;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (float)(1.0f));
		// b[i] = 4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = V_2;
		int32_t L_61 = V_8;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (float)(4.0f));
		// c[i] = 1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_62 = V_3;
		int32_t L_63 = V_8;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (float)(1.0f));
		// r[i] = 4 * knot[i][axis] + 2 * knot[i+1][axis];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_64 = V_4;
		int32_t L_65 = V_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_66 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_67 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_66);
		int32_t L_68 = V_8;
		NullCheck(L_67);
		int32_t L_69 = V_6;
		float L_70;
		L_70 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68))), L_69, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_71 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_72 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_71);
		int32_t L_73 = V_8;
		NullCheck(L_72);
		int32_t L_74 = V_6;
		float L_75;
		L_75 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_72)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_73, 1))))), L_74, NULL);
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((4.0f), L_70)), ((float)il2cpp_codegen_multiply((2.0f), L_75)))));
		// for (int i = 1; i < n - 1; ++i)
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0139:
	{
		// for (int i = 1; i < n - 1; ++i)
		int32_t L_77 = V_8;
		int32_t L_78 = V_7;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_78, 1)))))
		{
			goto IL_00e4;
		}
	}
	{
		// a[n - 1] = 2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_79 = V_1;
		int32_t L_80 = V_7;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_80, 1))), (float)(2.0f));
		// b[n - 1] = 7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_81 = V_2;
		int32_t L_82 = V_7;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_82, 1))), (float)(7.0f));
		// c[n - 1] = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_83 = V_3;
		int32_t L_84 = V_7;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_84, 1))), (float)(0.0f));
		// r[n - 1] = 8 * knot[n - 1][axis] + knot[n][axis];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_4;
		int32_t L_86 = V_7;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_87 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_88 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_87);
		int32_t L_89 = V_7;
		NullCheck(L_88);
		int32_t L_90 = V_6;
		float L_91;
		L_91 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_88)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_89, 1))))), L_90, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_92 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_93 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_92);
		int32_t L_94 = V_7;
		NullCheck(L_93);
		int32_t L_95 = V_6;
		float L_96;
		L_96 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_93)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_94))), L_95, NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_86, 1))), (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((8.0f), L_91)), L_96)));
		// for (int i = 1; i < n; ++i)
		V_9 = 1;
		goto IL_01d1;
	}

IL_0197:
	{
		// float m = a[i] / b[i-1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97 = V_1;
		int32_t L_98 = V_9;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		float L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_101 = V_2;
		int32_t L_102 = V_9;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		float L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		V_10 = ((float)(L_100/L_104));
		// b[i] = b[i] - m * c[i-1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_105 = V_2;
		int32_t L_106 = V_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_107 = V_2;
		int32_t L_108 = V_9;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		float L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		float L_111 = V_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_112 = V_3;
		int32_t L_113 = V_9;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_subtract(L_113, 1));
		float L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (float)((float)il2cpp_codegen_subtract(L_110, ((float)il2cpp_codegen_multiply(L_111, L_115)))));
		// r[i] = r[i] - m * r[i-1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_116 = V_4;
		int32_t L_117 = V_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_118 = V_4;
		int32_t L_119 = V_9;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		float L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		float L_122 = V_10;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = V_4;
		int32_t L_124 = V_9;
		NullCheck(L_123);
		int32_t L_125 = ((int32_t)il2cpp_codegen_subtract(L_124, 1));
		float L_126 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(L_117), (float)((float)il2cpp_codegen_subtract(L_121, ((float)il2cpp_codegen_multiply(L_122, L_126)))));
		// for (int i = 1; i < n; ++i)
		int32_t L_127 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_01d1:
	{
		// for (int i = 1; i < n; ++i)
		int32_t L_128 = V_9;
		int32_t L_129 = V_7;
		if ((((int32_t)L_128) < ((int32_t)L_129)))
		{
			goto IL_0197;
		}
	}
	{
		// ctrl1[n-1][axis] = r[n-1] / b[n-1];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_130 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_131 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_130);
		int32_t L_132 = V_7;
		NullCheck(L_131);
		int32_t L_133 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_134 = V_4;
		int32_t L_135 = V_7;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_subtract(L_135, 1));
		float L_137 = (L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = V_2;
		int32_t L_139 = V_7;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_subtract(L_139, 1));
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_132, 1))))), L_133, ((float)(L_137/L_141)), NULL);
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_142 = V_7;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_142, 2));
		goto IL_0237;
	}

IL_01ff:
	{
		// ctrl1[i][axis] = (r[i] - c[i] * ctrl1[i + 1][axis]) / b[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_143 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_144 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_143);
		int32_t L_145 = V_11;
		NullCheck(L_144);
		int32_t L_146 = V_6;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_147 = V_4;
		int32_t L_148 = V_11;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		float L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_151 = V_3;
		int32_t L_152 = V_11;
		NullCheck(L_151);
		int32_t L_153 = L_152;
		float L_154 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_155 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_156 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_155);
		int32_t L_157 = V_11;
		NullCheck(L_156);
		int32_t L_158 = V_6;
		float L_159;
		L_159 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_156)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_157, 1))))), L_158, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_160 = V_2;
		int32_t L_161 = V_11;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		float L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_145))), L_146, ((float)(((float)il2cpp_codegen_subtract(L_150, ((float)il2cpp_codegen_multiply(L_154, L_159))))/L_163)), NULL);
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_164 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract(L_164, 1));
	}

IL_0237:
	{
		// for (int i = n - 2; i >= 0; --i)
		int32_t L_165 = V_11;
		if ((((int32_t)L_165) >= ((int32_t)0)))
		{
			goto IL_01ff;
		}
	}
	{
		// for (int i = 0; i < n; i++)
		V_12 = 0;
		goto IL_0282;
	}

IL_0241:
	{
		// ctrl2[i][axis] = 2 * knot[i + 1][axis] - ctrl1[i + 1][axis];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_166 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_167 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_166);
		int32_t L_168 = V_12;
		NullCheck(L_167);
		int32_t L_169 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_170 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_171 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_170);
		int32_t L_172 = V_12;
		NullCheck(L_171);
		int32_t L_173 = V_6;
		float L_174;
		L_174 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_171)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_172, 1))))), L_173, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_175 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_176 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_175);
		int32_t L_177 = V_12;
		NullCheck(L_176);
		int32_t L_178 = V_6;
		float L_179;
		L_179 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_176)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_177, 1))))), L_178, NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_167)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_168))), L_169, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_174)), L_179)), NULL);
		// for (int i = 0; i < n; i++)
		int32_t L_180 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_180, 1));
	}

IL_0282:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_181 = V_12;
		int32_t L_182 = V_7;
		if ((((int32_t)L_181) < ((int32_t)L_182)))
		{
			goto IL_0241;
		}
	}
	{
		// ctrl2[n - 1][axis] = 0.5f * (knot[n][axis] + ctrl1[n - 1][axis]);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_183 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_184 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_183);
		int32_t L_185 = V_7;
		NullCheck(L_184);
		int32_t L_186 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_187 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_188 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_187);
		int32_t L_189 = V_7;
		NullCheck(L_188);
		int32_t L_190 = V_6;
		float L_191;
		L_191 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_188)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_189))), L_190, NULL);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_192 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_193 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_192);
		int32_t L_194 = V_7;
		NullCheck(L_193);
		int32_t L_195 = V_6;
		float L_196;
		L_196 = Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline(((L_193)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_194, 1))))), L_195, NULL);
		Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline(((L_184)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_185, 1))))), L_186, ((float)il2cpp_codegen_multiply((0.5f), ((float)il2cpp_codegen_add(L_191, L_196)))), NULL);
		// for (int axis = 0; axis < 4; ++axis)
		int32_t L_197 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_197, 1));
	}

IL_02c9:
	{
		// for (int axis = 0; axis < 4; ++axis)
		int32_t L_198 = V_6;
		if ((((int32_t)L_198) < ((int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Cinemachine.Utility.SplineHelpers::ComputeSmoothControlPointsLooped(UnityEngine.Vector4[]&,UnityEngine.Vector4[]&,UnityEngine.Vector4[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineHelpers_ComputeSmoothControlPointsLooped_m3CAA020B6DAF02B0E35C3E36835DC8EE0FF80B51 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___knot0, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl11, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** ___ctrl22, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_2 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_3 = NULL;
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* V_4 = NULL;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		// int numPoints = knot.Length;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_0 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// if (numPoints < 2)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)2)))
		{
			goto IL_002b;
		}
	}
	{
		// if (numPoints == 1)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		// ctrl1[0] = ctrl2[0] = knot[0];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_4 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_5 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_4);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_6 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_7 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_6);
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_8 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_9 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_8);
		NullCheck(L_9);
		int32_t L_10 = 0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = L_11;
		V_5 = L_12;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_12);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_5;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_13);
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// int margin = Mathf.Min(4, numPoints-1);
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline(4, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), NULL);
		V_1 = L_15;
		// Vector4[] knotLooped = new Vector4[numPoints + 2 * margin];
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_18 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_16, ((int32_t)il2cpp_codegen_multiply(2, L_17)))));
		V_2 = L_18;
		// Vector4[] ctrl1Looped = new Vector4[numPoints + 2 * margin];
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_21 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_19, ((int32_t)il2cpp_codegen_multiply(2, L_20)))));
		V_3 = L_21;
		// Vector4[] ctrl2Looped = new Vector4[numPoints + 2 * margin];
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_24 = (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*)SZArrayNew(Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_22, ((int32_t)il2cpp_codegen_multiply(2, L_23)))));
		V_4 = L_24;
		// for (int i = 0; i < margin; ++i)
		V_6 = 0;
		goto IL_008c;
	}

IL_005c:
	{
		// knotLooped[i] = knot[numPoints-(margin-i)];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_25 = V_2;
		int32_t L_26 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_27 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_28 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_27);
		int32_t L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = V_6;
		NullCheck(L_28);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract(L_29, ((int32_t)il2cpp_codegen_subtract(L_30, L_31))));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_33 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_33);
		// knotLooped[numPoints+margin+i] = knot[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_34 = V_2;
		int32_t L_35 = V_0;
		int32_t L_36 = V_1;
		int32_t L_37 = V_6;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_38 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_39 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_38);
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_35, L_36)), L_37))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_42);
		// for (int i = 0; i < margin; ++i)
		int32_t L_43 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_008c:
	{
		// for (int i = 0; i < margin; ++i)
		int32_t L_44 = V_6;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_005c;
		}
	}
	{
		// for (int i = 0; i < numPoints; ++i)
		V_7 = 0;
		goto IL_00af;
	}

IL_0096:
	{
		// knotLooped[i + margin] = knot[i];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_46 = V_2;
		int32_t L_47 = V_7;
		int32_t L_48 = V_1;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_49 = ___knot0;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_50 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_49);
		int32_t L_51 = V_7;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, L_48))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_53);
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_54 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00af:
	{
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_55 = V_7;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0096;
		}
	}
	{
		// ComputeSmoothControlPoints(ref knotLooped, ref ctrl1Looped, ref ctrl2Looped);
		SplineHelpers_ComputeSmoothControlPoints_m6D9485358028E3E22A2C17DF2DEFFAF3C02553C2((&V_2), (&V_3), (&V_4), NULL);
		// for (int i = 0; i < numPoints; ++i)
		V_8 = 0;
		goto IL_00f1;
	}

IL_00c4:
	{
		// ctrl1[i] = ctrl1Looped[i + margin];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_57 = ___ctrl11;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_58 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_57);
		int32_t L_59 = V_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_60 = V_3;
		int32_t L_61 = V_8;
		int32_t L_62 = V_1;
		NullCheck(L_60);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_64 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_64);
		// ctrl2[i] = ctrl2Looped[i + margin];
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD** L_65 = ___ctrl22;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_66 = *((Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD**)L_65);
		int32_t L_67 = V_8;
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_68 = V_4;
		int32_t L_69 = V_8;
		int32_t L_70 = V_1;
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)il2cpp_codegen_add(L_69, L_70));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_72);
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_73 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00f1:
	{
		// for (int i = 0; i < numPoints; ++i)
		int32_t L_74 = V_8;
		int32_t L_75 = V_0;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00c4;
		}
	}
	{
		// }
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
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsNaN(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsNaN_m7D80634831EFB70EAA220F8BC40AED2DA1AACD1F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	{
		// return float.IsNaN(v.x) || float.IsNaN(v.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		bool L_2;
		L_2 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v0;
		float L_4 = L_3.___y_1;
		bool L_5;
		L_5 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		return (bool)1;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsNaN(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsNaN_mFD2329D414446624BFC5A378316DA3C37DB46B6F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return float.IsNaN(v.x) || float.IsNaN(v.y) || float.IsNaN(v.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		bool L_2;
		L_2 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_1, NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___v0;
		float L_4 = L_3.___y_3;
		bool L_5;
		L_5 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0026;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___v0;
		float L_7 = L_6.___z_4;
		bool L_8;
		L_8 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_7, NULL);
		return L_8;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_m61531154C237946B52BAA9A92209350D56870B0E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s01, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s12, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector3 s = s1 - s0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___s12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___s01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// float len2 = Vector3.SqrMagnitude(s);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		float L_4;
		L_4 = Vector3_SqrMagnitude_m04883F317B0C35E16E87523EBDFD346551290968_inline(L_3, NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(9.99999975E-05f)))))
		{
			goto IL_001d;
		}
	}
	{
		// return 0; // degenrate segment
		return (0.0f);
	}

IL_001d:
	{
		// return Mathf.Clamp01(Vector3.Dot(p - s0, s) / len2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___p0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___s01;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10;
		L_10 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_8, L_9, NULL);
		float L_11 = V_1;
		float L_12;
		L_12 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_10/L_11)), NULL);
		return L_12;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::ClosestPointOnSegment(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_ClosestPointOnSegment_mA7F89705FAF6FECD7E45FDD22C88F8F236010955 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s01, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s12, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// Vector2 s = s1 - s0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___s12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___s01;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// float len2 = Vector2.SqrMagnitude(s);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4;
		L_4 = Vector2_SqrMagnitude_m9020166A171C031DA7B163D3261C09EB7090F0AF_inline(L_3, NULL);
		V_1 = L_4;
		// if (len2 < Epsilon)
		float L_5 = V_1;
		if ((!(((float)L_5) < ((float)(9.99999975E-05f)))))
		{
			goto IL_001d;
		}
	}
	{
		// return 0; // degenrate segment
		return (0.0f);
	}

IL_001d:
	{
		// return Mathf.Clamp01(Vector2.Dot(p - s0, s) / len2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___p0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___s01;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_6, L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10;
		L_10 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_8, L_9, NULL);
		float L_11 = V_1;
		float L_12;
		L_12 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(((float)(L_10/L_11)), NULL);
		return L_12;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::ProjectOntoPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___planeNormal1, const RuntimeMethod* method) 
{
	{
		// return (vector - Vector3.Dot(vector, planeNormal) * planeNormal);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___planeNormal1;
		float L_3;
		L_3 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___planeNormal1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityVectorExtensions::SquareNormalize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityVectorExtensions_SquareNormalize_m6200661A3E987197C3C7AEAC3516E96F6D11F63E (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// var d = Mathf.Max(Mathf.Abs(v.x), Mathf.Abs(v.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v0;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = fabsf(L_4);
		float L_6;
		L_6 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// return d < Epsilon ? Vector2.zero : v / d;
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(9.99999975E-05f))))
		{
			goto IL_002c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___v0;
		float L_9 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_8, L_9, NULL);
		return L_10;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_11;
	}
}
// System.Int32 Cinemachine.Utility.UnityVectorExtensions::FindIntersection(UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityVectorExtensions_FindIntersection_m2FBBF63C229F43CEBB7C8064784C3C481BEF3DFD (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___p10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___p21, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___q12, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___q23, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___intersection4, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var p = p2 - p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_1, L_3, NULL);
		V_0 = L_4;
		// var q = q2 - q1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// var pq = q1 - p1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_11, L_13, NULL);
		V_2 = L_14;
		// var pXq = p.Cross(q);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_1;
		float L_17;
		L_17 = UnityVectorExtensions_Cross_mF6C7F58D98C3F8A51FFAB0EF9E4CD77DB2BBBD39(L_15, L_16, NULL);
		V_3 = L_17;
		// if (Mathf.Abs(pXq) < 0.00001f)
		float L_18 = V_3;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) < ((float)(9.99999975E-06f)))))
		{
			goto IL_01b9;
		}
	}
	{
		// intersection = Vector2.positiveInfinity;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_get_positiveInfinity_m03B87ABC38ACBE2160599734C319DD1BA1064B5F_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_20 = L_21;
		// if (Mathf.Abs(pq.Cross(p)) < 0.00001f)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		float L_24;
		L_24 = UnityVectorExtensions_Cross_mF6C7F58D98C3F8A51FFAB0EF9E4CD77DB2BBBD39(L_22, L_23, NULL);
		float L_25;
		L_25 = fabsf(L_24);
		if ((!(((float)L_25) < ((float)(9.99999975E-06f)))))
		{
			goto IL_01b7;
		}
	}
	{
		// var dotPQ = Vector2.Dot(q, p);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_0;
		float L_28;
		L_28 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_26, L_27, NULL);
		V_6 = L_28;
		// if (dotPQ > 0 && (p1 - q2).sqrMagnitude < 0.001f)
		float L_29 = V_6;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_00b2;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_32);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_31, L_33, NULL);
		V_8 = L_34;
		float L_35;
		L_35 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_35) < ((float)(0.00100000005f)))))
		{
			goto IL_00b2;
		}
	}
	{
		// intersection = q2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_37);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_36 = L_38;
		// return 4;
		return 4;
	}

IL_00b2:
	{
		// if (dotPQ < 0 && (p2 - q2).sqrMagnitude < 0.001f)
		float L_39 = V_6;
		if ((!(((float)L_39) < ((float)(0.0f)))))
		{
			goto IL_00eb;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = ___q23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_41, L_43, NULL);
		V_8 = L_44;
		float L_45;
		L_45 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_45) < ((float)(0.00100000005f)))))
		{
			goto IL_00eb;
		}
	}
	{
		// intersection = p2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_46 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_47 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_47);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_46 = L_48;
		// return 4;
		return 4;
	}

IL_00eb:
	{
		// var dot = Vector2.Dot(pq, p);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = V_0;
		float L_51;
		L_51 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_49, L_50, NULL);
		V_7 = L_51;
		// if (0 <= dot && dot <= Vector2.Dot(p, p))
		float L_52 = V_7;
		if ((!(((float)(0.0f)) <= ((float)L_52))))
		{
			goto IL_0186;
		}
	}
	{
		float L_53 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_0;
		float L_56;
		L_56 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_54, L_55, NULL);
		if ((!(((float)L_53) <= ((float)L_56))))
		{
			goto IL_0186;
		}
	}
	{
		// if (dot < 0.0001f)
		float L_57 = V_7;
		if ((!(((float)L_57) < ((float)(9.99999975E-05f)))))
		{
			goto IL_014d;
		}
	}
	{
		// if (dotPQ <= 0 && (p1 - q1).sqrMagnitude < 0.001f)
		float L_58 = V_6;
		if ((!(((float)L_58) <= ((float)(0.0f)))))
		{
			goto IL_0184;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_59 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_59);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_60, L_62, NULL);
		V_8 = L_63;
		float L_64;
		L_64 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_64) < ((float)(0.00100000005f)))))
		{
			goto IL_0184;
		}
	}
	{
		// intersection = p1; // p and q start at the same point and point away
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_65 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_66 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_66);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_65 = L_67;
		goto IL_0184;
	}

IL_014d:
	{
		// else if (dotPQ > 0 && (p2 - q1).sqrMagnitude < 0.001f)
		float L_68 = V_6;
		if ((!(((float)L_68) > ((float)(0.0f)))))
		{
			goto IL_0184;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_69);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_71 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_71);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_70, L_72, NULL);
		V_8 = L_73;
		float L_74;
		L_74 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_8), NULL);
		if ((!(((float)L_74) < ((float)(0.00100000005f)))))
		{
			goto IL_0184;
		}
	}
	{
		// intersection = p2; // p points at start of q
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_75 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_76 = ___p21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_76);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_75 = L_77;
	}

IL_0184:
	{
		// return 4;   // colinear segments touch
		return 4;
	}

IL_0186:
	{
		// dot = Vector2.Dot(p1 - q1, q);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_78 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_78);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_80 = ___q12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_80);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82;
		L_82 = Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline(L_79, L_81, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = V_1;
		float L_84;
		L_84 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_82, L_83, NULL);
		V_7 = L_84;
		// if (0 <= dot && dot <= Vector2.Dot(q, q))
		float L_85 = V_7;
		if ((!(((float)(0.0f)) <= ((float)L_85))))
		{
			goto IL_01b5;
		}
	}
	{
		float L_86 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88 = V_1;
		float L_89;
		L_89 = Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline(L_87, L_88, NULL);
		if ((!(((float)L_86) <= ((float)L_89))))
		{
			goto IL_01b5;
		}
	}
	{
		// return 4;   // colinear segments overlap
		return 4;
	}

IL_01b5:
	{
		// return 3;   // colinear segments don't touch
		return 3;
	}

IL_01b7:
	{
		// return 0; // the lines are parallel and not colinear
		return 0;
	}

IL_01b9:
	{
		// var t = pq.Cross(q) / pXq;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_90 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91 = V_1;
		float L_92;
		L_92 = UnityVectorExtensions_Cross_mF6C7F58D98C3F8A51FFAB0EF9E4CD77DB2BBBD39(L_90, L_91, NULL);
		float L_93 = V_3;
		V_4 = ((float)(L_92/L_93));
		// intersection = p1 + t * p;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_94 = ___intersection4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_95 = ___p10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_95);
		float L_97 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99;
		L_99 = Vector2_op_Multiply_mB3B310D2D0CAE78AFB2AE6A9FD2902DE4B359211_inline(L_97, L_98, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		L_100 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_96, L_99, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_94 = L_100;
		// var u = pq.Cross(p) / pXq;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_0;
		float L_103;
		L_103 = UnityVectorExtensions_Cross_mF6C7F58D98C3F8A51FFAB0EF9E4CD77DB2BBBD39(L_101, L_102, NULL);
		float L_104 = V_3;
		V_5 = ((float)(L_103/L_104));
		// if (0 <= t && t <= 1 && 0 <= u && u <= 1)
		float L_105 = V_4;
		if ((!(((float)(0.0f)) <= ((float)L_105))))
		{
			goto IL_020f;
		}
	}
	{
		float L_106 = V_4;
		if ((!(((float)L_106) <= ((float)(1.0f)))))
		{
			goto IL_020f;
		}
	}
	{
		float L_107 = V_5;
		if ((!(((float)(0.0f)) <= ((float)L_107))))
		{
			goto IL_020f;
		}
	}
	{
		float L_108 = V_5;
		if ((!(((float)L_108) <= ((float)(1.0f)))))
		{
			goto IL_020f;
		}
	}
	{
		// return 2;   // segments touch
		return 2;
	}

IL_020f:
	{
		// return 1;   // segments don't touch but lines intersect
		return 1;
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Cross(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Cross_mF6C7F58D98C3F8A51FFAB0EF9E4CD77DB2BBBD39 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v10, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v21, const RuntimeMethod* method) 
{
	{
		// private static float Cross(this Vector2 v1, Vector2 v2) { return (v1.x * v2.y) - (v1.y * v2.x); }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v10;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v21;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___v10;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___v21;
		float L_7 = L_6.___x_0;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityVectorExtensions_Abs_m4E617236E1CCFE843CA67854AC8E48AC22323BA9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	{
		// return new Vector2(Mathf.Abs(v.x), Mathf.Abs(v.y));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		float L_2;
		L_2 = fabsf(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___v0;
		float L_4 = L_3.___y_1;
		float L_5;
		L_5 = fabsf(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::Abs(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_Abs_mC5D24C3B25D65CE0B41D778567319DBB0BD0C1D0 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return new Vector3(Mathf.Abs(v.x), Mathf.Abs(v.y), Mathf.Abs(v.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		float L_2;
		L_2 = fabsf(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___v0;
		float L_4 = L_3.___y_3;
		float L_5;
		L_5 = fabsf(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___v0;
		float L_7 = L_6.___z_4;
		float L_8;
		L_8 = fabsf(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsUniform(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsUniform_m60E6BF69A0D7B561224DD99B3208090F396CAABE (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(v.x - v.y) < Epsilon;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		return (bool)((((float)L_4) < ((float)(9.99999975E-05f)))? 1 : 0);
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::IsUniform(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_IsUniform_mE448507F84485223FD26D1D1927F3D6679FE6899 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(v.x - v.y) < Epsilon && Math.Abs(v.x - v.z) < Epsilon;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		if ((!(((float)L_4) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0033;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___v0;
		float L_6 = L_5.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___v0;
		float L_8 = L_7.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		return (bool)((((float)L_9) < ((float)(9.99999975E-05f)))? 1 : 0);
	}

IL_0033:
	{
		return (bool)0;
	}
}
// System.Boolean Cinemachine.Utility.UnityVectorExtensions::AlmostZero(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	{
		// return v.sqrMagnitude < (Epsilon * Epsilon);
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___v0), NULL);
		return (bool)((((float)L_0) < ((float)(9.99999905E-09f)))? 1 : 0);
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_Angle_m531A3EF1C1C1F49B637BB83F3795128D571A2B93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v1.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&___v10), NULL);
		// v2.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&___v21), NULL);
		// return Mathf.Atan2((v1 - v2).magnitude, (v1 + v2).magnitude) * Mathf.Rad2Deg * 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_4, L_5, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		float L_8;
		L_8 = atan2f(L_3, L_7);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, (57.2957802f))), (2.0f)));
	}
}
// System.Single Cinemachine.Utility.UnityVectorExtensions::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityVectorExtensions_SignedAngle_mEC66BAD4357C0F5F7ADE082AD38AD1FE70649315 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angle = Angle(v1, v2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v21;
		float L_2;
		L_2 = UnityVectorExtensions_Angle_m531A3EF1C1C1F49B637BB83F3795128D571A2B93(L_0, L_1, NULL);
		V_0 = L_2;
		// if (Mathf.Sign(Vector3.Dot(up, Vector3.Cross(v1, v2))) < 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___up2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_4, L_5, NULL);
		float L_7;
		L_7 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_3, L_6, NULL);
		float L_8;
		L_8 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(L_7, NULL);
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// return -angle;
		float L_9 = V_0;
		return ((-L_9));
	}

IL_0024:
	{
		// return angle;
		float L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityVectorExtensions::SafeFromToRotation(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityVectorExtensions_SafeFromToRotation_mD10BFD5052B69EE3D1DE2FE9B74181BD797ACC03 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v10, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v21, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var axis = Vector3.Cross(v1, v2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___v21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (axis.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		bool L_4;
		L_4 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_3, NULL);
		if (!L_4)
		{
			goto IL_0012;
		}
	}
	{
		// axis = up; // in case they are pointing in opposite directions
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___up2;
		V_0 = L_5;
	}

IL_0012:
	{
		// return Quaternion.AngleAxis(Angle(v1, v2), axis);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___v10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___v21;
		float L_8;
		L_8 = UnityVectorExtensions_Angle_m531A3EF1C1C1F49B637BB83F3795128D571A2B93(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_8, L_9, NULL);
		return L_10;
	}
}
// UnityEngine.Vector3 Cinemachine.Utility.UnityVectorExtensions::SlerpWithReferenceUp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnityVectorExtensions_SlerpWithReferenceUp_m83DA374F7A9CB98FF5ECE51C91805F11F76E2372 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vA0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vB1, float ___t2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float dA = vA.magnitude;
		float L_0;
		L_0 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___vA0), NULL);
		V_0 = L_0;
		// float dB = vB.magnitude;
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&___vB1), NULL);
		V_1 = L_1;
		// if (dA < Epsilon || dB < Epsilon)
		float L_2 = V_0;
		if ((((float)L_2) < ((float)(9.99999975E-05f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_3 = V_1;
		if ((!(((float)L_3) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0029;
		}
	}

IL_0020:
	{
		// return Vector3.Lerp(vA, vB, t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vA0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vB1;
		float L_6 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}

IL_0029:
	{
		// Vector3 dirA = vA / dA;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vA0;
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_8, L_9, NULL);
		// Vector3 dirB = vB / dB;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___vB1;
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_11, L_12, NULL);
		V_2 = L_13;
		// Quaternion qA = Quaternion.LookRotation(dirA, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_10, L_14, NULL);
		// Quaternion qB = Quaternion.LookRotation(dirB, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_16, L_17, NULL);
		V_3 = L_18;
		// Quaternion q = UnityQuaternionExtensions.SlerpWithReferenceUp(qA, qB, t, up);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = V_3;
		float L_20 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = UnityQuaternionExtensions_SlerpWithReferenceUp_m462C015C97FF4D2E7B7E83B6C1E4A29ED4DD1474(L_15, L_19, L_20, L_21, NULL);
		// Vector3 dir = q * Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_22, L_23, NULL);
		// return dir * Mathf.Lerp(dA, dB, t);
		float L_25 = V_0;
		float L_26 = V_1;
		float L_27 = ___t2;
		float L_28;
		L_28 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_25, L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_24, L_28, NULL);
		return L_29;
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
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::SlerpWithReferenceUp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_SlerpWithReferenceUp_m462C015C97FF4D2E7B7E83B6C1E4A29ED4DD1474 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qA0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___qB1, float ___t2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var dirA = (qA * Vector3.forward).ProjectOntoPlane(up);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___qA0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___up3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B(L_2, L_3, NULL);
		V_0 = L_4;
		// var dirB = (qB * Vector3.forward).ProjectOntoPlane(up);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___qB1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___up3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B(L_7, L_8, NULL);
		V_1 = L_9;
		// if (dirA.AlmostZero() || dirB.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		bool L_11;
		L_11 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_10, NULL);
		if (L_11)
		{
			goto IL_0034;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		bool L_13;
		L_13 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_12, NULL);
		if (!L_13)
		{
			goto IL_003d;
		}
	}

IL_0034:
	{
		// return Quaternion.Slerp(qA, qB, t);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___qA0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = ___qB1;
		float L_16 = ___t2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Slerp_m5FDA8C178E7EB209B43845F73263AFE9C02F3949(L_14, L_15, L_16, NULL);
		return L_17;
	}

IL_003d:
	{
		// var qBase = Quaternion.LookRotation(dirA, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___up3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_LookRotation_mE6859FEBE85BC0AE72A14159988151FF69BF4401(L_18, L_19, NULL);
		// var qBaseInv = Quaternion.Inverse(qBase);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_21, NULL);
		// Quaternion qA1 = qBaseInv * qA;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23 = L_22;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___qA0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_23, L_24, NULL);
		V_2 = L_25;
		// Quaternion qB1 = qBaseInv * qB;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___qB1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_23, L_26, NULL);
		V_3 = L_27;
		// var eA = qA1.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_2), NULL);
		V_4 = L_28;
		// var eB = qB1.eulerAngles;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		V_5 = L_29;
		// return qBase * Quaternion.Euler(
		//     Mathf.LerpAngle(eA.x, eB.x, t),
		//     Mathf.LerpAngle(eA.y, eB.y, t),
		//     Mathf.LerpAngle(eA.z, eB.z, t));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_4;
		float L_31 = L_30.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_5;
		float L_33 = L_32.___x_2;
		float L_34 = ___t2;
		float L_35;
		L_35 = Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline(L_31, L_33, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_4;
		float L_37 = L_36.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_5;
		float L_39 = L_38.___y_3;
		float L_40 = ___t2;
		float L_41;
		L_41 = Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline(L_37, L_39, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_4;
		float L_43 = L_42.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		float L_45 = L_44.___z_4;
		float L_46 = ___t2;
		float L_47;
		L_47 = Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline(L_43, L_45, L_46, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_35, L_41, L_47, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_21, L_48, NULL);
		return L_49;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::Normalized(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_Normalized_mECDA291E5D4B3D2D610FE74D89D7F2F7ED0B5E68 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector4 v = new Vector4(q.x, q.y, q.z, q.w).normalized;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___q0;
		float L_3 = L_2.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___q0;
		float L_5 = L_4.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___q0;
		float L_7 = L_6.___w_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline((&V_1), NULL);
		V_0 = L_9;
		// return new Quaternion(v.x, v.y, v.z, v.w);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = V_0;
		float L_11 = L_10.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = V_0;
		float L_13 = L_12.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = V_0;
		float L_15 = L_14.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = V_0;
		float L_17 = L_16.___w_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_18), L_11, L_13, L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// UnityEngine.Vector2 Cinemachine.Utility.UnityQuaternionExtensions::GetCameraRotationToTarget(UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnityQuaternionExtensions_GetCameraRotationToTarget_mDA1EF1466263B671B863D70DABBD50DF9785C2B7 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orient0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lookAtDir1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (lookAtDir.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lookAtDir1;
		bool L_1;
		L_1 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return Vector2.zero;  // degenerate
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_2;
	}

IL_000e:
	{
		// Quaternion toLocal = Quaternion.Inverse(orient);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___orient0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_3, NULL);
		// Vector3 up = toLocal * worldUp;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___worldUp2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_5, L_6, NULL);
		V_0 = L_7;
		// lookAtDir = toLocal * lookAtDir;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lookAtDir1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_5, L_8, NULL);
		___lookAtDir1 = L_9;
		// float angleH = 0;
		V_1 = (0.0f);
		// Vector3 targetDirH = lookAtDir.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___lookAtDir1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B(L_10, L_11, NULL);
		V_3 = L_12;
		// if (!targetDirH.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		bool L_14;
		L_14 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_13, NULL);
		if (L_14)
		{
			goto IL_0085;
		}
	}
	{
		// Vector3 currentDirH = Vector3.forward.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B(L_15, L_16, NULL);
		V_4 = L_17;
		// if (currentDirH.AlmostZero())
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_4;
		bool L_19;
		L_19 = UnityVectorExtensions_AlmostZero_mB3A4F32774344F1374F65D503CC29C569F5F7D24(L_18, NULL);
		if (!L_19)
		{
			goto IL_007b;
		}
	}
	{
		// if (Vector3.Dot(currentDirH, up) > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22;
		L_22 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_20, L_21, NULL);
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		// currentDirH = Vector3.down.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B(L_23, L_24, NULL);
		V_4 = L_25;
		goto IL_007b;
	}

IL_006e:
	{
		// currentDirH = Vector3.up.ProjectOntoPlane(up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = UnityVectorExtensions_ProjectOntoPlane_mBBA5D8DA7E6B626A800731A0FE6BADF7C4220D9B(L_26, L_27, NULL);
		V_4 = L_28;
	}

IL_007b:
	{
		// angleH = UnityVectorExtensions.SignedAngle(currentDirH, targetDirH, up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		float L_32;
		L_32 = UnityVectorExtensions_SignedAngle_mEC66BAD4357C0F5F7ADE082AD38AD1FE70649315(L_29, L_30, L_31, NULL);
		V_1 = L_32;
	}

IL_0085:
	{
		// Quaternion q = Quaternion.AngleAxis(angleH, up);
		float L_33 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_35;
		L_35 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_33, L_34, NULL);
		V_2 = L_35;
		// float angleV = UnityVectorExtensions.SignedAngle(
		//     q * Vector3.forward, lookAtDir, q * Vector3.right);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = ___lookAtDir1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_40, L_41, NULL);
		float L_43;
		L_43 = UnityVectorExtensions_SignedAngle_mEC66BAD4357C0F5F7ADE082AD38AD1FE70649315(L_38, L_39, L_42, NULL);
		// return new Vector2(angleV, angleH);
		float L_44 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_45), L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
// UnityEngine.Quaternion Cinemachine.Utility.UnityQuaternionExtensions::ApplyCameraRotation(UnityEngine.Quaternion,UnityEngine.Vector2,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnityQuaternionExtensions_ApplyCameraRotation_m75753B356C2E3BC79192192C8C2FC1F512643506 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orient0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rot1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion q = Quaternion.AngleAxis(rot.x, Vector3.right);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___rot1;
		float L_1 = L_0.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_1, L_2, NULL);
		V_0 = L_3;
		// return (Quaternion.AngleAxis(rot.y, worldUp) * orient) * q;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___rot1;
		float L_5 = L_4.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___worldUp2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8(L_5, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___orient0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_7, L_8, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_9, L_10, NULL);
		return L_11;
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
// UnityEngine.Rect Cinemachine.Utility.UnityRectExtensions::Inflated(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D UnityRectExtensions_Inflated_m11DB3C1DCB766C1D1D5F3CA244BC1F61B66D9568 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___r0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___delta1, const RuntimeMethod* method) 
{
	{
		// return new Rect(
		//     r.xMin - delta.x, r.yMin - delta.y,
		//     r.width + delta.x * 2, r.height + delta.y * 2);
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___delta1;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___delta1;
		float L_5 = L_4.___y_1;
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___delta1;
		float L_8 = L_7.___x_0;
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___r0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___delta1;
		float L_11 = L_10.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), ((float)il2cpp_codegen_subtract(L_0, L_2)), ((float)il2cpp_codegen_subtract(L_3, L_5)), ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_8, (2.0f))))), ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, (2.0f))))), /*hidden argument*/NULL);
		return L_12;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_m19EB5B5B0EDFE9C272BD7BCC6923C4A9D616F771_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TargetPositionCache_get_CacheMode_mDCBA178980BB6A8FEEC18CA1238F52FFDFC8B5A4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => m_CacheMode;
		int32_t L_0 = ((TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_StaticFields*)il2cpp_codegen_static_fields_for(TargetPositionCache_t8232F376771398F9FE91D8BE9D70FC5621F98F80_il2cpp_TypeInfo_var))->___m_CacheMode_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_m220B2ADBE9F87426BEEE291263560DFE78F835B5_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Normalize_m63D60A4A9F97145AF0C7E2A4C044EBF17EF7CBC3_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___q0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___q0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___q0;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = sqrtf(L_2);
		V_0 = L_3;
		float L_4 = V_0;
		float L_5 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		V_1 = (bool)((((float)L_4) < ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		V_2 = L_7;
		goto IL_004a;
	}

IL_0022:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___q0;
		float L_9 = L_8.___x_0;
		float L_10 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = ___q0;
		float L_12 = L_11.___y_1;
		float L_13 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___q0;
		float L_15 = L_14.___z_2;
		float L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = ___q0;
		float L_18 = L_17.___w_3;
		float L_19 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_20), ((float)(L_9/L_10)), ((float)(L_12/L_13)), ((float)(L_15/L_16)), ((float)(L_18/L_19)), /*hidden argument*/NULL);
		V_2 = L_20;
		goto IL_004a;
	}

IL_004a:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = V_2;
		return L_21;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m664419831773D5BBF06D9DE4E515F6409B2F92B8_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = ___value1;
		__this->___x_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = ___value1;
		__this->___y_3 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = ___value1;
		__this->___z_4 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_set_Item_m79136861DEC5862CE7EC20AB3B0EF10A3957CEC3_RuntimeMethod_var)));
	}

IL_003f:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Lerp_m6503F684342826D70038B2D13DEE7BD56EC1C88C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___a0;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___b1;
		float L_5 = L_4.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___x_1;
		float L_8 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = ___b1;
		float L_12 = L_11.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = ___a0;
		float L_14 = L_13.___y_2;
		float L_15 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16 = ___a0;
		float L_17 = L_16.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_18 = ___b1;
		float L_19 = L_18.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = ___a0;
		float L_21 = L_20.___z_3;
		float L_22 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_23 = ___a0;
		float L_24 = L_23.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25 = ___b1;
		float L_26 = L_25.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = ___a0;
		float L_28 = L_27.___w_4;
		float L_29 = ___t2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = __this->___x_1;
		V_2 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = __this->___y_2;
		V_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = __this->___z_3;
		V_2 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = __this->___w_4;
		V_2 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_get_Item_mB1D001A235857569E479FB799EF77C52391D19EF_RuntimeMethod_var)));
	}

IL_004c:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___index0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001d:
	{
		float L_3 = ___value1;
		__this->___x_1 = L_3;
		goto IL_004c;
	}

IL_0026:
	{
		float L_4 = ___value1;
		__this->___y_2 = L_4;
		goto IL_004c;
	}

IL_002f:
	{
		float L_5 = ___value1;
		__this->___z_3 = L_5;
		goto IL_004c;
	}

IL_0038:
	{
		float L_6 = ___value1;
		__this->___w_4 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB23C3717573626FB4C3C7DF5C19EDE7689837214)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector4_set_Item_mF24782F861A16BB0436C2262FA916B4EE69998A6_RuntimeMethod_var)));
	}

IL_004c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_mFEAD72DF4C4708B86BF464AB4F5F1468FAD8E784_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_SqrMagnitude_m04883F317B0C35E16E87523EBDFD346551290968_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SqrMagnitude_m9020166A171C031DA7B163D3261C09EB7090F0AF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mBF0FA0B529C821F4733DDC3AD366B07CD27625F4_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_positiveInfinity_m03B87ABC38ACBE2160599734C319DD1BA1064B5F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___positiveInfinityVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_mB3B310D2D0CAE78AFB2AE6A9FD2902DE4B359211_inline (float ___d0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a1;
		float L_1 = L_0.___x_0;
		float L_2 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a1;
		float L_4 = L_3.___y_1;
		float L_5 = ___d0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpAngle_m1ED3F488EFE973020124E59B6B6D439D9ACCFA42_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = ___a0;
		float L_7 = V_0;
		float L_8 = ___t2;
		float L_9;
		L_9 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_8, NULL);
		V_2 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_9))));
		goto IL_0030;
	}

IL_0030:
	{
		float L_10 = V_2;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_normalized_mD7671F6DCE4C1A80243139B87858FF65F4B865A3_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Vector4_Normalize_m8F4DF140B072B7EC3D03F05AC1EDFB270579A8D2_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m1ACDE7EF466FB6CCAD29B3866E4A239A8530E9D5_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_Normalize_m8F4DF140B072B7EC3D03F05AC1EDFB270579A8D2_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1;
		L_1 = Vector4_Magnitude_mCCDF8803AFB8B4B52D259376C9CD49F065FF0F42_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = V_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Magnitude_mCCDF8803AFB8B4B52D259376C9CD49F065FF0F42_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___a0;
		float L_2;
		L_2 = Vector4_Dot_m77027F378A20620C9F2AC80A06191C412B76FD2E_inline(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt(((double)L_2));
		V_0 = ((float)L_3);
		goto IL_0012;
	}

IL_0012:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Division_mBBF62E1EDEB882858589FCF7280591FD11CD660C_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), ((float)(L_10/L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_get_zero_m51B18794FAF141EBD06CA9907E6F7DF9D60F3515_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ((Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields*)il2cpp_codegen_static_fields_for(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector4_Dot_m77027F378A20620C9F2AC80A06191C412B76FD2E_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
