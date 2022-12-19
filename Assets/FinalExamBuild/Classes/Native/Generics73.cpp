#include "pch-cpp.hpp"

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

// System.Collections.Generic.Dictionary`2<System.String,Pada1.BBCore.Serialization.Xml.ABBXMLFormater`1/ExportableHandler<System.Object>>
struct Dictionary_2_t71FBE00D8C4DA33FE285257AE27DACA50E1BE472;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>
struct XmlFormaterList_4_t9017A8769661177536E34441B519E2AA0B00AD98;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C String_t* _stringLiteral75DAF3DDC5264A4CB985E781D669336FFFC76920;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pada1.BBCore.Serialization.ABBFormatter`1<System.Object>
struct ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422  : public RuntimeObject
{
	// T Pada1.BBCore.Serialization.ABBFormatter`1::_objectToformatter
	RuntimeObject* ____objectToformatter_0;
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

// Pada1.BBCore.Serialization.SerializableList`1<System.Object>
struct SerializableList_1_tD628BE7AE36E58F7E9330B24F1733052E5AC19B2  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Pada1.BBCore.Serialization.SerializableList`1::_children
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____children_1;
};
struct Il2CppArrayBounds;

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

// Pada1.BBCore.Serialization.Xml.ABBXMLFormater`1<System.Object>
struct ABBXMLFormater_1_tF96CFE4170303E7696263E52D58B3DF724901350  : public ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422
{
	// System.Collections.Generic.Dictionary`2<System.String,Pada1.BBCore.Serialization.Xml.ABBXMLFormater`1/ExportableHandler<T>> Pada1.BBCore.Serialization.Xml.ABBXMLFormater`1::_GetPropertyExportableHandler
	Dictionary_2_t71FBE00D8C4DA33FE285257AE27DACA50E1BE472* ____GetPropertyExportableHandler_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>
struct XmlFormaterList_4_t9017A8769661177536E34441B519E2AA0B00AD98  : public ABBXMLFormater_1_tF96CFE4170303E7696263E52D58B3DF724901350
{
	// R[] Pada1.BBCore.Serialization.Xml.XmlFormaterList`4::_nodeList
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____nodeList_2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>::Load(Q)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlFormaterList_4_Load_m33703A15D67DD6AD4E42AD081EC3798F90341C17_gshared (XmlFormaterList_4_t9017A8769661177536E34441B519E2AA0B00AD98* __this, RuntimeObject* ___q0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___q0;
		NullCheck((ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422*)__this);
		((  void (*) (ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_1 = ___q0;
		NullCheck((SerializableList_1_tD628BE7AE36E58F7E9330B24F1733052E5AC19B2*)L_1);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2;
		L_2 = ((  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* (*) (SerializableList_1_tD628BE7AE36E58F7E9330B24F1733052E5AC19B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((SerializableList_1_tD628BE7AE36E58F7E9330B24F1733052E5AC19B2*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		int32_t L_3;
		L_3 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (uint32_t)L_3);
		__this->____nodeList_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodeList_2), (void*)L_4);
		V_0 = 0;
		RuntimeObject* L_5 = ___q0;
		NullCheck((SerializableList_1_tD628BE7AE36E58F7E9330B24F1733052E5AC19B2*)L_5);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6;
		L_6 = ((  List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* (*) (SerializableList_1_tD628BE7AE36E58F7E9330B24F1733052E5AC19B2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))((SerializableList_1_tD628BE7AE36E58F7E9330B24F1733052E5AC19B2*)L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		NullCheck(L_6);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_7;
		L_7 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0085:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007a_1;
			}

IL_0037_1:
			{
				RuntimeObject* L_8;
				L_8 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
				V_2 = L_8;
				NullCheck((V_2));
				Type_t* L_9;
				L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((V_2), il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				RuntimeObject* L_10;
				L_10 = VirtualFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(19 /* R Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>::CreateFormatter(System.Type) */, __this, L_9);
				V_3 = L_10;
				RuntimeObject* L_11 = V_3;
				RuntimeObject* L_12 = V_2;
				NullCheck((ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422*)L_11);
				VirtualActionInvoker1< RuntimeObject* >::Invoke(10 /* System.Void Pada1.BBCore.Serialization.ABBFormatter`1<System.Object>::Load(T) */, (ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422*)L_11, ((RuntimeObject*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->klass->rgctx_data, 14))));
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____nodeList_2;
				int32_t L_14 = V_0;
				RuntimeObject* L_15 = V_3;
				NullCheck(L_13);
				(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_15);
				int32_t L_16 = V_0;
				V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_007a_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
				if (L_17)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0093;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0093:
	{
		return;
	}
}
// R Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>::CreateFormatter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlFormaterList_4_CreateFormatter_m688B58D42788BA0C012FB0ECB181CBE4362C4462_gshared (XmlFormaterList_4_t9017A8769661177536E34441B519E2AA0B00AD98* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return L_0;
	}
}
// System.Void Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlFormaterList_4__ctor_m72BB9F5E402035DEA97385057BC2242F86EB1E9A_gshared (XmlFormaterList_4_t9017A8769661177536E34441B519E2AA0B00AD98* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (ABBXMLFormater_1_tF96CFE4170303E7696263E52D58B3DF724901350*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)))((ABBXMLFormater_1_tF96CFE4170303E7696263E52D58B3DF724901350*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
// R[] Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>::get_NodeList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* XmlFormaterList_4_get_NodeList_m9F7C450B310AC6BB9E50FAE50E8D829288F6EB8E_gshared (XmlFormaterList_4_t9017A8769661177536E34441B519E2AA0B00AD98* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____nodeList_2;
		return L_0;
	}
}
// System.Object Pada1.BBCore.Serialization.Xml.XmlFormaterList`4<System.Object,System.Object,System.Object,System.Object>::Convert(System.String,System.Object,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlFormaterList_4_Convert_m347A24D62066C474F484E88A5A1507AD742413E4_gshared (XmlFormaterList_4_t9017A8769661177536E34441B519E2AA0B00AD98* __this, String_t* ___a_name0, RuntimeObject* ___a_obj1, Type_t** ___o_type2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DAF3DDC5264A4CB985E781D669336FFFC76920);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___a_obj1;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		RuntimeObject* L_1 = ___a_obj1;
		return L_1;
	}

IL_0005:
	{
		String_t* L_2 = ___a_name0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteral75DAF3DDC5264A4CB985E781D669336FFFC76920, NULL);
		if (!L_3)
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_4 = ___a_obj1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 25), (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_0 = L_6;
		V_1 = 0;
		V_2 = L_5;
		V_3 = 0;
		goto IL_0051;
	}

IL_0028:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck((ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422*)L_10);
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(11 /* System.Runtime.Serialization.ISerializable Pada1.BBCore.Serialization.ABBFormatter`1<System.Object>::GetObjectSerializable() */, (ABBFormatter_1_tAF7A0DE61B93353093D5AEFD5EF3EF73633A1422*)L_10);
		V_4 = ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->klass->rgctx_data, 9)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		int32_t L_13 = V_1;
		RuntimeObject* L_14 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (RuntimeObject*)L_14);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0051:
	{
		int32_t L_17 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_2;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		Type_t** L_19 = ___o_type2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_0;
		NullCheck((RuntimeObject*)L_20);
		Type_t* L_21;
		L_21 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_20, NULL);
		*((RuntimeObject**)L_19) = (RuntimeObject*)L_21;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_19, (void*)(RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_0;
		return (RuntimeObject*)L_22;
	}

IL_0061:
	{
		String_t* L_23 = ___a_name0;
		RuntimeObject* L_24 = ___a_obj1;
		Type_t** L_25 = ___o_type2;
		NullCheck((ABBXMLFormater_1_tF96CFE4170303E7696263E52D58B3DF724901350*)__this);
		RuntimeObject* L_26;
		L_26 = ((  RuntimeObject* (*) (ABBXMLFormater_1_tF96CFE4170303E7696263E52D58B3DF724901350*, String_t*, RuntimeObject*, Type_t**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)))((ABBXMLFormater_1_tF96CFE4170303E7696263E52D58B3DF724901350*)__this, L_23, L_24, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return L_26;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
