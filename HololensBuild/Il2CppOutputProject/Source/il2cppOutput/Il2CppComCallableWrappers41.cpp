#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "vm/CachedCCWBase.h"
#include "os/Unity/UnityPlatformConfigure.h"
#include "il2cpp-object-internals.h"


// System.Collections.Generic.IList`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct IList_1_tFA5F34A5718DF9697F8A5CDEBB0D5B67ECA145D0;
// System.Collections.Generic.IList`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct IList_1_t1CF742503D262ECCC1641286D63C75269C28DC26;
// System.Collections.Generic.IList`1<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct IList_1_t6041AAB3DA7D70BC93730725D3F7F70B619ED6B4;
// System.Collections.Generic.List`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct List_1_tC7C1DCC156CBCD0EA2C17A5153C8C7FA929EFA2F;
// System.Collections.Generic.List`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501;
// System.Collections.Generic.List`1<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F;
// UnityEngine.Rendering.UI.DebugUIHandlerPanel
struct DebugUIHandlerPanel_tC8172008FA9E31AE6321B945A0AE0791EE377936;
// UnityEngine.Rendering.UI.DebugUIHandlerValue
struct DebugUIHandlerValue_t33F0E6FBF0203ADAD8AB952E53825659A9925AC6;
// UnityEngine.Rendering.UI.DebugUIHandlerValue[]
struct DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F;
// UnityEngine.Rendering.UI.DebugUIHandlerWidget
struct DebugUIHandlerWidget_t07EF4C75C5D1289130896F49AF95DD7EA819A58B;
// UnityEngine.Rendering.UI.DebugUIHandlerWidget[]
struct DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242;
// Windows.Foundation.Collections.IIterator`1<TMPro.Examples.VertexJitter/VertexAnim>
struct IIterator_1_t3D46F7E62E77207F2D51FB84CF4FEB3E2CF26C3E;

struct IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B;
struct IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96;
struct IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA(IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t5808AF951019E4388C66F7A88AC569F52F581167 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() = 0;
};

// System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.ICollection`1<UnityEngine.Vector3>>
struct  EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3 * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>>
struct  EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IList`1<UnityEngine.Vector3>>
struct  EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898 * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.Vector3>>
struct  EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2 * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>>
struct  EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115 * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<TMPro.Examples.VertexJitter/VertexAnim>
struct  EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct  EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9 * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct  EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0 * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Array/EmptyInternalEnumerator`1<UnityEngine.Vector3[]>
struct  EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E  : public RuntimeObject
{
public:

public:
};

struct EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_StaticFields
{
public:
	// System.Array/EmptyInternalEnumerator`1<T> System.Array/EmptyInternalEnumerator`1::Value
	EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_StaticFields, ___Value_0)); }
	inline EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E * get_Value_0() const { return ___Value_0; }
	inline EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct  List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501, ____items_1)); }
	inline DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F* get__items_1() const { return ____items_1; }
	inline DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_StaticFields, ____emptyArray_5)); }
	inline DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DebugUIHandlerValueU5BU5D_t2CBBC537848B7869901B833DDD6815F445D5EE3F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct  List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F, ____items_1)); }
	inline DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242* get__items_1() const { return ____items_1; }
	inline DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_StaticFields, ____emptyArray_5)); }
	inline DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DebugUIHandlerWidgetU5BU5D_t2E4705361BC82CFFE944866C6AF5524C32F35242* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct  ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct  ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct  ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// System.Array/InternalEnumerator`1<System.Collections.Generic.ICollection`1<UnityEngine.Vector3>>
struct  InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>>
struct  InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.IList`1<UnityEngine.Vector3>>
struct  InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.Vector3>>
struct  InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>>
struct  InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<TMPro.Examples.VertexJitter/VertexAnim>
struct  InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct  InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct  InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Array/InternalEnumerator`1<UnityEngine.Vector3[]>
struct  InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	RuntimeArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_0), (void*)value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_pinvoke
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif
// Native definition for COM marshalling of System.Array/InternalEnumerator`1
#ifndef InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
#define InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com_define
struct InternalEnumerator_1_t2230E371CD528773FD327FDC447CE231DE2AAA56_marshaled_com
{
	RuntimeArray * ___array_0;
	int32_t ___idx_1;
};
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct  Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC7C1DCC156CBCD0EA2C17A5153C8C7FA929EFA2F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DebugUIHandlerPanel_tC8172008FA9E31AE6321B945A0AE0791EE377936 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1, ___list_0)); }
	inline List_1_tC7C1DCC156CBCD0EA2C17A5153C8C7FA929EFA2F * get_list_0() const { return ___list_0; }
	inline List_1_tC7C1DCC156CBCD0EA2C17A5153C8C7FA929EFA2F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC7C1DCC156CBCD0EA2C17A5153C8C7FA929EFA2F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1, ___current_3)); }
	inline DebugUIHandlerPanel_tC8172008FA9E31AE6321B945A0AE0791EE377936 * get_current_3() const { return ___current_3; }
	inline DebugUIHandlerPanel_tC8172008FA9E31AE6321B945A0AE0791EE377936 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DebugUIHandlerPanel_tC8172008FA9E31AE6321B945A0AE0791EE377936 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct  Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DebugUIHandlerValue_t33F0E6FBF0203ADAD8AB952E53825659A9925AC6 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B, ___list_0)); }
	inline List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501 * get_list_0() const { return ___list_0; }
	inline List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B, ___current_3)); }
	inline DebugUIHandlerValue_t33F0E6FBF0203ADAD8AB952E53825659A9925AC6 * get_current_3() const { return ___current_3; }
	inline DebugUIHandlerValue_t33F0E6FBF0203ADAD8AB952E53825659A9925AC6 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DebugUIHandlerValue_t33F0E6FBF0203ADAD8AB952E53825659A9925AC6 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct  Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	DebugUIHandlerWidget_t07EF4C75C5D1289130896F49AF95DD7EA819A58B * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293, ___list_0)); }
	inline List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F * get_list_0() const { return ___list_0; }
	inline List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293, ___current_3)); }
	inline DebugUIHandlerWidget_t07EF4C75C5D1289130896F49AF95DD7EA819A58B * get_current_3() const { return ___current_3; }
	inline DebugUIHandlerWidget_t07EF4C75C5D1289130896F49AF95DD7EA819A58B ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(DebugUIHandlerWidget_t07EF4C75C5D1289130896F49AF95DD7EA819A58B * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// TMPro.Examples.VertexJitter/VertexAnim
struct  VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C 
{
public:
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angleRange
	float ___angleRange_0;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::angle
	float ___angle_1;
	// System.Single TMPro.Examples.VertexJitter/VertexAnim::speed
	float ___speed_2;

public:
	inline static int32_t get_offset_of_angleRange_0() { return static_cast<int32_t>(offsetof(VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C, ___angleRange_0)); }
	inline float get_angleRange_0() const { return ___angleRange_0; }
	inline float* get_address_of_angleRange_0() { return &___angleRange_0; }
	inline void set_angleRange_0(float value)
	{
		___angleRange_0 = value;
	}

	inline static int32_t get_offset_of_angle_1() { return static_cast<int32_t>(offsetof(VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C, ___angle_1)); }
	inline float get_angle_1() const { return ___angle_1; }
	inline float* get_address_of_angle_1() { return &___angle_1; }
	inline void set_angle_1(float value)
	{
		___angle_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}
};


// System.Runtime.InteropServices.WindowsRuntime.IIteratorToIEnumeratorAdapter`1<TMPro.Examples.VertexJitter/VertexAnim>
struct  IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD  : public RuntimeObject
{
public:
	// Windows.Foundation.Collections.IIterator`1<T> System.Runtime.InteropServices.WindowsRuntime.IIteratorToIEnumeratorAdapter`1::iterator
	RuntimeObject* ___iterator_0;
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.IIteratorToIEnumeratorAdapter`1::initialized
	bool ___initialized_1;
	// System.Boolean System.Runtime.InteropServices.WindowsRuntime.IIteratorToIEnumeratorAdapter`1::hadCurrent
	bool ___hadCurrent_2;
	// T System.Runtime.InteropServices.WindowsRuntime.IIteratorToIEnumeratorAdapter`1::current
	VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C  ___current_3;

public:
	inline static int32_t get_offset_of_iterator_0() { return static_cast<int32_t>(offsetof(IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD, ___iterator_0)); }
	inline RuntimeObject* get_iterator_0() const { return ___iterator_0; }
	inline RuntimeObject** get_address_of_iterator_0() { return &___iterator_0; }
	inline void set_iterator_0(RuntimeObject* value)
	{
		___iterator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iterator_0), (void*)value);
	}

	inline static int32_t get_offset_of_initialized_1() { return static_cast<int32_t>(offsetof(IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD, ___initialized_1)); }
	inline bool get_initialized_1() const { return ___initialized_1; }
	inline bool* get_address_of_initialized_1() { return &___initialized_1; }
	inline void set_initialized_1(bool value)
	{
		___initialized_1 = value;
	}

	inline static int32_t get_offset_of_hadCurrent_2() { return static_cast<int32_t>(offsetof(IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD, ___hadCurrent_2)); }
	inline bool get_hadCurrent_2() const { return ___hadCurrent_2; }
	inline bool* get_address_of_hadCurrent_2() { return &___hadCurrent_2; }
	inline void set_hadCurrent_2(bool value)
	{
		___hadCurrent_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD, ___current_3)); }
	inline VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C  get_current_3() const { return ___current_3; }
	inline VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(VertexAnim_t8FDDCAB8C8E4CDA915AACE07F8ACD16108BEA61C  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);



// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_t825EE99CD8DF7261B058F826D11901A3A56854F9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_tC6176DD644C36C071A3D118CF6C01159F2491767_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD_ComCallableWrapper>, IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39, IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356
{
	inline ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID;
		interfaceIds[1] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[2] = IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID;
		interfaceIds[3] = IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA(IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadOnlyCollection_1_tEB1D57B09D5B3CB34A6F20AF11090C9FFB0E7EDD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.UI.DebugUIHandlerPanel>
struct Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t5A96E34E3985B4BEB91207AA9C6C3F4EBE741FE1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.List`1<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_ComCallableWrapper>, IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39, IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356
{
	inline List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID;
		interfaceIds[1] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[2] = IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID;
		interfaceIds[3] = IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA(IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_tCCEF4394D678FB8297BDB136C3AC62649DE2A08F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10_ComCallableWrapper>, IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39, IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356
{
	inline ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID;
		interfaceIds[1] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[2] = IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID;
		interfaceIds[3] = IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA(IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadOnlyCollection_1_tAA0CE46EE547CBAE6E073C478806EC5D56CE2B10_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.UI.DebugUIHandlerWidget>
struct Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_t03542ADB8FAFE46365390DA4CC0A126A5AEC1293_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.List`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_ComCallableWrapper>, IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39, IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356
{
	inline List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID;
		interfaceIds[1] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[2] = IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID;
		interfaceIds[3] = IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA(IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) List_1_t0FEF74F368CB2D26F5490E1466C38A7ED2BFA501_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_tB8C29A5E3EB70EE7937B3622B966953CB945AEA0_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_tDBEF90547F4C2F1F9345244D66AA344AB9BE72F9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2_ComCallableWrapper>, IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397, IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7, IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39, IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356
{
	inline ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_tCEBE09BB51EEAF144D8DFD26AEE42C0695F99397::IID;
		interfaceIds[1] = IBindableIterable_t9143D67D77A22933794984D33C26495AE2C9D6D7::IID;
		interfaceIds[2] = IBindableVector_tA1A0182B1D20219B22AE55394F419A2646929D39::IID;
		interfaceIds[3] = IVectorView_1_t8FBE5F15A5FFCD784D7B38F649A6315DDACD4356::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA(IIterator_1_tA04383FFA0185AABAD6F01DDC8F1F647A62813AC** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mEBD699B895F6C57B27C7D0C9333B708809D3C3AA_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF(IBindableIterator_t4EB9DDBBBED9295CB77A2FAD2C1171407B95575B** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m249B6233E8E52974472E2DE151F79DB53F1E4FDF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m860227C0726F0C40C40300F2D114C90C040DCFBD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m1804E8861F18C40EC16058667D11382062A82771_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB(IBindableVectorView_tBF7B9AC876701C1D216FBE0DC2FB4EB248280C96** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m6207353D6B455F00DEDB5344E45BC50B9D101DEB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_mF971A05290A1678F48EC52978E53A9CBA688E489_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_m4658569CC8E08EF010A7EB35E66059F7D4BBFDB8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_mA154571EE15503B3425185CFB55419AA4ED3BD59_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m7B14341EBAE9C5799028FC3EF0771210595F4E3C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_m623B1AF95642A0AE7BE231983B60CC203FDF4214_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_m391C9A85A1C813017D9EBB3211CA294156F654FC_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mBEA87A79EBF207B3F5701BB09506759CBC6F5ED1_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_mD3660639E080D0270BD89F5FF0E11D420C7C24A3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m0843BB6131B4AABC19D01E1F36A545E661F1D836_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_m5856F61ED284420941D9E9331FB3334F5592B4B7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m7D4ECA15D113EFDF96BC56FFEA31151E28191EB3_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ReadOnlyCollection_1_t74750D3EAAF7134C6F4AF9C1140132708D3B63A2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.UI.DebugUIHandlerValue>
struct Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Enumerator_tC7150391DF2BFA827C5645D195089A770525B07B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<TMPro.Examples.VertexJitter/VertexAnim>
struct EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_t07BADD341FBF786064E6B4A82E8FFE9BD53A7CBA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<TMPro.Examples.VertexJitter/VertexAnim>
struct InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_t3C374BC2F275D4E17A539F3F64AA896C73E5E118_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.InteropServices.WindowsRuntime.IIteratorToIEnumeratorAdapter`1<TMPro.Examples.VertexJitter/VertexAnim>
struct IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) IIteratorToIEnumeratorAdapter_1_t42CAC3A58CCE9A5FDC29D7EECB465CA3E271C9DD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<UnityEngine.Vector3[]>
struct EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_t0F7ADA990AB986F77E0C4101CFBBF234BEFA3F8E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<UnityEngine.Vector3[]>
struct InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_tAA33157DF93B1615EB1FBECB2024B96312B916FE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IList`1<UnityEngine.Vector3>>
struct EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_t03D7026057691D2618D4F455681E3B3656FCF898_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<System.Collections.Generic.IList`1<UnityEngine.Vector3>>
struct InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_t5B3F220A05B50FE539A419D70301E81754EB3E30_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.ICollection`1<UnityEngine.Vector3>>
struct EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_tA01884937D62EA314CF74F953A3FE19ED015BFD3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<System.Collections.Generic.ICollection`1<UnityEngine.Vector3>>
struct InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_t51AD941EDC5E8AAE0C5D8D0ADAF4DAE13A78A8C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>>
struct EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_t5D7C6E6C4F71C6AF3D4A2A844C92D670F9AAD22B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>>
struct InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_t81CAC57869A304DFE0F73B09AAD13C54EB60B9B9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>>
struct EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_t88E4CE95311A780A25B573476BE2035C4BD75115_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<System.Collections.Generic.IReadOnlyList`1<UnityEngine.Vector3>>
struct InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_t92A26B403F8C5D9448682EFAA61D897BCA3D4B05_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/EmptyInternalEnumerator`1<System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.Vector3>>
struct EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) EmptyInternalEnumerator_1_tD06A097522144E544DF7A55C6D997FE4E753D2B2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Array/InternalEnumerator`1<System.Collections.Generic.IReadOnlyCollection`1<UnityEngine.Vector3>>
struct InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358_ComCallableWrapper>, IClosable_t5808AF951019E4388C66F7A88AC569F52F581167
{
	inline InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t5808AF951019E4388C66F7A88AC569F52F581167*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t5808AF951019E4388C66F7A88AC569F52F581167::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m9A054CE065D4C97FAF595A8F92B3CB3463C5BCD6_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) InternalEnumerator_1_t907FD59414B9325E59381586CD1EC2DC4BDFD358_ComCallableWrapper(obj));
}
