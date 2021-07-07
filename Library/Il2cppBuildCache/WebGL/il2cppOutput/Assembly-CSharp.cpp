#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<MonsterLevel>
struct List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// MonsterLevel[]
struct MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Wave[]
struct WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BulletBehavior
struct BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraShake
struct CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// EnemyDestructionDelegate
struct EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManagerBehaviour
struct GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOver
struct GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582;
// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MonsterData
struct MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770;
// MonsterLevel
struct MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58;
// MoveEnemy
struct MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlaceMonster
struct PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// ShootEnemies
struct ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983;
// SpawnEnemy
struct SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Tutorial
struct Tutorial_t00E576E62CB1B76A4CEB914E180C4F6F2CC63BF3;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Wave
struct Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// EnemyDestructionDelegate/EnemyDelegate
struct EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613;
IL2CPP_EXTERN_C String_t* _stringLiteral2DEF90159D28E5C712F975281C5D8F2C61C27A05;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD0434F3A1A5821B2DA49A6ACE7CA39D5C61B98;
IL2CPP_EXTERN_C String_t* _stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347;
IL2CPP_EXTERN_C String_t* _stringLiteral64A766FE2C2D373D78EDEA7D1C01DA9F83F3DC0D;
IL2CPP_EXTERN_C String_t* _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7DC73077B102683EB94686A40150716DF0DD48BC;
IL2CPP_EXTERN_C String_t* _stringLiteral91794EC654EBF1BE51D4C0F6AE1A759B7CC183F2;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A9785798D2D0F718A65CA477404227F18FF986;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralDABD7C0A71F4DE385882508CCAD18E725C76DAC3;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E_mC93D5D8814AC47BCAD6AAE29887CA719CE63C779_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m331BB0E342DF2E35EA3CC80DA1A10A9345331CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C_mBCCE195BE732B62F88E9D40D1AADF315DD0C8AE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_mD6CE04DF090334D6CBCD869589F2AB464DD8035C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ShootEnemies_OnEnemyDestroy_m76A0148A8F446A11C92CB65B0762706C2EC1E9A8_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<MonsterLevel>
struct List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB, ____items_1)); }
	inline MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A* get__items_1() const { return ____items_1; }
	inline MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB_StaticFields, ____emptyArray_5)); }
	inline MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MonsterLevelU5BU5D_t089F3C40B9AE61667ADB53B5399C180F00AA558A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// MonsterLevel
struct MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58  : public RuntimeObject
{
public:
	// System.Int32 MonsterLevel::cost
	int32_t ___cost_0;
	// UnityEngine.GameObject MonsterLevel::visualization
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___visualization_1;
	// UnityEngine.GameObject MonsterLevel::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_2;
	// System.Single MonsterLevel::fireRate
	float ___fireRate_3;

public:
	inline static int32_t get_offset_of_cost_0() { return static_cast<int32_t>(offsetof(MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58, ___cost_0)); }
	inline int32_t get_cost_0() const { return ___cost_0; }
	inline int32_t* get_address_of_cost_0() { return &___cost_0; }
	inline void set_cost_0(int32_t value)
	{
		___cost_0 = value;
	}

	inline static int32_t get_offset_of_visualization_1() { return static_cast<int32_t>(offsetof(MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58, ___visualization_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_visualization_1() const { return ___visualization_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_visualization_1() { return &___visualization_1; }
	inline void set_visualization_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___visualization_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visualization_1), (void*)value);
	}

	inline static int32_t get_offset_of_bullet_2() { return static_cast<int32_t>(offsetof(MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58, ___bullet_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_2() const { return ___bullet_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_2() { return &___bullet_2; }
	inline void set_bullet_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_2), (void*)value);
	}

	inline static int32_t get_offset_of_fireRate_3() { return static_cast<int32_t>(offsetof(MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58, ___fireRate_3)); }
	inline float get_fireRate_3() const { return ___fireRate_3; }
	inline float* get_address_of_fireRate_3() { return &___fireRate_3; }
	inline void set_fireRate_3(float value)
	{
		___fireRate_3 = value;
	}
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Wave
struct Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA  : public RuntimeObject
{
public:
	// UnityEngine.GameObject Wave::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_0;
	// System.Single Wave::spawnInterval
	float ___spawnInterval_1;
	// System.Int32 Wave::maxEnemies
	int32_t ___maxEnemies_2;

public:
	inline static int32_t get_offset_of_enemyPrefab_0() { return static_cast<int32_t>(offsetof(Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA, ___enemyPrefab_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_0() const { return ___enemyPrefab_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_0() { return &___enemyPrefab_0; }
	inline void set_enemyPrefab_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_0), (void*)value);
	}

	inline static int32_t get_offset_of_spawnInterval_1() { return static_cast<int32_t>(offsetof(Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA, ___spawnInterval_1)); }
	inline float get_spawnInterval_1() const { return ___spawnInterval_1; }
	inline float* get_address_of_spawnInterval_1() { return &___spawnInterval_1; }
	inline void set_spawnInterval_1(float value)
	{
		___spawnInterval_1 = value;
	}

	inline static int32_t get_offset_of_maxEnemies_2() { return static_cast<int32_t>(offsetof(Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA, ___maxEnemies_2)); }
	inline int32_t get_maxEnemies_2() const { return ___maxEnemies_2; }
	inline int32_t* get_address_of_maxEnemies_2() { return &___maxEnemies_2; }
	inline void set_maxEnemies_2(int32_t value)
	{
		___maxEnemies_2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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

// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// EnemyDestructionDelegate/EnemyDelegate
struct EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BulletBehavior
struct BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BulletBehavior::speed
	float ___speed_4;
	// System.Int32 BulletBehavior::damage
	int32_t ___damage_5;
	// UnityEngine.GameObject BulletBehavior::target
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target_6;
	// UnityEngine.Vector3 BulletBehavior::startPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition_7;
	// UnityEngine.Vector3 BulletBehavior::targetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___targetPosition_8;
	// System.Single BulletBehavior::distance
	float ___distance_9;
	// System.Single BulletBehavior::startTime
	float ___startTime_10;
	// GameManagerBehaviour BulletBehavior::gameManager
	GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * ___gameManager_11;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_damage_5() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___damage_5)); }
	inline int32_t get_damage_5() const { return ___damage_5; }
	inline int32_t* get_address_of_damage_5() { return &___damage_5; }
	inline void set_damage_5(int32_t value)
	{
		___damage_5 = value;
	}

	inline static int32_t get_offset_of_target_6() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___target_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_target_6() const { return ___target_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_target_6() { return &___target_6; }
	inline void set_target_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___target_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_6), (void*)value);
	}

	inline static int32_t get_offset_of_startPosition_7() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___startPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPosition_7() const { return ___startPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPosition_7() { return &___startPosition_7; }
	inline void set_startPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPosition_7 = value;
	}

	inline static int32_t get_offset_of_targetPosition_8() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___targetPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_targetPosition_8() const { return ___targetPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_targetPosition_8() { return &___targetPosition_8; }
	inline void set_targetPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___targetPosition_8 = value;
	}

	inline static int32_t get_offset_of_distance_9() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___distance_9)); }
	inline float get_distance_9() const { return ___distance_9; }
	inline float* get_address_of_distance_9() { return &___distance_9; }
	inline void set_distance_9(float value)
	{
		___distance_9 = value;
	}

	inline static int32_t get_offset_of_startTime_10() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___startTime_10)); }
	inline float get_startTime_10() const { return ___startTime_10; }
	inline float* get_address_of_startTime_10() { return &___startTime_10; }
	inline void set_startTime_10(float value)
	{
		___startTime_10 = value;
	}

	inline static int32_t get_offset_of_gameManager_11() { return static_cast<int32_t>(offsetof(BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C, ___gameManager_11)); }
	inline GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * get_gameManager_11() const { return ___gameManager_11; }
	inline GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 ** get_address_of_gameManager_11() { return &___gameManager_11; }
	inline void set_gameManager_11(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * value)
	{
		___gameManager_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_11), (void*)value);
	}
};


// CameraShake
struct CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CameraShake::shakeDecayStart
	float ___shakeDecayStart_4;
	// System.Single CameraShake::shakeIntensityStart
	float ___shakeIntensityStart_5;
	// System.Single CameraShake::shakeDecay
	float ___shakeDecay_6;
	// System.Single CameraShake::shakeIntensity
	float ___shakeIntensity_7;
	// UnityEngine.Vector3 CameraShake::originPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___originPosition_8;
	// UnityEngine.Quaternion CameraShake::originRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___originRotation_9;
	// System.Boolean CameraShake::shaking
	bool ___shaking_10;
	// UnityEngine.Transform CameraShake::transformAtOrigin
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transformAtOrigin_11;

public:
	inline static int32_t get_offset_of_shakeDecayStart_4() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeDecayStart_4)); }
	inline float get_shakeDecayStart_4() const { return ___shakeDecayStart_4; }
	inline float* get_address_of_shakeDecayStart_4() { return &___shakeDecayStart_4; }
	inline void set_shakeDecayStart_4(float value)
	{
		___shakeDecayStart_4 = value;
	}

	inline static int32_t get_offset_of_shakeIntensityStart_5() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeIntensityStart_5)); }
	inline float get_shakeIntensityStart_5() const { return ___shakeIntensityStart_5; }
	inline float* get_address_of_shakeIntensityStart_5() { return &___shakeIntensityStart_5; }
	inline void set_shakeIntensityStart_5(float value)
	{
		___shakeIntensityStart_5 = value;
	}

	inline static int32_t get_offset_of_shakeDecay_6() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeDecay_6)); }
	inline float get_shakeDecay_6() const { return ___shakeDecay_6; }
	inline float* get_address_of_shakeDecay_6() { return &___shakeDecay_6; }
	inline void set_shakeDecay_6(float value)
	{
		___shakeDecay_6 = value;
	}

	inline static int32_t get_offset_of_shakeIntensity_7() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shakeIntensity_7)); }
	inline float get_shakeIntensity_7() const { return ___shakeIntensity_7; }
	inline float* get_address_of_shakeIntensity_7() { return &___shakeIntensity_7; }
	inline void set_shakeIntensity_7(float value)
	{
		___shakeIntensity_7 = value;
	}

	inline static int32_t get_offset_of_originPosition_8() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___originPosition_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_originPosition_8() const { return ___originPosition_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_originPosition_8() { return &___originPosition_8; }
	inline void set_originPosition_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___originPosition_8 = value;
	}

	inline static int32_t get_offset_of_originRotation_9() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___originRotation_9)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_originRotation_9() const { return ___originRotation_9; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_originRotation_9() { return &___originRotation_9; }
	inline void set_originRotation_9(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___originRotation_9 = value;
	}

	inline static int32_t get_offset_of_shaking_10() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___shaking_10)); }
	inline bool get_shaking_10() const { return ___shaking_10; }
	inline bool* get_address_of_shaking_10() { return &___shaking_10; }
	inline void set_shaking_10(bool value)
	{
		___shaking_10 = value;
	}

	inline static int32_t get_offset_of_transformAtOrigin_11() { return static_cast<int32_t>(offsetof(CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E, ___transformAtOrigin_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transformAtOrigin_11() const { return ___transformAtOrigin_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transformAtOrigin_11() { return &___transformAtOrigin_11; }
	inline void set_transformAtOrigin_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transformAtOrigin_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transformAtOrigin_11), (void*)value);
	}
};


// EnemyDestructionDelegate
struct EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// EnemyDestructionDelegate/EnemyDelegate EnemyDestructionDelegate::enemyDelegate
	EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * ___enemyDelegate_4;

public:
	inline static int32_t get_offset_of_enemyDelegate_4() { return static_cast<int32_t>(offsetof(EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7, ___enemyDelegate_4)); }
	inline EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * get_enemyDelegate_4() const { return ___enemyDelegate_4; }
	inline EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB ** get_address_of_enemyDelegate_4() { return &___enemyDelegate_4; }
	inline void set_enemyDelegate_4(EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * value)
	{
		___enemyDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyDelegate_4), (void*)value);
	}
};


// GameManagerBehaviour
struct GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameManagerBehaviour::goldLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___goldLabel_4;
	// UnityEngine.UI.Text GameManagerBehaviour::healthLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___healthLabel_5;
	// UnityEngine.GameObject[] GameManagerBehaviour::healthIndicator
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___healthIndicator_6;
	// System.Int32 GameManagerBehaviour::gold
	int32_t ___gold_7;
	// UnityEngine.UI.Text GameManagerBehaviour::waveLabel
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___waveLabel_8;
	// UnityEngine.GameObject[] GameManagerBehaviour::nextWaveLabels
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___nextWaveLabels_9;
	// System.Boolean GameManagerBehaviour::gameOver
	bool ___gameOver_10;
	// System.Int32 GameManagerBehaviour::wave
	int32_t ___wave_11;
	// System.Int32 GameManagerBehaviour::health
	int32_t ___health_12;

public:
	inline static int32_t get_offset_of_goldLabel_4() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___goldLabel_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_goldLabel_4() const { return ___goldLabel_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_goldLabel_4() { return &___goldLabel_4; }
	inline void set_goldLabel_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___goldLabel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goldLabel_4), (void*)value);
	}

	inline static int32_t get_offset_of_healthLabel_5() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___healthLabel_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_healthLabel_5() const { return ___healthLabel_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_healthLabel_5() { return &___healthLabel_5; }
	inline void set_healthLabel_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___healthLabel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthLabel_5), (void*)value);
	}

	inline static int32_t get_offset_of_healthIndicator_6() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___healthIndicator_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_healthIndicator_6() const { return ___healthIndicator_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_healthIndicator_6() { return &___healthIndicator_6; }
	inline void set_healthIndicator_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___healthIndicator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthIndicator_6), (void*)value);
	}

	inline static int32_t get_offset_of_gold_7() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___gold_7)); }
	inline int32_t get_gold_7() const { return ___gold_7; }
	inline int32_t* get_address_of_gold_7() { return &___gold_7; }
	inline void set_gold_7(int32_t value)
	{
		___gold_7 = value;
	}

	inline static int32_t get_offset_of_waveLabel_8() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___waveLabel_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_waveLabel_8() const { return ___waveLabel_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_waveLabel_8() { return &___waveLabel_8; }
	inline void set_waveLabel_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___waveLabel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveLabel_8), (void*)value);
	}

	inline static int32_t get_offset_of_nextWaveLabels_9() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___nextWaveLabels_9)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_nextWaveLabels_9() const { return ___nextWaveLabels_9; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_nextWaveLabels_9() { return &___nextWaveLabels_9; }
	inline void set_nextWaveLabels_9(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___nextWaveLabels_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextWaveLabels_9), (void*)value);
	}

	inline static int32_t get_offset_of_gameOver_10() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___gameOver_10)); }
	inline bool get_gameOver_10() const { return ___gameOver_10; }
	inline bool* get_address_of_gameOver_10() { return &___gameOver_10; }
	inline void set_gameOver_10(bool value)
	{
		___gameOver_10 = value;
	}

	inline static int32_t get_offset_of_wave_11() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___wave_11)); }
	inline int32_t get_wave_11() const { return ___wave_11; }
	inline int32_t* get_address_of_wave_11() { return &___wave_11; }
	inline void set_wave_11(int32_t value)
	{
		___wave_11 = value;
	}

	inline static int32_t get_offset_of_health_12() { return static_cast<int32_t>(offsetof(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1, ___health_12)); }
	inline int32_t get_health_12() const { return ___health_12; }
	inline int32_t* get_address_of_health_12() { return &___health_12; }
	inline void set_health_12(int32_t value)
	{
		___health_12 = value;
	}
};


// GameOver
struct GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// HealthBar
struct HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HealthBar::maxHealth
	float ___maxHealth_4;
	// System.Single HealthBar::currentHealth
	float ___currentHealth_5;
	// System.Single HealthBar::originalScale
	float ___originalScale_6;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___maxHealth_4)); }
	inline float get_maxHealth_4() const { return ___maxHealth_4; }
	inline float* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(float value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_currentHealth_5() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___currentHealth_5)); }
	inline float get_currentHealth_5() const { return ___currentHealth_5; }
	inline float* get_address_of_currentHealth_5() { return &___currentHealth_5; }
	inline void set_currentHealth_5(float value)
	{
		___currentHealth_5 = value;
	}

	inline static int32_t get_offset_of_originalScale_6() { return static_cast<int32_t>(offsetof(HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1, ___originalScale_6)); }
	inline float get_originalScale_6() const { return ___originalScale_6; }
	inline float* get_address_of_originalScale_6() { return &___originalScale_6; }
	inline void set_originalScale_6(float value)
	{
		___originalScale_6 = value;
	}
};


// MonsterData
struct MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<MonsterLevel> MonsterData::levels
	List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * ___levels_4;
	// MonsterLevel MonsterData::currentLevel
	MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * ___currentLevel_5;

public:
	inline static int32_t get_offset_of_levels_4() { return static_cast<int32_t>(offsetof(MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770, ___levels_4)); }
	inline List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * get_levels_4() const { return ___levels_4; }
	inline List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB ** get_address_of_levels_4() { return &___levels_4; }
	inline void set_levels_4(List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * value)
	{
		___levels_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levels_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentLevel_5() { return static_cast<int32_t>(offsetof(MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770, ___currentLevel_5)); }
	inline MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * get_currentLevel_5() const { return ___currentLevel_5; }
	inline MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 ** get_address_of_currentLevel_5() { return &___currentLevel_5; }
	inline void set_currentLevel_5(MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * value)
	{
		___currentLevel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentLevel_5), (void*)value);
	}
};


// MoveEnemy
struct MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] MoveEnemy::waypoints
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___waypoints_4;
	// System.Int32 MoveEnemy::currentWaypoint
	int32_t ___currentWaypoint_5;
	// System.Single MoveEnemy::lastWaypointSwitchTime
	float ___lastWaypointSwitchTime_6;
	// System.Single MoveEnemy::speed
	float ___speed_7;

public:
	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82, ___waypoints_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_waypoints_4() const { return ___waypoints_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_currentWaypoint_5() { return static_cast<int32_t>(offsetof(MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82, ___currentWaypoint_5)); }
	inline int32_t get_currentWaypoint_5() const { return ___currentWaypoint_5; }
	inline int32_t* get_address_of_currentWaypoint_5() { return &___currentWaypoint_5; }
	inline void set_currentWaypoint_5(int32_t value)
	{
		___currentWaypoint_5 = value;
	}

	inline static int32_t get_offset_of_lastWaypointSwitchTime_6() { return static_cast<int32_t>(offsetof(MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82, ___lastWaypointSwitchTime_6)); }
	inline float get_lastWaypointSwitchTime_6() const { return ___lastWaypointSwitchTime_6; }
	inline float* get_address_of_lastWaypointSwitchTime_6() { return &___lastWaypointSwitchTime_6; }
	inline void set_lastWaypointSwitchTime_6(float value)
	{
		___lastWaypointSwitchTime_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}
};


// PlaceMonster
struct PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PlaceMonster::monsterPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___monsterPrefab_4;
	// UnityEngine.GameObject PlaceMonster::monster
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___monster_5;
	// GameManagerBehaviour PlaceMonster::gameManager
	GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * ___gameManager_6;

public:
	inline static int32_t get_offset_of_monsterPrefab_4() { return static_cast<int32_t>(offsetof(PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84, ___monsterPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_monsterPrefab_4() const { return ___monsterPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_monsterPrefab_4() { return &___monsterPrefab_4; }
	inline void set_monsterPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___monsterPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_monster_5() { return static_cast<int32_t>(offsetof(PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84, ___monster_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_monster_5() const { return ___monster_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_monster_5() { return &___monster_5; }
	inline void set_monster_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___monster_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monster_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_6() { return static_cast<int32_t>(offsetof(PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84, ___gameManager_6)); }
	inline GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * get_gameManager_6() const { return ___gameManager_6; }
	inline GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 ** get_address_of_gameManager_6() { return &___gameManager_6; }
	inline void set_gameManager_6(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * value)
	{
		___gameManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_6), (void*)value);
	}
};


// ShootEnemies
struct ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ShootEnemies::lastShotTime
	float ___lastShotTime_4;
	// MonsterData ShootEnemies::monsterData
	MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * ___monsterData_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ShootEnemies::enemiesInRange
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___enemiesInRange_6;

public:
	inline static int32_t get_offset_of_lastShotTime_4() { return static_cast<int32_t>(offsetof(ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983, ___lastShotTime_4)); }
	inline float get_lastShotTime_4() const { return ___lastShotTime_4; }
	inline float* get_address_of_lastShotTime_4() { return &___lastShotTime_4; }
	inline void set_lastShotTime_4(float value)
	{
		___lastShotTime_4 = value;
	}

	inline static int32_t get_offset_of_monsterData_5() { return static_cast<int32_t>(offsetof(ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983, ___monsterData_5)); }
	inline MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * get_monsterData_5() const { return ___monsterData_5; }
	inline MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 ** get_address_of_monsterData_5() { return &___monsterData_5; }
	inline void set_monsterData_5(MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * value)
	{
		___monsterData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monsterData_5), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesInRange_6() { return static_cast<int32_t>(offsetof(ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983, ___enemiesInRange_6)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_enemiesInRange_6() const { return ___enemiesInRange_6; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_enemiesInRange_6() { return &___enemiesInRange_6; }
	inline void set_enemiesInRange_6(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___enemiesInRange_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemiesInRange_6), (void*)value);
	}
};


// SpawnEnemy
struct SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] SpawnEnemy::waypoints
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___waypoints_4;
	// UnityEngine.GameObject SpawnEnemy::testEnemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___testEnemyPrefab_5;
	// Wave[] SpawnEnemy::waves
	WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* ___waves_6;
	// System.Int32 SpawnEnemy::timeBetweenWaves
	int32_t ___timeBetweenWaves_7;
	// GameManagerBehaviour SpawnEnemy::gameManager
	GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * ___gameManager_8;
	// System.Single SpawnEnemy::lastSpawnTime
	float ___lastSpawnTime_9;
	// System.Int32 SpawnEnemy::enemiesSpawned
	int32_t ___enemiesSpawned_10;

public:
	inline static int32_t get_offset_of_waypoints_4() { return static_cast<int32_t>(offsetof(SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7, ___waypoints_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_waypoints_4() const { return ___waypoints_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_waypoints_4() { return &___waypoints_4; }
	inline void set_waypoints_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___waypoints_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_4), (void*)value);
	}

	inline static int32_t get_offset_of_testEnemyPrefab_5() { return static_cast<int32_t>(offsetof(SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7, ___testEnemyPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_testEnemyPrefab_5() const { return ___testEnemyPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_testEnemyPrefab_5() { return &___testEnemyPrefab_5; }
	inline void set_testEnemyPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___testEnemyPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___testEnemyPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_waves_6() { return static_cast<int32_t>(offsetof(SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7, ___waves_6)); }
	inline WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* get_waves_6() const { return ___waves_6; }
	inline WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89** get_address_of_waves_6() { return &___waves_6; }
	inline void set_waves_6(WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* value)
	{
		___waves_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waves_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeBetweenWaves_7() { return static_cast<int32_t>(offsetof(SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7, ___timeBetweenWaves_7)); }
	inline int32_t get_timeBetweenWaves_7() const { return ___timeBetweenWaves_7; }
	inline int32_t* get_address_of_timeBetweenWaves_7() { return &___timeBetweenWaves_7; }
	inline void set_timeBetweenWaves_7(int32_t value)
	{
		___timeBetweenWaves_7 = value;
	}

	inline static int32_t get_offset_of_gameManager_8() { return static_cast<int32_t>(offsetof(SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7, ___gameManager_8)); }
	inline GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * get_gameManager_8() const { return ___gameManager_8; }
	inline GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 ** get_address_of_gameManager_8() { return &___gameManager_8; }
	inline void set_gameManager_8(GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * value)
	{
		___gameManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastSpawnTime_9() { return static_cast<int32_t>(offsetof(SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7, ___lastSpawnTime_9)); }
	inline float get_lastSpawnTime_9() const { return ___lastSpawnTime_9; }
	inline float* get_address_of_lastSpawnTime_9() { return &___lastSpawnTime_9; }
	inline void set_lastSpawnTime_9(float value)
	{
		___lastSpawnTime_9 = value;
	}

	inline static int32_t get_offset_of_enemiesSpawned_10() { return static_cast<int32_t>(offsetof(SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7, ___enemiesSpawned_10)); }
	inline int32_t get_enemiesSpawned_10() const { return ___enemiesSpawned_10; }
	inline int32_t* get_address_of_enemiesSpawned_10() { return &___enemiesSpawned_10; }
	inline void set_enemiesSpawned_10(int32_t value)
	{
		___enemiesSpawned_10 = value;
	}
};


// Tutorial
struct Tutorial_t00E576E62CB1B76A4CEB914E180C4F6F2CC63BF3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Wave[]
struct WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * m_Items[1];

public:
	inline Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameManagerBehaviour>()
inline GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<HealthBar>()
inline HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * GameObject_GetComponent_TisHealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_mD6CE04DF090334D6CBCD869589F2AB464DD8035C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// System.Int32 GameManagerBehaviour::get_Gold()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method);
// System.Void GameManagerBehaviour::set_Gold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_set_Gold_mF5682958B2CC05ABEBC721AAEDD0ECD2C84FC808 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void EnemyDestructionDelegate/EnemyDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate_Invoke_m785C0C52A6D582CBFD339B4B0499AC8E6A43FA0E (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CameraShake>()
inline CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * Component_GetComponent_TisCameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E_mC93D5D8814AC47BCAD6AAE29887CA719CE63C779 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Shake_m8E3BCAB0B6EDB63DBD2ACC31A7E795B9E7E6B1FC (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Int32 GameManagerBehaviour::get_Health()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Health_m0FF68D16B6A5A755A1A9A210D749D94F192597E2_inline (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameManagerBehaviour::set_Wave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_set_Wave_m89FECD0A7CD7CBC9D6234AFE1D52119C52A930C3 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void GameManagerBehaviour::set_Health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_set_Health_mAFBCB2EF9CE1A00AD731838E6E34786EEFAD7532 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<MonsterLevel>::get_Item(System.Int32)
inline MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline (List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * (*) (List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void MonsterData::set_CurrentLevel(MonsterLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterData_set_CurrentLevel_m70353F9D73000F38A114E0219C6B8FB581C421FF (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<MonsterLevel>::IndexOf(!0)
inline int32_t List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731 (List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * __this, MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB *, MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<MonsterLevel>::get_Count()
inline int32_t List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_inline (List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void MoveEnemy::RotateIntoMoveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy_RotateIntoMoveDirection_m8CBCD1E3CB15B239AFBEF67032ACED70F92F40D4 (MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MonsterData>()
inline MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// MonsterLevel MonsterData::GetNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * MonsterData_GetNextLevel_mB4F87093137158770E3A15ACC41B8AB804B3ABCD (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean PlaceMonster::CanPlaceMonster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceMonster_CanPlaceMonster_m8339889F9E7DDE949DB56D231151F1C8177E5923 (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// MonsterLevel MonsterData::get_CurrentLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293_inline (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method);
// System.Boolean PlaceMonster::CanUpgradeMonster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceMonster_CanUpgradeMonster_m1E93443FCBC04136D6B1734CA83622D6A29A993C (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method);
// System.Void MonsterData::IncreaseLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterData_IncreaseLevel_m8796A9A708EC0C6FBC28CF8919429B05885F0AEC (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<MonsterData>()
inline MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * GameObject_GetComponentInChildren_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m331BB0E342DF2E35EA3CC80DA1A10A9345331CE6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<MoveEnemy>()
inline MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single MoveEnemy::DistanceToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MoveEnemy_DistanceToGoal_m45CB4578A5140256401A3578FA1B6D0D4BE83DE5 (MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void ShootEnemies::Shoot(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Shoot_m23CCF208CD01B34F47632CDFC6197BCF7DD0CE07 (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<BulletBehavior>()
inline BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * GameObject_GetComponent_TisBulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C_mBCCE195BE732B62F88E9D40D1AADF315DD0C8AE8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
inline bool List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<EnemyDestructionDelegate>()
inline EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void EnemyDestructionDelegate/EnemyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate__ctor_m34BFAA250EB2F7DA8C5F8B2799CE062743A78C4B (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Int32 GameManagerBehaviour::get_Wave()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Wave_m2D1BF6FA2DA3E6C47EE3BE3BF821D0FB65AC832E_inline (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void BulletBehavior::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior_Start_m2545291E239903B165A39135772B7049CA9E4425 (BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// startTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_startTime_10(L_0);
		// distance = Vector2.Distance (startPosition, targetPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = __this->get_startPosition_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_targetPosition_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		float L_5;
		L_5 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_2, L_4, /*hidden argument*/NULL);
		__this->set_distance_9(L_5);
		// GameObject gm = GameObject.Find("GameManager");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		V_0 = L_6;
		// gameManager = gm.GetComponent<GameManagerBehaviour>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_8;
		L_8 = GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E(L_7, /*hidden argument*/GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		__this->set_gameManager_11(L_8);
		// }
		return;
	}
}
// System.Void BulletBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior_Update_mFD5FDF87CFDD795905702D460516D2A6C2D31021 (BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_mD6CE04DF090334D6CBCD869589F2AB464DD8035C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float timeInterval = Time.time - startTime;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_startTime_10();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_1));
		// gameObject.transform.position = Vector3.Lerp(startPosition, targetPosition, timeInterval * speed / distance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_startPosition_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_targetPosition_8();
		float L_6 = V_0;
		float L_7 = __this->get_speed_4();
		float L_8 = __this->get_distance_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_4, L_5, ((float)((float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7))/(float)L_8)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_9, /*hidden argument*/NULL);
		// if (gameObject.transform.position.Equals(targetPosition))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = __this->get_targetPosition_8();
		bool L_14;
		L_14 = Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0100;
		}
	}
	{
		// if (target != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_target_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00f5;
		}
	}
	{
		// Transform healthBarTransform = target.transform.Find("HealthBar");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_target_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_18, _stringLiteral162E86C91F5205A141B28109C3F1C992A8B0D613, /*hidden argument*/NULL);
		// HealthBar healthBar =
		//     healthBarTransform.gameObject.GetComponent<HealthBar>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_21;
		L_21 = GameObject_GetComponent_TisHealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_mD6CE04DF090334D6CBCD869589F2AB464DD8035C(L_20, /*hidden argument*/GameObject_GetComponent_TisHealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1_mD6CE04DF090334D6CBCD869589F2AB464DD8035C_RuntimeMethod_var);
		// healthBar.currentHealth -= Mathf.Max(damage, 0);
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_22 = L_21;
		HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * L_23 = L_22;
		float L_24 = L_23->get_currentHealth_5();
		int32_t L_25 = __this->get_damage_5();
		int32_t L_26;
		L_26 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(L_25, 0, /*hidden argument*/NULL);
		L_23->set_currentHealth_5(((float)il2cpp_codegen_subtract((float)L_24, (float)((float)((float)L_26)))));
		// if (healthBar.currentHealth <= 0)
		float L_27 = L_22->get_currentHealth_5();
		if ((!(((float)L_27) <= ((float)(0.0f)))))
		{
			goto IL_00f5;
		}
	}
	{
		// Destroy(target);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_target_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_28, /*hidden argument*/NULL);
		// AudioSource audioSource = target.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_target_6();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_30;
		L_30 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_29, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		// AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_31;
		L_31 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79(L_31, L_33, /*hidden argument*/NULL);
		// gameManager.Gold += 30;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_34 = __this->get_gameManager_11();
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_35 = L_34;
		int32_t L_36;
		L_36 = GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline(L_35, /*hidden argument*/NULL);
		GameManagerBehaviour_set_Gold_mF5682958B2CC05ABEBC721AAEDD0ECD2C84FC808(L_35, ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)((int32_t)30))), /*hidden argument*/NULL);
	}

IL_00f5:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_37, /*hidden argument*/NULL);
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void BulletBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletBehavior__ctor_mE1EE4D02B9C0E62B18B7BAD3E7B68A818C3A08DE (BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 10;
		__this->set_speed_4((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraShake::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_OnEnable_mC5F0D09F47325774263C96E1D04D7F5B086A7396 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// transformAtOrigin = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_transformAtOrigin_11(L_0);
		// }
		return;
	}
}
// System.Void CameraShake::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Update_mA645C66F43D75201C877BCB3505623B08C30CCAB (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// if (!shaking)
		bool L_0 = __this->get_shaking_10();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (shakeIntensity > 0f)
		float L_1 = __this->get_shakeIntensity_7();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_00f3;
		}
	}
	{
		// transformAtOrigin.localPosition = originPosition + Random.insideUnitSphere * shakeIntensity;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_transformAtOrigin_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_originPosition_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90(/*hidden argument*/NULL);
		float L_5 = __this->get_shakeIntensity_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_6, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_2, L_7, /*hidden argument*/NULL);
		// transformAtOrigin.localRotation = new Quaternion(
		//     originRotation.x + Random.Range(-shakeIntensity, shakeIntensity) * .2f,
		//     originRotation.y + Random.Range(-shakeIntensity, shakeIntensity) * .2f,
		//     originRotation.z + Random.Range(-shakeIntensity, shakeIntensity) * .2f,
		//     originRotation.w + Random.Range(-shakeIntensity, shakeIntensity) * .2f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = __this->get_transformAtOrigin_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_9 = __this->get_address_of_originRotation_9();
		float L_10 = L_9->get_x_0();
		float L_11 = __this->get_shakeIntensity_7();
		float L_12 = __this->get_shakeIntensity_7();
		float L_13;
		L_13 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_11)), L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_14 = __this->get_address_of_originRotation_9();
		float L_15 = L_14->get_y_1();
		float L_16 = __this->get_shakeIntensity_7();
		float L_17 = __this->get_shakeIntensity_7();
		float L_18;
		L_18 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_16)), L_17, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_19 = __this->get_address_of_originRotation_9();
		float L_20 = L_19->get_z_2();
		float L_21 = __this->get_shakeIntensity_7();
		float L_22 = __this->get_shakeIntensity_7();
		float L_23;
		L_23 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_21)), L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * L_24 = __this->get_address_of_originRotation_9();
		float L_25 = L_24->get_w_3();
		float L_26 = __this->get_shakeIntensity_7();
		float L_27 = __this->get_shakeIntensity_7();
		float L_28;
		L_28 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(((-L_26)), L_27, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Quaternion__ctor_m564FA9302F5B9DA8BAB97B0A2D86FFE83ACAA421((&L_29), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)(0.200000003f))))), ((float)il2cpp_codegen_add((float)L_15, (float)((float)il2cpp_codegen_multiply((float)L_18, (float)(0.200000003f))))), ((float)il2cpp_codegen_add((float)L_20, (float)((float)il2cpp_codegen_multiply((float)L_23, (float)(0.200000003f))))), ((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_multiply((float)L_28, (float)(0.200000003f))))), /*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_8, L_29, /*hidden argument*/NULL);
		// shakeIntensity -= shakeDecay;
		float L_30 = __this->get_shakeIntensity_7();
		float L_31 = __this->get_shakeDecay_6();
		__this->set_shakeIntensity_7(((float)il2cpp_codegen_subtract((float)L_30, (float)L_31)));
		// }
		return;
	}

IL_00f3:
	{
		// shaking = false;
		__this->set_shaking_10((bool)0);
		// transformAtOrigin.localPosition = originPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32 = __this->get_transformAtOrigin_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_originPosition_8();
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_32, L_33, /*hidden argument*/NULL);
		// transformAtOrigin.localRotation = originRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34 = __this->get_transformAtOrigin_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_35 = __this->get_originRotation_9();
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_34, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraShake::Shake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake_Shake_m8E3BCAB0B6EDB63DBD2ACC31A7E795B9E7E6B1FC (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// if (!shaking)
		bool L_0 = __this->get_shaking_10();
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// originPosition = transformAtOrigin.localPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_transformAtOrigin_11();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		__this->set_originPosition_8(L_2);
		// originRotation = transformAtOrigin.localRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_transformAtOrigin_11();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_3, /*hidden argument*/NULL);
		__this->set_originRotation_9(L_4);
	}

IL_002a:
	{
		// shaking = true;
		__this->set_shaking_10((bool)1);
		// shakeDecay = shakeDecayStart;
		float L_5 = __this->get_shakeDecayStart_4();
		__this->set_shakeDecay_6(L_5);
		// shakeIntensity = shakeIntensityStart;
		float L_6 = __this->get_shakeIntensityStart_5();
		__this->set_shakeIntensity_7(L_6);
		// }
		return;
	}
}
// System.Void CameraShake::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraShake__ctor_mB96D113BFE38658F4F65E8AE2F14388045C2AF68 (CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * __this, const RuntimeMethod* method)
{
	{
		// public float shakeDecayStart = 0.002f;
		__this->set_shakeDecayStart_4((0.00200000009f));
		// public float shakeIntensityStart = 0.03f;
		__this->set_shakeIntensityStart_5((0.0299999993f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyDestructionDelegate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate_Start_m91E1B0991EE00D90AA51AE305F665BBDEA0F7202 (EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyDestructionDelegate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate_Update_mBDA97B0C7DA5E82AD35092C95974D602EC570CFB (EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyDestructionDelegate::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate_OnDestroy_m3AE21C5879C39842364A4A027D72D914476AD0CF (EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * __this, const RuntimeMethod* method)
{
	{
		// if (enemyDelegate != null)
		EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * L_0 = __this->get_enemyDelegate_4();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// enemyDelegate(gameObject);
		EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * L_1 = __this->get_enemyDelegate_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		EnemyDelegate_Invoke_m785C0C52A6D582CBFD339B4B0499AC8E6A43FA0E(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void EnemyDestructionDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDestructionDelegate__ctor_mA5C31F1E7A74E460A91C9217D66C88D87FDE53EE (EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 GameManagerBehaviour::get_Wave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Wave_m2D1BF6FA2DA3E6C47EE3BE3BF821D0FB65AC832E (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// return wave;
		int32_t L_0 = __this->get_wave_11();
		return L_0;
	}
}
// System.Void GameManagerBehaviour::set_Wave(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_set_Wave_m89FECD0A7CD7CBC9D6234AFE1D52119C52A930C3 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DEF90159D28E5C712F975281C5D8F2C61C27A05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DC73077B102683EB94686A40150716DF0DD48BC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// wave = value;
		int32_t L_0 = ___value0;
		__this->set_wave_11(L_0);
		// if (!gameOver)
		bool L_1 = __this->get_gameOver_10();
		if (L_1)
		{
			goto IL_0039;
		}
	}
	{
		// for (int i = 0; i < nextWaveLabels.Length; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0013:
	{
		// nextWaveLabels[i].GetComponent<Animator>().SetTrigger("nextWave");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = __this->get_nextWaveLabels_9();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_5, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_6, _stringLiteral7DC73077B102683EB94686A40150716DF0DD48BC, /*hidden argument*/NULL);
		// for (int i = 0; i < nextWaveLabels.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002e:
	{
		// for (int i = 0; i < nextWaveLabels.Length; i++)
		int32_t L_8 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_nextWaveLabels_9();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0013;
		}
	}

IL_0039:
	{
		// waveLabel.text = "WAVE: " + (wave + 1);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_waveLabel_8();
		int32_t L_11 = __this->get_wave_11();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2DEF90159D28E5C712F975281C5D8F2C61C27A05, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// }
		return;
	}
}
// System.Int32 GameManagerBehaviour::get_Gold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// return gold;
		int32_t L_0 = __this->get_gold_7();
		return L_0;
	}
}
// System.Void GameManagerBehaviour::set_Gold(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_set_Gold_mF5682958B2CC05ABEBC721AAEDD0ECD2C84FC808 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDABD7C0A71F4DE385882508CCAD18E725C76DAC3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gold = value;
		int32_t L_0 = ___value0;
		__this->set_gold_7(L_0);
		// goldLabel.GetComponent<Text>().text = "GOLD: " + gold;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_goldLabel_4();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_1, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		int32_t* L_3 = __this->get_address_of_gold_7();
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_3, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDABD7C0A71F4DE385882508CCAD18E725C76DAC3, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// }
		return;
	}
}
// System.Int32 GameManagerBehaviour::get_Health()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Health_m0FF68D16B6A5A755A1A9A210D749D94F192597E2 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// return health;
		int32_t L_0 = __this->get_health_12();
		return L_0;
	}
}
// System.Void GameManagerBehaviour::set_Health(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_set_Health_mAFBCB2EF9CE1A00AD731838E6E34786EEFAD7532 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E_mC93D5D8814AC47BCAD6AAE29887CA719CE63C779_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A766FE2C2D373D78EDEA7D1C01DA9F83F3DC0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91794EC654EBF1BE51D4C0F6AE1A759B7CC183F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (value < health)
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get_health_12();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0018;
		}
	}
	{
		// Camera.main.GetComponent<CameraShake>().Shake();
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		CameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E * L_3;
		L_3 = Component_GetComponent_TisCameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E_mC93D5D8814AC47BCAD6AAE29887CA719CE63C779(L_2, /*hidden argument*/Component_GetComponent_TisCameraShake_t5A4A81BE1EE03235B1EAD2B7254B5CC941E7640E_mC93D5D8814AC47BCAD6AAE29887CA719CE63C779_RuntimeMethod_var);
		CameraShake_Shake_m8E3BCAB0B6EDB63DBD2ACC31A7E795B9E7E6B1FC(L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// health = value;
		int32_t L_4 = ___value0;
		__this->set_health_12(L_4);
		// healthLabel.text = "HEALTH: " + health;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_healthLabel_5();
		int32_t* L_6 = __this->get_address_of_health_12();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral91794EC654EBF1BE51D4C0F6AE1A759B7CC183F2, L_7, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
		// if (health <= 0 && !gameOver)
		int32_t L_9 = __this->get_health_12();
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		bool L_10 = __this->get_gameOver_10();
		if (L_10)
		{
			goto IL_0071;
		}
	}
	{
		// gameOver = true;
		__this->set_gameOver_10((bool)1);
		// GameObject gameOverText = GameObject.FindGameObjectWithTag("GameOver");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
		// gameOverText.GetComponent<Animator>().SetBool("gameOver", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12;
		L_12 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_11, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_12, _stringLiteral64A766FE2C2D373D78EDEA7D1C01DA9F83F3DC0D, (bool)1, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// for (int i = 0; i < healthIndicator.Length; i++)
		V_0 = 0;
		goto IL_00a0;
	}

IL_0075:
	{
		// if (i < Health)
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = GameManagerBehaviour_get_Health_m0FF68D16B6A5A755A1A9A210D749D94F192597E2_inline(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_008e;
		}
	}
	{
		// healthIndicator[i].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = __this->get_healthIndicator_6();
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_009c;
	}

IL_008e:
	{
		// healthIndicator[i].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = __this->get_healthIndicator_6();
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)0, /*hidden argument*/NULL);
	}

IL_009c:
	{
		// for (int i = 0; i < healthIndicator.Length; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00a0:
	{
		// for (int i = 0; i < healthIndicator.Length; i++)
		int32_t L_24 = V_0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = __this->get_healthIndicator_6();
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0075;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameManagerBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_Start_m3A663189BCD67C0F50CEE737540B9CCC8B1442F5 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// Gold = 1000;
		GameManagerBehaviour_set_Gold_mF5682958B2CC05ABEBC721AAEDD0ECD2C84FC808(__this, ((int32_t)1000), /*hidden argument*/NULL);
		// Wave = 0;
		GameManagerBehaviour_set_Wave_m89FECD0A7CD7CBC9D6234AFE1D52119C52A930C3(__this, 0, /*hidden argument*/NULL);
		// Health = 5;
		GameManagerBehaviour_set_Health_mAFBCB2EF9CE1A00AD731838E6E34786EEFAD7532(__this, 5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManagerBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour_Update_m0D02ADF1FDF8EB6B5ED6427C9763B1A76710117E (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameManagerBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManagerBehaviour__ctor_mB120872196DF79F06091CFBC40E63F5944BAE530 (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameOver::RestartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_RestartLevel_mF4884657692CDDC043C96E6AF179686E604651A3 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_mA5E40A40961F188E4CE253D481E8AED893A224E9 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HealthBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Start_mB10AF30B9000AC79352D4B0F9027D24C38D9AB98 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	{
		// originalScale = gameObject.transform.localScale.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		__this->set_originalScale_6(L_3);
		// }
		return;
	}
}
// System.Void HealthBar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar_Update_m32757C89878259F331EE8A965C10360028EF6258 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tmpScale = gameObject.transform.localScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// tmpScale.x = currentHealth / maxHealth * originalScale;
		float L_3 = __this->get_currentHealth_5();
		float L_4 = __this->get_maxHealth_4();
		float L_5 = __this->get_originalScale_6();
		(&V_0)->set_x_2(((float)il2cpp_codegen_multiply((float)((float)((float)L_3/(float)L_4)), (float)L_5)));
		// gameObject.transform.localScale = tmpScale;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HealthBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthBar__ctor_m0D26699B0FC0E360EE6F5D4B80FE0D2622F0AA48 (HealthBar_t4F6E9402E45BDE8CFEEEB63CC2DD44170233BFA1 * __this, const RuntimeMethod* method)
{
	{
		// public float maxHealth = 100;
		__this->set_maxHealth_4((100.0f));
		// public float currentHealth = 100;
		__this->set_currentHealth_5((100.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MonsterData::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterData_OnEnable_mEA068E9C164D5663B81DE29156E34F4498D1C1A5 (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CurrentLevel = levels[0];
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_0 = __this->get_levels_4();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_1;
		L_1 = List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline(L_0, 0, /*hidden argument*/List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		MonsterData_set_CurrentLevel_m70353F9D73000F38A114E0219C6B8FB581C421FF(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MonsterData::IncreaseLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterData_IncreaseLevel_m8796A9A708EC0C6FBC28CF8919429B05885F0AEC (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int currentLevelIndex = levels.IndexOf(currentLevel);
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_0 = __this->get_levels_4();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_1 = __this->get_currentLevel_5();
		int32_t L_2;
		L_2 = List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731(L_0, L_1, /*hidden argument*/List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731_RuntimeMethod_var);
		V_0 = L_2;
		// if (currentLevelIndex < levels.Count - 1)
		int32_t L_3 = V_0;
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_4 = __this->get_levels_4();
		int32_t L_5;
		L_5 = List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_inline(L_4, /*hidden argument*/List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_RuntimeMethod_var);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))))
		{
			goto IL_0036;
		}
	}
	{
		// CurrentLevel = levels[currentLevelIndex + 1];
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_6 = __this->get_levels_4();
		int32_t L_7 = V_0;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_8;
		L_8 = List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		MonsterData_set_CurrentLevel_m70353F9D73000F38A114E0219C6B8FB581C421FF(__this, L_8, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// MonsterLevel MonsterData::GetNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * MonsterData_GetNextLevel_mB4F87093137158770E3A15ACC41B8AB804B3ABCD (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int currentLevelIndex = levels.IndexOf (currentLevel);
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_0 = __this->get_levels_4();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_1 = __this->get_currentLevel_5();
		int32_t L_2;
		L_2 = List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731(L_0, L_1, /*hidden argument*/List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731_RuntimeMethod_var);
		V_0 = L_2;
		// int maxLevelIndex = levels.Count - 1;
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_3 = __this->get_levels_4();
		int32_t L_4;
		L_4 = List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_inline(L_3, /*hidden argument*/List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		// if (currentLevelIndex < maxLevelIndex)
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}
	{
		// return levels[currentLevelIndex+1];
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_7 = __this->get_levels_4();
		int32_t L_8 = V_0;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_9;
		L_9 = List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline(L_7, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), /*hidden argument*/List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		return L_9;
	}

IL_0033:
	{
		// return null;
		return (MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 *)NULL;
	}
}
// MonsterLevel MonsterData::get_CurrentLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293 (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method)
{
	{
		// return currentLevel;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_0 = __this->get_currentLevel_5();
		return L_0;
	}
}
// System.Void MonsterData::set_CurrentLevel(MonsterLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterData_set_CurrentLevel_m70353F9D73000F38A114E0219C6B8FB581C421FF (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// currentLevel = value;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_0 = ___value0;
		__this->set_currentLevel_5(L_0);
		// int currentLevelIndex = levels.IndexOf(currentLevel);
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_1 = __this->get_levels_4();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_2 = __this->get_currentLevel_5();
		int32_t L_3;
		L_3 = List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731(L_1, L_2, /*hidden argument*/List_1_IndexOf_m6A1FE1954AE2B7A477DF95F82019862F379F3731_RuntimeMethod_var);
		V_0 = L_3;
		// GameObject levelVisualization = levels[currentLevelIndex].visualization;
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_4 = __this->get_levels_4();
		int32_t L_5 = V_0;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_6;
		L_6 = List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6->get_visualization_1();
		V_1 = L_7;
		// for (int i = 0; i < levels.Count; i++)
		V_2 = 0;
		goto IL_0070;
	}

IL_002f:
	{
		// if (levelVisualization != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006c;
		}
	}
	{
		// if (i == currentLevelIndex)
		int32_t L_10 = V_2;
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0055;
		}
	}
	{
		// levels[i].visualization.SetActive(true);
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_12 = __this->get_levels_4();
		int32_t L_13 = V_2;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_14;
		L_14 = List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_14->get_visualization_1();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_006c;
	}

IL_0055:
	{
		// levels[i].visualization.SetActive(false);
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_16 = __this->get_levels_4();
		int32_t L_17 = V_2;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_18;
		L_18 = List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18->get_visualization_1();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_006c:
	{
		// for (int i = 0; i < levels.Count; i++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0070:
	{
		// for (int i = 0; i < levels.Count; i++)
		int32_t L_21 = V_2;
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_22 = __this->get_levels_4();
		int32_t L_23;
		L_23 = List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_inline(L_22, /*hidden argument*/List_1_get_Count_m6629C68CEF5A40237BA16D90FA12989AFF1B2528_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_002f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MonsterData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterData__ctor_m1FCF2D5A9D68DA30726EE387F8952A64AAB8EAE6 (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MonsterLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonsterLevel__ctor_m75238BEF80840538359D7876B9F70756AF4FB353 (MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void MoveEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy_Start_m3018237F5751930DB1BFA5AD499EE05E2FFDA721 (MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * __this, const RuntimeMethod* method)
{
	{
		// lastWaypointSwitchTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastWaypointSwitchTime_6(L_0);
		// }
		return;
	}
}
// System.Void MoveEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy_Update_mB3761EA3860E02FDB73F2EF694F514E67FA95850 (MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 startPosition = waypoints[currentWaypoint].transform.position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_waypoints_4();
		int32_t L_1 = __this->get_currentWaypoint_5();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector3 endPosition = waypoints[currentWaypoint + 1].transform.position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_waypoints_4();
		int32_t L_7 = __this->get_currentWaypoint_5();
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// float pathLength = Vector3.Distance (startPosition, endPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_1;
		float L_14;
		L_14 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_12, L_13, /*hidden argument*/NULL);
		// float totalTimeForPath = pathLength / speed;
		float L_15 = __this->get_speed_7();
		V_2 = ((float)((float)L_14/(float)L_15));
		// float currentTimeOnPath = Time.time - lastWaypointSwitchTime;
		float L_16;
		L_16 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_17 = __this->get_lastWaypointSwitchTime_6();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_16, (float)L_17));
		// gameObject.transform.position = Vector2.Lerp (startPosition, endPosition, currentTimeOnPath / totalTimeForPath);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		L_21 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		L_23 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_22, /*hidden argument*/NULL);
		float L_24 = V_3;
		float L_25 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_26;
		L_26 = Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline(L_21, L_23, ((float)((float)L_24/(float)L_25)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_26, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_19, L_27, /*hidden argument*/NULL);
		// if (gameObject.transform.position.Equals(endPosition))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		V_4 = L_30;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = V_1;
		bool L_32;
		L_32 = Vector3_Equals_mA92800CD98ED6A42DD7C55C5DB22DAB4DEAA6397((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_010c;
		}
	}
	{
		// if (currentWaypoint < waypoints.Length - 2)
		int32_t L_33 = __this->get_currentWaypoint_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_34 = __this->get_waypoints_4();
		if ((((int32_t)L_33) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))), (int32_t)2)))))
		{
			goto IL_00c5;
		}
	}
	{
		// currentWaypoint++;
		int32_t L_35 = __this->get_currentWaypoint_5();
		__this->set_currentWaypoint_5(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		// lastWaypointSwitchTime = Time.time;
		float L_36;
		L_36 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastWaypointSwitchTime_6(L_36);
		// RotateIntoMoveDirection();
		MoveEnemy_RotateIntoMoveDirection_m8CBCD1E3CB15B239AFBEF67032ACED70F92F40D4(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c5:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_37, /*hidden argument*/NULL);
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_39;
		L_39 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_38, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		// AudioSource.PlayClipAtPoint(audioSource.clip, transform.position);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_40;
		L_40 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_39, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m9E225CC4435215CDF7E8DECCD3D1CEFCCB82AC79(L_40, L_42, /*hidden argument*/NULL);
		// GameManagerBehaviour gameManager =
		//     GameObject.Find("GameManager").GetComponent<GameManagerBehaviour>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_44;
		L_44 = GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E(L_43, /*hidden argument*/GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		// gameManager.Health -= 1;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_45 = L_44;
		int32_t L_46;
		L_46 = GameManagerBehaviour_get_Health_m0FF68D16B6A5A755A1A9A210D749D94F192597E2_inline(L_45, /*hidden argument*/NULL);
		GameManagerBehaviour_set_Health_mAFBCB2EF9CE1A00AD731838E6E34786EEFAD7532(L_45, ((int32_t)il2cpp_codegen_subtract((int32_t)L_46, (int32_t)1)), /*hidden argument*/NULL);
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void MoveEnemy::RotateIntoMoveDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy_RotateIntoMoveDirection_m8CBCD1E3CB15B239AFBEF67032ACED70F92F40D4 (MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 newStartPosition = waypoints [currentWaypoint].transform.position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_waypoints_4();
		int32_t L_1 = __this->get_currentWaypoint_5();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// Vector3 newEndPosition = waypoints [currentWaypoint + 1].transform.position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_waypoints_4();
		int32_t L_7 = __this->get_currentWaypoint_5();
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		// Vector3 newDirection = (newEndPosition - newStartPosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_11, L_12, /*hidden argument*/NULL);
		// float x = newDirection.x;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = L_13;
		float L_15 = L_14.get_x_2();
		V_1 = L_15;
		// float y = newDirection.y;
		float L_16 = L_14.get_y_3();
		// float rotationAngle = Mathf.Atan2 (y, x) * 180 / Mathf.PI;
		float L_17 = V_1;
		float L_18;
		L_18 = atan2f(L_16, L_17);
		V_2 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_18, (float)(180.0f)))/(float)(3.14159274f)));
		// GameObject sprite = gameObject.transform.Find("Sprite").gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_20, _stringLiteral75DD2D44571F44B6F1140AB52193761B47728B9B, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		// sprite.transform.rotation = Quaternion.AngleAxis(rotationAngle, Vector3.forward);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		float L_24 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_24, L_25, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_23, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single MoveEnemy::DistanceToGoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MoveEnemy_DistanceToGoal_m45CB4578A5140256401A3578FA1B6D0D4BE83DE5 (MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float distance = 0;
		V_0 = (0.0f);
		// distance += Vector2.Distance(
		//     gameObject.transform.position,
		//     waypoints [currentWaypoint + 1].transform.position);
		float L_0 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_waypoints_4();
		int32_t L_6 = __this->get_currentWaypoint_5();
		int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_4, L_11, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_0, (float)L_12));
		// for (int i = currentWaypoint + 1; i < waypoints.Length - 1; i++)
		int32_t L_13 = __this->get_currentWaypoint_5();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		goto IL_008c;
	}

IL_004c:
	{
		// Vector3 startPosition = waypoints [i].transform.position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_waypoints_4();
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// Vector3 endPosition = waypoints [i + 1].transform.position;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = __this->get_waypoints_4();
		int32_t L_21 = V_1;
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
		// distance += Vector2.Distance(startPosition, endPosition);
		float L_26 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		L_28 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30;
		L_30 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_29, /*hidden argument*/NULL);
		float L_31;
		L_31 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_28, L_30, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_add((float)L_26, (float)L_31));
		// for (int i = currentWaypoint + 1; i < waypoints.Length - 1; i++)
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_008c:
	{
		// for (int i = currentWaypoint + 1; i < waypoints.Length - 1; i++)
		int32_t L_33 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_34 = __this->get_waypoints_4();
		if ((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))), (int32_t)1)))))
		{
			goto IL_004c;
		}
	}
	{
		// return distance;
		float L_35 = V_0;
		return L_35;
	}
}
// System.Void MoveEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveEnemy__ctor_mC17A23D4B8709D0F5E4E595207E847E5EB26D94F (MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1.0f;
		__this->set_speed_7((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlaceMonster::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceMonster_Start_m435ADD3AD3E9372A74756ED9B0EF794F53E42D05 (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManager = GameObject.Find("GameManager").GetComponent<GameManagerBehaviour>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		__this->set_gameManager_6(L_1);
		// }
		return;
	}
}
// System.Void PlaceMonster::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceMonster_Update_m89B56D3948D1B8721D8DC22904BBA60A998027F1 (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean PlaceMonster::CanUpgradeMonster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceMonster_CanUpgradeMonster_m1E93443FCBC04136D6B1734CA83622D6A29A993C (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * V_0 = NULL;
	{
		// if (monster != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_monster_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// MonsterData monsterData = monster.GetComponent<MonsterData>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_monster_5();
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_3;
		L_3 = GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789(L_2, /*hidden argument*/GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		// MonsterLevel nextLevel = monsterData.GetNextLevel();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_4;
		L_4 = MonsterData_GetNextLevel_mB4F87093137158770E3A15ACC41B8AB804B3ABCD(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// if (nextLevel != null)
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_5 = V_0;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// return gameManager.Gold >= nextLevel.cost;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_6 = __this->get_gameManager_6();
		int32_t L_7;
		L_7 = GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline(L_6, /*hidden argument*/NULL);
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_8 = V_0;
		int32_t L_9 = L_8->get_cost_0();
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0039:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean PlaceMonster::CanPlaceMonster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlaceMonster_CanPlaceMonster_m8339889F9E7DDE949DB56D231151F1C8177E5923 (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int cost = monsterPrefab.GetComponent<MonsterData>().levels[0].cost;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_monsterPrefab_4();
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_1;
		L_1 = GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789(L_0, /*hidden argument*/GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		List_1_t2AD30B6AE382BAC12CD39D01F8F0A63AF1B658BB * L_2 = L_1->get_levels_4();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_3;
		L_3 = List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_inline(L_2, 0, /*hidden argument*/List_1_get_Item_m58463224B54420C367B7E98D08ADCE0EC3FEFB58_RuntimeMethod_var);
		int32_t L_4 = L_3->get_cost_0();
		V_0 = L_4;
		// return monster == null && gameManager.Gold >= cost;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_monster_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_7 = __this->get_gameManager_6();
		int32_t L_8;
		L_8 = GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		return (bool)((((int32_t)((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003c:
	{
		return (bool)0;
	}
}
// System.Void PlaceMonster::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceMonster_OnMouseUp_mBF97FC28643D43E3164D44545939E66982D3E3E4 (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanPlaceMonster())
		bool L_0;
		L_0 = PlaceMonster_CanPlaceMonster_m8339889F9E7DDE949DB56D231151F1C8177E5923(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0067;
		}
	}
	{
		// monster = (GameObject)
		//     Instantiate(monsterPrefab, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_monsterPrefab_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_1, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		__this->set_monster_5(L_5);
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7;
		L_7 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_6, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		// audioSource.PlayOneShot(audioSource.clip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = L_7;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9;
		L_9 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_8, /*hidden argument*/NULL);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_8, L_9, /*hidden argument*/NULL);
		// gameManager.Gold -= monster.GetComponent<MonsterData>().CurrentLevel.cost;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_10 = __this->get_gameManager_6();
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_11 = L_10;
		int32_t L_12;
		L_12 = GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline(L_11, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_monster_5();
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_14;
		L_14 = GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789(L_13, /*hidden argument*/GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_15;
		L_15 = MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293_inline(L_14, /*hidden argument*/NULL);
		int32_t L_16 = L_15->get_cost_0();
		GameManagerBehaviour_set_Gold_mF5682958B2CC05ABEBC721AAEDD0ECD2C84FC808(L_11, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)L_16)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0067:
	{
		// else if (CanUpgradeMonster())
		bool L_17;
		L_17 = PlaceMonster_CanUpgradeMonster_m1E93443FCBC04136D6B1734CA83622D6A29A993C(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00bc;
		}
	}
	{
		// monster.GetComponent<MonsterData>().IncreaseLevel();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_monster_5();
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_19;
		L_19 = GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789(L_18, /*hidden argument*/GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		MonsterData_IncreaseLevel_m8796A9A708EC0C6FBC28CF8919429B05885F0AEC(L_19, /*hidden argument*/NULL);
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_21;
		L_21 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_20, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		// audioSource.PlayOneShot(audioSource.clip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_22 = L_21;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_23;
		L_23 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_22, /*hidden argument*/NULL);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_22, L_23, /*hidden argument*/NULL);
		// gameManager.Gold -= monster.GetComponent<MonsterData>().CurrentLevel.cost;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_24 = __this->get_gameManager_6();
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_25 = L_24;
		int32_t L_26;
		L_26 = GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline(L_25, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_monster_5();
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_28;
		L_28 = GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789(L_27, /*hidden argument*/GameObject_GetComponent_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m2E510AF1D9C330A9B076B9D5454FDA9273DE8789_RuntimeMethod_var);
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_29;
		L_29 = MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293_inline(L_28, /*hidden argument*/NULL);
		int32_t L_30 = L_29->get_cost_0();
		GameManagerBehaviour_set_Gold_mF5682958B2CC05ABEBC721AAEDD0ECD2C84FC808(L_25, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_30)), /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void PlaceMonster::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceMonster__ctor_m0C6F710B668337440EF629795CBA63B14054087C (PlaceMonster_t57DF7E47BA430453CA2D34BEBA7C6481AD094C84 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShootEnemies::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Start_m88A05C4B02B897347D5FD2EC094FCE4290236A60 (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m331BB0E342DF2E35EA3CC80DA1A10A9345331CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemiesInRange = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_enemiesInRange_6(L_0);
		// lastShotTime = Time.time;
		float L_1;
		L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastShotTime_4(L_1);
		// monsterData = gameObject.GetComponentInChildren<MonsterData>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_3;
		L_3 = GameObject_GetComponentInChildren_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m331BB0E342DF2E35EA3CC80DA1A10A9345331CE6(L_2, /*hidden argument*/GameObject_GetComponentInChildren_TisMonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770_m331BB0E342DF2E35EA3CC80DA1A10A9345331CE6_RuntimeMethod_var);
		__this->set_monsterData_5(L_3);
		// }
		return;
	}
}
// System.Void ShootEnemies::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Update_m1537F66659EFD3A6D8A587A29DE9F5744A4DF716 (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	float V_1 = 0.0f;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	float V_4 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// GameObject target = null;
		V_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
		// float minimalEnemyDistance = float.MaxValue;
		V_1 = ((std::numeric_limits<float>::max)());
		// foreach (GameObject enemy in enemiesInRange)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_enemiesInRange_6();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1;
		L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_2 = L_1;
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0035;
		}

IL_0016:
		{
			// foreach (GameObject enemy in enemiesInRange)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
			L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_3 = L_2;
			// float distanceToGoal = enemy.GetComponent<MoveEnemy>().DistanceToGoal();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_3;
			MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * L_4;
			L_4 = GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3(L_3, /*hidden argument*/GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3_RuntimeMethod_var);
			float L_5;
			L_5 = MoveEnemy_DistanceToGoal_m45CB4578A5140256401A3578FA1B6D0D4BE83DE5(L_4, /*hidden argument*/NULL);
			V_4 = L_5;
			// if (distanceToGoal < minimalEnemyDistance)
			float L_6 = V_4;
			float L_7 = V_1;
			if ((!(((float)L_6) < ((float)L_7))))
			{
				goto IL_0035;
			}
		}

IL_0030:
		{
			// target = enemy;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_3;
			V_0 = L_8;
			// minimalEnemyDistance = distanceToGoal;
			float L_9 = V_4;
			V_1 = L_9;
		}

IL_0035:
		{
			// foreach (GameObject enemy in enemiesInRange)
			bool L_10;
			L_10 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_0016;
			}
		}

IL_003e:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(64)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_004e:
	{
		// if (target != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00f9;
		}
	}
	{
		// if (Time.time - lastShotTime > monsterData.CurrentLevel.fireRate)
		float L_13;
		L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_14 = __this->get_lastShotTime_4();
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_15 = __this->get_monsterData_5();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_16;
		L_16 = MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293_inline(L_15, /*hidden argument*/NULL);
		float L_17 = L_16->get_fireRate_3();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_13, (float)L_14))) > ((float)L_17))))
		{
			goto IL_008f;
		}
	}
	{
		// Shoot(target.GetComponent<Collider2D>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19;
		L_19 = GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E(L_18, /*hidden argument*/GameObject_GetComponent_TisCollider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722_m770EEE9CD21A968F23ABBBEF9BF3897DA14D085E_RuntimeMethod_var);
		ShootEnemies_Shoot_m23CCF208CD01B34F47632CDFC6197BCF7DD0CE07(__this, L_19, /*hidden argument*/NULL);
		// lastShotTime = Time.time;
		float L_20;
		L_20 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastShotTime_4(L_20);
	}

IL_008f:
	{
		// Vector3 direction = gameObject.transform.position - target.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_23, L_26, /*hidden argument*/NULL);
		V_5 = L_27;
		// gameObject.transform.rotation = Quaternion.AngleAxis(
		//     Mathf.Atan2 (direction.y, direction.x) * 180 / Mathf.PI,
		//     new Vector3 (0, 0, 1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = V_5;
		float L_31 = L_30.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_5;
		float L_33 = L_32.get_x_2();
		float L_34;
		L_34 = atan2f(L_31, L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_36;
		L_36 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(((float)((float)((float)il2cpp_codegen_multiply((float)L_34, (float)(180.0f)))/(float)(3.14159274f))), L_35, /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_29, L_36, /*hidden argument*/NULL);
	}

IL_00f9:
	{
		// }
		return;
	}
}
// System.Void ShootEnemies::Shoot(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_Shoot_m23CCF208CD01B34F47632CDFC6197BCF7DD0CE07 (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C_mBCCE195BE732B62F88E9D40D1AADF315DD0C8AE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A9785798D2D0F718A65CA477404227F18FF986);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// GameObject bulletPrefab = monsterData.CurrentLevel.bullet;
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_0 = __this->get_monsterData_5();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_1;
		L_1 = MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293_inline(L_0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_bullet_2();
		V_0 = L_2;
		// Vector3 startPosition = gameObject.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// Vector3 targetPosition = target.transform.position;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6 = ___target0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		// startPosition.z = bulletPrefab.transform.position.z;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_z_4();
		(&V_1)->set_z_4(L_12);
		// targetPosition.z = bulletPrefab.transform.position.z;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_z_4();
		(&V_2)->set_z_4(L_16);
		// GameObject newBullet = (GameObject)Instantiate (bulletPrefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_17, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// newBullet.transform.position = startPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_18;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_1;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_21, /*hidden argument*/NULL);
		// BulletBehavior bulletComp = newBullet.GetComponent<BulletBehavior>();
		BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * L_22;
		L_22 = GameObject_GetComponent_TisBulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C_mBCCE195BE732B62F88E9D40D1AADF315DD0C8AE8(L_19, /*hidden argument*/GameObject_GetComponent_TisBulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C_mBCCE195BE732B62F88E9D40D1AADF315DD0C8AE8_RuntimeMethod_var);
		// bulletComp.target = target.gameObject;
		BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * L_23 = L_22;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_24 = ___target0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		L_23->set_target_6(L_25);
		// bulletComp.startPosition = startPosition;
		BulletBehavior_t0F1B52C6E8EBA11CDD7D25C5920E73285F8B7A6C * L_26 = L_23;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_1;
		L_26->set_startPosition_7(L_27);
		// bulletComp.targetPosition = targetPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_2;
		L_26->set_targetPosition_8(L_28);
		// Animator animator =
		//     monsterData.CurrentLevel.visualization.GetComponent<Animator>();
		MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * L_29 = __this->get_monsterData_5();
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_30;
		L_30 = MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293_inline(L_29, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = L_30->get_visualization_1();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_32;
		L_32 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_31, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		// animator.SetTrigger("fireShot");
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_32, _stringLiteralC0A9785798D2D0F718A65CA477404227F18FF986, /*hidden argument*/NULL);
		// AudioSource audioSource = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_34;
		L_34 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_33, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		// audioSource.PlayOneShot(audioSource.clip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_35 = L_34;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_36;
		L_36 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_35, /*hidden argument*/NULL);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_35, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShootEnemies::OnEnemyDestroy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_OnEnemyDestroy_m76A0148A8F446A11C92CB65B0762706C2EC1E9A8 (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemiesInRange.Remove (enemy);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_enemiesInRange_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___enemy0;
		bool L_2;
		L_2 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_0, L_1, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ShootEnemies::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_OnTriggerEnter2D_m60D47F8F830579B7E1D5A402A6AD1FBB7B68DE3E (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootEnemies_OnEnemyDestroy_m76A0148A8F446A11C92CB65B0762706C2EC1E9A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Equals("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0054;
		}
	}
	{
		// enemiesInRange.Add(other.gameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_enemiesInRange_6();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_4, L_6, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// EnemyDestructionDelegate del =
		//     other.gameObject.GetComponent<EnemyDestructionDelegate>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * L_9;
		L_9 = GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540(L_8, /*hidden argument*/GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540_RuntimeMethod_var);
		// del.enemyDelegate += OnEnemyDestroy;
		EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * L_10 = L_9;
		EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * L_11 = L_10->get_enemyDelegate_4();
		EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * L_12 = (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB *)il2cpp_codegen_object_new(EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB_il2cpp_TypeInfo_var);
		EnemyDelegate__ctor_m34BFAA250EB2F7DA8C5F8B2799CE062743A78C4B(L_12, __this, (intptr_t)((intptr_t)ShootEnemies_OnEnemyDestroy_m76A0148A8F446A11C92CB65B0762706C2EC1E9A8_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_13;
		L_13 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_11, L_12, /*hidden argument*/NULL);
		L_10->set_enemyDelegate_4(((EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB *)CastclassSealed((RuntimeObject*)L_13, EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB_il2cpp_TypeInfo_var)));
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void ShootEnemies::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies_OnTriggerExit2D_m5ED45075C6BC044A0F01FA2C4630DA7F39E805FA (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShootEnemies_OnEnemyDestroy_m76A0148A8F446A11C92CB65B0762706C2EC1E9A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag.Equals("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0055;
		}
	}
	{
		// enemiesInRange.Remove(other.gameObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_enemiesInRange_6();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_4, L_6, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// EnemyDestructionDelegate del =
		//     other.gameObject.GetComponent<EnemyDestructionDelegate>();
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * L_10;
		L_10 = GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540(L_9, /*hidden argument*/GameObject_GetComponent_TisEnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7_mEDC2488B7074CE2AB4AF943BAF4448D41C6D5540_RuntimeMethod_var);
		// del.enemyDelegate -= OnEnemyDestroy;
		EnemyDestructionDelegate_tE4F7232814EC6EC533A818D7C33C0E62E426AAF7 * L_11 = L_10;
		EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * L_12 = L_11->get_enemyDelegate_4();
		EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * L_13 = (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB *)il2cpp_codegen_object_new(EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB_il2cpp_TypeInfo_var);
		EnemyDelegate__ctor_m34BFAA250EB2F7DA8C5F8B2799CE062743A78C4B(L_13, __this, (intptr_t)((intptr_t)ShootEnemies_OnEnemyDestroy_m76A0148A8F446A11C92CB65B0762706C2EC1E9A8_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_14;
		L_14 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_12, L_13, /*hidden argument*/NULL);
		L_11->set_enemyDelegate_4(((EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB *)CastclassSealed((RuntimeObject*)L_14, EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB_il2cpp_TypeInfo_var)));
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void ShootEnemies::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShootEnemies__ctor_m5714CCF96F6E610A5887404FE2AE4DF90A06AAAB (ShootEnemies_t3CD938FBC9EC942B6D1EFB06E64F068811D2C983 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpawnEnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Start_m7507EBD67EE7E88C8035D4024C3C16362682B9D6 (SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(testEnemyPrefab).GetComponent<MoveEnemy>().waypoints = waypoints;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_testEnemyPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_0, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * L_2;
		L_2 = GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3(L_1, /*hidden argument*/GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3_RuntimeMethod_var);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_waypoints_4();
		L_2->set_waypoints_4(L_3);
		// lastSpawnTime = Time.time;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastSpawnTime_9(L_4);
		// gameManager =
		//     GameObject.Find("GameManager").GetComponent<GameManagerBehaviour>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5B68E4FC12CF26A2805AD3EC3EDA6F38D0B99347, /*hidden argument*/NULL);
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_6;
		L_6 = GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E(L_5, /*hidden argument*/GameObject_GetComponent_TisGameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1_m91F8B4DD2A8FF53C5C1DDCEC77A6426A3EBA287E_RuntimeMethod_var);
		__this->set_gameManager_8(L_6);
		// }
		return;
	}
}
// System.Void SpawnEnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy_Update_m639ECD0A56FBC2CB07447A490FA3426D1B114584 (SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A766FE2C2D373D78EDEA7D1C01DA9F83F3DC0D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		// int currentWave = gameManager.Wave;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_0 = __this->get_gameManager_8();
		int32_t L_1;
		L_1 = GameManagerBehaviour_get_Wave_m2D1BF6FA2DA3E6C47EE3BE3BF821D0FB65AC832E_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (currentWave < waves.Length)
		int32_t L_2 = V_0;
		WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* L_3 = __this->get_waves_6();
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_010f;
		}
	}
	{
		// float timeInterval = Time.time - lastSpawnTime;
		float L_4;
		L_4 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_5 = __this->get_lastSpawnTime_9();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_5));
		// float spawnInterval = waves[currentWave].spawnInterval;
		WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* L_6 = __this->get_waves_6();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		float L_10 = L_9->get_spawnInterval_1();
		V_2 = L_10;
		// if (((enemiesSpawned == 0 && timeInterval > timeBetweenWaves) ||
		//      timeInterval > spawnInterval) &&
		//     enemiesSpawned < waves[currentWave].maxEnemies)
		int32_t L_11 = __this->get_enemiesSpawned_10();
		if (L_11)
		{
			goto IL_0047;
		}
	}
	{
		float L_12 = V_1;
		int32_t L_13 = __this->get_timeBetweenWaves_7();
		if ((((float)L_12) > ((float)((float)((float)L_13)))))
		{
			goto IL_004b;
		}
	}

IL_0047:
	{
		float L_14 = V_1;
		float L_15 = V_2;
		if ((!(((float)L_14) > ((float)L_15))))
		{
			goto IL_009b;
		}
	}

IL_004b:
	{
		int32_t L_16 = __this->get_enemiesSpawned_10();
		WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* L_17 = __this->get_waves_6();
		int32_t L_18 = V_0;
		int32_t L_19 = L_18;
		Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = L_20->get_maxEnemies_2();
		if ((((int32_t)L_16) >= ((int32_t)L_21)))
		{
			goto IL_009b;
		}
	}
	{
		// lastSpawnTime = Time.time;
		float L_22;
		L_22 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastSpawnTime_9(L_22);
		// GameObject newEnemy = (GameObject)
		//     Instantiate(waves[currentWave].enemyPrefab);
		WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* L_23 = __this->get_waves_6();
		int32_t L_24 = V_0;
		int32_t L_25 = L_24;
		Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = L_26->get_enemyPrefab_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_27, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// newEnemy.GetComponent<MoveEnemy>().waypoints = waypoints;
		MoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82 * L_29;
		L_29 = GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3(L_28, /*hidden argument*/GameObject_GetComponent_TisMoveEnemy_t9652BF7CECED8C3648AE1DAD6A11688AD76F7C82_mF6C473CC8F5E434CA6D88FF7F62591457F2BE9F3_RuntimeMethod_var);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_30 = __this->get_waypoints_4();
		L_29->set_waypoints_4(L_30);
		// enemiesSpawned++;
		int32_t L_31 = __this->get_enemiesSpawned_10();
		__this->set_enemiesSpawned_10(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
	}

IL_009b:
	{
		// if (enemiesSpawned == waves[currentWave].maxEnemies &&
		//     GameObject.FindGameObjectWithTag("Enemy") == null)
		int32_t L_32 = __this->get_enemiesSpawned_10();
		WaveU5BU5D_t9295E175A997B6704FFDE89594D66A09D4354C89* L_33 = __this->get_waves_6();
		int32_t L_34 = V_0;
		int32_t L_35 = L_34;
		Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = L_36->get_maxEnemies_2();
		if ((!(((uint32_t)L_32) == ((uint32_t)L_37))))
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_38, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0135;
		}
	}
	{
		// gameManager.Wave++;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_40 = __this->get_gameManager_8();
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_41 = L_40;
		int32_t L_42;
		L_42 = GameManagerBehaviour_get_Wave_m2D1BF6FA2DA3E6C47EE3BE3BF821D0FB65AC832E_inline(L_41, /*hidden argument*/NULL);
		V_3 = L_42;
		int32_t L_43 = V_3;
		GameManagerBehaviour_set_Wave_m89FECD0A7CD7CBC9D6234AFE1D52119C52A930C3(L_41, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)), /*hidden argument*/NULL);
		// gameManager.Gold = Mathf.RoundToInt(gameManager.Gold * 1.1f);
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_44 = __this->get_gameManager_8();
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_45 = __this->get_gameManager_8();
		int32_t L_46;
		L_46 = GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline(L_45, /*hidden argument*/NULL);
		int32_t L_47;
		L_47 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_46)), (float)(1.10000002f))), /*hidden argument*/NULL);
		GameManagerBehaviour_set_Gold_mF5682958B2CC05ABEBC721AAEDD0ECD2C84FC808(L_44, L_47, /*hidden argument*/NULL);
		// enemiesSpawned = 0;
		__this->set_enemiesSpawned_10(0);
		// lastSpawnTime = Time.time;
		float L_48;
		L_48 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastSpawnTime_9(L_48);
		// }
		return;
	}

IL_010f:
	{
		// gameManager.gameOver = true;
		GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * L_49 = __this->get_gameManager_8();
		L_49->set_gameOver_10((bool)1);
		// GameObject gameOverText = GameObject.FindGameObjectWithTag ("GameWon");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50;
		L_50 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral41DB57BFD657651E8C2527CF17F43559E3F16C46, /*hidden argument*/NULL);
		// gameOverText.GetComponent<Animator>().SetBool("gameOver", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_51;
		L_51 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_50, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_51, _stringLiteral64A766FE2C2D373D78EDEA7D1C01DA9F83F3DC0D, (bool)1, /*hidden argument*/NULL);
	}

IL_0135:
	{
		// }
		return;
	}
}
// System.Void SpawnEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnEnemy__ctor_m877B2AD485750CF09B3E6F587BBB424CB77741F5 (SpawnEnemy_tC64BDFB1D27F76C1E47FC52CA0892E75E6F49CA7 * __this, const RuntimeMethod* method)
{
	{
		// public int timeBetweenWaves = 5;
		__this->set_timeBetweenWaves_7(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Tutorial::DisplayTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_DisplayTutorial_m6291399BEC09D65DC22CB92A3CC7D93B737B2ABB (Tutorial_t00E576E62CB1B76A4CEB914E180C4F6F2CC63BF3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD0434F3A1A5821B2DA49A6ACE7CA39D5C61B98);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Animator>().SetTrigger("displayTutorial");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_0, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_1, _stringLiteral4BD0434F3A1A5821B2DA49A6ACE7CA39D5C61B98, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Tutorial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial__ctor_m9C72E9CCF29A308B75D53EA7220040200CBA2A52 (Tutorial_t00E576E62CB1B76A4CEB914E180C4F6F2CC63BF3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Wave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wave__ctor_m66389B9AEB0765E5FD1A0AE85F6B3E30198DB7B6 (Wave_t719B1B5B9F0A64F2D19EE55AD7B3A250685F28CA * __this, const RuntimeMethod* method)
{
	{
		// public float spawnInterval = 2;
		__this->set_spawnInterval_1((2.0f));
		// public int maxEnemies = 20;
		__this->set_maxEnemies_2(((int32_t)20));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void EnemyDestructionDelegate/EnemyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate__ctor_m34BFAA250EB2F7DA8C5F8B2799CE062743A78C4B (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void EnemyDestructionDelegate/EnemyDelegate::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate_Invoke_m785C0C52A6D582CBFD339B4B0499AC8E6A43FA0E (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___enemy0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___enemy0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___enemy0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___enemy0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___enemy0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___enemy0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___enemy0, targetMethod);
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
						GenericInterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___enemy0);
					else
						GenericVirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(targetMethod, targetThis, ___enemy0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___enemy0);
					else
						VirtActionInvoker1< GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___enemy0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___enemy0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___enemy0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult EnemyDestructionDelegate/EnemyDelegate::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnemyDelegate_BeginInvoke_mD46F3EEB4C44EA16D5D3AF05EADCB38723584EFB (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___enemy0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void EnemyDestructionDelegate/EnemyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyDelegate_EndInvoke_mDF8635FA68C4A9F3B7606379CD8ECAF09347237D (EnemyDelegate_tF048D5D6CB7D729DCE77E86D85B4DAF23FB1C3BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Gold_m543DCB452BBCBC537D69FEEF57B22264946E6773_inline (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// return gold;
		int32_t L_0 = __this->get_gold_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Health_m0FF68D16B6A5A755A1A9A210D749D94F192597E2_inline (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// return health;
		int32_t L_0 = __this->get_health_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_Lerp_mC9A8AB816281F4447B7B62264595C16751ED355B_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___a0;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___b1;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___a0;
		float L_7 = L_6.get_x_0();
		float L_8 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___a0;
		float L_10 = L_9.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = ___b1;
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___a0;
		float L_14 = L_13.get_y_1();
		float L_15 = ___t2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_16), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * MonsterData_get_CurrentLevel_m854491779C925F7ABAD68359CA9FE3D7702BF293_inline (MonsterData_tA2B2D58257D14A1D8EC6023FCFE7AF661B682770 * __this, const RuntimeMethod* method)
{
	{
		// return currentLevel;
		MonsterLevel_t279536142D1C1D17A8383374EC58AF6B301DAE58 * L_0 = __this->get_currentLevel_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManagerBehaviour_get_Wave_m2D1BF6FA2DA3E6C47EE3BE3BF821D0FB65AC832E_inline (GameManagerBehaviour_t5996EB1DC0826D36C5D3DBA05CF132BEDA0D9DC1 * __this, const RuntimeMethod* method)
{
	{
		// return wave;
		int32_t L_0 = __this->get_wave_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
