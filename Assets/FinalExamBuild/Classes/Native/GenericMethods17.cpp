#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30;
// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563;
// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B;
// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98;
// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B;
// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B;
// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74;
// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo>
struct Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t4F5FCDEAC3CEC5489B3CEE5871FC5F9D22C281EE;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<UnityEngine.Bounds>
struct List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.LayerMask>
struct List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523;
// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// UnityEngine.Bounds[]
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.LayerMask[]
struct LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7;
// UnityEngine.Rect[]
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// ARFoundationRemote.Runtime.IXRMeshSubsystem
struct IXRMeshSubsystem_tF44E5BE9DA1195842896DEE4AC7FFA6E77AFCA37;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader
struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral107694947DB47644F8036602F63473486E1ED925;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D;
IL2CPP_EXTERN_C String_t* _stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _Loader_GetLoadedSubsystem_TisRuntimeObject_m49EC7EBC62A33C7E346C276CDC4058EB235DCFB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<System.Boolean>
struct U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.Bounds>
struct U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.Color>
struct U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<System.Int32>
struct U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.LayerMask>
struct U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<System.Object>
struct U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.Quaternion>
struct U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.Rect>
struct U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<System.Single>
struct U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.Vector2>
struct U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.Vector3>
struct U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<UnityEngine.Vector4>
struct U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517  : public RuntimeObject
{
};

struct U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields
{
	// BBUnity.UnityBlackboard/ListInfo/<>c__8`1<T> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9
	U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517* ___U3CU3E9_0;
	// System.Func`2<System.Reflection.PropertyInfo,System.Boolean> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_0
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___U3CU3E9__8_0_1;
	// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo> BBUnity.UnityBlackboard/ListInfo/<>c__8`1::<>9__8_1
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___U3CU3E9__8_1_2;
};

// System.Collections.Generic.Comparer`1<System.Byte>
struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30  : public RuntimeObject
{
};

struct Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.Int16>
struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563  : public RuntimeObject
{
};

struct Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.SByte>
struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B  : public RuntimeObject
{
};

struct Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<System.UInt16>
struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98  : public RuntimeObject
{
};

struct Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Byte>
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};

struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.Int16>
struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B  : public RuntimeObject
{
};

struct EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.SByte>
struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B  : public RuntimeObject
{
};

struct EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<System.UInt16>
struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70  : public RuntimeObject
{
};

struct EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* ___defaultComparer_0;
};

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Bounds>
struct List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.LayerMask>
struct List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	LayerMaskU5BU5D_t877F4B6C1E6670FC66B070C725E4875D8851DA99* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<UnityEngine.Quaternion>
struct List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuaternionU5BU5D_t3C088AFB0F3D2763228C9CAB227021C5DC462AF7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Rect>
struct List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___s_emptyArray_5;
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

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
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

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	// System.UInt32[] Unity.Burst.Intrinsics.X86/Sse4_2::crctab
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB  : public RuntimeObject
{
};

// ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader
struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3  : public RuntimeObject
{
};

struct _Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields
{
	// ARFoundationRemote.Runtime.IXRMeshSubsystem ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::subsystem
	RuntimeObject* ___subsystem_0;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};
};

// BBUnity.UnityBlackboard/ListInfo
struct ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 
{
	// System.Type BBUnity.UnityBlackboard/ListInfo::t
	Type_t* ___t_0;
	// System.Object BBUnity.UnityBlackboard/ListInfo::listTParams
	RuntimeObject* ___listTParams_1;
	// System.Collections.Generic.List`1<System.String> BBUnity.UnityBlackboard/ListInfo::paramNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___paramNames_2;
	// System.Reflection.MethodInfo BBUnity.UnityBlackboard/ListInfo::addMethod
	MethodInfo_t* ___addMethod_3;
	// System.Reflection.MethodInfo BBUnity.UnityBlackboard/ListInfo::getMethod
	MethodInfo_t* ___getMethod_4;
	// System.Reflection.MethodInfo BBUnity.UnityBlackboard/ListInfo::removeMethod
	MethodInfo_t* ___removeMethod_5;
	// System.Reflection.MethodInfo BBUnity.UnityBlackboard/ListInfo::clearMethod
	MethodInfo_t* ___clearMethod_6;
	// System.Reflection.MethodInfo BBUnity.UnityBlackboard/ListInfo::insertMethod
	MethodInfo_t* ___insertMethod_7;
};
// Native definition for P/Invoke marshalling of BBUnity.UnityBlackboard/ListInfo
struct ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388_marshaled_pinvoke
{
	Type_t* ___t_0;
	Il2CppIUnknown* ___listTParams_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___paramNames_2;
	MethodInfo_t* ___addMethod_3;
	MethodInfo_t* ___getMethod_4;
	MethodInfo_t* ___removeMethod_5;
	MethodInfo_t* ___clearMethod_6;
	MethodInfo_t* ___insertMethod_7;
};
// Native definition for COM marshalling of BBUnity.UnityBlackboard/ListInfo
struct ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388_marshaled_com
{
	Type_t* ___t_0;
	Il2CppIUnknown* ___listTParams_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___paramNames_2;
	MethodInfo_t* ___addMethod_3;
	MethodInfo_t* ___getMethod_4;
	MethodInfo_t* ___removeMethod_5;
	MethodInfo_t* ___clearMethod_6;
	MethodInfo_t* ___insertMethod_7;
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D 
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	// System.Int32 UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlSchemeIndex
	int32_t ___m_ControlSchemeIndex_1;
	// UnityEngine.InputSystem.InputControlScheme UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::m_ControlScheme
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___m_ControlScheme_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_pinvoke
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke ___m_ControlScheme_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax
struct ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D_marshaled_com
{
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_0;
	int32_t ___m_ControlSchemeIndex_1;
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com ___m_ControlScheme_2;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder
struct Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_1;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<type>k__BackingField
	Type_t* ___U3CtypeU3Ek__BackingField_2;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateFormat>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CstateFormatU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<stateSizeInBytes>k__BackingField
	int32_t ___U3CstateSizeInBytesU3Ek__BackingField_4;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ExtendsLayout
	String_t* ___m_ExtendsLayout_5;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::<updateBeforeRender>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CupdateBeforeRenderU3Ek__BackingField_6;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_ControlCount
	int32_t ___m_ControlCount_7;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::m_Controls
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_8;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::Bits
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
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

// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_RequestId
	int32_t ___m_RequestId_1;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::<conversionParams>k__BackingField
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};

// System.Func`2<System.Reflection.PropertyInfo,System.Boolean>
struct Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74  : public MulticastDelegate_t
{
};

// System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo>
struct Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Single<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;

// System.String UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::DeviceTypeToControlPath<System.Object>()
inline String_t* ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___controlPath0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53 (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, String_t* ___controlPath0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
inline ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method)
{
	return ((  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D (*) (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*, const RuntimeMethod*))ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::set_type(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA (Type_t* __this, String_t* ___name0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___types1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Reflection.PropertyInfo,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7 (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Reflection.PropertyInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC (RuntimeObject* ___source0, Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Void System.Func`2<System.Reflection.PropertyInfo,System.Reflection.MethodInfo>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Reflection.PropertyInfo,System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099 (RuntimeObject* ___source0, Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource System.Linq.Enumerable::Single<System.Reflection.MethodInfo>(System.Collections.Generic.IEnumerable`1<TSource>)
inline MethodInfo_t* Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  MethodInfo_t* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Single_TisRuntimeObject_m4966D6BB67940E1EE80ADA3CC60C81D03436C62F_gshared)(___source0, method);
}
// System.Int32 System.Int64::CompareTo(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490 (int64_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::SetBit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, bool ___val2, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::GetBit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___aindex0, int32_t ___bindex1, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStriOutput(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___len0, int32_t ___imm81, int32_t ___intRes22, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<System.Byte>()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*, const RuntimeMethod*))AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithOptionalDevice_TisRuntimeObject_mF382F898E47985498314A5A60EF2542B5607DF53(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::OrWithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_OrWithRequiredDevice_TisRuntimeObject_m82C53906C0350BE78EBA1C410BC169C64E555CDE(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithOptionalDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithOptionalDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithOptionalDevice_mB17551E2EB7F96585BD6E01573D9494664E9EED7(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithOptionalDevice_TisRuntimeObject_m44DA2464CBBE7A51A89945D7B96BB4114B0CDFEA(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax UnityEngine.InputSystem.InputActionSetupExtensions/ControlSchemeSyntax::WithRequiredDevice<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_gshared (ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* __this, const RuntimeMethod* method) 
{
	{
		// return WithRequiredDevice(DeviceTypeToControlPath<TDevice>());
		String_t* L_0;
		L_0 = ControlSchemeSyntax_DeviceTypeToControlPath_TisRuntimeObject_mF63A1990BA907932D19EC7FA27A34BC1A855D21A(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D L_1;
		L_1 = ControlSchemeSyntax_WithRequiredDevice_mAFC72E5BFF4F4724E208AB15CC379ABD786EFFCE(__this, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D*>(__this + _offset);
	ControlSchemeSyntax_t4C14E0745C729675BFFADA8275391ACBAD73227D _returnValue;
	_returnValue = ControlSchemeSyntax_WithRequiredDevice_TisRuntimeObject_mBEFB5EF49817C78C1BA4145393A1F2642E6ABD9D(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.Layouts.InputControlLayout/Builder UnityEngine.InputSystem.Layouts.InputControlLayout/Builder::WithType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* Builder_WithType_TisRuntimeObject_m78AB1B3E3CC78CC83E7A66415AD992EF33CF8A7F_gshared (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// type = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline(__this, L_1, NULL);
		// return this;
		return __this;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<System.Boolean>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m2A9BB5C9F5BC72649961BFA060BA37ABC2B8C2B3_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275* L_26 = ((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275* L_32 = ((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t2EFB0754C968E0DAD387534AA6E8933A3881C275_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.Bounds>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m1CCBA0DCA232B2D99EDC2BD299620BC21C3BD7C7_gshared (List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329* L_26 = ((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329* L_32 = ((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t0B48F8735F5E0DA5FB8CB9B89765C486F37B7329_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t7D73463EA17F4D29A37E8110AB60DAD5C80EBF65* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.Color>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_m34C1D8631715AFBFE0088BB27A6CFC87BD423393_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477* L_26 = ((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477* L_32 = ((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t3FDF3AD6A124B211567280D61EF133775F91F477_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<System.Int32>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m48287147D57D72AB4F89F2DF016CB71AD7D5349B_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D* L_26 = ((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D* L_32 = ((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t5D55CEF3D96FBA48099454F78AEFBD70C8E71A0D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.LayerMask>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisLayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB_m186D1A686EFABF46F31FD85B1C2D8AC936B8F2C8_gshared (List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D* L_26 = ((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D* L_32 = ((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tB0AE6AA3019949C68957E88AED46F082C349CB6D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t0D3444B131E51C3999A26A82783425CE5370E0E5* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<System.Object>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisRuntimeObject_m20B57B2F1E0A22E62DBF35F5C337D37B2A1692C0_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3* L_26 = ((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3* L_32 = ((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t3559BE066E814551833AC9790D82CE801B085DB3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.Quaternion>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m9DC624317D25199CA226613092961941EA931B21_gshared (List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288* L_26 = ((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288* L_32 = ((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tAFEA42A28A780E7351D85795F89640561B2F3288_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t02F6DB0D5CBC3565E948E9992A99540913F98523* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.Rect>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m29EB209A8E2459D72736C3895D3D0B03F629D30B_gshared (List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419* L_26 = ((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419* L_32 = ((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t9EDA2D458B62779EDB34D7277038AD464B63B419_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_tB9245BB1D4FD473F42A1B8E7641ACD72F355265B* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<System.Single>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m71E2B3464EAA4E3880AEC30D81B9DE8BD120AE11_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61* L_26 = ((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61* L_32 = ((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t5F7C81A6A99EEF41E62DC8EB4411DAD5E0FD1E61_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.Vector2>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m77906CB4B5A4FE4AA3EB20E1FF3588649AD24C4E_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D* L_26 = ((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D* L_32 = ((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tF52E0F285453AFEA367FE0C7FFE56A07C921E19D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m760A5CA42ED85E1425C68924C0E2E1741E6ED7C5_gshared (List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4* L_26 = ((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4* L_32 = ((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_tAD20B339BE7EF6B9EAD1B9EFD04C3354DD38BFD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// BBUnity.UnityBlackboard/ListInfo BBUnity.UnityBlackboard/ListInfo::create<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 ListInfo_create_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m22B1C317463019930A1BDF35769BCE0174C0DB81_gshared (List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___list0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___names1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral107694947DB47644F8036602F63473486E1ED925);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2);
		s_Il2CppMethodInitialized = true;
	}
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B2_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B2_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B2_2 = NULL;
	Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* G_B1_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* G_B1_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B1_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B4_2 = NULL;
	Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388* G_B3_2 = NULL;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		(&V_0)->___t_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___t_0), (void*)L_1);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_2 = ___list0;
		(&V_0)->___listTParams_1 = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___listTParams_1), (void*)(RuntimeObject*)L_2);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___names1;
		(&V_0)->___paramNames_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___paramNames_2), (void*)L_3);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_4 = ___list0;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		NullCheck(L_5);
		MethodInfo_t* L_10;
		L_10 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_5, _stringLiteral107694947DB47644F8036602F63473486E1ED925, L_7, NULL);
		(&V_0)->___addMethod_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___addMethod_3), (void*)L_10);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_11 = ___list0;
		NullCheck((RuntimeObject*)L_11);
		Type_t* L_12;
		L_12 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_11, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_14 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_16);
		NullCheck(L_12);
		MethodInfo_t* L_17;
		L_17 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_12, _stringLiteral039FE1DBEB247DD2B644DEBE28290905C1B52DF3, L_14, NULL);
		(&V_0)->___removeMethod_5 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___removeMethod_5), (void*)L_17);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_18 = ___list0;
		NullCheck((RuntimeObject*)L_18);
		Type_t* L_19;
		L_19 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_18, NULL);
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_19, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		(&V_0)->___clearMethod_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clearMethod_6), (void*)L_20);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_21 = ___list0;
		NullCheck((RuntimeObject*)L_21);
		Type_t* L_22;
		L_22 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_21, NULL);
		NullCheck(L_22);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_23;
		L_23 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(107 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_22, (int32_t)((int32_t)20));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_24 = ((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_25 = L_24;
		G_B1_0 = L_25;
		G_B1_1 = L_23;
		G_B1_2 = (&V_0);
		if (L_25)
		{
			G_B2_0 = L_25;
			G_B2_1 = L_23;
			G_B2_2 = (&V_0);
			goto IL_00c2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517* L_26 = ((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_27 = (Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74*)il2cpp_codegen_object_new(Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Func_2__ctor_m48337939E4E24F5ADE3777B5B57E73EEF3C2CEC7(L_27, (RuntimeObject*)L_26, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), NULL);
		Func_2_tCD28BDB89F11535DBE4E546BC43614E1B575EB74* L_28 = L_27;
		((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_0_1), (void*)L_28);
		G_B2_0 = L_28;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_00c2:
	{
		RuntimeObject* L_29;
		L_29 = Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Where_TisPropertyInfo_t_mA612A6AB39C2180B63D2AEEBA5B753067B137BFC_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_30 = ((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_31 = L_30;
		G_B3_0 = L_31;
		G_B3_1 = L_29;
		G_B3_2 = G_B2_2;
		if (L_31)
		{
			G_B4_0 = L_31;
			G_B4_1 = L_29;
			G_B4_2 = G_B2_2;
			goto IL_00e6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517* L_32 = ((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_33 = (Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7*)il2cpp_codegen_object_new(Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Func_2__ctor_m06A50AFC888B86C121E71734526B37A9E0A000CE(L_33, (RuntimeObject*)L_32, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		Func_2_tC091105C4943737AB9A3AE1577E60E8FAF7730A7* L_34 = L_33;
		((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__8_1_t021CE76D257662611D49A57D36604967BE80A517_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__8_1_2), (void*)L_34);
		G_B4_0 = L_34;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_00e6:
	{
		RuntimeObject* L_35;
		L_35 = Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099(G_B4_1, G_B4_0, Enumerable_Select_TisPropertyInfo_t_TisMethodInfo_t_m166E71F3CC35FD46CBE33385D8FB0A0EEACF0099_RuntimeMethod_var);
		MethodInfo_t* L_36;
		L_36 = Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35(L_35, Enumerable_Single_TisMethodInfo_t_mA3235AAC334B70A75A9AD763C835B89A0DCF7A35_RuntimeMethod_var);
		G_B4_2->___getMethod_4 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_2->___getMethod_4), (void*)L_36);
		List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* L_37 = ___list0;
		NullCheck((RuntimeObject*)L_37);
		Type_t* L_38;
		L_38 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_37, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_39;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_45);
		NullCheck(L_38);
		MethodInfo_t* L_46;
		L_46 = Type_GetMethod_m9E8E55EC8316CE8A2851B62AD4C73E841FEAC2EA(L_38, _stringLiteral3A09DEF2E79A5537263C4F770F064EA301EB2CD2, L_43, NULL);
		(&V_0)->___insertMethod_7 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___insertMethod_7), (void*)L_46);
		ListInfo_t5089994C492EC70C96CCC73DE56291A33611D388 L_47 = V_0;
		return L_47;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m916056C6D56ED56A8C621B65387940440621885B_gshared (double* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Double,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m9A1DADAD9E0F3273D16A73D963070B45A72D049C_gshared (double* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	double* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (double*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		double* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(double);
		double* L_15 = V_3;
		double L_16 = (*(double*)L_15);
		*(double*)((double*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m94F8FFCEA63E0174FFF11E533C79D165E357A272_gshared (int32_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int32,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m75E4DC1575D64C468E29623C2A27062E59A006BB_gshared (int32_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int32_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int32_t);
		int32_t* L_15 = V_3;
		int32_t L_16 = (*(int32_t*)L_15);
		*(int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m8F3DA1C7D0D9C656F6FB3CCC2747A02B6BDF9E8E_gshared (int64_t* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Int64,System.Int64>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m16B5D468730F5B7AFE121394A46B16F4E3F663CB_gshared (int64_t* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int64_t* ___mask5, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int64_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (int64_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int64_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int64_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int64_t);
		int64_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int64_CompareTo_m63A0BDA03C5B1DEB7387B1C53D6BFD961E4F5490((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		int64_t* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(int64_t);
		int64_t* L_15 = V_3;
		int64_t L_16 = (*(int64_t*)L_15);
		*(int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mBD6B0D9436820A5A075E4DEDAC5F272776C647AD_gshared (float* ___dptr0, void* ___base_addr1, int32_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0058;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_2), ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0054;
		}
	}

IL_003e:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0054:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0058:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<System.Single,System.Int32>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m089FE6B150D3770B7C1109D4010EFBE72C0E985B_gshared (float* ___dptr0, void* ___base_addr1, int64_t* ___indexPtr2, int32_t ___scale3, int32_t ___n4, int32_t* ___mask5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	float* V_3 = NULL;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0057;
	}

IL_000c:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___indexPtr2;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		// long offset = baseIndex * scale;
		int32_t L_3 = ___scale3;
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_2, ((int64_t)L_3)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_4 = ___base_addr1;
		int64_t L_5 = V_2;
		V_3 = (float*)((void*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)L_5)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		int32_t* L_6 = ___mask5;
		if ((((intptr_t)L_6) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t* L_7 = ___mask5;
		int32_t L_8 = V_1;
		uint32_t L_9 = sizeof(int32_t);
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}

IL_003d:
	{
		// dptr[i] = *mem_addr;
		float* L_12 = ___dptr0;
		int32_t L_13 = V_1;
		uint32_t L_14 = sizeof(float);
		float* L_15 = V_3;
		float L_16 = (*(float*)L_15);
		*(float*)((float*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_13), (int32_t)L_14)))) = L_16;
	}

IL_0053:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0057:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_18 = V_1;
		int32_t L_19 = ___n4;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m5D9BE946098FA4C7FC8CC23DEE63A0877E8D6C8B_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint8_t V_7 = 0x0;
	uint8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint8_t);
		uint8_t L_9 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_14;
		L_14 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_15 = V_7;
		uint8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_25;
		L_25 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_26 = V_8;
		uint8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* L_29;
		L_29 = ((  Comparer_1_t49F23FD0F51B7B3F17D30558E0A425107523CC30* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint8_t L_30 = V_8;
		uint8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint8_t, uint8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Byte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_39;
		L_39 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_40 = V_7;
		uint8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_49;
		L_49 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t L_50 = V_7;
		uint8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_120;
		L_120 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint8_t);
		uint8_t L_124 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint8_t));
		uint8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mB3F9377B1A57D35D5514DEF77B3D9279A8622960_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int16_t V_7 = 0;
	int16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int16_t);
		int16_t L_3 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int16_t);
		int16_t L_9 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_14;
		L_14 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_15 = V_7;
		int16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_25;
		L_25 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_26 = V_8;
		int16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* L_29;
		L_29 = ((  Comparer_1_t7EDCB50F141B8333E02C67781CAC2D41381F0563* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int16_t L_30 = V_8;
		int16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int16_t, int16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Int16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_39;
		L_39 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_40 = V_7;
		int16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_49;
		L_49 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t L_50 = V_7;
		int16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_120;
		L_120 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int16_t);
		int16_t L_124 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int16_t));
		int16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA23FD3A0C3B4448E4721DA31DA7B4B93A636A3FD_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int8_t V_7 = 0x0;
	int8_t V_8 = 0x0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int8_t V_12 = 0x0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		int8_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(int8_t);
		int8_t L_3 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		int8_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(int8_t);
		int8_t L_9 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_14;
		L_14 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_15 = V_7;
		int8_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_25;
		L_25 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_26 = V_8;
		int8_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* L_29;
		L_29 = ((  Comparer_1_tFA27DAC2908F666A385A0E5699BB66735365343B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		int8_t L_30 = V_8;
		int8_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, int8_t, int8_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.SByte>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_39;
		L_39 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_40 = V_7;
		int8_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_49;
		L_49 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t L_50 = V_7;
		int8_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_120;
		L_120 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int8_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(int8_t);
		int8_t L_124 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(int8_t));
		int8_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m331D979D640CF9DF04C505875F9FB702E217B2AB_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint16_t V_7 = 0;
	uint16_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	uint16_t V_12 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B48_0 = 0;
	int32_t G_B50_0 = 0;
	int32_t G_B50_1 = 0;
	int32_t G_B59_0 = 0;
	int32_t G_B58_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B61_1 = 0;
	int32_t G_B69_0 = 0;
	int32_t G_B68_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B70_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0183;
	}

IL_0013:
	{
		// T aCh = a[i];
		uint16_t* L_0 = ___a0;
		int32_t L_1 = V_3;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))));
		V_7 = L_3;
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___alen1;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_002b;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_002b:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_0176;
	}

IL_0035:
	{
		// T bCh = b[j];
		uint16_t* L_6 = ___b2;
		int32_t L_7 = V_4;
		uint32_t L_8 = sizeof(uint16_t);
		uint16_t L_9 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))));
		V_8 = L_9;
		// if (j == blen)
		int32_t L_10 = V_4;
		int32_t L_11 = ___blen3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_004f;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_004f:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_12 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_12>>2))&3));
		int32_t L_13 = V_10;
		switch (L_13)
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_00ad;
			}
			case 2:
			{
				goto IL_0102;
			}
		}
	}
	{
		goto IL_0134;
	}

IL_006f:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_14;
		L_14 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_15 = V_7;
		uint16_t L_16 = V_8;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_14, L_15, L_16);
		V_9 = L_17;
		// if (!aInvalid && bInvalid)
		bool L_18 = V_0;
		bool L_19 = V_1;
		if (!((int32_t)(((((int32_t)L_18) == ((int32_t)0))? 1 : 0)&(int32_t)L_19)))
		{
			goto IL_008f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_008f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_20 = V_0;
		if (!L_20)
		{
			goto IL_009d;
		}
	}
	{
		bool L_21 = V_1;
		if (L_21)
		{
			goto IL_009d;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_009d:
	{
		// else if (aInvalid && bInvalid)
		bool L_22 = V_0;
		bool L_23 = V_1;
		if (!((int32_t)((int32_t)L_22&(int32_t)L_23)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_00ad:
	{
		// if (0 == (i & 1))
		int32_t L_24 = V_3;
		if (((int32_t)(L_24&1)))
		{
			goto IL_00ca;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_25;
		L_25 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_26 = V_8;
		uint16_t L_27 = V_7;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_25, L_26, L_27);
		V_9 = (bool)((((int32_t)((((int32_t)L_28) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00ca:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* L_29;
		L_29 = ((  Comparer_1_t58CF625431A0184A14FF0A33D14229F8F6EA3C98* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(il2cpp_rgctx_method(method->rgctx_data, 5));
		uint16_t L_30 = V_8;
		uint16_t L_31 = V_7;
		NullCheck(L_29);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2< int32_t, uint16_t, uint16_t >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.UInt16>::Compare(T,T) */, L_29, L_30, L_31);
		V_9 = (bool)((((int32_t)((((int32_t)L_32) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00e0:
	{
		// if (!aInvalid && bInvalid)
		bool L_33 = V_0;
		bool L_34 = V_1;
		if (!((int32_t)(((((int32_t)L_33) == ((int32_t)0))? 1 : 0)&(int32_t)L_34)))
		{
			goto IL_00ed;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00ed:
	{
		// else if (aInvalid && !bInvalid)
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		bool L_36 = V_1;
		if (L_36)
		{
			goto IL_00f8;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_00f8:
	{
		// else if (aInvalid && bInvalid)
		bool L_37 = V_0;
		bool L_38 = V_1;
		if (!((int32_t)((int32_t)L_37&(int32_t)L_38)))
		{
			goto IL_0164;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		// break;
		goto IL_0164;
	}

IL_0102:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_39;
		L_39 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_40 = V_7;
		uint16_t L_41 = V_8;
		NullCheck(L_39);
		bool L_42;
		L_42 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_39, L_40, L_41);
		V_9 = L_42;
		// if (!aInvalid && bInvalid)
		bool L_43 = V_0;
		bool L_44 = V_1;
		if (!((int32_t)(((((int32_t)L_43) == ((int32_t)0))? 1 : 0)&(int32_t)L_44)))
		{
			goto IL_011f;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_011f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_45 = V_0;
		if (!L_45)
		{
			goto IL_012a;
		}
	}
	{
		bool L_46 = V_1;
		if (L_46)
		{
			goto IL_012a;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_012a:
	{
		// else if (aInvalid && bInvalid)
		bool L_47 = V_0;
		bool L_48 = V_1;
		if (!((int32_t)((int32_t)L_47&(int32_t)L_48)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		// break;
		goto IL_0164;
	}

IL_0134:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_49;
		L_49 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t L_50 = V_7;
		uint16_t L_51 = V_8;
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_49, L_50, L_51);
		V_9 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		if (!((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54)))
		{
			goto IL_0151;
		}
	}
	{
		// match = false;
		V_9 = (bool)0;
		goto IL_0164;
	}

IL_0151:
	{
		// else if (aInvalid && !bInvalid)
		bool L_55 = V_0;
		if (!L_55)
		{
			goto IL_015c;
		}
	}
	{
		bool L_56 = V_1;
		if (L_56)
		{
			goto IL_015c;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
		goto IL_0164;
	}

IL_015c:
	{
		// else if (aInvalid && bInvalid)
		bool L_57 = V_0;
		bool L_58 = V_1;
		if (!((int32_t)((int32_t)L_57&(int32_t)L_58)))
		{
			goto IL_0164;
		}
	}
	{
		// match = true;
		V_9 = (bool)1;
	}

IL_0164:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_59 = V_3;
		int32_t L_60 = V_4;
		bool L_61 = V_9;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_59, L_60, L_61, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0176:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_63 = V_4;
		int32_t L_64 = ___len4;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_0035;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0183:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_66 = V_3;
		int32_t L_67 = ___len4;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0013;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_68 = ___imm85;
		V_10 = ((int32_t)(((int32_t)(L_68>>2))&3));
		int32_t L_69 = V_10;
		switch (L_69)
		{
			case 0:
			{
				goto IL_01b2;
			}
			case 1:
			{
				goto IL_01ef;
			}
			case 2:
			{
				goto IL_0237;
			}
			case 3:
			{
				goto IL_025f;
			}
		}
	}
	{
		goto IL_02a5;
	}

IL_01b2:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01e5;
	}

IL_01b6:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01db;
	}

IL_01bb:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_70 = V_6;
		int32_t L_71 = V_4;
		int32_t L_72 = V_3;
		bool L_73;
		L_73 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_71, L_72, NULL);
		G_B48_0 = L_70;
		if (L_73)
		{
			G_B49_0 = L_70;
			goto IL_01cc;
		}
	}
	{
		G_B50_0 = 0;
		G_B50_1 = G_B48_0;
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B50_0 = 1;
		G_B50_1 = G_B49_0;
	}

IL_01cd:
	{
		int32_t L_74 = V_3;
		V_6 = ((int32_t)(G_B50_1|((int32_t)(G_B50_0<<((int32_t)(L_74&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_75 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01db:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_76 = V_4;
		int32_t L_77 = ___len4;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_01bb;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_78 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01e5:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_79 = V_3;
		int32_t L_80 = ___len4;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_01b6;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_01ef:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0230;
	}

IL_01f3:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_0226;
	}

IL_01f8:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_81 = V_6;
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		bool L_84;
		L_84 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_82, L_83, NULL);
		G_B58_0 = L_81;
		if (!L_84)
		{
			G_B59_0 = L_81;
			goto IL_0214;
		}
	}
	{
		int32_t L_85 = V_4;
		int32_t L_86 = V_3;
		bool L_87;
		L_87 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_85, 1)), L_86, NULL);
		G_B59_0 = G_B58_0;
		if (L_87)
		{
			G_B60_0 = G_B58_0;
			goto IL_0217;
		}
	}

IL_0214:
	{
		G_B61_0 = 0;
		G_B61_1 = G_B59_0;
		goto IL_0218;
	}

IL_0217:
	{
		G_B61_0 = 1;
		G_B61_1 = G_B60_0;
	}

IL_0218:
	{
		int32_t L_88 = V_3;
		V_6 = ((int32_t)(G_B61_1|((int32_t)(G_B61_0<<((int32_t)(L_88&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 2));
	}

IL_0226:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_90 = V_4;
		int32_t L_91 = ___len4;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01f8;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0230:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_93 = V_3;
		int32_t L_94 = ___len4;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01f3;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_0237:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0258;
	}

IL_023b:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_95 = V_6;
		int32_t L_96 = V_3;
		int32_t L_97 = V_3;
		bool L_98;
		L_98 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_96, L_97, NULL);
		G_B68_0 = L_95;
		if (L_98)
		{
			G_B69_0 = L_95;
			goto IL_024b;
		}
	}
	{
		G_B70_0 = 0;
		G_B70_1 = G_B68_0;
		goto IL_024c;
	}

IL_024b:
	{
		G_B70_0 = 1;
		G_B70_1 = G_B69_0;
	}

IL_024c:
	{
		int32_t L_99 = V_3;
		V_6 = ((int32_t)(G_B70_1|((int32_t)(G_B70_0<<((int32_t)(L_99&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_100 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0258:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_101 = V_3;
		int32_t L_102 = ___len4;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_023b;
		}
	}
	{
		// break;
		goto IL_02a5;
	}

IL_025f:
	{
		// intRes1 = allOnes;
		int32_t L_103 = ___allOnes6;
		V_6 = L_103;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02a0;
	}

IL_0267:
	{
		// int k = i;
		int32_t L_104 = V_3;
		V_11 = L_104;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_0294;
	}

IL_026f:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_105 = V_4;
		int32_t L_106 = V_11;
		bool L_107;
		L_107 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_105, L_106, NULL);
		if (L_107)
		{
			goto IL_0288;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_108 = V_6;
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(L_108&((~((int32_t)(1<<((int32_t)(L_109&((int32_t)31)))))))));
	}

IL_0288:
	{
		// k += 1;
		int32_t L_110 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_111 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0294:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_112 = V_4;
		int32_t L_113 = ___len4;
		int32_t L_114 = V_3;
		if ((((int32_t)L_112) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_113, L_114)))))
		{
			goto IL_026f;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_115, 1));
	}

IL_02a0:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_116 = V_3;
		int32_t L_117 = ___len4;
		if ((((int32_t)L_116) < ((int32_t)L_117)))
		{
			goto IL_0267;
		}
	}

IL_02a5:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_032b;
	}

IL_02ae:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_118 = ___imm85;
		if (!((int32_t)(L_118&((int32_t)16))))
		{
			goto IL_0319;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_119 = ___imm85;
		if (!((int32_t)(L_119&((int32_t)32))))
		{
			goto IL_0308;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_120;
		L_120 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		uint16_t* L_121 = ___b2;
		int32_t L_122 = V_3;
		uint32_t L_123 = sizeof(uint16_t);
		uint16_t L_124 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_121, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_122), (int32_t)L_123)))));
		il2cpp_codegen_initobj((&V_12), sizeof(uint16_t));
		uint16_t L_125 = V_12;
		NullCheck(L_120);
		bool L_126;
		L_126 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_120, L_124, L_125);
		if (!L_126)
		{
			goto IL_02e4;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_02e4:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_127 = V_1;
		if (!L_127)
		{
			goto IL_02f7;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_128 = V_5;
		int32_t L_129 = V_6;
		int32_t L_130 = V_3;
		V_5 = ((int32_t)(L_128|((int32_t)(L_129&((int32_t)(1<<((int32_t)(L_130&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_02f7:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_131 = V_5;
		int32_t L_132 = V_6;
		int32_t L_133 = V_3;
		V_5 = ((int32_t)(L_131|((int32_t)(((~L_132))&((int32_t)(1<<((int32_t)(L_133&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0308:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_134 = V_5;
		int32_t L_135 = V_6;
		int32_t L_136 = V_3;
		V_5 = ((int32_t)(L_134|((int32_t)(((~L_135))&((int32_t)(1<<((int32_t)(L_136&((int32_t)31)))))))));
		goto IL_0327;
	}

IL_0319:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_137 = V_5;
		int32_t L_138 = V_6;
		int32_t L_139 = V_3;
		V_5 = ((int32_t)(L_137|((int32_t)(L_138&((int32_t)(1<<((int32_t)(L_139&((int32_t)31)))))))));
	}

IL_0327:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_140 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_032b:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		int32_t L_142 = ___len4;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_02ae;
		}
	}
	{
		// return intRes2;
		int32_t L_143 = V_5;
		return L_143;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Byte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD30812062AA4852D166ABCDF3D79FDD1856F173A_gshared (uint8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* L_0;
		L_0 = ((  EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint8_t);
		uint8_t L_4 = (*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint8_t));
		uint8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint8_t, uint8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Byte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.Int16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m3EBC75C6F39A7B1A5F62D88877C87C9F3B5617A3_gshared (int16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* L_0;
		L_0 = ((  EqualityComparer_1_tD96337BB993FF6246388ED223A24A3E752058F7B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int16_t);
		int16_t L_4 = (*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int16_t));
		int16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int16_t, int16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.SByte>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m73215CC1A28F076B0D2472385756C7AF58CBA171_gshared (int8_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int8_t V_1 = 0x0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* L_0;
		L_0 = ((  EqualityComparer_1_tE7F9CA4FFFE31F11BFD738023C1E489D3ECB371B* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(int8_t);
		int8_t L_4 = (*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(int8_t));
		int8_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, int8_t, int8_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.SByte>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<System.UInt16>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m000E8D7B908376D69E48EACF3E6811C4DEE7A05D_gshared (uint16_t* ___ptr0, int32_t ___max1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint16_t V_1 = 0;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* L_0;
		L_0 = ((  EqualityComparer_1_t8B3F40C676CD330DB13D396DB81564A00E2B7C70* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_1 = ___ptr0;
		int32_t L_2 = V_0;
		uint32_t L_3 = sizeof(uint16_t);
		uint16_t L_4 = (*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))));
		il2cpp_codegen_initobj((&V_1), sizeof(uint16_t));
		uint16_t L_5 = V_1;
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2< bool, uint16_t, uint16_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.UInt16>::Equals(T,T) */, L_0, L_4, L_5);
		if (!L_6)
		{
			goto IL_002b;
		}
	}
	{
		// return i;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_002b:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		int32_t L_10 = ___max1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return max;
		int32_t L_11 = ___max1;
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Byte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CC4D51DF3F513318DCC288B066D0018EAF9C235_gshared (int32_t ___len0, int32_t ___imm81, uint8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint8_t);
		uint8_t L_7 = ___allOnesT2;
		*(uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint8_t);
		il2cpp_codegen_initobj(((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.Int16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mE92FFA321425E5808CD20616DC308BA7B36886E8_gshared (int32_t ___len0, int32_t ___imm81, int16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int16_t);
		int16_t L_7 = ___allOnesT2;
		*(int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int16_t);
		il2cpp_codegen_initobj(((int16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.SByte>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5EFDDE5126FDB6BF9F9ED55B39751B517522C455_gshared (int32_t ___len0, int32_t ___imm81, int8_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int8_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (int8_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		int8_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(int8_t);
		int8_t L_7 = ___allOnesT2;
		*(int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		int8_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(int8_t);
		il2cpp_codegen_initobj(((int8_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(int8_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<System.UInt16>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mD44F4B084A230ACD38B4FCF13923F8986AFF0AB1_gshared (int32_t ___len0, int32_t ___imm81, uint16_t ___allOnesT2, int32_t ___intRes23, const RuntimeMethod* method) 
{
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint16_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___imm81;
		if (!((int32_t)(L_0&((int32_t)64))))
		{
			goto IL_0053;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_1 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_1 = (uint16_t*)((uintptr_t)L_1);
		// for (int i = 0; i < len; ++i)
		V_2 = 0;
		goto IL_004d;
	}

IL_001b:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_2 = ___intRes23;
		int32_t L_3 = V_2;
		if (!((int32_t)(L_2&((int32_t)(1<<((int32_t)(L_3&((int32_t)31))))))))
		{
			goto IL_0038;
		}
	}
	{
		// maskDst[i] = allOnesT;
		uint16_t* L_4 = V_1;
		int32_t L_5 = V_2;
		uint32_t L_6 = sizeof(uint16_t);
		uint16_t L_7 = ___allOnesT2;
		*(uint16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_4, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), (int32_t)L_6)))) = L_7;
		goto IL_0049;
	}

IL_0038:
	{
		// maskDst[i] = default(T);
		uint16_t* L_8 = V_1;
		int32_t L_9 = V_2;
		uint32_t L_10 = sizeof(uint16_t);
		il2cpp_codegen_initobj(((uint16_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), sizeof(uint16_t));
	}

IL_0049:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004d:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_12 = V_2;
		int32_t L_13 = ___len0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_001b;
		}
	}
	{
		goto IL_005b;
	}

IL_0053:
	{
		// result.SInt0 = intRes2;
		int32_t L_14 = ___intRes23;
		(&V_0)->___SInt0_52 = L_14;
	}

IL_005b:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_15 = V_0;
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD4107C2F2DB7508841779CE414BD21B61FA3183F_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m797C4B561EC2527267C18CF422EBBD9FCDD306EF_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m8934296ABE51C76314606C484F93554C529BD77A_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m6A20624B95FD608D46A450719A26FC173F4C0780_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		return L_11;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Byte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m179C750FBD381FF2897A9140CF7C2661939C7E71_gshared (uint8_t* ___a0, int32_t ___alen1, uint8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.Int16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m9F860C6A223CB8744EB0C859B49E573C300C9F7B_gshared (int16_t* ___a0, int32_t ___alen1, int16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.SByte>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEC9DD6EE9C8D66BCFFABD5A19993FDA06444F20C_gshared (int8_t* ___a0, int32_t ___alen1, int8_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, int8_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		int8_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		int8_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<System.UInt16>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8784D19FC1B4BAC48D00E8623FE1872EFEFD3496_gshared (uint16_t* ___a0, int32_t ___alen1, uint16_t* ___b2, int32_t ___blen3, int32_t ___len4, int32_t ___imm85, int32_t ___allOnes6, uint16_t ___allOnesT7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		int32_t L_1 = ___alen1;
		uint16_t* L_2 = ___b2;
		int32_t L_3 = ___blen3;
		int32_t L_4 = ___len4;
		int32_t L_5 = ___imm85;
		int32_t L_6 = ___allOnes6;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___len4;
		int32_t L_9 = ___imm85;
		uint16_t L_10 = ___allOnesT7;
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_12;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2E6D2FDB31E3BFDFC30BDD2389A5A50C0F3286BB_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m4786E128EACDF39A8B13B696D31429E7C8D6EBF6_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m12535D1A7206DB4C56C55B642E9F5F0B072810A3_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m875686166B80F44B2A7B5837256932C7A6560E7D_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Byte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1E1CCF579BEBAD09719E3B27BCAB1A607CED8C89_gshared (uint8_t* ___a0, uint8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint8_t* L_0 = ___a0;
		uint8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint8_t* L_4 = ___b1;
		uint8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint8_t*, int32_t, uint8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.Int16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m31A82E20D7EB7CDFCDF7EEA3E75BA4F38F8501D4_gshared (int16_t* ___a0, int16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int16_t* L_0 = ___a0;
		int16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int16_t* L_4 = ___b1;
		int16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int16_t*, int32_t, int16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.SByte>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEA9E446133608807E4CF1C806055621BECFD93CF_gshared (int8_t* ___a0, int8_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, int8_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		int8_t* L_0 = ___a0;
		int8_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		int8_t* L_4 = ___b1;
		int8_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (int8_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (int8_t*, int32_t, int8_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		int8_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, int8_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<System.UInt16>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m084B5A607615E44BC1926F6FF9CF11754A074B06_gshared (uint16_t* ___a0, uint16_t* ___b1, int32_t ___len2, int32_t ___imm83, int32_t ___allOnes4, uint16_t ___allOnesT5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		uint16_t* L_0 = ___a0;
		uint16_t* L_1 = ___a0;
		int32_t L_2 = ___len2;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		uint16_t* L_4 = ___b1;
		uint16_t* L_5 = ___b1;
		int32_t L_6 = ___len2;
		int32_t L_7;
		L_7 = ((  int32_t (*) (uint16_t*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_8 = ___len2;
		int32_t L_9 = ___imm83;
		int32_t L_10 = ___allOnes4;
		int32_t L_11;
		L_11 = ((  int32_t (*) (uint16_t*, int32_t, uint16_t*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___len2;
		int32_t L_13 = ___imm83;
		uint16_t L_14 = ___allOnesT5;
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, uint16_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_16;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (status != AsyncConversionStatus.Ready)
		int32_t L_0;
		L_0 = AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("Async request is not ready.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (m_Api.TryGetAsyncRequestData(m_RequestId, out dataPtr, out dataLength))
		Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* L_2 = (Api_tAE210A8378E537AFD1FA4B99562229CE842377FB*)__this->___m_Api_0;
		int32_t L_3 = (int32_t)__this->___m_RequestId_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, int32_t, intptr_t*, int32_t* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryGetAsyncRequestData(System.Int32,System.IntPtr&,System.Int32&) */, L_2, L_3, (&V_0), (&V_1));
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// int stride = UnsafeUtility.SizeOf<T>();
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_5;
		// var array = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>(
		//     (void*)dataPtr, dataLength / stride, Allocator.None);
		intptr_t L_6 = V_0;
		void* L_7;
		L_7 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_6, NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_10;
		L_10 = ((  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, ((int32_t)(L_8/L_9)), (int32_t)1, il2cpp_rgctx_method(method->rgctx_data, 1));
		// return array;
		return L_10;
	}

IL_0041:
	{
		// throw new InvalidOperationException("The XRAsyncCameraImageConversion is not valid.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*>(__this + _offset);
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF _returnValue;
	_returnValue = AsyncConversion_GetData_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m2BA1309F9AE42CAB5A278E86226F4982919A379F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m3FF6126D31B18EF8F02A921B6EF41A436C07AB3E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, const RuntimeMethod* method) 
{
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_5 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_9), L_7, L_8, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_13), L_11, L_12, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
// T ARFoundationRemote.Runtime.XRGeneralSettingsRemote/_Manager/_Loader::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Loader_GetLoadedSubsystem_TisRuntimeObject_m49EC7EBC62A33C7E346C276CDC4058EB235DCFB7_gshared (_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor) {
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// var result = subsystem as T;
		il2cpp_codegen_runtime_class_init_inline(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_StaticFields*)il2cpp_codegen_static_fields_for(_Loader_t92CDEB8667583CFECD7536ED027E87113172E6B3_il2cpp_TypeInfo_var))->___subsystem_0;
		// return result;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_1, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0017:
	{
		// throw new Exception();
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_Loader_GetLoadedSubsystem_TisRuntimeObject_m49EC7EBC62A33C7E346C276CDC4058EB235DCFB7_RuntimeMethod_var)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Builder_set_type_m9052A0AB147182E89AAA4F020F6A0BE797AB49CC_inline (Builder_t83F17A26F53DA7EA6D8C35E5C65C5DF0147E7821* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type type { get; set; }
		Type_t* L_0 = ___value0;
		__this->___U3CtypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
