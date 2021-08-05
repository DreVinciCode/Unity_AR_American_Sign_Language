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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t86B8C18CE9950C6BCA684AA052D5C04802DA1CC0;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t0DC4E04480C1237A73F92B0DA2B570122E57DB9A;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2;
// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>
struct Action_1_t2C5A2C8B6FBBFDA6B39063AD2C80A110BA9748F7;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_t4B4F15B1AF6A321EB08EB16B08CD4F09624B3D63;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t31E85CDA2550B5F9A119FA262255E83265909C80;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_tAC43090D72591BE83F99704BCD8A0B6130A5B324;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct List_1_tC9A785F822E76743C38D8AEBECCF8DC686B2C9B5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82;
// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_t1D9B9431DC8E643C86300156798632FB6B945A03;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A;
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6;
// UnityEngine.XR.InputFeatureUsage[]
struct InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE;

IL2CPP_EXTERN_C RuntimeClass* AxisType_tB1349A32D492597F2BE1244EDFC343C295DE7E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t888DE3DBB2AFBE6DDC3347BEEA92551CC0504499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSource_t769232035FD76C1A690AC71A043E7BBA8FFF437F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t86B8C18CE9950C6BCA684AA052D5C04802DA1CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
IL2CPP_EXTERN_C String_t* _stringLiteral28FED197ABA6B0075AA7B18880CBE300693BB570;
IL2CPP_EXTERN_C String_t* _stringLiteral33431061FB309988E60F609A990F2B456CA63E30;
IL2CPP_EXTERN_C String_t* _stringLiteral36E9E9FFC9D20BBF09FD7D86DB639097F5EE8B4A;
IL2CPP_EXTERN_C String_t* _stringLiteral42CBDB3C55980503B68E044C73B768E2C1557D44;
IL2CPP_EXTERN_C String_t* _stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1;
IL2CPP_EXTERN_C String_t* _stringLiteral50B513476C44C4C0D8F32FE3219FC397F34664A0;
IL2CPP_EXTERN_C String_t* _stringLiteral5ADBC2B8C5C1C93843CDFB9A3FAE9F48D40CAF17;
IL2CPP_EXTERN_C String_t* _stringLiteral6126CDA8ABEA9B72D62B5EBC6AB525CB287F4D14;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6A465F04662494BCF2CDD14B39035E925D63B3;
IL2CPP_EXTERN_C String_t* _stringLiteral6FB374FAAB4FAB74CFBBCC828F8657A89110BAF1;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D;
IL2CPP_EXTERN_C String_t* _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE;
IL2CPP_EXTERN_C String_t* _stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359;
IL2CPP_EXTERN_C String_t* _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
IL2CPP_EXTERN_C String_t* _stringLiteralA3D184DB250EBD180FDF004D8BE609BC10A18291;
IL2CPP_EXTERN_C String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
IL2CPP_EXTERN_C String_t* _stringLiteralB45954F905A38D65AD0E29796BCC199C6146A930;
IL2CPP_EXTERN_C String_t* _stringLiteralB4AB17AF25666479BF1B9F04718B963E43946C3D;
IL2CPP_EXTERN_C String_t* _stringLiteralD95F39C503EAA958DC1BCE86E2C4A4612B82C155;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9394AFBC6E88C8507B73D42D723C35273A2B3FC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDFD57149E873C7888610D0DFE33FFE0E87EB9956_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCB6B4FD35786F93407FD6642B9CAE1C9D1E28137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mFFE5F213ACD188E721D159602434C9389478CC73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t DisplayInputResult_OnValidate_m19189143D93DADB31428BAEBF57482D5184DB83A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DisplayInputResult_Update_m0341EE3F4715C8DF8779A0CFD261AEBABD9305AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListInputFeatureUsages_Update_m758349EA798BE7A7835508CDA78247A33E5B6675_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ListInputFeatureUsages__ctor_m6BB660F7339FBC10523A73D6040793E17668205D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MixedRealityInteractionTool_Update_m421D81AC22BBC79BB12A136719D1A253DCE801A4_MetadataUsageId;

struct MixedRealityInteractionMappingU5BU5D_tAFDC8ACB7CE85B38D7A81BC15A7B9865F000537D;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCC689B21845861D10FDC255EBAE90CAA30413C92 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t4B4F15B1AF6A321EB08EB16B08CD4F09624B3D63* ____slots_8;
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
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____slots_8)); }
	inline SlotU5BU5D_t4B4F15B1AF6A321EB08EB16B08CD4F09624B3D63* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t4B4F15B1AF6A321EB08EB16B08CD4F09624B3D63** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t4B4F15B1AF6A321EB08EB16B08CD4F09624B3D63* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* ____slots_8;
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
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____slots_8)); }
	inline SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t9C4FFBCC974570D24EDC1028CCD0269BE774B36C* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____items_1)); }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* get__items_1() const { return ____items_1; }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_StaticFields, ____emptyArray_5)); }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextMeshU5BU5D_t6C46DABCE2E499BCAB13DDDEC1393FDE4A69DAAE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____items_1)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_t1D9B9431DC8E643C86300156798632FB6B945A03  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____items_1)); }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* get__items_1() const { return ____items_1; }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_StaticFields, ____emptyArray_5)); }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputFeatureUsageU5BU5D_t264508A7622814341E2F64A19689DFD2B1CAC9CE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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


// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8, ____set_0)); }
	inline HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____set_0)); }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
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


// System.Nullable`1<System.Int32>
struct Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
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


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t9A2D85884C1D1EAF9562803964328AB7322B532F * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32>
struct InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>
struct InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_t82CCA5279B612F927F15DB8969A64FA79885F5CA 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_t82CCA5279B612F927F15DB8969A64FA79885F5CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType
struct DisplayType_t9477CE57515F7E7790399C0A8DECDEB263D1CE25 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t9477CE57515F7E7790399C0A8DECDEB263D1CE25, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_tB1349A32D492597F2BE1244EDFC343C295DE7E0C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_tB1349A32D492597F2BE1244EDFC343C295DE7E0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder
struct CollationOrder_t70C984516EF5C1B91FEFC0147037B88450968633 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.CollationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollationOrder_t70C984516EF5C1B91FEFC0147037B88450968633, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t301E8BC803842961C6D57055922A242B17CC242D 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t301E8BC803842961C6D57055922A242B17CC242D, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor
struct LayoutAnchor_t7BF835010771DC4220A5802F99973579D8C01F28 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutAnchor_t7BF835010771DC4220A5802F99973579D8C01F28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment
struct LayoutHorizontalAlignment_tE8DCD4C57E1EC05C6EDC23EBB0BB0E9B5C8CF87B 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutHorizontalAlignment_tE8DCD4C57E1EC05C6EDC23EBB0BB0E9B5C8CF87B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder
struct LayoutOrder_tB0E8A978BD4E3D5AE98F1FAE2EA717208D5388C4 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutOrder_tB0E8A978BD4E3D5AE98F1FAE2EA717208D5388C4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment
struct LayoutVerticalAlignment_t2E92BFDC5C215E686C0D2792B978A673065DE5DF 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutVerticalAlignment_t2E92BFDC5C215E686C0D2792B978A673065DE5DF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F, ___position_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_1() const { return ___position_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F, ___rotation_2)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType
struct ObjectOrientationSurfaceType_tD33513B479ED84A4D5261F84D855BF5C84A4F36C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectOrientationSurfaceType_tD33513B479ED84A4D5261F84D855BF5C84A4F36C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.OrientationType
struct OrientationType_t4A1D4EBEAF8DFA63BD852AF4F51B772230C07C4D 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationType_t4A1D4EBEAF8DFA63BD852AF4F51B772230C07C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.KeyCode
struct KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_tCE387272BD593C030B38B1A33F88059DE8A8D87B, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputFeatureType
struct InputFeatureType_t683990CF03F80321E203CDC5EDCA5846BB56BAF4 
{
public:
	// System.UInt32 UnityEngine.XR.InputFeatureType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputFeatureType_t683990CF03F80321E203CDC5EDCA5846BB56BAF4, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputTrackingState
struct InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933 
{
public:
	// System.UInt32 UnityEngine.XR.InputTrackingState::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
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


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::m_InternalType
	uint32_t ___m_InternalType_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalType_1() { return static_cast<int32_t>(offsetof(InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C, ___m_InternalType_1)); }
	inline uint32_t get_m_InternalType_1() const { return ___m_InternalType_1; }
	inline uint32_t* get_address_of_m_InternalType_1() { return &___m_InternalType_1; }
	inline void set_m_InternalType_1(uint32_t value)
	{
		___m_InternalType_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___inputAction_4)); }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___vector2Data_14)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___positionData_15)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___rotationData_16)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB, ___poseData_17)); }
	inline MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  value)
	{
		___poseData_17 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>
struct Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___list_0)); }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * get_list_0() const { return ___list_0; }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648, ___current_3)); }
	inline InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  get_current_3() const { return ___current_3; }
	inline InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_Name_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.TextMesh
struct TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___displayTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::inputType
	int32_t ___inputType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::axisNumber
	int32_t ___axisNumber_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::buttonNumber
	int32_t ___buttonNumber_7;
	// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayType
	int32_t ___displayType_8;

public:
	inline static int32_t get_offset_of_displayTextMesh_4() { return static_cast<int32_t>(offsetof(DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420, ___displayTextMesh_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_displayTextMesh_4() const { return ___displayTextMesh_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_displayTextMesh_4() { return &___displayTextMesh_4; }
	inline void set_displayTextMesh_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___displayTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_inputType_5() { return static_cast<int32_t>(offsetof(DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420, ___inputType_5)); }
	inline int32_t get_inputType_5() const { return ___inputType_5; }
	inline int32_t* get_address_of_inputType_5() { return &___inputType_5; }
	inline void set_inputType_5(int32_t value)
	{
		___inputType_5 = value;
	}

	inline static int32_t get_offset_of_axisNumber_6() { return static_cast<int32_t>(offsetof(DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420, ___axisNumber_6)); }
	inline int32_t get_axisNumber_6() const { return ___axisNumber_6; }
	inline int32_t* get_address_of_axisNumber_6() { return &___axisNumber_6; }
	inline void set_axisNumber_6(int32_t value)
	{
		___axisNumber_6 = value;
	}

	inline static int32_t get_offset_of_buttonNumber_7() { return static_cast<int32_t>(offsetof(DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420, ___buttonNumber_7)); }
	inline int32_t get_buttonNumber_7() const { return ___buttonNumber_7; }
	inline int32_t* get_address_of_buttonNumber_7() { return &___buttonNumber_7; }
	inline void set_buttonNumber_7(int32_t value)
	{
		___buttonNumber_7 = value;
	}

	inline static int32_t get_offset_of_displayType_8() { return static_cast<int32_t>(offsetof(DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420, ___displayType_8)); }
	inline int32_t get_displayType_8() const { return ___displayType_8; }
	inline int32_t* get_address_of_displayType_8() { return &___displayType_8; }
	inline void set_displayType_8(int32_t value)
	{
		___displayType_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::listInputDevicesTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___listInputDevicesTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::gridObjectCollection
	GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2 * ___gridObjectCollection_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___displayFeatureUsagesPrefab_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::leftInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___leftInputDevices_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::rightInputDevices
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___rightInputDevices_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::featureUsages
	List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * ___featureUsages_9;
	// System.Collections.Generic.List`1<UnityEngine.TextMesh> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesTextMeshes
	List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * ___displayFeatureUsagesTextMeshes_10;

public:
	inline static int32_t get_offset_of_listInputDevicesTextMesh_4() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570, ___listInputDevicesTextMesh_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_listInputDevicesTextMesh_4() const { return ___listInputDevicesTextMesh_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_listInputDevicesTextMesh_4() { return &___listInputDevicesTextMesh_4; }
	inline void set_listInputDevicesTextMesh_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___listInputDevicesTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listInputDevicesTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_gridObjectCollection_5() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570, ___gridObjectCollection_5)); }
	inline GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2 * get_gridObjectCollection_5() const { return ___gridObjectCollection_5; }
	inline GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2 ** get_address_of_gridObjectCollection_5() { return &___gridObjectCollection_5; }
	inline void set_gridObjectCollection_5(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2 * value)
	{
		___gridObjectCollection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridObjectCollection_5), (void*)value);
	}

	inline static int32_t get_offset_of_displayFeatureUsagesPrefab_6() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570, ___displayFeatureUsagesPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_displayFeatureUsagesPrefab_6() const { return ___displayFeatureUsagesPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_displayFeatureUsagesPrefab_6() { return &___displayFeatureUsagesPrefab_6; }
	inline void set_displayFeatureUsagesPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___displayFeatureUsagesPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFeatureUsagesPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_leftInputDevices_7() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570, ___leftInputDevices_7)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_leftInputDevices_7() const { return ___leftInputDevices_7; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_leftInputDevices_7() { return &___leftInputDevices_7; }
	inline void set_leftInputDevices_7(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___leftInputDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftInputDevices_7), (void*)value);
	}

	inline static int32_t get_offset_of_rightInputDevices_8() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570, ___rightInputDevices_8)); }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * get_rightInputDevices_8() const { return ___rightInputDevices_8; }
	inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 ** get_address_of_rightInputDevices_8() { return &___rightInputDevices_8; }
	inline void set_rightInputDevices_8(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * value)
	{
		___rightInputDevices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightInputDevices_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureUsages_9() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570, ___featureUsages_9)); }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * get_featureUsages_9() const { return ___featureUsages_9; }
	inline List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 ** get_address_of_featureUsages_9() { return &___featureUsages_9; }
	inline void set_featureUsages_9(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * value)
	{
		___featureUsages_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureUsages_9), (void*)value);
	}

	inline static int32_t get_offset_of_displayFeatureUsagesTextMeshes_10() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570, ___displayFeatureUsagesTextMeshes_10)); }
	inline List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * get_displayFeatureUsagesTextMeshes_10() const { return ___displayFeatureUsagesTextMeshes_10; }
	inline List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD ** get_address_of_displayFeatureUsagesTextMeshes_10() { return &___displayFeatureUsagesTextMeshes_10; }
	inline void set_displayFeatureUsagesTextMeshes_10(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * value)
	{
		___displayFeatureUsagesTextMeshes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFeatureUsagesTextMeshes_10), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t0DC4E04480C1237A73F92B0DA2B570122E57DB9A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::listControllersTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___listControllersTextMesh_4;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::leftHandedControllerTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___leftHandedControllerTextMesh_5;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::rightHandedControllerTextMesh
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___rightHandedControllerTextMesh_6;

public:
	inline static int32_t get_offset_of_listControllersTextMesh_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t0DC4E04480C1237A73F92B0DA2B570122E57DB9A, ___listControllersTextMesh_4)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_listControllersTextMesh_4() const { return ___listControllersTextMesh_4; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_listControllersTextMesh_4() { return &___listControllersTextMesh_4; }
	inline void set_listControllersTextMesh_4(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___listControllersTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listControllersTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_leftHandedControllerTextMesh_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t0DC4E04480C1237A73F92B0DA2B570122E57DB9A, ___leftHandedControllerTextMesh_5)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_leftHandedControllerTextMesh_5() const { return ___leftHandedControllerTextMesh_5; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_leftHandedControllerTextMesh_5() { return &___leftHandedControllerTextMesh_5; }
	inline void set_leftHandedControllerTextMesh_5(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___leftHandedControllerTextMesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHandedControllerTextMesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_rightHandedControllerTextMesh_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t0DC4E04480C1237A73F92B0DA2B570122E57DB9A, ___rightHandedControllerTextMesh_6)); }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * get_rightHandedControllerTextMesh_6() const { return ___rightHandedControllerTextMesh_6; }
	inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A ** get_address_of_rightHandedControllerTextMesh_6() { return &___rightHandedControllerTextMesh_6; }
	inline void set_rightHandedControllerTextMesh_6(TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * value)
	{
		___rightHandedControllerTextMesh_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHandedControllerTextMesh_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct BaseObjectCollection_t0533B0C56C4685C80D23A1698A459BF65A95373A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<OnCollectionUpdated>k__BackingField
	Action_1_t2C5A2C8B6FBBFDA6B39063AD2C80A110BA9748F7 * ___U3COnCollectionUpdatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::nodeList
	List_1_tC9A785F822E76743C38D8AEBECCF8DC686B2C9B5 * ___nodeList_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::ignoreInactiveTransforms
	bool ___ignoreInactiveTransforms_6;
	// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::sortType
	int32_t ___sortType_7;

public:
	inline static int32_t get_offset_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t0533B0C56C4685C80D23A1698A459BF65A95373A, ___U3COnCollectionUpdatedU3Ek__BackingField_4)); }
	inline Action_1_t2C5A2C8B6FBBFDA6B39063AD2C80A110BA9748F7 * get_U3COnCollectionUpdatedU3Ek__BackingField_4() const { return ___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline Action_1_t2C5A2C8B6FBBFDA6B39063AD2C80A110BA9748F7 ** get_address_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return &___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline void set_U3COnCollectionUpdatedU3Ek__BackingField_4(Action_1_t2C5A2C8B6FBBFDA6B39063AD2C80A110BA9748F7 * value)
	{
		___U3COnCollectionUpdatedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnCollectionUpdatedU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_nodeList_5() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t0533B0C56C4685C80D23A1698A459BF65A95373A, ___nodeList_5)); }
	inline List_1_tC9A785F822E76743C38D8AEBECCF8DC686B2C9B5 * get_nodeList_5() const { return ___nodeList_5; }
	inline List_1_tC9A785F822E76743C38D8AEBECCF8DC686B2C9B5 ** get_address_of_nodeList_5() { return &___nodeList_5; }
	inline void set_nodeList_5(List_1_tC9A785F822E76743C38D8AEBECCF8DC686B2C9B5 * value)
	{
		___nodeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreInactiveTransforms_6() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t0533B0C56C4685C80D23A1698A459BF65A95373A, ___ignoreInactiveTransforms_6)); }
	inline bool get_ignoreInactiveTransforms_6() const { return ___ignoreInactiveTransforms_6; }
	inline bool* get_address_of_ignoreInactiveTransforms_6() { return &___ignoreInactiveTransforms_6; }
	inline void set_ignoreInactiveTransforms_6(bool value)
	{
		___ignoreInactiveTransforms_6 = value;
	}

	inline static int32_t get_offset_of_sortType_7() { return static_cast<int32_t>(offsetof(BaseObjectCollection_t0533B0C56C4685C80D23A1698A459BF65A95373A, ___sortType_7)); }
	inline int32_t get_sortType_7() const { return ___sortType_7; }
	inline int32_t* get_address_of_sortType_7() { return &___sortType_7; }
	inline void set_sortType_7(int32_t value)
	{
		___sortType_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2  : public BaseObjectCollection_t0533B0C56C4685C80D23A1698A459BF65A95373A
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::surfaceType
	int32_t ___surfaceType_8;
	// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::orientType
	int32_t ___orientType_9;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::layout
	int32_t ___layout_10;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchor
	int32_t ___anchor_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchorAlongAxis
	bool ___anchorAlongAxis_12;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columnAlignment
	int32_t ___columnAlignment_13;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rowAlignment
	int32_t ___rowAlignment_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radius
	float ___radius_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radialRange
	float ___radialRange_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::distance
	float ___distance_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rows
	int32_t ___rows_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columns
	int32_t ___columns_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellWidth
	float ___cellWidth_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellHeight
	float ___cellHeight_22;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<SphereMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CSphereMeshU3Ek__BackingField_23;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<CylinderMesh>k__BackingField
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___U3CCylinderMeshU3Ek__BackingField_24;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::HalfCell
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___HalfCell_25;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::assetVersion
	int32_t ___assetVersion_27;

public:
	inline static int32_t get_offset_of_surfaceType_8() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___surfaceType_8)); }
	inline int32_t get_surfaceType_8() const { return ___surfaceType_8; }
	inline int32_t* get_address_of_surfaceType_8() { return &___surfaceType_8; }
	inline void set_surfaceType_8(int32_t value)
	{
		___surfaceType_8 = value;
	}

	inline static int32_t get_offset_of_orientType_9() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___orientType_9)); }
	inline int32_t get_orientType_9() const { return ___orientType_9; }
	inline int32_t* get_address_of_orientType_9() { return &___orientType_9; }
	inline void set_orientType_9(int32_t value)
	{
		___orientType_9 = value;
	}

	inline static int32_t get_offset_of_layout_10() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___layout_10)); }
	inline int32_t get_layout_10() const { return ___layout_10; }
	inline int32_t* get_address_of_layout_10() { return &___layout_10; }
	inline void set_layout_10(int32_t value)
	{
		___layout_10 = value;
	}

	inline static int32_t get_offset_of_anchor_11() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___anchor_11)); }
	inline int32_t get_anchor_11() const { return ___anchor_11; }
	inline int32_t* get_address_of_anchor_11() { return &___anchor_11; }
	inline void set_anchor_11(int32_t value)
	{
		___anchor_11 = value;
	}

	inline static int32_t get_offset_of_anchorAlongAxis_12() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___anchorAlongAxis_12)); }
	inline bool get_anchorAlongAxis_12() const { return ___anchorAlongAxis_12; }
	inline bool* get_address_of_anchorAlongAxis_12() { return &___anchorAlongAxis_12; }
	inline void set_anchorAlongAxis_12(bool value)
	{
		___anchorAlongAxis_12 = value;
	}

	inline static int32_t get_offset_of_columnAlignment_13() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___columnAlignment_13)); }
	inline int32_t get_columnAlignment_13() const { return ___columnAlignment_13; }
	inline int32_t* get_address_of_columnAlignment_13() { return &___columnAlignment_13; }
	inline void set_columnAlignment_13(int32_t value)
	{
		___columnAlignment_13 = value;
	}

	inline static int32_t get_offset_of_rowAlignment_14() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___rowAlignment_14)); }
	inline int32_t get_rowAlignment_14() const { return ___rowAlignment_14; }
	inline int32_t* get_address_of_rowAlignment_14() { return &___rowAlignment_14; }
	inline void set_rowAlignment_14(int32_t value)
	{
		___rowAlignment_14 = value;
	}

	inline static int32_t get_offset_of_radius_15() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___radius_15)); }
	inline float get_radius_15() const { return ___radius_15; }
	inline float* get_address_of_radius_15() { return &___radius_15; }
	inline void set_radius_15(float value)
	{
		___radius_15 = value;
	}

	inline static int32_t get_offset_of_radialRange_16() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___radialRange_16)); }
	inline float get_radialRange_16() const { return ___radialRange_16; }
	inline float* get_address_of_radialRange_16() { return &___radialRange_16; }
	inline void set_radialRange_16(float value)
	{
		___radialRange_16 = value;
	}

	inline static int32_t get_offset_of_distance_17() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___distance_17)); }
	inline float get_distance_17() const { return ___distance_17; }
	inline float* get_address_of_distance_17() { return &___distance_17; }
	inline void set_distance_17(float value)
	{
		___distance_17 = value;
	}

	inline static int32_t get_offset_of_rows_19() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___rows_19)); }
	inline int32_t get_rows_19() const { return ___rows_19; }
	inline int32_t* get_address_of_rows_19() { return &___rows_19; }
	inline void set_rows_19(int32_t value)
	{
		___rows_19 = value;
	}

	inline static int32_t get_offset_of_columns_20() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___columns_20)); }
	inline int32_t get_columns_20() const { return ___columns_20; }
	inline int32_t* get_address_of_columns_20() { return &___columns_20; }
	inline void set_columns_20(int32_t value)
	{
		___columns_20 = value;
	}

	inline static int32_t get_offset_of_cellWidth_21() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___cellWidth_21)); }
	inline float get_cellWidth_21() const { return ___cellWidth_21; }
	inline float* get_address_of_cellWidth_21() { return &___cellWidth_21; }
	inline void set_cellWidth_21(float value)
	{
		___cellWidth_21 = value;
	}

	inline static int32_t get_offset_of_cellHeight_22() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___cellHeight_22)); }
	inline float get_cellHeight_22() const { return ___cellHeight_22; }
	inline float* get_address_of_cellHeight_22() { return &___cellHeight_22; }
	inline void set_cellHeight_22(float value)
	{
		___cellHeight_22 = value;
	}

	inline static int32_t get_offset_of_U3CSphereMeshU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___U3CSphereMeshU3Ek__BackingField_23)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CSphereMeshU3Ek__BackingField_23() const { return ___U3CSphereMeshU3Ek__BackingField_23; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CSphereMeshU3Ek__BackingField_23() { return &___U3CSphereMeshU3Ek__BackingField_23; }
	inline void set_U3CSphereMeshU3Ek__BackingField_23(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CSphereMeshU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSphereMeshU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCylinderMeshU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___U3CCylinderMeshU3Ek__BackingField_24)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_U3CCylinderMeshU3Ek__BackingField_24() const { return ___U3CCylinderMeshU3Ek__BackingField_24; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_U3CCylinderMeshU3Ek__BackingField_24() { return &___U3CCylinderMeshU3Ek__BackingField_24; }
	inline void set_U3CCylinderMeshU3Ek__BackingField_24(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___U3CCylinderMeshU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCylinderMeshU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_HalfCell_25() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___HalfCell_25)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_HalfCell_25() const { return ___HalfCell_25; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_HalfCell_25() { return &___HalfCell_25; }
	inline void set_HalfCell_25(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___HalfCell_25 = value;
	}

	inline static int32_t get_offset_of_assetVersion_27() { return static_cast<int32_t>(offsetof(GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2, ___assetVersion_27)); }
	inline int32_t get_assetVersion_27() const { return ___assetVersion_27; }
	inline int32_t* get_address_of_assetVersion_27() { return &___assetVersion_27; }
	inline void set_assetVersion_27(int32_t value)
	{
		___assetVersion_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_tAFDC8ACB7CE85B38D7A81BC15A7B9865F000537D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * m_Items[1];

public:
	inline MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  m_Items[1];

public:
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m423C00452933DDD5D455C4709C7A937A89CCFBA1_gshared (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_gshared (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_gshared_inline (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_gshared_inline (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t7297B4773ACFDD5F58F69C09F25F70A4B87EBF8D  InputFeatureUsage_As_TisUInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA_m958F45343A396AB919D58C62A509E8066543D493_gshared (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_gshared (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_gshared (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_gshared (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133  HashSet_1_GetEnumerator_m874F2BBF69C804D425AFCF30B376C9718AA298B5_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_gshared_inline (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3C52626EAD0998616A661D927B94DD52E67118D4_gshared (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE2BD5476A999119F49555D958386A0688E9C0C01_gshared (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);

// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Enum::TryParse<UnityEngine.KeyCode>(System.String,!!0&)
inline bool Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD_m423C00452933DDD5D455C4709C7A937A89CCFBA1_gshared)(___value0, ___result1, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83 (TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* Input_GetJoystickNames_m99559CDAA21A390D9D10E9B82F65397C32424C32 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577 (uint32_t ___desiredCharacteristics0, List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * ___inputDevices1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Count()
inline int32_t List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_inline (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_m29A18F5AEC1DD0A23BB53D51D813EA0ACE9AE27C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::Add(!0)
inline void List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66 (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Item(System.Int32)
inline TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_inline (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputDevice::get_manufacturer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_manufacturer_m3164AFB4514E2E90738C4075790733EFAA7D665F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureUsages(System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureUsages_m0F7705813980045EA1EC46EF202B3F6F928F76FD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * ___featureUsages0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
inline Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  (*) (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *, const RuntimeMethod*))List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
inline InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_inline (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  (*) (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *, const RuntimeMethod*))Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
inline int32_t List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_inline (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *, const RuntimeMethod*))List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_m3415EE4B71906002970C499B404DDAB37687C273 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.InputFeatureUsage::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___usage0, bool* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
inline InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.UInt32>,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mFF614E505A74A95290B3B467A7516B514393EED6 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  ___usage0, uint32_t* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
inline InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  ___usage0, float* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
inline InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  ___usage0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
inline InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8 (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  ___usage0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
inline InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  ___usage0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.XR.InputTrackingState>()
inline InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  (*) (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32Enum_tE44175EB3151A633676D60A642EDA3BD5C6760DA_m958F45343A396AB919D58C62A509E8066543D493_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>,UnityEngine.XR.InputTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mACC12A77C3C3712F6EEFE651647463E389105AF2 (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC * __this, InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  ___usage0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
inline bool Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1 (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *, const RuntimeMethod*))Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
inline void Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *, const RuntimeMethod*))Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *, const RuntimeMethod*))List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
inline void List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3 (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *, const RuntimeMethod*))List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::.ctor()
inline void List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m9EFF18C8C4ADBC30606C0AFFFE729A4233C5B4B1 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Count()
inline int32_t HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_inline (HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 *, const RuntimeMethod*))HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2 (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8  HashSet_1_GetEnumerator_mFFE5F213ACD188E721D159602434C9389478CC73 (HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8  (*) (HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m874F2BBF69C804D425AFCF30B376C9718AA298B5_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mCB6B4FD35786F93407FD6642B9CAE1C9D1E28137_inline (Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 *, const RuntimeMethod*))Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_gshared_inline)(__this, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Description()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_m76BED89D771D15F4DFD0572AA5080AE47C5D7E9B_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  MixedRealityInteractionMapping_get_MixedRealityInputAction_m70E87630BE9122774F7E3D642D5B6A559D53FF77_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_Description()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m7F3B2DDE4302987E7DD65FDD5641594780FAB49A_inline (MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m43EDD8A209C072878EF2A9646CDFF216609E29DC_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  MixedRealityInteractionMapping_get_PoseData_mD4CB21747D525CB584F295D7739C9F437CF60D8B_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PositionData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityInteractionMapping_get_PositionData_m3ACF3C1C8EDE4337D97FA485244336E4DCF0DA2B_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_RotationData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityInteractionMapping_get_RotationData_m234626B44EA99C817FADDC86FFE9F3B07FF36AF0_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_mC8CD7525F5AED47129616318839C07D49B1AF536_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_mD7F3824E4165CB7B03F6D4C4D623AEAF09DA1400_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_mA3A41DCD39120BDEE47E793D9497C361F858C9F4_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_mDFD57149E873C7888610D0DFE33FFE0E87EB9956 (Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 *, const RuntimeMethod*))Enumerator_MoveNext_m3C52626EAD0998616A661D927B94DD52E67118D4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_m9394AFBC6E88C8507B73D42D723C35273A2B3FC3 (Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 *, const RuntimeMethod*))Enumerator_Dispose_mE2BD5476A999119F49555D958386A0688E9C0C01_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_OnValidate_m19189143D93DADB31428BAEBF57482D5184DB83A (DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayInputResult_OnValidate_m19189143D93DADB31428BAEBF57482D5184DB83A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (displayType == DisplayType.InputAxes)
		int32_t L_0 = __this->get_displayType_8();
		if (L_0)
		{
			goto IL_0080;
		}
	}
	{
		// switch (inputType)
		int32_t L_1 = __this->get_inputType_5();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0074;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0026;
			}
		}
	}
	{
		return;
	}

IL_0026:
	{
		// name = $"{inputType}{axisNumber}";
		int32_t L_3 = __this->get_inputType_5();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(AxisType_tB1349A32D492597F2BE1244EDFC343C295DE7E0C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->get_axisNumber_6();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D, L_5, L_8, /*hidden argument*/NULL);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, L_9, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004d:
	{
		// name = $"{inputType}{buttonNumber}";
		int32_t L_10 = __this->get_inputType_5();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(AxisType_tB1349A32D492597F2BE1244EDFC343C295DE7E0C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = __this->get_buttonNumber_7();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6FE2EB9A03CDF5C97481593914D7D863F0FE5F6D, L_12, L_15, /*hidden argument*/NULL);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0074:
	{
		// name = "AllActiveAxes";
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, _stringLiteralA3D184DB250EBD180FDF004D8BE609BC10A18291, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0080:
	{
		// else if (displayType == DisplayType.JoystickNames)
		int32_t L_17 = __this->get_displayType_8();
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0094;
		}
	}
	{
		// name = "JoystickNames";
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(__this, _stringLiteralB45954F905A38D65AD0E29796BCC199C6146A930, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_Update_m0341EE3F4715C8DF8779A0CFD261AEBABD9305AC (DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DisplayInputResult_Update_m0341EE3F4715C8DF8779A0CFD261AEBABD9305AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject * G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B22_2 = NULL;
	RuntimeObject * G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B21_2 = NULL;
	String_t* G_B23_0 = NULL;
	RuntimeObject * G_B23_1 = NULL;
	String_t* G_B23_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B23_3 = NULL;
	{
		// if (displayTextMesh == null)
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_0 = __this->get_displayTextMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (displayType == DisplayType.InputAxes)
		int32_t L_2 = __this->get_displayType_8();
		if (L_2)
		{
			goto IL_0198;
		}
	}
	{
		// switch (inputType)
		int32_t L_3 = __this->get_inputType_5();
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_00c5;
			}
			case 1:
			{
				goto IL_0203;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		return;
	}

IL_0038:
	{
		// displayTextMesh.text = $"Axis {axisNumber}: {UnityEngine.Input.GetAxis($"AXIS_{axisNumber}")}";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_5 = __this->get_displayTextMesh_4();
		int32_t L_6 = __this->get_axisNumber_6();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = __this->get_axisNumber_6();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6FB374FAAB4FAB74CFBBCC828F8657A89110BAF1, L_11, /*hidden argument*/NULL);
		float L_13 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_12, /*hidden argument*/NULL);
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral33431061FB309988E60F609A990F2B456CA63E30, L_8, L_15, /*hidden argument*/NULL);
		NullCheck(L_5);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_5, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0078:
	{
		// if (Enum.TryParse($"JoystickButton{buttonNumber}", out KeyCode keyCode))
		int32_t L_17 = __this->get_buttonNumber_7();
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralB4AB17AF25666479BF1B9F04718B963E43946C3D, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_21 = Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0(L_20, (int32_t*)(&V_1), /*hidden argument*/Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_0203;
		}
	}
	{
		// displayTextMesh.text = $"Button {buttonNumber}: {UnityEngine.Input.GetKey(keyCode)}";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_22 = __this->get_displayTextMesh_4();
		int32_t L_23 = __this->get_buttonNumber_7();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26 = V_1;
		bool L_27 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_26, /*hidden argument*/NULL);
		bool L_28 = L_27;
		RuntimeObject * L_29 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral50B513476C44C4C0D8F32FE3219FC397F34664A0, L_25, L_29, /*hidden argument*/NULL);
		NullCheck(L_22);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_22, L_30, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c5:
	{
		// displayTextMesh.text = "All active:\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_31 = __this->get_displayTextMesh_4();
		NullCheck(L_31);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_31, _stringLiteral28FED197ABA6B0075AA7B18880CBE300693BB570, /*hidden argument*/NULL);
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		V_2 = 1;
		goto IL_012c;
	}

IL_00d9:
	{
		// float reading = UnityEngine.Input.GetAxis($"AXIS_{i}");
		int32_t L_32 = V_2;
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral6FB374FAAB4FAB74CFBBCC828F8657A89110BAF1, L_34, /*hidden argument*/NULL);
		float L_36 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		// if (reading != 0.0)
		float L_37 = V_3;
		if ((((double)(((double)((double)L_37)))) == ((double)(0.0))))
		{
			goto IL_0128;
		}
	}
	{
		// displayTextMesh.text += $"Axis {i}: {reading}\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_38 = __this->get_displayTextMesh_4();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_39 = L_38;
		NullCheck(L_39);
		String_t* L_40 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_2;
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_42);
		float L_44 = V_3;
		float L_45 = L_44;
		RuntimeObject * L_46 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteralD95F39C503EAA958DC1BCE86E2C4A4612B82C155, L_43, L_46, /*hidden argument*/NULL);
		String_t* L_48 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_40, L_47, /*hidden argument*/NULL);
		NullCheck(L_39);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_39, L_48, /*hidden argument*/NULL);
	}

IL_0128:
	{
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_012c:
	{
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)28))))
		{
			goto IL_00d9;
		}
	}
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		V_4 = 0;
		goto IL_0191;
	}

IL_0136:
	{
		// if (Enum.TryParse($"JoystickButton{i}", out KeyCode buttonCode))
		int32_t L_51 = V_4;
		int32_t L_52 = L_51;
		RuntimeObject * L_53 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralB4AB17AF25666479BF1B9F04718B963E43946C3D, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_il2cpp_TypeInfo_var);
		bool L_55 = Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0(L_54, (int32_t*)(&V_5), /*hidden argument*/Enum_TryParse_TisKeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C_m39C4CA535375D57EB557A81EF4B76FEC031A64B0_RuntimeMethod_var);
		if (!L_55)
		{
			goto IL_018b;
		}
	}
	{
		// bool isPressed = UnityEngine.Input.GetKey(buttonCode);
		int32_t L_56 = V_5;
		bool L_57 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(L_56, /*hidden argument*/NULL);
		V_6 = L_57;
		// if (isPressed)
		bool L_58 = V_6;
		if (!L_58)
		{
			goto IL_018b;
		}
	}
	{
		// displayTextMesh.text += $"Button {i}: {isPressed}\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_59 = __this->get_displayTextMesh_4();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_60 = L_59;
		NullCheck(L_60);
		String_t* L_61 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_60, /*hidden argument*/NULL);
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_63);
		bool L_65 = V_6;
		bool L_66 = L_65;
		RuntimeObject * L_67 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_66);
		String_t* L_68 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6F6A465F04662494BCF2CDD14B39035E925D63B3, L_64, L_67, /*hidden argument*/NULL);
		String_t* L_69 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_61, L_68, /*hidden argument*/NULL);
		NullCheck(L_60);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_60, L_69, /*hidden argument*/NULL);
	}

IL_018b:
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		int32_t L_70 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0191:
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		int32_t L_71 = V_4;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)20))))
		{
			goto IL_0136;
		}
	}
	{
		// break;
		return;
	}

IL_0198:
	{
		// string[] joystickNames = UnityEngine.Input.GetJoystickNames();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_72 = Input_GetJoystickNames_m99559CDAA21A390D9D10E9B82F65397C32424C32(/*hidden argument*/NULL);
		V_7 = L_72;
		// displayTextMesh.text = $"Detected {joystickNames.Length} controller{(joystickNames.Length != 1 ? "s" : "")}:\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_73 = __this->get_displayTextMesh_4();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_74 = V_7;
		NullCheck(L_74);
		int32_t L_75 = (((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))));
		RuntimeObject * L_76 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_75);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_77 = V_7;
		NullCheck(L_77);
		G_B21_0 = L_76;
		G_B21_1 = _stringLiteral36E9E9FFC9D20BBF09FD7D86DB639097F5EE8B4A;
		G_B21_2 = L_73;
		if ((!(((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length))))) == ((uint32_t)1))))
		{
			G_B22_0 = L_76;
			G_B22_1 = _stringLiteral36E9E9FFC9D20BBF09FD7D86DB639097F5EE8B4A;
			G_B22_2 = L_73;
			goto IL_01c1;
		}
	}
	{
		G_B23_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		goto IL_01c6;
	}

IL_01c1:
	{
		G_B23_0 = _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
	}

IL_01c6:
	{
		String_t* L_78 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/NULL);
		NullCheck(G_B23_3);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(G_B23_3, L_78, /*hidden argument*/NULL);
		// for (int i = 0; i < joystickNames.Length; i++)
		V_8 = 0;
		goto IL_01fb;
	}

IL_01d5:
	{
		// displayTextMesh.text += $"{joystickNames[i]}\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_79 = __this->get_displayTextMesh_4();
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_80 = L_79;
		NullCheck(L_80);
		String_t* L_81 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_80, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_82 = V_7;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		String_t* L_86 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_81, L_85, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		NullCheck(L_80);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_80, L_86, /*hidden argument*/NULL);
		// for (int i = 0; i < joystickNames.Length; i++)
		int32_t L_87 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_01fb:
	{
		// for (int i = 0; i < joystickNames.Length; i++)
		int32_t L_88 = V_8;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_89 = V_7;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length)))))))
		{
			goto IL_01d5;
		}
	}

IL_0203:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult__ctor_m4D538B35F6A44ED8FD10911CC453C764341A7289 (DisplayInputResult_t719DA58D1624AC2E7F2AB1780EA64EE760B0E420 * __this, const RuntimeMethod* method)
{
	{
		// private int axisNumber = 1;
		__this->set_axisNumber_6(1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages_Update_m758349EA798BE7A7835508CDA78247A33E5B6675 (ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListInputFeatureUsages_Update_m758349EA798BE7A7835508CDA78247A33E5B6675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_5 = NULL;
	InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_8 = NULL;
	Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  V_9;
	memset((&V_9), 0, sizeof(V_9));
	InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * V_11 = NULL;
	float V_12 = 0.0f;
	bool V_13 = false;
	uint32_t V_14 = 0;
	float V_15 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_18;
	memset((&V_18), 0, sizeof(V_18));
	uint32_t V_19 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B8_2 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B5_2 = NULL;
	RuntimeObject * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B7_2 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B6_2 = NULL;
	String_t* G_B9_0 = NULL;
	RuntimeObject * G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B9_3 = NULL;
	{
		// if (listInputDevicesTextMesh == null || gridObjectCollection == null || displayFeatureUsagesPrefab == null)
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_0 = __this->get_listInputDevicesTextMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2 * L_2 = __this->get_gridObjectCollection_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_displayFeatureUsagesPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Left, leftInputDevices);
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_6 = __this->get_leftInputDevices_7();
		InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577(((int32_t)256), L_6, /*hidden argument*/NULL);
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right, rightInputDevices);
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_7 = __this->get_rightInputDevices_8();
		InputDevices_GetDevicesWithCharacteristics_mB88FBCCCE6736F4B91CB5B24F09392AEF2AED577(((int32_t)512), L_7, /*hidden argument*/NULL);
		// List<InputDevice> inputDevices = leftInputDevices.Union(rightInputDevices).ToList();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_8 = __this->get_leftInputDevices_7();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_9 = __this->get_rightInputDevices_8();
		RuntimeObject* L_10 = Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589(L_8, L_9, /*hidden argument*/Enumerable_Union_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mC11EFC69A8B2E4B684A3DC97657093388C7C6589_RuntimeMethod_var);
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_11 = Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6(L_10, /*hidden argument*/Enumerable_ToList_TisInputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC_mBFAFCE347B63DFA7F6D090B1CDEA19460626D2F6_RuntimeMethod_var);
		V_0 = L_11;
		// int sourceCount = inputDevices.Count;
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_inline(L_12, /*hidden argument*/List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_RuntimeMethod_var);
		V_1 = L_13;
		// listInputDevicesTextMesh.text = $"Detected {sourceCount} input source{(sourceCount > 1 ? "s:" : sourceCount != 0 ? ":" : "s")}\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_14 = __this->get_listInputDevicesTextMesh_4();
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_16);
		int32_t L_18 = V_1;
		G_B5_0 = L_17;
		G_B5_1 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
		G_B5_2 = L_14;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			G_B8_0 = L_17;
			G_B8_1 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
			G_B8_2 = L_14;
			goto IL_008f;
		}
	}
	{
		int32_t L_19 = V_1;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		if (L_19)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			goto IL_0088;
		}
	}
	{
		G_B9_0 = _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
		G_B9_1 = G_B6_0;
		G_B9_2 = G_B6_1;
		G_B9_3 = G_B6_2;
		goto IL_0094;
	}

IL_0088:
	{
		G_B9_0 = _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0094;
	}

IL_008f:
	{
		G_B9_0 = _stringLiteral6126CDA8ABEA9B72D62B5EBC6AB525CB287F4D14;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0094:
	{
		String_t* L_20 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		NullCheck(G_B9_3);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(G_B9_3, L_20, /*hidden argument*/NULL);
		// bool collectionNeedsUpdating = false;
		V_2 = (bool)0;
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_21 = __this->get_displayFeatureUsagesTextMeshes_10();
		NullCheck(L_21);
		int32_t L_22 = List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_inline(L_21, /*hidden argument*/List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_RuntimeMethod_var);
		V_3 = L_22;
		goto IL_00da;
	}

IL_00ae:
	{
		// displayFeatureUsagesTextMeshes.Add(Instantiate(displayFeatureUsagesPrefab, gameObject.transform).GetComponentInChildren<TextMesh>());
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_23 = __this->get_displayFeatureUsagesTextMeshes_10();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_24 = __this->get_displayFeatureUsagesPrefab_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_24, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		NullCheck(L_27);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_28 = GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620(L_27, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A_m9E4D7FFDEA6E42F7B15ABD2843855CF150415620_RuntimeMethod_var);
		NullCheck(L_23);
		List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66(L_23, L_28, /*hidden argument*/List_1_Add_mB71A8C3E82969712B249C0274B4F5753ABDEEA66_RuntimeMethod_var);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00da:
	{
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00ae;
		}
	}
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		V_4 = 0;
		goto IL_0521;
	}

IL_00e6:
	{
		// TextMesh textMesh = displayFeatureUsagesTextMeshes[i];
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_32 = __this->get_displayFeatureUsagesTextMeshes_10();
		int32_t L_33 = V_4;
		NullCheck(L_32);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_34 = List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_mC652A7DD2A361A927F5A8B0D43C20602FFFEDA8E_RuntimeMethod_var);
		V_5 = L_34;
		// if (textMesh == null)
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_35 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_36 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_35, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_051b;
		}
	}
	{
		// if (i >= sourceCount)
		int32_t L_37 = V_4;
		int32_t L_38 = V_1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0140;
		}
	}
	{
		// if (textMesh.transform.parent.gameObject.activeSelf)
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_39 = V_5;
		NullCheck(L_39);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_41 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_43 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_051b;
		}
	}
	{
		// textMesh.transform.parent.gameObject.SetActive(false);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_44 = V_5;
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_47 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_47, (bool)0, /*hidden argument*/NULL);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
		// continue;
		goto IL_051b;
	}

IL_0140:
	{
		// if (!textMesh.transform.parent.gameObject.activeSelf)
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_48 = V_5;
		NullCheck(L_48);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_50 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_51 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		bool L_52 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_51, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0171;
		}
	}
	{
		// textMesh.transform.parent.gameObject.SetActive(true);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_53 = V_5;
		NullCheck(L_53);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_54 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_56, (bool)1, /*hidden argument*/NULL);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
	}

IL_0171:
	{
		// InputDevice inputDevice = inputDevices[i];
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_57 = V_0;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_59 = List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_RuntimeMethod_var);
		V_6 = L_59;
		// bool displayNeedsResizing = !textMesh.text.StartsWith(inputDevice.name);
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_60 = V_5;
		NullCheck(L_60);
		String_t* L_61 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_60, /*hidden argument*/NULL);
		String_t* L_62 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_61);
		bool L_63 = String_StartsWith_m7D468FB7C801D9C2DBEEEEC86F8BA8F4EC3243C1(L_61, L_62, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		// listInputDevicesTextMesh.text += $"{inputDevice.name} | {inputDevice.manufacturer}\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_64 = __this->get_listInputDevicesTextMesh_4();
		V_8 = L_64;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_65 = V_8;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_66 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_67 = L_66;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_68 = V_8;
		NullCheck(L_68);
		String_t* L_69 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_68, /*hidden argument*/NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_69);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_70 = L_67;
		String_t* L_71 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_71);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_72 = L_70;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteral5ADBC2B8C5C1C93843CDFB9A3FAE9F48D40CAF17);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5ADBC2B8C5C1C93843CDFB9A3FAE9F48D40CAF17);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_73 = L_72;
		String_t* L_74 = InputDevice_get_manufacturer_m3164AFB4514E2E90738C4075790733EFAA7D665F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_74);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_74);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_75 = L_73;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC);
		String_t* L_76 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_75, /*hidden argument*/NULL);
		NullCheck(L_65);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_65, L_76, /*hidden argument*/NULL);
		// textMesh.text = $"{inputDevice.name}\n\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_77 = V_5;
		String_t* L_78 = InputDevice_get_name_m03ED32951CD79B921C053A620D7A5DBCB5C51DAA((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), /*hidden argument*/NULL);
		String_t* L_79 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_78, _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE, /*hidden argument*/NULL);
		NullCheck(L_77);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_77, L_79, /*hidden argument*/NULL);
		// if (inputDevice.TryGetFeatureUsages(featureUsages))
		List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_80 = __this->get_featureUsages_9();
		bool L_81 = InputDevice_TryGetFeatureUsages_m0F7705813980045EA1EC46EF202B3F6F928F76FD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_051b;
		}
	}
	{
		// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
		List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_82 = __this->get_featureUsages_9();
		NullCheck(L_82);
		Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648  L_83 = List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F(L_82, /*hidden argument*/List_1_GetEnumerator_mD97540CA6C507F051C7DB76B99743B0F2050236F_RuntimeMethod_var);
		V_9 = L_83;
	}

IL_0212:
	try
	{ // begin try (depth: 1)
		{
			goto IL_04ff;
		}

IL_0217:
		{
			// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
			InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  L_84 = Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_inline((Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *)(&V_9), /*hidden argument*/Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_RuntimeMethod_var);
			V_10 = L_84;
			// if (displayNeedsResizing)
			bool L_85 = V_7;
			if (!L_85)
			{
				goto IL_0285;
			}
		}

IL_0224:
		{
			// Transform backingPanel = textMesh.gameObject.transform.parent.GetChild(0);
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_86 = V_5;
			NullCheck(L_86);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_87 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_86, /*hidden argument*/NULL);
			NullCheck(L_87);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_88 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_87, /*hidden argument*/NULL);
			NullCheck(L_88);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_89 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_88, /*hidden argument*/NULL);
			NullCheck(L_89);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_90 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_89, 0, /*hidden argument*/NULL);
			V_11 = L_90;
			// float backingPanelHeight = BackingPanelMargin + (BackingPanelEntryHeight * (featureUsages.Count + 2)) + BackingPanelMargin;
			List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_91 = __this->get_featureUsages_9();
			NullCheck(L_91);
			int32_t L_92 = List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_inline(L_91, /*hidden argument*/List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_RuntimeMethod_var);
			V_12 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.05f), (float)((float)il2cpp_codegen_multiply((float)(0.03f), (float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)2))))))))), (float)(0.05f)));
			// backingPanel.localScale = new Vector3(backingPanel.localScale.x, backingPanelHeight, backingPanel.localScale.z);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_93 = V_11;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_94 = V_11;
			NullCheck(L_94);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_94, /*hidden argument*/NULL);
			float L_96 = L_95.get_x_2();
			float L_97 = V_12;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_98 = V_11;
			NullCheck(L_98);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_99 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_98, /*hidden argument*/NULL);
			float L_100 = L_99.get_z_4();
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_101;
			memset((&L_101), 0, sizeof(L_101));
			Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_101), L_96, L_97, L_100, /*hidden argument*/NULL);
			NullCheck(L_93);
			Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_93, L_101, /*hidden argument*/NULL);
		}

IL_0285:
		{
			// textMesh.text += $"{inputFeatureUsage.name}";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_102 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_103 = L_102;
			NullCheck(L_103);
			String_t* L_104 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_103, /*hidden argument*/NULL);
			String_t* L_105 = InputFeatureUsage_get_name_m3415EE4B71906002970C499B404DDAB37687C273((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			String_t* L_106 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_104, L_105, /*hidden argument*/NULL);
			NullCheck(L_103);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_103, L_106, /*hidden argument*/NULL);
			// if (inputFeatureUsage.type.Equals(typeof(bool)))
			Type_t * L_107 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_108 = { reinterpret_cast<intptr_t> (Boolean_tB53F6830F670160873277339AA58F15CAED4399C_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_109 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_108, /*hidden argument*/NULL);
			NullCheck(L_107);
			bool L_110 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_107, L_109);
			if (!L_110)
			{
				goto IL_02f3;
			}
		}

IL_02b6:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<bool>(), out bool data))
			InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_111 = InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisBoolean_tB53F6830F670160873277339AA58F15CAED4399C_m78D037CE65DFD1F256FFCAAB73BF4C5A8815EA04_RuntimeMethod_var);
			bool L_112 = InputDevice_TryGetFeatureValue_m16E7C36E33F17B30FFBEC3B4C3C8674E6C7F6801((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_111, (bool*)(&V_13), /*hidden argument*/NULL);
			if (!L_112)
			{
				goto IL_04ff;
			}
		}

IL_02cb:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_113 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_114 = L_113;
			NullCheck(L_114);
			String_t* L_115 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_114, /*hidden argument*/NULL);
			bool L_116 = V_13;
			bool L_117 = L_116;
			RuntimeObject * L_118 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_117);
			String_t* L_119 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_118, /*hidden argument*/NULL);
			String_t* L_120 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_115, L_119, /*hidden argument*/NULL);
			NullCheck(L_114);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_114, L_120, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_02f3:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(uint)))
			Type_t * L_121 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_122 = { reinterpret_cast<intptr_t> (UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_123 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_122, /*hidden argument*/NULL);
			NullCheck(L_121);
			bool L_124 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_121, L_123);
			if (!L_124)
			{
				goto IL_0348;
			}
		}

IL_030b:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<uint>(), out uint data))
			InputFeatureUsage_1_t2C79328CADDB59CEA68D6FC88E7CD902E6849452  L_125 = InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisUInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_mC57F69CE23BA232B047FD0CB57598A535136F50C_RuntimeMethod_var);
			bool L_126 = InputDevice_TryGetFeatureValue_mFF614E505A74A95290B3B467A7516B514393EED6((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_125, (uint32_t*)(&V_14), /*hidden argument*/NULL);
			if (!L_126)
			{
				goto IL_04ff;
			}
		}

IL_0320:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_127 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_128 = L_127;
			NullCheck(L_128);
			String_t* L_129 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_128, /*hidden argument*/NULL);
			uint32_t L_130 = V_14;
			uint32_t L_131 = L_130;
			RuntimeObject * L_132 = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &L_131);
			String_t* L_133 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_132, /*hidden argument*/NULL);
			String_t* L_134 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_129, L_133, /*hidden argument*/NULL);
			NullCheck(L_128);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_128, L_134, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_0348:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(float)))
			Type_t * L_135 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_136 = { reinterpret_cast<intptr_t> (Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_137 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_136, /*hidden argument*/NULL);
			NullCheck(L_135);
			bool L_138 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_135, L_137);
			if (!L_138)
			{
				goto IL_039d;
			}
		}

IL_0360:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<float>(), out float data))
			InputFeatureUsage_1_tE1E97B43467C9868585CCF48C3DAAF7AEEF89758  L_139 = InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisSingle_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_m7EB5D81616F25874134814BF7D2DDB3A24E7D26A_RuntimeMethod_var);
			bool L_140 = InputDevice_TryGetFeatureValue_m44AC8AD8E7764D96A02F455BFA9AC7CAECCC1BCD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_139, (float*)(&V_15), /*hidden argument*/NULL);
			if (!L_140)
			{
				goto IL_04ff;
			}
		}

IL_0375:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_141 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_142 = L_141;
			NullCheck(L_142);
			String_t* L_143 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_142, /*hidden argument*/NULL);
			float L_144 = V_15;
			float L_145 = L_144;
			RuntimeObject * L_146 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_145);
			String_t* L_147 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_146, /*hidden argument*/NULL);
			String_t* L_148 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_143, L_147, /*hidden argument*/NULL);
			NullCheck(L_142);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_142, L_148, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_039d:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Vector2)))
			Type_t * L_149 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_150 = { reinterpret_cast<intptr_t> (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_151 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_150, /*hidden argument*/NULL);
			NullCheck(L_149);
			bool L_152 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_149, L_151);
			if (!L_152)
			{
				goto IL_03f2;
			}
		}

IL_03b5:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector2>(), out Vector2 data))
			InputFeatureUsage_1_tC8F066D5FCBF11024A893DEAA0568E5B903AD70A  L_153 = InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisVector2_tA85D2DD88578276CA8A8796756458277E72D073D_mFFEF87E5B46A6E516EE70CA149017984DDE630F9_RuntimeMethod_var);
			bool L_154 = InputDevice_TryGetFeatureValue_m8E38F554C51899149FD7EA489A71D848C27664AD((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_153, (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_16), /*hidden argument*/NULL);
			if (!L_154)
			{
				goto IL_04ff;
			}
		}

IL_03ca:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_155 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_156 = L_155;
			NullCheck(L_156);
			String_t* L_157 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_156, /*hidden argument*/NULL);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_158 = V_16;
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_159 = L_158;
			RuntimeObject * L_160 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_159);
			String_t* L_161 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_160, /*hidden argument*/NULL);
			String_t* L_162 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_157, L_161, /*hidden argument*/NULL);
			NullCheck(L_156);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_156, L_162, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_03f2:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Vector3)))
			Type_t * L_163 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_164 = { reinterpret_cast<intptr_t> (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_165 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_164, /*hidden argument*/NULL);
			NullCheck(L_163);
			bool L_166 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_163, L_165);
			if (!L_166)
			{
				goto IL_0447;
			}
		}

IL_040a:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector3>(), out Vector3 data))
			InputFeatureUsage_1_t858164153D7E57A18BAF485E8169BBA8C06DA2D1  L_167 = InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisVector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_mB592649C8EF1381E57EA9EC3A92F31DF6DE8B0B8_RuntimeMethod_var);
			bool L_168 = InputDevice_TryGetFeatureValue_mBD5CBBE535480FFDB859C07DFF810851B6FFFC14((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_167, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_17), /*hidden argument*/NULL);
			if (!L_168)
			{
				goto IL_04ff;
			}
		}

IL_041f:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_169 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_170 = L_169;
			NullCheck(L_170);
			String_t* L_171 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_170, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_172 = V_17;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_173 = L_172;
			RuntimeObject * L_174 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_173);
			String_t* L_175 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_174, /*hidden argument*/NULL);
			String_t* L_176 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_171, L_175, /*hidden argument*/NULL);
			NullCheck(L_170);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_170, L_176, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_0447:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Quaternion)))
			Type_t * L_177 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_178 = { reinterpret_cast<intptr_t> (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_179 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_178, /*hidden argument*/NULL);
			NullCheck(L_177);
			bool L_180 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_177, L_179);
			if (!L_180)
			{
				goto IL_0499;
			}
		}

IL_045f:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Quaternion>(), out Quaternion data))
			InputFeatureUsage_1_t935ED0BBF1E6C85FC5A2CCA7393B4D771B3F23F6  L_181 = InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisQuaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_m4BA6EFE7720BEC69C3C33AA843726D499BBA193C_RuntimeMethod_var);
			bool L_182 = InputDevice_TryGetFeatureValue_m6349FD024F22AC03A4D15682D122AC9F55FBBB8F((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_181, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_18), /*hidden argument*/NULL);
			if (!L_182)
			{
				goto IL_04ff;
			}
		}

IL_0474:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_183 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_184 = L_183;
			NullCheck(L_184);
			String_t* L_185 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_184, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_186 = V_18;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_187 = L_186;
			RuntimeObject * L_188 = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &L_187);
			String_t* L_189 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_188, /*hidden argument*/NULL);
			String_t* L_190 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_185, L_189, /*hidden argument*/NULL);
			NullCheck(L_184);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_184, L_190, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_0499:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(InputTrackingState)))
			Type_t * L_191 = InputFeatureUsage_get_type_m63DB4568B0F91857494433F9043BB4691F888ECD((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_192 = { reinterpret_cast<intptr_t> (InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_193 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_192, /*hidden argument*/NULL);
			NullCheck(L_191);
			bool L_194 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::Equals(System.Type) */, L_191, L_193);
			if (!L_194)
			{
				goto IL_04e8;
			}
		}

IL_04b1:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<InputTrackingState>(), out InputTrackingState data))
			InputFeatureUsage_1_t6C8EFB5BB2887408D1D5F76120065BE2837574DB  L_195 = InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF((InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisInputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_m19BB2E6465283D7DC07628C141E48267C383B2EF_RuntimeMethod_var);
			bool L_196 = InputDevice_TryGetFeatureValue_mACC12A77C3C3712F6EEFE651647463E389105AF2((InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC *)(&V_6), L_195, (uint32_t*)(&V_19), /*hidden argument*/NULL);
			if (!L_196)
			{
				goto IL_04ff;
			}
		}

IL_04c3:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_197 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_198 = L_197;
			NullCheck(L_198);
			String_t* L_199 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_198, /*hidden argument*/NULL);
			uint32_t L_200 = V_19;
			uint32_t L_201 = L_200;
			RuntimeObject * L_202 = Box(InputTrackingState_tA2AC362A601E22182A65046C098AA07512B01933_il2cpp_TypeInfo_var, &L_201);
			String_t* L_203 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7FDAE21CBBCDD7CB87325B80D2438D8472608359, L_202, /*hidden argument*/NULL);
			String_t* L_204 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_199, L_203, /*hidden argument*/NULL);
			NullCheck(L_198);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_198, L_204, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_04e8:
		{
			// textMesh.text += $"\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_205 = V_5;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_206 = L_205;
			NullCheck(L_206);
			String_t* L_207 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_206, /*hidden argument*/NULL);
			String_t* L_208 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_207, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			NullCheck(L_206);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_206, L_208, /*hidden argument*/NULL);
		}

IL_04ff:
		{
			// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
			bool L_209 = Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1((Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mF1ADA14C671D0E7744F290BB3EA2F73C216488D1_RuntimeMethod_var);
			if (L_209)
			{
				goto IL_0217;
			}
		}

IL_050b:
		{
			IL2CPP_LEAVE(0x51B, FINALLY_050d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_050d;
	}

FINALLY_050d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE((Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 *)(&V_9), /*hidden argument*/Enumerator_Dispose_m7BE95A8D37DDD59D994E46071742F8C2CD7365BE_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1293)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1293)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51B, IL_051b)
	}

IL_051b:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		int32_t L_210 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1));
	}

IL_0521:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		int32_t L_211 = V_4;
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_212 = __this->get_displayFeatureUsagesTextMeshes_10();
		NullCheck(L_212);
		int32_t L_213 = List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_inline(L_212, /*hidden argument*/List_1_get_Count_m79D5FB6F00F5F25A4F4F063D22AFD13DA153D193_RuntimeMethod_var);
		if ((((int32_t)L_211) < ((int32_t)L_213)))
		{
			goto IL_00e6;
		}
	}
	{
		// if (collectionNeedsUpdating)
		bool L_214 = V_2;
		if (!L_214)
		{
			goto IL_0541;
		}
	}
	{
		// gridObjectCollection.UpdateCollection();
		GridObjectCollection_t502DA41A9AD34CA4FD16F0A1DF7D635149C0AFA2 * L_215 = __this->get_gridObjectCollection_5();
		NullCheck(L_215);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_215);
	}

IL_0541:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages__ctor_m6BB660F7339FBC10523A73D6040793E17668205D (ListInputFeatureUsages_t027E3FD8AE001EFE26AE4DB83FF2BBAEC41F3570 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListInputFeatureUsages__ctor_m6BB660F7339FBC10523A73D6040793E17668205D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> leftInputDevices = new List<InputDevice>();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_0 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_0, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		__this->set_leftInputDevices_7(L_0);
		// private readonly List<InputDevice> rightInputDevices = new List<InputDevice>();
		List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * L_1 = (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 *)il2cpp_codegen_object_new(List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82_il2cpp_TypeInfo_var);
		List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE(L_1, /*hidden argument*/List_1__ctor_m9B2A700199AEC054106E0B7185D81ED1C89AC5DE_RuntimeMethod_var);
		__this->set_rightInputDevices_8(L_1);
		// private readonly List<InputFeatureUsage> featureUsages = new List<InputFeatureUsage>();
		List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * L_2 = (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 *)il2cpp_codegen_object_new(List_1_t1D9B9431DC8E643C86300156798632FB6B945A03_il2cpp_TypeInfo_var);
		List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3(L_2, /*hidden argument*/List_1__ctor_m68D98C092B7C3D244E58221D5E3146C5A62D48C3_RuntimeMethod_var);
		__this->set_featureUsages_9(L_2);
		// private readonly List<TextMesh> displayFeatureUsagesTextMeshes = new List<TextMesh>();
		List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD * L_3 = (List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD *)il2cpp_codegen_object_new(List_1_t83C532366EE9B8DEEE140F12C62FC794A14B5AAD_il2cpp_TypeInfo_var);
		List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E(L_3, /*hidden argument*/List_1__ctor_m7FD17D612A7A3D2A57B6B4815FC83ADCEE9A7A6E_RuntimeMethod_var);
		__this->set_displayFeatureUsagesTextMeshes_10(L_3);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool_Update_m421D81AC22BBC79BB12A136719D1A253DCE801A4 (MixedRealityInteractionTool_t0DC4E04480C1237A73F92B0DA2B570122E57DB9A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MixedRealityInteractionTool_Update_m421D81AC22BBC79BB12A136719D1A253DCE801A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * V_0 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_4 = NULL;
	MixedRealityInteractionMappingU5BU5D_tAFDC8ACB7CE85B38D7A81BC15A7B9865F000537D* V_5 = NULL;
	int32_t V_6 = 0;
	MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * V_7 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * V_8 = NULL;
	MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B8_1 = NULL;
	Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	String_t* G_B10_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B10_2 = NULL;
	RuntimeObject * G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B12_2 = NULL;
	RuntimeObject * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B11_2 = NULL;
	RuntimeObject * G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B18_2 = NULL;
	RuntimeObject * G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B14_2 = NULL;
	RuntimeObject * G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B13_2 = NULL;
	int32_t G_B15_0 = 0;
	RuntimeObject * G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B15_3 = NULL;
	RuntimeObject * G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B17_2 = NULL;
	RuntimeObject * G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B16_2 = NULL;
	String_t* G_B19_0 = NULL;
	RuntimeObject * G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * G_B19_3 = NULL;
	{
		// if (listControllersTextMesh == null || leftHandedControllerTextMesh == null || rightHandedControllerTextMesh == null)
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_0 = __this->get_listControllersTextMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_2 = __this->get_leftHandedControllerTextMesh_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_4 = __this->get_rightHandedControllerTextMesh_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// listControllersTextMesh.text = string.Empty;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_6 = __this->get_listControllersTextMesh_4();
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_6);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_6, L_7, /*hidden argument*/NULL);
		// leftHandedControllerTextMesh.text = string.Empty;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_8 = __this->get_leftHandedControllerTextMesh_5();
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_8);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_8, L_9, /*hidden argument*/NULL);
		// rightHandedControllerTextMesh.text = string.Empty;
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_10 = __this->get_rightHandedControllerTextMesh_6();
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_10);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_10, L_11, /*hidden argument*/NULL);
		// HashSet<IMixedRealityController> controllers = CoreServices.InputSystem?.DetectedControllers;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t888DE3DBB2AFBE6DDC3347BEEA92551CC0504499_il2cpp_TypeInfo_var);
		RuntimeObject* L_12 = CoreServices_get_InputSystem_m9EFF18C8C4ADBC30606C0AFFFE729A4233C5B4B1(/*hidden argument*/NULL);
		RuntimeObject* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_0067;
		}
	}
	{
		G_B7_0 = ((HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 *)(NULL));
		goto IL_006c;
	}

IL_0067:
	{
		NullCheck(G_B6_0);
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_14 = InterfaceFuncInvoker0< HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_t86B8C18CE9950C6BCA684AA052D5C04802DA1CC0_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = L_14;
	}

IL_006c:
	{
		V_0 = G_B7_0;
		// listControllersTextMesh.text = $"Detected {controllers?.Count} input source{(controllers?.Count > 1 ? "s:" : controllers?.Count != 0 ? ":" : "s")}\n";
		TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_15 = __this->get_listControllersTextMesh_4();
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_16 = V_0;
		G_B8_0 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
		G_B8_1 = L_15;
		if (L_16)
		{
			G_B9_0 = _stringLiteralE252DBDE43D1F8EB3EBA5796B8AFB3BBDAC795F7;
			G_B9_1 = L_15;
			goto IL_0086;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB ));
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_17 = V_1;
		G_B10_0 = L_17;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0091;
	}

IL_0086:
	{
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_inline(L_18, /*hidden argument*/HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_RuntimeMethod_var);
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2((&L_20), L_19, /*hidden argument*/Nullable_1__ctor_m11F9C228CFDF836DDFCD7880C09CB4098AB9D7F2_RuntimeMethod_var);
		G_B10_0 = L_20;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0091:
	{
		Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB  L_21 = G_B10_0;
		RuntimeObject * L_22 = Box(Nullable_1_t0D03270832B3FFDDC0E7C2D89D4A0EA25376A1EB_il2cpp_TypeInfo_var, &L_21);
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_23 = V_0;
		G_B11_0 = L_22;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		if (!L_23)
		{
			G_B12_0 = L_22;
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_00a2;
		}
	}
	{
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_inline(L_24, /*hidden argument*/HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_RuntimeMethod_var);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			G_B18_0 = G_B11_0;
			G_B18_1 = G_B11_1;
			G_B18_2 = G_B11_2;
			goto IL_00c1;
		}
	}

IL_00a2:
	{
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_26 = V_0;
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		if (L_26)
		{
			G_B14_0 = G_B12_0;
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			goto IL_00a8;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		goto IL_00b1;
	}

IL_00a8:
	{
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_inline(L_27, /*hidden argument*/HashSet_1_get_Count_mAEA84B7F23A78D8C4B90B4F20DE877D6B54475F0_RuntimeMethod_var);
		G_B15_0 = ((!(((uint32_t)L_28) <= ((uint32_t)0)))? 1 : 0);
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
	}

IL_00b1:
	{
		G_B16_0 = G_B15_1;
		G_B16_1 = G_B15_2;
		G_B16_2 = G_B15_3;
		if (G_B15_0)
		{
			G_B17_0 = G_B15_1;
			G_B17_1 = G_B15_2;
			G_B17_2 = G_B15_3;
			goto IL_00ba;
		}
	}
	{
		G_B19_0 = _stringLiteralA0F1490A20D0211C997B44BC357E1972DEAB8AE3;
		G_B19_1 = G_B16_0;
		G_B19_2 = G_B16_1;
		G_B19_3 = G_B16_2;
		goto IL_00c6;
	}

IL_00ba:
	{
		G_B19_0 = _stringLiteral05A79F06CF3F67F726DAE68D18A2290F6C9A50C9;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_00c6;
	}

IL_00c1:
	{
		G_B19_0 = _stringLiteral6126CDA8ABEA9B72D62B5EBC6AB525CB287F4D14;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_00c6:
	{
		String_t* L_29 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(G_B19_2, G_B19_1, G_B19_0, /*hidden argument*/NULL);
		NullCheck(G_B19_3);
		TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(G_B19_3, L_29, /*hidden argument*/NULL);
		// if (controllers == null)
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_30 = V_0;
		if (L_30)
		{
			goto IL_00d4;
		}
	}
	{
		// return;
		return;
	}

IL_00d4:
	{
		// foreach (IMixedRealityController controller in controllers)
		HashSet_1_t9924756E7FC03F035E5F0CAF550C9CE2FB713905 * L_31 = V_0;
		NullCheck(L_31);
		Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8  L_32 = HashSet_1_GetEnumerator_mFFE5F213ACD188E721D159602434C9389478CC73(L_31, /*hidden argument*/HashSet_1_GetEnumerator_mFFE5F213ACD188E721D159602434C9389478CC73_RuntimeMethod_var);
		V_2 = L_32;
	}

IL_00db:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03dc;
		}

IL_00e0:
		{
			// foreach (IMixedRealityController controller in controllers)
			RuntimeObject* L_33 = Enumerator_get_Current_mCB6B4FD35786F93407FD6642B9CAE1C9D1E28137_inline((Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mCB6B4FD35786F93407FD6642B9CAE1C9D1E28137_RuntimeMethod_var);
			V_3 = L_33;
			// listControllersTextMesh.text += $"{controller.InputSource.SourceName}\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_34 = __this->get_listControllersTextMesh_4();
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_35 = L_34;
			NullCheck(L_35);
			String_t* L_36 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_35, /*hidden argument*/NULL);
			RuntimeObject* L_37 = V_3;
			NullCheck(L_37);
			RuntimeObject* L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80_il2cpp_TypeInfo_var, L_37);
			NullCheck(L_38);
			String_t* L_39 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t769232035FD76C1A690AC71A043E7BBA8FFF437F_il2cpp_TypeInfo_var, L_38);
			String_t* L_40 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_36, L_39, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			NullCheck(L_35);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_35, L_40, /*hidden argument*/NULL);
			// if (controller.ControllerHandedness == Handedness.Left)
			RuntimeObject* L_41 = V_3;
			NullCheck(L_41);
			uint8_t L_42 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80_il2cpp_TypeInfo_var, L_41);
			if ((!(((uint32_t)L_42) == ((uint32_t)1))))
			{
				goto IL_0121;
			}
		}

IL_0117:
		{
			// textMesh = leftHandedControllerTextMesh;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_43 = __this->get_leftHandedControllerTextMesh_5();
			V_4 = L_43;
			// }
			goto IL_0135;
		}

IL_0121:
		{
			// else if (controller.ControllerHandedness == Handedness.Right)
			RuntimeObject* L_44 = V_3;
			NullCheck(L_44);
			uint8_t L_45 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80_il2cpp_TypeInfo_var, L_44);
			if ((!(((uint32_t)L_45) == ((uint32_t)2))))
			{
				goto IL_03dc;
			}
		}

IL_012d:
		{
			// textMesh = rightHandedControllerTextMesh;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_46 = __this->get_rightHandedControllerTextMesh_6();
			V_4 = L_46;
		}

IL_0135:
		{
			// textMesh.text = $"{controller.InputSource.SourceName}\n\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_47 = V_4;
			RuntimeObject* L_48 = V_3;
			NullCheck(L_48);
			RuntimeObject* L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80_il2cpp_TypeInfo_var, L_48);
			NullCheck(L_49);
			String_t* L_50 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t769232035FD76C1A690AC71A043E7BBA8FFF437F_il2cpp_TypeInfo_var, L_49);
			String_t* L_51 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_50, _stringLiteral71853C6197A6A7F222DB0F1978C7CB232B87C5EE, /*hidden argument*/NULL);
			NullCheck(L_47);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_47, L_51, /*hidden argument*/NULL);
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			RuntimeObject* L_52 = V_3;
			NullCheck(L_52);
			MixedRealityInteractionMappingU5BU5D_tAFDC8ACB7CE85B38D7A81BC15A7B9865F000537D* L_53 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_tAFDC8ACB7CE85B38D7A81BC15A7B9865F000537D* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t74DD4F39D7A2181F20D09DF62F774E7CD3EA3D80_il2cpp_TypeInfo_var, L_52);
			V_5 = L_53;
			V_6 = 0;
			goto IL_03d1;
		}

IL_0161:
		{
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			MixedRealityInteractionMappingU5BU5D_tAFDC8ACB7CE85B38D7A81BC15A7B9865F000537D* L_54 = V_5;
			int32_t L_55 = V_6;
			NullCheck(L_54);
			int32_t L_56 = L_55;
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
			V_7 = L_57;
			// textMesh.text += $"{interaction.Description} [{interaction.MixedRealityInputAction.Description}]";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_58 = V_4;
			V_8 = L_58;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_59 = V_8;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_60 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_61 = L_60;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_62 = V_8;
			NullCheck(L_62);
			String_t* L_63 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_62, /*hidden argument*/NULL);
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_63);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_63);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_64 = L_61;
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_65 = V_7;
			NullCheck(L_65);
			String_t* L_66 = MixedRealityInteractionMapping_get_Description_m76BED89D771D15F4DFD0572AA5080AE47C5D7E9B_inline(L_65, /*hidden argument*/NULL);
			NullCheck(L_64);
			ArrayElementTypeCheck (L_64, L_66);
			(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_66);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_67 = L_64;
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, _stringLiteral42CBDB3C55980503B68E044C73B768E2C1557D44);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral42CBDB3C55980503B68E044C73B768E2C1557D44);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_68 = L_67;
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_69 = V_7;
			NullCheck(L_69);
			MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  L_70 = MixedRealityInteractionMapping_get_MixedRealityInputAction_m70E87630BE9122774F7E3D642D5B6A559D53FF77_inline(L_69, /*hidden argument*/NULL);
			V_9 = L_70;
			String_t* L_71 = MixedRealityInputAction_get_Description_m7F3B2DDE4302987E7DD65FDD5641594780FAB49A_inline((MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC *)(&V_9), /*hidden argument*/NULL);
			NullCheck(L_68);
			ArrayElementTypeCheck (L_68, L_71);
			(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_71);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_72 = L_68;
			NullCheck(L_72);
			ArrayElementTypeCheck (L_72, _stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1);
			(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral4FF447B8EF42CA51FA6FB287BED8D40F49BE58F1);
			String_t* L_73 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_72, /*hidden argument*/NULL);
			NullCheck(L_59);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_59, L_73, /*hidden argument*/NULL);
			// switch (interaction.InputType)
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_74 = V_7;
			NullCheck(L_74);
			int32_t L_75 = MixedRealityInteractionMapping_get_InputType_m43EDD8A209C072878EF2A9646CDFF216609E29DC_inline(L_74, /*hidden argument*/NULL);
			V_10 = L_75;
			int32_t L_76 = V_10;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)3)))
			{
				case 0:
				{
					goto IL_02b4;
				}
				case 1:
				{
					goto IL_02e1;
				}
				case 2:
				{
					goto IL_030e;
				}
				case 3:
				{
					goto IL_0338;
				}
				case 4:
				{
					goto IL_0338;
				}
				case 5:
				{
					goto IL_0338;
				}
				case 6:
				{
					goto IL_0338;
				}
				case 7:
				{
					goto IL_0362;
				}
				case 8:
				{
					goto IL_0338;
				}
				case 9:
				{
					goto IL_0338;
				}
				case 10:
				{
					goto IL_0338;
				}
				case 11:
				{
					goto IL_02b4;
				}
				case 12:
				{
					goto IL_02e1;
				}
				case 13:
				{
					goto IL_030e;
				}
				case 14:
				{
					goto IL_038c;
				}
				case 15:
				{
					goto IL_0338;
				}
				case 16:
				{
					goto IL_0338;
				}
				case 17:
				{
					goto IL_0338;
				}
				case 18:
				{
					goto IL_038c;
				}
				case 19:
				{
					goto IL_0338;
				}
				case 20:
				{
					goto IL_0338;
				}
				case 21:
				{
					goto IL_0338;
				}
				case 22:
				{
					goto IL_0338;
				}
				case 23:
				{
					goto IL_0338;
				}
				case 24:
				{
					goto IL_0338;
				}
				case 25:
				{
					goto IL_03b4;
				}
				case 26:
				{
					goto IL_02b4;
				}
				case 27:
				{
					goto IL_03b4;
				}
				case 28:
				{
					goto IL_03b4;
				}
				case 29:
				{
					goto IL_03b4;
				}
				case 30:
				{
					goto IL_02b4;
				}
				case 31:
				{
					goto IL_03b4;
				}
				case 32:
				{
					goto IL_03b4;
				}
				case 33:
				{
					goto IL_03b4;
				}
				case 34:
				{
					goto IL_02b4;
				}
				case 35:
				{
					goto IL_03b4;
				}
				case 36:
				{
					goto IL_03b4;
				}
				case 37:
				{
					goto IL_03b4;
				}
				case 38:
				{
					goto IL_02b4;
				}
				case 39:
				{
					goto IL_03b4;
				}
				case 40:
				{
					goto IL_03b4;
				}
				case 41:
				{
					goto IL_03b4;
				}
				case 42:
				{
					goto IL_02b4;
				}
				case 43:
				{
					goto IL_03b4;
				}
				case 44:
				{
					goto IL_03b4;
				}
				case 45:
				{
					goto IL_03b4;
				}
				case 46:
				{
					goto IL_038c;
				}
				case 47:
				{
					goto IL_038c;
				}
				case 48:
				{
					goto IL_0338;
				}
				case 49:
				{
					goto IL_0338;
				}
				case 50:
				{
					goto IL_0338;
				}
				case 51:
				{
					goto IL_0338;
				}
				case 52:
				{
					goto IL_0338;
				}
				case 53:
				{
					goto IL_0338;
				}
				case 54:
				{
					goto IL_0362;
				}
				case 55:
				{
					goto IL_0338;
				}
				case 56:
				{
					goto IL_0338;
				}
				case 57:
				{
					goto IL_0338;
				}
			}
		}

IL_02af:
		{
			goto IL_03b4;
		}

IL_02b4:
		{
			// textMesh.text += $": {interaction.PoseData}";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_77 = V_4;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_78 = L_77;
			NullCheck(L_78);
			String_t* L_79 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_78, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_80 = V_7;
			NullCheck(L_80);
			MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  L_81 = MixedRealityInteractionMapping_get_PoseData_mD4CB21747D525CB584F295D7739C9F437CF60D8B_inline(L_80, /*hidden argument*/NULL);
			MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  L_82 = L_81;
			RuntimeObject * L_83 = Box(MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F_il2cpp_TypeInfo_var, &L_82);
			String_t* L_84 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_83, /*hidden argument*/NULL);
			String_t* L_85 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_79, L_84, /*hidden argument*/NULL);
			NullCheck(L_78);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_78, L_85, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_02e1:
		{
			// textMesh.text += $": {interaction.PositionData}";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_86 = V_4;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_87 = L_86;
			NullCheck(L_87);
			String_t* L_88 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_87, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_89 = V_7;
			NullCheck(L_89);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = MixedRealityInteractionMapping_get_PositionData_m3ACF3C1C8EDE4337D97FA485244336E4DCF0DA2B_inline(L_89, /*hidden argument*/NULL);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = L_90;
			RuntimeObject * L_92 = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &L_91);
			String_t* L_93 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_92, /*hidden argument*/NULL);
			String_t* L_94 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_88, L_93, /*hidden argument*/NULL);
			NullCheck(L_87);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_87, L_94, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_030e:
		{
			// textMesh.text += $": {interaction.RotationData}";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_95 = V_4;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_96 = L_95;
			NullCheck(L_96);
			String_t* L_97 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_96, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_98 = V_7;
			NullCheck(L_98);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_99 = MixedRealityInteractionMapping_get_RotationData_m234626B44EA99C817FADDC86FFE9F3B07FF36AF0_inline(L_98, /*hidden argument*/NULL);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_100 = L_99;
			RuntimeObject * L_101 = Box(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var, &L_100);
			String_t* L_102 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_101, /*hidden argument*/NULL);
			String_t* L_103 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_97, L_102, /*hidden argument*/NULL);
			NullCheck(L_96);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_96, L_103, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_0338:
		{
			// textMesh.text += $": {interaction.BoolData}";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_104 = V_4;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_105 = L_104;
			NullCheck(L_105);
			String_t* L_106 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_105, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_107 = V_7;
			NullCheck(L_107);
			bool L_108 = MixedRealityInteractionMapping_get_BoolData_mC8CD7525F5AED47129616318839C07D49B1AF536_inline(L_107, /*hidden argument*/NULL);
			bool L_109 = L_108;
			RuntimeObject * L_110 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_109);
			String_t* L_111 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_110, /*hidden argument*/NULL);
			String_t* L_112 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_106, L_111, /*hidden argument*/NULL);
			NullCheck(L_105);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_105, L_112, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_0362:
		{
			// textMesh.text += $": {interaction.FloatData}";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_113 = V_4;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_114 = L_113;
			NullCheck(L_114);
			String_t* L_115 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_114, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_116 = V_7;
			NullCheck(L_116);
			float L_117 = MixedRealityInteractionMapping_get_FloatData_mD7F3824E4165CB7B03F6D4C4D623AEAF09DA1400_inline(L_116, /*hidden argument*/NULL);
			float L_118 = L_117;
			RuntimeObject * L_119 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_118);
			String_t* L_120 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_119, /*hidden argument*/NULL);
			String_t* L_121 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_115, L_120, /*hidden argument*/NULL);
			NullCheck(L_114);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_114, L_121, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_038c:
		{
			// textMesh.text += $": {interaction.Vector2Data}";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_122 = V_4;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_123 = L_122;
			NullCheck(L_123);
			String_t* L_124 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_123, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * L_125 = V_7;
			NullCheck(L_125);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_126 = MixedRealityInteractionMapping_get_Vector2Data_mA3A41DCD39120BDEE47E793D9497C361F858C9F4_inline(L_125, /*hidden argument*/NULL);
			Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_127 = L_126;
			RuntimeObject * L_128 = Box(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var, &L_127);
			String_t* L_129 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral4F5ACAF545446DF2A0A11A5336F631B4A539F085, L_128, /*hidden argument*/NULL);
			String_t* L_130 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_124, L_129, /*hidden argument*/NULL);
			NullCheck(L_123);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_123, L_130, /*hidden argument*/NULL);
		}

IL_03b4:
		{
			// textMesh.text += "\n";
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_131 = V_4;
			TextMesh_t327D0DAFEF431170D8C2882083D442AF4D4A0E4A * L_132 = L_131;
			NullCheck(L_132);
			String_t* L_133 = TextMesh_get_text_m82229563FBF187061DDBCB5305CB227513B6ED83(L_132, /*hidden argument*/NULL);
			String_t* L_134 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_133, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
			NullCheck(L_132);
			TextMesh_set_text_m64242AB987CF285F432E7AED38F24FF855E9B220(L_132, L_134, /*hidden argument*/NULL);
			int32_t L_135 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
		}

IL_03d1:
		{
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			int32_t L_136 = V_6;
			MixedRealityInteractionMappingU5BU5D_tAFDC8ACB7CE85B38D7A81BC15A7B9865F000537D* L_137 = V_5;
			NullCheck(L_137);
			if ((((int32_t)L_136) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_137)->max_length)))))))
			{
				goto IL_0161;
			}
		}

IL_03dc:
		{
			// foreach (IMixedRealityController controller in controllers)
			bool L_138 = Enumerator_MoveNext_mDFD57149E873C7888610D0DFE33FFE0E87EB9956((Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mDFD57149E873C7888610D0DFE33FFE0E87EB9956_RuntimeMethod_var);
			if (L_138)
			{
				goto IL_00e0;
			}
		}

IL_03e8:
		{
			IL2CPP_LEAVE(0x3F8, FINALLY_03ea);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03ea;
	}

FINALLY_03ea:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m9394AFBC6E88C8507B73D42D723C35273A2B3FC3((Enumerator_t86982D5B8EEE6B6992E4C8027C1B05F1598CACD8 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m9394AFBC6E88C8507B73D42D723C35273A2B3FC3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1002)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1002)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F8, IL_03f8)
	}

IL_03f8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool__ctor_m6D65D9AACECBA19FE3980B9303008166B9CE6BAD (MixedRealityInteractionTool_t0DC4E04480C1237A73F92B0DA2B570122E57DB9A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_m76BED89D771D15F4DFD0572AA5080AE47C5D7E9B_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// public string Description => description;
		String_t* L_0 = __this->get_description_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  MixedRealityInteractionMapping_get_MixedRealityInputAction_m70E87630BE9122774F7E3D642D5B6A559D53FF77_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m7F3B2DDE4302987E7DD65FDD5641594780FAB49A_inline (MixedRealityInputAction_t5B61307291187B5DFD1199E73E785381223173FC * __this, const RuntimeMethod* method)
{
	{
		// public string Description => description;
		String_t* L_0 = __this->get_description_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m43EDD8A209C072878EF2A9646CDFF216609E29DC_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  MixedRealityInteractionMapping_get_PoseData_mD4CB21747D525CB584F295D7739C9F437CF60D8B_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_tD0EA25752DB09A7E1D8D25321C32360088D2DA3F  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  MixedRealityInteractionMapping_get_PositionData_m3ACF3C1C8EDE4337D97FA485244336E4DCF0DA2B_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// return positionData;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_positionData_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  MixedRealityInteractionMapping_get_RotationData_m234626B44EA99C817FADDC86FFE9F3B07FF36AF0_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// return rotationData;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get_rotationData_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_mC8CD7525F5AED47129616318839C07D49B1AF536_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_mD7F3824E4165CB7B03F6D4C4D623AEAF09DA1400_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// return floatData;
		float L_0 = __this->get_floatData_13();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  MixedRealityInteractionMapping_get_Vector2Data_mA3A41DCD39120BDEE47E793D9497C361F858C9F4_inline (MixedRealityInteractionMapping_t995EEEF95390E501B5CB3DBC706CAC25F088E6AB * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m0B358AA6623FFC84ED3B974399BA32ACF73688CF_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  List_1_get_Item_m7390EC60641E021BCFF5EE56E305AFFDA4330007_gshared_inline (List_1_tC7D762090867E3F16A0155C2F19FFC7621DEAB82 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6* L_2 = (InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6*)__this->get__items_1();
		int32_t L_3 = ___index0;
		InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((InputDeviceU5BU5D_t7BBE618529776AA19177302C8E99EC4E176764C6*)L_2, (int32_t)L_3);
		return (InputDevice_tF13BD967109BAB2CF49E1304EDFDA255067A2CDC )L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  Enumerator_get_Current_mB0C24AE3A0E17585A2AEF9203CD7F82D5E9A1375_gshared_inline (Enumerator_t8BEEEB26B158B63E7DA2811A8590348071581648 * __this, const RuntimeMethod* method)
{
	{
		InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C  L_0 = (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C )__this->get_current_3();
		return (InputFeatureUsage_t37196CE3245923015BC883DABA534863D72F7B0C )L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFFFC73166A6391F13D07AF136A1BE40512E566A4_gshared_inline (List_1_t1D9B9431DC8E643C86300156798632FB6B945A03 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m3199849B2D9664DC8C8F48BC9962FAE119ED2BCA_gshared_inline (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m1499866DFEFE1948C928A86AC372B4F9E04D1A5F_gshared_inline (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
