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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA;
// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const uint32_t IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m327A9F068493A9DA6835C83433C65A0C858605A6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int16>
struct NOVTABLE IReference_1_t419B8E8D14A6383889A141DA48BA10EF53636954 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m009A2D32288A345CECC6E0DA21C6194026F7666A(int16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int32>
struct NOVTABLE IReference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE48C4EA35C8AD4467154020A633DD0CE76BAECA3(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int64>
struct NOVTABLE IReference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC1DCE564A165482AD25C6BD877FB304DFD83E468(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Object>
struct NOVTABLE IReference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Single>
struct NOVTABLE IReference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4B38DAA5B9FADBB6A97FFD1A66E45532BD63E4D8(float* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.String>
struct NOVTABLE IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt16>
struct NOVTABLE IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A(uint16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt32>
struct NOVTABLE IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt64>
struct NOVTABLE IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76(uint64_t* comReturnValue) = 0;
};
struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Guid
struct Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.Int16
struct Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Numerics.Matrix4x4
struct Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields, ____identity_16)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		____identity_16 = value;
	}
};


// System.Numerics.Quaternion
struct Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// System.Numerics.Vector3
struct Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Windows.Foundation.DateTime
struct DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};


// Windows.Foundation.EventRegistrationToken
struct EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 
{
public:
	// System.Int64 Windows.Foundation.EventRegistrationToken::Value
	int64_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4, ___Value_0)); }
	inline int64_t get_Value_0() const { return ___Value_0; }
	inline int64_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int64_t value)
	{
		___Value_0 = value;
	}
};


// Windows.Foundation.FoundationContract
struct FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 
{
public:

public:
};


// Windows.Foundation.HResult
struct HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};


// Windows.Foundation.Numerics.Matrix4x4
struct Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9 
{
public:
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single Windows.Foundation.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};


// Windows.Foundation.Numerics.Quaternion
struct Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C 
{
public:
	// System.Single Windows.Foundation.Numerics.Quaternion::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single Windows.Foundation.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// Windows.Foundation.Numerics.Vector3
struct Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector3::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// Windows.Foundation.Point
struct Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// Windows.Foundation.Point
struct Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Rect
struct Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};


// Windows.Foundation.Size
struct Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// Windows.Foundation.Size
struct Size_t4766FF009097CE547F699B69250246058DA664D9 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};


// Windows.Foundation.TimeSpan
struct TimeSpan_tD18885B289077804D4E82931E68E84181C072755 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_tD18885B289077804D4E82931E68E84181C072755, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};


// Windows.Foundation.UniversalApiContract
struct UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 
{
public:

public:
};


// System.AttributeTargets
struct AttributeTargets_t7CC0DE6D2B11C951E525EE69AD02313792932741 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t7CC0DE6D2B11C951E525EE69AD02313792932741, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_0)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_tBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_tBDA7F4CE333BAE130A8BB6DF88FBC68E6A54340E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2092074B94AF8FDD23F6E49EEA36DB26B03F4D5B(Guid_t * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t59BAE58AEE4691B3CB0C85AEC0A0DAD22B3A621D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7C0191A2C009ECE3D838D0FEAA41921C69218E6F(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Numerics.Quaternion>
struct NOVTABLE IReference_1_tA572A94183D822093E17AD99D1D7B9AB4C7D86A4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6F5DFC962B0A06BE8A80B15004B53C06FE46E26A(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Numerics.Vector3>
struct NOVTABLE IReference_1_t967E90155A4ACA584D5391A0BC3B0691C31E1893 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m212A34C7FC7FAB2070BAA9820F7D3CA9A2BE8D22(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct NOVTABLE IReference_1_t4AC807526F70CF6E9296724F26CD756605107A36 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m78D0A55EF00DD60A84EA917FE395A1CE38335D73(EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.DateTime>
struct NOVTABLE IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A(DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>
struct NOVTABLE IReference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m93D0577BA82B2418EB4B2DCF81F86934016908A7(EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A(FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1(HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>
struct NOVTABLE IReference_1_t83324F52C6450F1C6DEDB644D38367FCE61372E1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2492E30E817B6A78C5A7C728CD3DFFA25D4608BF(Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Quaternion>
struct NOVTABLE IReference_1_t926809CC0C2BCDF32D15E8A86885B7F4BE14A59F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB4F86E26F7843886681B8F2CF9CDA79DC74827E7(Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>
struct NOVTABLE IReference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5A5957990F5156FC2709CA1F6E406C6A0C4AD6A3(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(Size_t4766FF009097CE547F699B69250246058DA664D9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(TimeSpan_tD18885B289077804D4E82931E68E84181C072755 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 * comReturnValue) = 0;
};

// Windows.Foundation.Metadata.MarshalingType
struct MarshalingType_t62213E81B261451C72A0B7669A24499DDCF22E06 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_t62213E81B261451C72A0B7669A24499DDCF22E06, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.Metadata.ThreadingModel
struct ThreadingModel_t3A0A62EE2003BD4A2E53BE7370BC1E159A3A8434 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_t3A0A62EE2003BD4A2E53BE7370BC1E159A3A8434, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Foundation.PropertyType
struct PropertyType_tBEECA3F046BD9A1A358890A42B7DA9A031FFC1BD 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tBEECA3F046BD9A1A358890A42B7DA9A031FFC1BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Graphics.Holographic.HolographicStereoTransform
struct HolographicStereoTransform_t473ED88570152901E23CF1519A0836AEEC89DD48 
{
public:
	// System.Numerics.Matrix4x4 Windows.Graphics.Holographic.HolographicStereoTransform::Left
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___Left_0;
	// System.Numerics.Matrix4x4 Windows.Graphics.Holographic.HolographicStereoTransform::Right
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___Right_1;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(HolographicStereoTransform_t473ED88570152901E23CF1519A0836AEEC89DD48, ___Left_0)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get_Left_0() const { return ___Left_0; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Right_1() { return static_cast<int32_t>(offsetof(HolographicStereoTransform_t473ED88570152901E23CF1519A0836AEEC89DD48, ___Right_1)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get_Right_1() const { return ___Right_1; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of_Right_1() { return &___Right_1; }
	inline void set_Right_1(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		___Right_1 = value;
	}
};


// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct HolographicViewConfigurationKind_t5A173BC5CD4FD620674AE736BB7D9784A19EBAEC 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t5A173BC5CD4FD620674AE736BB7D9784A19EBAEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.HandJointKind
struct HandJointKind_t459313DB8FB9919DA3565D3A693449187E5CF7CA 
{
public:
	// System.Int32 Windows.Perception.People.HandJointKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandJointKind_t459313DB8FB9919DA3565D3A693449187E5CF7CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.HandMeshVertex
struct HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 
{
public:
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Position
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Position_0;
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Normal
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Normal_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Position_0)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Position_0() const { return ___Position_0; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Normal_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Normal_1 = value;
	}
};


// Windows.Perception.People.JointPoseAccuracy
struct JointPoseAccuracy_tAE24E9827E028CD4CD542843A442BBEF384E3D9C 
{
public:
	// System.Int32 Windows.Perception.People.JointPoseAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JointPoseAccuracy_tAE24E9827E028CD4CD542843A442BBEF384E3D9C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.Spatial.SpatialRay
struct SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B 
{
public:
	// System.Numerics.Vector3 Windows.Perception.Spatial.SpatialRay::Origin
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Origin_0;
	// System.Numerics.Vector3 Windows.Perception.Spatial.SpatialRay::Direction
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Direction_1;

public:
	inline static int32_t get_offset_of_Origin_0() { return static_cast<int32_t>(offsetof(SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B, ___Origin_0)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Origin_0() const { return ___Origin_0; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Origin_0() { return &___Origin_0; }
	inline void set_Origin_0(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Origin_0 = value;
	}

	inline static int32_t get_offset_of_Direction_1() { return static_cast<int32_t>(offsetof(SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B, ___Direction_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Direction_1() const { return ___Direction_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Direction_1() { return &___Direction_1; }
	inline void set_Direction_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Direction_1 = value;
	}
};


// Windows.Storage.CreationCollisionOption
struct CreationCollisionOption_t446166DBF156CCE4C7C7E16D78B3E9A2877E5538 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t446166DBF156CCE4C7C7E16D78B3E9A2877E5538, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Storage.Streams.InputStreamOptions
struct InputStreamOptions_t84A663CC3616A0D05994D54C1DA6B2E877F7FF82 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t84A663CC3616A0D05994D54C1DA6B2E877F7FF82, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.GazeInputAccessStatus
struct GazeInputAccessStatus_tE56B1134F343E06D19FF224683D91598329BA7A0 
{
public:
	// System.Int32 Windows.UI.Input.GazeInputAccessStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GazeInputAccessStatus_tE56B1134F343E06D19FF224683D91598329BA7A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
struct SpatialInteractionSourceHandedness_t930A9F027DB348D4E843479A1F836F425A45FB25 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceHandedness_t930A9F027DB348D4E843479A1F836F425A45FB25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Xaml.Interop.TypeKind
struct TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};

// Windows.Foundation.IReference`1<System.TimeSpan>
struct NOVTABLE IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>
struct NOVTABLE IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_tAED774804E022955C705DD94598B4447B0142C06 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicStereoTransform>
struct NOVTABLE IReference_1_t9FD93A19E4B198BB35082CCC0F3201BB2181E7C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4224052FC9A57C3E614F284CE956825C3C004B95(HolographicStereoTransform_t473ED88570152901E23CF1519A0836AEEC89DD48 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicViewConfigurationKind>
struct NOVTABLE IReference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB500DD4EC51CF23CA8B4D79F9CBF5E4C254AB0E1(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.HandJointKind>
struct NOVTABLE IReference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAE5A8F99060F1DC39B04303111B9B0936CF2EE59(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.HandMeshVertex>
struct NOVTABLE IReference_1_t0D003B77C43341B97E803664305892C337680D66 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE6C0B7EE13DDE444F05495C7D1FB93F46BD4B1A9(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.JointPoseAccuracy>
struct NOVTABLE IReference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1CF326D0DC7E3C56CE53356E28D6DB71110F7928(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialRay>
struct NOVTABLE IReference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB45907A0F269EA7A626EF7D881399186893863D9(SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>
struct NOVTABLE IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>
struct NOVTABLE IReference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m29DABAFAF45FE5B35150EB56DB1AC7608AC04108(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Input.GazeInputAccessStatus>
struct NOVTABLE IReference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m9952B601AF3C6D205C72E5DA9AEDDB03A369E4EF(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness>
struct NOVTABLE IReference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF07E9CA6EB648C14F614907C0DCDE6EB539C3FBF(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceKind>
struct NOVTABLE IReference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF64790DEC6FF93C719750283EA8C9CFB1EA82AE0(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(int32_t* comReturnValue) = 0;
};

// Windows.Foundation.Metadata.AttributeTargets
struct AttributeTargets_tA7256AD263010BF992D3949CE57A314716980FA7 
{
public:
	// System.UInt32 Windows.Foundation.Metadata.AttributeTargets::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_tA7256AD263010BF992D3949CE57A314716980FA7, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.JointPose
struct JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE 
{
public:
	// System.Numerics.Quaternion Windows.Perception.People.JointPose::Orientation
	Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___Orientation_0;
	// System.Numerics.Vector3 Windows.Perception.People.JointPose::Position
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Position_1;
	// System.Single Windows.Perception.People.JointPose::Radius
	float ___Radius_2;
	// Windows.Perception.People.JointPoseAccuracy Windows.Perception.People.JointPose::Accuracy
	int32_t ___Accuracy_3;

public:
	inline static int32_t get_offset_of_Orientation_0() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Orientation_0)); }
	inline Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  get_Orientation_0() const { return ___Orientation_0; }
	inline Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A * get_address_of_Orientation_0() { return &___Orientation_0; }
	inline void set_Orientation_0(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  value)
	{
		___Orientation_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Position_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Position_1() const { return ___Position_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Position_1 = value;
	}

	inline static int32_t get_offset_of_Radius_2() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Radius_2)); }
	inline float get_Radius_2() const { return ___Radius_2; }
	inline float* get_address_of_Radius_2() { return &___Radius_2; }
	inline void set_Radius_2(float value)
	{
		___Radius_2 = value;
	}

	inline static int32_t get_offset_of_Accuracy_3() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Accuracy_3)); }
	inline int32_t get_Accuracy_3() const { return ___Accuracy_3; }
	inline int32_t* get_address_of_Accuracy_3() { return &___Accuracy_3; }
	inline void set_Accuracy_3(int32_t value)
	{
		___Accuracy_3 = value;
	}
};


// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
// Windows.Foundation.IReference`1<System.Type>
struct NOVTABLE IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C(Il2CppWindowsRuntimeTypeName* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>
struct NOVTABLE IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.JointPose>
struct NOVTABLE IReference_1_t20F75434E9A39E107D795462E73230FC877DB3FC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5C473856F84B9723FF4AFFA39ACD3BC9FB2FE6EF(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime* comReturnValue) = 0;
};

// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);
IL2CPP_EXTERN_C void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled);
IL2CPP_EXTERN_C void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);


#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Exception>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * IReference_1_get_Value_m327A9F068493A9DA6835C83433C65A0C858605A6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1* ____ireference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1 = il2cpp_codegen_com_query_interface<IReference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t67847A96B1438323AEC81CD945DFC5C035890AE1->IReference_1_get_Value_m327A9F068493A9DA6835C83433C65A0C858605A6(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Guid>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t  IReference_1_get_Value_m2092074B94AF8FDD23F6E49EEA36DB26B03F4D5B (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31* ____ireference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31 = il2cpp_codegen_com_query_interface<IReference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Guid_t  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t9B1E4800A0C7FCF3F792739ED6F23DE204414B31->IReference_1_get_Value_m2092074B94AF8FDD23F6E49EEA36DB26B03F4D5B(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int16>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t IReference_1_get_Value_m009A2D32288A345CECC6E0DA21C6194026F7666A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t419B8E8D14A6383889A141DA48BA10EF53636954* ____ireference_1_t419B8E8D14A6383889A141DA48BA10EF53636954 = il2cpp_codegen_com_query_interface<IReference_1_t419B8E8D14A6383889A141DA48BA10EF53636954>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int16_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t419B8E8D14A6383889A141DA48BA10EF53636954->IReference_1_get_Value_m009A2D32288A345CECC6E0DA21C6194026F7666A(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mE48C4EA35C8AD4467154020A633DD0CE76BAECA3 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4* ____ireference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4 = il2cpp_codegen_com_query_interface<IReference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t29C7708BA8286D396F6A505585E3D5D3140F38F4->IReference_1_get_Value_mE48C4EA35C8AD4467154020A633DD0CE76BAECA3(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t IReference_1_get_Value_mC1DCE564A165482AD25C6BD877FB304DFD83E468 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA* ____ireference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA = il2cpp_codegen_com_query_interface<IReference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int64_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tF0A5EAE209B2A4326BA3EC8A7038A82A86A4DDEA->IReference_1_get_Value_mC1DCE564A165482AD25C6BD877FB304DFD83E468(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Numerics.Matrix4x4>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  IReference_1_get_Value_m7C0191A2C009ECE3D838D0FEAA41921C69218E6F (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t59BAE58AEE4691B3CB0C85AEC0A0DAD22B3A621D* ____ireference_1_t59BAE58AEE4691B3CB0C85AEC0A0DAD22B3A621D = il2cpp_codegen_com_query_interface<IReference_1_t59BAE58AEE4691B3CB0C85AEC0A0DAD22B3A621D>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t59BAE58AEE4691B3CB0C85AEC0A0DAD22B3A621D->IReference_1_get_Value_m7C0191A2C009ECE3D838D0FEAA41921C69218E6F(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Numerics.Quaternion>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  IReference_1_get_Value_m6F5DFC962B0A06BE8A80B15004B53C06FE46E26A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tA572A94183D822093E17AD99D1D7B9AB4C7D86A4* ____ireference_1_tA572A94183D822093E17AD99D1D7B9AB4C7D86A4 = il2cpp_codegen_com_query_interface<IReference_1_tA572A94183D822093E17AD99D1D7B9AB4C7D86A4>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_tA572A94183D822093E17AD99D1D7B9AB4C7D86A4->IReference_1_get_Value_m6F5DFC962B0A06BE8A80B15004B53C06FE46E26A(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Numerics.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  IReference_1_get_Value_m212A34C7FC7FAB2070BAA9820F7D3CA9A2BE8D22 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t967E90155A4ACA584D5391A0BC3B0691C31E1893* ____ireference_1_t967E90155A4ACA584D5391A0BC3B0691C31E1893 = il2cpp_codegen_com_query_interface<IReference_1_t967E90155A4ACA584D5391A0BC3B0691C31E1893>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t967E90155A4ACA584D5391A0BC3B0691C31E1893->IReference_1_get_Value_m212A34C7FC7FAB2070BAA9820F7D3CA9A2BE8D22(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC* ____ireference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC = il2cpp_codegen_com_query_interface<IReference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	const il2cpp_hresult_t hr = ____ireference_1_t76CDB39CEDF6319F796E177E5DE8F647F5A5B5FC->IReference_1_get_Value_m91B4C7051DB8EDBBE97C702D1A10292EA36CD182(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);

		if (il2cpp_codegen_is_import_or_windows_runtime(_returnValue_unmarshaled))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(_returnValue_unmarshaled), Il2CppIInspectable::IID, returnValue);
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7  IReference_1_get_Value_m78D0A55EF00DD60A84EA917FE395A1CE38335D73 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4AC807526F70CF6E9296724F26CD756605107A36* ____ireference_1_t4AC807526F70CF6E9296724F26CD756605107A36 = il2cpp_codegen_com_query_interface<IReference_1_t4AC807526F70CF6E9296724F26CD756605107A36>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	EventRegistrationToken_tE1F3FD8339DB10082B4291DE47C45A352DCB08A7  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t4AC807526F70CF6E9296724F26CD756605107A36->IReference_1_get_Value_m78D0A55EF00DD60A84EA917FE395A1CE38335D73(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Single>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float IReference_1_get_Value_m4B38DAA5B9FADBB6A97FFD1A66E45532BD63E4D8 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482* ____ireference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482 = il2cpp_codegen_com_query_interface<IReference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	float returnValue = 0.0f;
	const il2cpp_hresult_t hr = ____ireference_1_tEB8F9D718A8787AFD2C98617833E4FC35E902482->IReference_1_get_Value_m4B38DAA5B9FADBB6A97FFD1A66E45532BD63E4D8(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.String>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563* ____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563 = il2cpp_codegen_com_query_interface<IReference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Il2CppHString returnValue = NULL;
	const il2cpp_hresult_t hr = ____ireference_1_tA3B1E091D250AED9C946E9609CDAEC80264F5563->IReference_1_get_Value_m3FF840BC019723F645FC6EF8CC73606E9EE0D844(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA* ____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA = il2cpp_codegen_com_query_interface<IReference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_tFD875FBD21CADF906333AF0B909CD2B2CF85EFBA->IReference_1_get_Value_m2B782C3D5622F00647095637D317BE1495519FCD(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Type>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97* ____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97 = il2cpp_codegen_com_query_interface<IReference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Il2CppWindowsRuntimeTypeName returnValue = Il2CppWindowsRuntimeTypeName();
	const il2cpp_hresult_t hr = ____ireference_1_t9B1EA41F300EA5823D42EB8C305792D7F5261E97->IReference_1_get_Value_m437342D7C3C9C644A0628E947BD45979D2C6847C(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Type_t * _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_type_from_native(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_delete_native_type(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt16>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB* ____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB = il2cpp_codegen_com_query_interface<IReference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint16_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tC7A6B390E90FA83DC2C998B75295538FF93643AB->IReference_1_get_Value_mA2A6F9C57F179D394456F66468EA0B46081C160A(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00* ____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00 = il2cpp_codegen_com_query_interface<IReference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tB2F2E0CD43CAEB9F74262EDD01DA07CCEA9A2D00->IReference_1_get_Value_m7E579377BE9FD2F87748D6B54100D3127B0A8302(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371* ____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371 = il2cpp_codegen_com_query_interface<IReference_1_t76BE3B182DE2AFB7180314501BAD401974550371>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint64_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t76BE3B182DE2AFB7180314501BAD401974550371->IReference_1_get_Value_m7A2645A084F28DD4D69B4A065A420D2DC59A8C76(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614* ____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614 = il2cpp_codegen_com_query_interface<IReference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t83A931601F5195DB6FFF65AB9A309CBC26BCA614->IReference_1_get_Value_m6209CEAC51680E439AA6245571854BA1F7AE6304(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4* ____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4 = il2cpp_codegen_com_query_interface<IReference_1_tDB374689D094BEB200D3B354DC916CA5889930B4>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	DateTime_t9D0F9E236B6200FF6413DD837230D25E285E7795  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_tDB374689D094BEB200D3B354DC916CA5889930B4->IReference_1_get_Value_m8A2147DBABB963656671ACB6C0BC03A06A02DA4A(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  IReference_1_get_Value_m93D0577BA82B2418EB4B2DCF81F86934016908A7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44* ____ireference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44 = il2cpp_codegen_com_query_interface<IReference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	EventRegistrationToken_tB7331C6A2CA7A6A9AD497264E9E787B3B71126D4  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t2743E3BA6B940A699EE49615FBA484964C9B8B44->IReference_1_get_Value_m93D0577BA82B2418EB4B2DCF81F86934016908A7(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E* ____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E = il2cpp_codegen_com_query_interface<IReference_1_t5A6F21153F46184B91D3803A669C812309053C2E>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	FoundationContract_tA5129870FD2EAAE9518C2EA28B32757D4FD977E9  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t5A6F21153F46184B91D3803A669C812309053C2E->IReference_1_get_Value_m4F109C5DA2FF9F7BD3F605BB09430CA3F936807A(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.HResult>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E* ____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E = il2cpp_codegen_com_query_interface<IReference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	HResult_tD2916D1ECD3A4E474B4A639B8D27E510FF8421DB  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t9BBCE4CCCD926DFB5670735553DCC34756C5BF9E->IReference_1_get_Value_m310ABD51534A3ABADF2474DAC870D26B1706D4A1(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256* ____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256 = il2cpp_codegen_com_query_interface<IReference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t14DAE467685CF0D26BDDDFEEF8C8793E49BE3256->IReference_1_get_Value_m0F953FE55F90100B2381188B132B5FAA7D5A4929(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tAED774804E022955C705DD94598B4447B0142C06* ____ireference_1_tAED774804E022955C705DD94598B4447B0142C06 = il2cpp_codegen_com_query_interface<IReference_1_tAED774804E022955C705DD94598B4447B0142C06>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tAED774804E022955C705DD94598B4447B0142C06->IReference_1_get_Value_m1DF83BE7461C683CF165E03BC4915F4FFC2690C6(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD* ____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD = il2cpp_codegen_com_query_interface<IReference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tA168AABD94AF22150BA9FF1C22BB9D589944D6FD->IReference_1_get_Value_m7AA4C5DD3527F1B19462C726F511D88FC12FBE6B(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Matrix4x4>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9  IReference_1_get_Value_m2492E30E817B6A78C5A7C728CD3DFFA25D4608BF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t83324F52C6450F1C6DEDB644D38367FCE61372E1* ____ireference_1_t83324F52C6450F1C6DEDB644D38367FCE61372E1 = il2cpp_codegen_com_query_interface<IReference_1_t83324F52C6450F1C6DEDB644D38367FCE61372E1>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Matrix4x4_tDA520C56DAF83F993AAC508EE28B33C1310721A9  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t83324F52C6450F1C6DEDB644D38367FCE61372E1->IReference_1_get_Value_m2492E30E817B6A78C5A7C728CD3DFFA25D4608BF(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Quaternion>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C  IReference_1_get_Value_mB4F86E26F7843886681B8F2CF9CDA79DC74827E7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t926809CC0C2BCDF32D15E8A86885B7F4BE14A59F* ____ireference_1_t926809CC0C2BCDF32D15E8A86885B7F4BE14A59F = il2cpp_codegen_com_query_interface<IReference_1_t926809CC0C2BCDF32D15E8A86885B7F4BE14A59F>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Quaternion_t7BAD18B1DD679715F8E0E79AD9FB22C0E313023C  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t926809CC0C2BCDF32D15E8A86885B7F4BE14A59F->IReference_1_get_Value_mB4F86E26F7843886681B8F2CF9CDA79DC74827E7(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD  IReference_1_get_Value_m5A5957990F5156FC2709CA1F6E406C6A0C4AD6A3 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8* ____ireference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8 = il2cpp_codegen_com_query_interface<IReference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8->IReference_1_get_Value_m5A5957990F5156FC2709CA1F6E406C6A0C4AD6A3(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121* ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 = il2cpp_codegen_com_query_interface<IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121->IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696* ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 = il2cpp_codegen_com_query_interface<IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696->IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1* ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 = il2cpp_codegen_com_query_interface<IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1->IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9* ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 = il2cpp_codegen_com_query_interface<IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9->IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34* ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 = il2cpp_codegen_com_query_interface<IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34->IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60* ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 = il2cpp_codegen_com_query_interface<IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60->IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_t4766FF009097CE547F699B69250246058DA664D9  IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5* ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 = il2cpp_codegen_com_query_interface<IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Size_t4766FF009097CE547F699B69250246058DA664D9  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5->IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tD18885B289077804D4E82931E68E84181C072755  IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921* ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 = il2cpp_codegen_com_query_interface<IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	TimeSpan_tD18885B289077804D4E82931E68E84181C072755  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921->IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32* ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 = il2cpp_codegen_com_query_interface<IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32->IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicStereoTransform>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HolographicStereoTransform_t473ED88570152901E23CF1519A0836AEEC89DD48  IReference_1_get_Value_m4224052FC9A57C3E614F284CE956825C3C004B95 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t9FD93A19E4B198BB35082CCC0F3201BB2181E7C4* ____ireference_1_t9FD93A19E4B198BB35082CCC0F3201BB2181E7C4 = il2cpp_codegen_com_query_interface<IReference_1_t9FD93A19E4B198BB35082CCC0F3201BB2181E7C4>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	HolographicStereoTransform_t473ED88570152901E23CF1519A0836AEEC89DD48  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t9FD93A19E4B198BB35082CCC0F3201BB2181E7C4->IReference_1_get_Value_m4224052FC9A57C3E614F284CE956825C3C004B95(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicViewConfigurationKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mB500DD4EC51CF23CA8B4D79F9CBF5E4C254AB0E1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4* ____ireference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4 = il2cpp_codegen_com_query_interface<IReference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4->IReference_1_get_Value_mB500DD4EC51CF23CA8B4D79F9CBF5E4C254AB0E1(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Perception.People.HandJointKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mAE5A8F99060F1DC39B04303111B9B0936CF2EE59 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA* ____ireference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA = il2cpp_codegen_com_query_interface<IReference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA->IReference_1_get_Value_mAE5A8F99060F1DC39B04303111B9B0936CF2EE59(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Perception.People.HandMeshVertex>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  IReference_1_get_Value_mE6C0B7EE13DDE444F05495C7D1FB93F46BD4B1A9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t0D003B77C43341B97E803664305892C337680D66* ____ireference_1_t0D003B77C43341B97E803664305892C337680D66 = il2cpp_codegen_com_query_interface<IReference_1_t0D003B77C43341B97E803664305892C337680D66>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t0D003B77C43341B97E803664305892C337680D66->IReference_1_get_Value_mE6C0B7EE13DDE444F05495C7D1FB93F46BD4B1A9(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Perception.People.JointPose>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE  IReference_1_get_Value_m5C473856F84B9723FF4AFFA39ACD3BC9FB2FE6EF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t20F75434E9A39E107D795462E73230FC877DB3FC* ____ireference_1_t20F75434E9A39E107D795462E73230FC877DB3FC = il2cpp_codegen_com_query_interface<IReference_1_t20F75434E9A39E107D795462E73230FC877DB3FC>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t20F75434E9A39E107D795462E73230FC877DB3FC->IReference_1_get_Value_m5C473856F84B9723FF4AFFA39ACD3BC9FB2FE6EF(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Perception.People.JointPoseAccuracy>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1CF326D0DC7E3C56CE53356E28D6DB71110F7928 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89* ____ireference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89 = il2cpp_codegen_com_query_interface<IReference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89->IReference_1_get_Value_m1CF326D0DC7E3C56CE53356E28D6DB71110F7928(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialRay>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B  IReference_1_get_Value_mB45907A0F269EA7A626EF7D881399186893863D9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099* ____ireference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099 = il2cpp_codegen_com_query_interface<IReference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099->IReference_1_get_Value_mB45907A0F269EA7A626EF7D881399186893863D9(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6* ____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6 = il2cpp_codegen_com_query_interface<IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6->IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IReference_1_get_Value_m29DABAFAF45FE5B35150EB56DB1AC7608AC04108 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC* ____ireference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC = il2cpp_codegen_com_query_interface<IReference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	uint32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t4D805BBA32CE3FB48729C326E9DCD206E80E52DC->IReference_1_get_Value_m29DABAFAF45FE5B35150EB56DB1AC7608AC04108(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Input.GazeInputAccessStatus>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m9952B601AF3C6D205C72E5DA9AEDDB03A369E4EF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0* ____ireference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0 = il2cpp_codegen_com_query_interface<IReference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0->IReference_1_get_Value_m9952B601AF3C6D205C72E5DA9AEDDB03A369E4EF(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mF07E9CA6EB648C14F614907C0DCDE6EB539C3FBF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A* ____ireference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A = il2cpp_codegen_com_query_interface<IReference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A->IReference_1_get_Value_mF07E9CA6EB648C14F614907C0DCDE6EB539C3FBF(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mF64790DEC6FF93C719750283EA8C9CFB1EA82AE0 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA* ____ireference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA = il2cpp_codegen_com_query_interface<IReference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA->IReference_1_get_Value_mF64790DEC6FF93C719750283EA8C9CFB1EA82AE0(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882* ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 = il2cpp_codegen_com_query_interface<IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882->IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3 (RuntimeObject* __this, const RuntimeMethod* method)
{


	IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD* ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD = il2cpp_codegen_com_query_interface<IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD->IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  _returnValue_unmarshaled;
	memset((&_returnValue_unmarshaled), 0, sizeof(_returnValue_unmarshaled));
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2__ctor_m85032F233E9CD404100BF0E1F486F562DF83EF10_gshared (TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2_Invoke_m6C97DE5DB76454B1184C5D0191F7A4EC125172F1_gshared (TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___args1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
