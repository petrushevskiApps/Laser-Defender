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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// EnemyBehaviour
struct EnemyBehaviour_t2268862405;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// ScoreKeeper
struct ScoreKeeper_t338079517;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Component
struct Component_t1923634451;
// Projectile
struct Projectile_t1440994518;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// EnemySpawner
struct EnemySpawner_t2006493939;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Camera
struct Camera_t4157153871;
// FinalScore
struct FinalScore_t1860948208;
// HealthBarController
struct HealthBarController_t960276613;
// LevelManager
struct LevelManager_t4033906515;
// MusicPlayer
struct MusicPlayer_t2462663927;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// PlayerController
struct PlayerController_t2064355688;
// Position
struct Position_t964309404;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.UI.Text
struct Text_t1901882714;
// Shredder
struct Shredder_t747743966;
// StartGame
struct StartGame_t5410628;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisScoreKeeper_t338079517_m46958991_RuntimeMethod_var;
extern String_t* _stringLiteral1512031223;
extern const uint32_t EnemyBehaviour_Start_m2772253437_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisProjectile_t1440994518_m2065665135_RuntimeMethod_var;
extern const uint32_t EnemyBehaviour_OnTriggerEnter2D_m3833877859_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var;
extern const uint32_t EnemyBehaviour_fire_m3745947929_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern const uint32_t EnemySpawner_Update_m306438552_MetadataUsageId;
extern String_t* _stringLiteral2232404224;
extern const uint32_t EnemySpawner_respawnEnemies_m3794221638_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Transform_t3600365921_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t EnemySpawner_NextFreePosition_m882181984_MetadataUsageId;
extern const uint32_t EnemySpawner_allMembersDead_m755430621_MetadataUsageId;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern const uint32_t EnemySpawner_calculateBoundries_m477402985_MetadataUsageId;
extern RuntimeClass* ScoreKeeper_t338079517_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1001003224;
extern const uint32_t FinalScore_Start_m1456393712_MetadataUsageId;
extern RuntimeClass* PlayerController_t2064355688_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* HealthBarController_t960276613_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var;
extern const uint32_t HealthBarController_Start_m559589073_MetadataUsageId;
extern const uint32_t HealthBarController_decrementHealth_m801695386_MetadataUsageId;
extern String_t* _stringLiteral219571795;
extern const uint32_t LevelManager_LoadLevel_m1243507911_MetadataUsageId;
extern String_t* _stringLiteral2707270972;
extern const uint32_t LevelManager_backToStart_m132784572_MetadataUsageId;
extern const uint32_t LevelManager_LoadNextLevel_m1268751314_MetadataUsageId;
extern RuntimeClass* MusicPlayer_t2462663927_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t MusicPlayer_Start_m163508746_MetadataUsageId;
extern const uint32_t PlayerController_getHealth_m3618072579_MetadataUsageId;
extern const uint32_t PlayerController_resetHealth_m768854192_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral110303690;
extern const uint32_t PlayerController_Update_m848427540_MetadataUsageId;
extern const uint32_t PlayerController_fire_m2665738803_MetadataUsageId;
extern const uint32_t PlayerController_OnTriggerEnter2D_m2562319700_MetadataUsageId;
extern const uint32_t PlayerController__cctor_m483794249_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m1370005186_RuntimeMethod_var;
extern const uint32_t Position_OnDrawGizmos_m1697024220_MetadataUsageId;
extern const uint32_t Projectile_Hit_m3518257651_MetadataUsageId;
extern const uint32_t ScoreKeeper_Score_m382650624_MetadataUsageId;
extern const uint32_t ScoreKeeper_ResetScore_m3355957182_MetadataUsageId;
extern const uint32_t ScoreKeeper_getScore_m3075035978_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var;
extern const uint32_t ScoreKeeper_Start_m537207923_MetadataUsageId;
extern const uint32_t Shredder_OnTriggerEnter2D_m303188145_MetadataUsageId;

struct GameObjectU5BU5D_t3328599146;


#ifndef U3CMODULEU3E_T692745545_H
#define U3CMODULEU3E_T692745545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745545 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745545_H
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
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
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
#endif // SINGLE_T1397266774_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
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
#endif // KEYCODE_T2599294277_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef SHREDDER_T747743966_H
#define SHREDDER_T747743966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shredder
struct  Shredder_t747743966  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHREDDER_T747743966_H
#ifndef ENEMYSPAWNER_T2006493939_H
#define ENEMYSPAWNER_T2006493939_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2006493939  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_t1113636619 * ___enemyPrefab_2;
	// UnityEngine.GameObject EnemySpawner::enemyRightPrefab
	GameObject_t1113636619 * ___enemyRightPrefab_3;
	// System.Single EnemySpawner::width
	float ___width_4;
	// System.Single EnemySpawner::height
	float ___height_5;
	// System.Single EnemySpawner::xmin
	float ___xmin_6;
	// System.Single EnemySpawner::xmax
	float ___xmax_7;
	// System.Single EnemySpawner::padding
	float ___padding_8;
	// System.Boolean EnemySpawner::swap
	bool ___swap_9;
	// System.Single EnemySpawner::SPEED
	float ___SPEED_10;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_11;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___enemyPrefab_2)); }
	inline GameObject_t1113636619 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t1113636619 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___enemyPrefab_2), value);
	}

	inline static int32_t get_offset_of_enemyRightPrefab_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___enemyRightPrefab_3)); }
	inline GameObject_t1113636619 * get_enemyRightPrefab_3() const { return ___enemyRightPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_enemyRightPrefab_3() { return &___enemyRightPrefab_3; }
	inline void set_enemyRightPrefab_3(GameObject_t1113636619 * value)
	{
		___enemyRightPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___enemyRightPrefab_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___width_4)); }
	inline float get_width_4() const { return ___width_4; }
	inline float* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(float value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_xmin_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___xmin_6)); }
	inline float get_xmin_6() const { return ___xmin_6; }
	inline float* get_address_of_xmin_6() { return &___xmin_6; }
	inline void set_xmin_6(float value)
	{
		___xmin_6 = value;
	}

	inline static int32_t get_offset_of_xmax_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___xmax_7)); }
	inline float get_xmax_7() const { return ___xmax_7; }
	inline float* get_address_of_xmax_7() { return &___xmax_7; }
	inline void set_xmax_7(float value)
	{
		___xmax_7 = value;
	}

	inline static int32_t get_offset_of_padding_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___padding_8)); }
	inline float get_padding_8() const { return ___padding_8; }
	inline float* get_address_of_padding_8() { return &___padding_8; }
	inline void set_padding_8(float value)
	{
		___padding_8 = value;
	}

	inline static int32_t get_offset_of_swap_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___swap_9)); }
	inline bool get_swap_9() const { return ___swap_9; }
	inline bool* get_address_of_swap_9() { return &___swap_9; }
	inline void set_swap_9(bool value)
	{
		___swap_9 = value;
	}

	inline static int32_t get_offset_of_SPEED_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___SPEED_10)); }
	inline float get_SPEED_10() const { return ___SPEED_10; }
	inline float* get_address_of_SPEED_10() { return &___SPEED_10; }
	inline void set_SPEED_10(float value)
	{
		___SPEED_10 = value;
	}

	inline static int32_t get_offset_of_spawnDelay_11() { return static_cast<int32_t>(offsetof(EnemySpawner_t2006493939, ___spawnDelay_11)); }
	inline float get_spawnDelay_11() const { return ___spawnDelay_11; }
	inline float* get_address_of_spawnDelay_11() { return &___spawnDelay_11; }
	inline void set_spawnDelay_11(float value)
	{
		___spawnDelay_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYSPAWNER_T2006493939_H
#ifndef ENEMYBEHAVIOUR_T2268862405_H
#define ENEMYBEHAVIOUR_T2268862405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyBehaviour
struct  EnemyBehaviour_t2268862405  : public MonoBehaviour_t3962482529
{
public:
	// System.Single EnemyBehaviour::health
	float ___health_2;
	// UnityEngine.GameObject EnemyBehaviour::laserPrefab
	GameObject_t1113636619 * ___laserPrefab_3;
	// System.Single EnemyBehaviour::beamSpeed
	float ___beamSpeed_4;
	// System.Int32 EnemyBehaviour::score
	int32_t ___score_5;
	// ScoreKeeper EnemyBehaviour::scoreKeeper
	ScoreKeeper_t338079517 * ___scoreKeeper_6;
	// UnityEngine.AudioClip EnemyBehaviour::sfxFire
	AudioClip_t3680889665 * ___sfxFire_7;
	// System.Single EnemyBehaviour::shotsPerFrame
	float ___shotsPerFrame_8;
	// UnityEngine.AudioClip EnemyBehaviour::sfxDeath
	AudioClip_t3680889665 * ___sfxDeath_9;

public:
	inline static int32_t get_offset_of_health_2() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___health_2)); }
	inline float get_health_2() const { return ___health_2; }
	inline float* get_address_of_health_2() { return &___health_2; }
	inline void set_health_2(float value)
	{
		___health_2 = value;
	}

	inline static int32_t get_offset_of_laserPrefab_3() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___laserPrefab_3)); }
	inline GameObject_t1113636619 * get_laserPrefab_3() const { return ___laserPrefab_3; }
	inline GameObject_t1113636619 ** get_address_of_laserPrefab_3() { return &___laserPrefab_3; }
	inline void set_laserPrefab_3(GameObject_t1113636619 * value)
	{
		___laserPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___laserPrefab_3), value);
	}

	inline static int32_t get_offset_of_beamSpeed_4() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___beamSpeed_4)); }
	inline float get_beamSpeed_4() const { return ___beamSpeed_4; }
	inline float* get_address_of_beamSpeed_4() { return &___beamSpeed_4; }
	inline void set_beamSpeed_4(float value)
	{
		___beamSpeed_4 = value;
	}

	inline static int32_t get_offset_of_score_5() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___score_5)); }
	inline int32_t get_score_5() const { return ___score_5; }
	inline int32_t* get_address_of_score_5() { return &___score_5; }
	inline void set_score_5(int32_t value)
	{
		___score_5 = value;
	}

	inline static int32_t get_offset_of_scoreKeeper_6() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___scoreKeeper_6)); }
	inline ScoreKeeper_t338079517 * get_scoreKeeper_6() const { return ___scoreKeeper_6; }
	inline ScoreKeeper_t338079517 ** get_address_of_scoreKeeper_6() { return &___scoreKeeper_6; }
	inline void set_scoreKeeper_6(ScoreKeeper_t338079517 * value)
	{
		___scoreKeeper_6 = value;
		Il2CppCodeGenWriteBarrier((&___scoreKeeper_6), value);
	}

	inline static int32_t get_offset_of_sfxFire_7() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___sfxFire_7)); }
	inline AudioClip_t3680889665 * get_sfxFire_7() const { return ___sfxFire_7; }
	inline AudioClip_t3680889665 ** get_address_of_sfxFire_7() { return &___sfxFire_7; }
	inline void set_sfxFire_7(AudioClip_t3680889665 * value)
	{
		___sfxFire_7 = value;
		Il2CppCodeGenWriteBarrier((&___sfxFire_7), value);
	}

	inline static int32_t get_offset_of_shotsPerFrame_8() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___shotsPerFrame_8)); }
	inline float get_shotsPerFrame_8() const { return ___shotsPerFrame_8; }
	inline float* get_address_of_shotsPerFrame_8() { return &___shotsPerFrame_8; }
	inline void set_shotsPerFrame_8(float value)
	{
		___shotsPerFrame_8 = value;
	}

	inline static int32_t get_offset_of_sfxDeath_9() { return static_cast<int32_t>(offsetof(EnemyBehaviour_t2268862405, ___sfxDeath_9)); }
	inline AudioClip_t3680889665 * get_sfxDeath_9() const { return ___sfxDeath_9; }
	inline AudioClip_t3680889665 ** get_address_of_sfxDeath_9() { return &___sfxDeath_9; }
	inline void set_sfxDeath_9(AudioClip_t3680889665 * value)
	{
		___sfxDeath_9 = value;
		Il2CppCodeGenWriteBarrier((&___sfxDeath_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMYBEHAVIOUR_T2268862405_H
#ifndef STARTGAME_T5410628_H
#define STARTGAME_T5410628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartGame
struct  StartGame_t5410628  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTGAME_T5410628_H
#ifndef PROJECTILE_T1440994518_H
#define PROJECTILE_T1440994518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Projectile
struct  Projectile_t1440994518  : public MonoBehaviour_t3962482529
{
public:
	// System.Single Projectile::damage
	float ___damage_2;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(Projectile_t1440994518, ___damage_2)); }
	inline float get_damage_2() const { return ___damage_2; }
	inline float* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(float value)
	{
		___damage_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROJECTILE_T1440994518_H
#ifndef HEALTHBARCONTROLLER_T960276613_H
#define HEALTHBARCONTROLLER_T960276613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthBarController
struct  HealthBarController_t960276613  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject HealthBarController::healthUnit
	GameObject_t1113636619 * ___healthUnit_2;

public:
	inline static int32_t get_offset_of_healthUnit_2() { return static_cast<int32_t>(offsetof(HealthBarController_t960276613, ___healthUnit_2)); }
	inline GameObject_t1113636619 * get_healthUnit_2() const { return ___healthUnit_2; }
	inline GameObject_t1113636619 ** get_address_of_healthUnit_2() { return &___healthUnit_2; }
	inline void set_healthUnit_2(GameObject_t1113636619 * value)
	{
		___healthUnit_2 = value;
		Il2CppCodeGenWriteBarrier((&___healthUnit_2), value);
	}
};

struct HealthBarController_t960276613_StaticFields
{
public:
	// UnityEngine.GameObject[] HealthBarController::health
	GameObjectU5BU5D_t3328599146* ___health_3;
	// System.Int32 HealthBarController::healthSize
	int32_t ___healthSize_4;

public:
	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(HealthBarController_t960276613_StaticFields, ___health_3)); }
	inline GameObjectU5BU5D_t3328599146* get_health_3() const { return ___health_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(GameObjectU5BU5D_t3328599146* value)
	{
		___health_3 = value;
		Il2CppCodeGenWriteBarrier((&___health_3), value);
	}

	inline static int32_t get_offset_of_healthSize_4() { return static_cast<int32_t>(offsetof(HealthBarController_t960276613_StaticFields, ___healthSize_4)); }
	inline int32_t get_healthSize_4() const { return ___healthSize_4; }
	inline int32_t* get_address_of_healthSize_4() { return &___healthSize_4; }
	inline void set_healthSize_4(int32_t value)
	{
		___healthSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEALTHBARCONTROLLER_T960276613_H
#ifndef SCOREKEEPER_T338079517_H
#define SCOREKEEPER_T338079517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreKeeper
struct  ScoreKeeper_t338079517  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text ScoreKeeper::scoreText
	Text_t1901882714 * ___scoreText_3;

public:
	inline static int32_t get_offset_of_scoreText_3() { return static_cast<int32_t>(offsetof(ScoreKeeper_t338079517, ___scoreText_3)); }
	inline Text_t1901882714 * get_scoreText_3() const { return ___scoreText_3; }
	inline Text_t1901882714 ** get_address_of_scoreText_3() { return &___scoreText_3; }
	inline void set_scoreText_3(Text_t1901882714 * value)
	{
		___scoreText_3 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_3), value);
	}
};

struct ScoreKeeper_t338079517_StaticFields
{
public:
	// System.Int32 ScoreKeeper::score
	int32_t ___score_2;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(ScoreKeeper_t338079517_StaticFields, ___score_2)); }
	inline int32_t get_score_2() const { return ___score_2; }
	inline int32_t* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(int32_t value)
	{
		___score_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCOREKEEPER_T338079517_H
#ifndef FINALSCORE_T1860948208_H
#define FINALSCORE_T1860948208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FinalScore
struct  FinalScore_t1860948208  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text FinalScore::scoreText
	Text_t1901882714 * ___scoreText_2;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(FinalScore_t1860948208, ___scoreText_2)); }
	inline Text_t1901882714 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t1901882714 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t1901882714 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINALSCORE_T1860948208_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// LevelManager PlayerController::levelManager
	LevelManager_t4033906515 * ___levelManager_2;
	// System.Single PlayerController::MOVE_SPEED
	float ___MOVE_SPEED_3;
	// System.Single PlayerController::padding
	float ___padding_4;
	// UnityEngine.GameObject PlayerController::laserPrefab
	GameObject_t1113636619 * ___laserPrefab_5;
	// System.Single PlayerController::xmin
	float ___xmin_6;
	// System.Single PlayerController::xmax
	float ___xmax_7;
	// System.Single PlayerController::ymin
	float ___ymin_8;
	// System.Single PlayerController::ymax
	float ___ymax_9;
	// System.Single PlayerController::beamSpeed
	float ___beamSpeed_10;
	// System.Single PlayerController::fireRate
	float ___fireRate_11;
	// UnityEngine.AudioClip PlayerController::sfxFire
	AudioClip_t3680889665 * ___sfxFire_13;
	// UnityEngine.AudioClip PlayerController::sfxDeath
	AudioClip_t3680889665 * ___sfxDeath_14;

public:
	inline static int32_t get_offset_of_levelManager_2() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___levelManager_2)); }
	inline LevelManager_t4033906515 * get_levelManager_2() const { return ___levelManager_2; }
	inline LevelManager_t4033906515 ** get_address_of_levelManager_2() { return &___levelManager_2; }
	inline void set_levelManager_2(LevelManager_t4033906515 * value)
	{
		___levelManager_2 = value;
		Il2CppCodeGenWriteBarrier((&___levelManager_2), value);
	}

	inline static int32_t get_offset_of_MOVE_SPEED_3() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___MOVE_SPEED_3)); }
	inline float get_MOVE_SPEED_3() const { return ___MOVE_SPEED_3; }
	inline float* get_address_of_MOVE_SPEED_3() { return &___MOVE_SPEED_3; }
	inline void set_MOVE_SPEED_3(float value)
	{
		___MOVE_SPEED_3 = value;
	}

	inline static int32_t get_offset_of_padding_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___padding_4)); }
	inline float get_padding_4() const { return ___padding_4; }
	inline float* get_address_of_padding_4() { return &___padding_4; }
	inline void set_padding_4(float value)
	{
		___padding_4 = value;
	}

	inline static int32_t get_offset_of_laserPrefab_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___laserPrefab_5)); }
	inline GameObject_t1113636619 * get_laserPrefab_5() const { return ___laserPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_laserPrefab_5() { return &___laserPrefab_5; }
	inline void set_laserPrefab_5(GameObject_t1113636619 * value)
	{
		___laserPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___laserPrefab_5), value);
	}

	inline static int32_t get_offset_of_xmin_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___xmin_6)); }
	inline float get_xmin_6() const { return ___xmin_6; }
	inline float* get_address_of_xmin_6() { return &___xmin_6; }
	inline void set_xmin_6(float value)
	{
		___xmin_6 = value;
	}

	inline static int32_t get_offset_of_xmax_7() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___xmax_7)); }
	inline float get_xmax_7() const { return ___xmax_7; }
	inline float* get_address_of_xmax_7() { return &___xmax_7; }
	inline void set_xmax_7(float value)
	{
		___xmax_7 = value;
	}

	inline static int32_t get_offset_of_ymin_8() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___ymin_8)); }
	inline float get_ymin_8() const { return ___ymin_8; }
	inline float* get_address_of_ymin_8() { return &___ymin_8; }
	inline void set_ymin_8(float value)
	{
		___ymin_8 = value;
	}

	inline static int32_t get_offset_of_ymax_9() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___ymax_9)); }
	inline float get_ymax_9() const { return ___ymax_9; }
	inline float* get_address_of_ymax_9() { return &___ymax_9; }
	inline void set_ymax_9(float value)
	{
		___ymax_9 = value;
	}

	inline static int32_t get_offset_of_beamSpeed_10() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___beamSpeed_10)); }
	inline float get_beamSpeed_10() const { return ___beamSpeed_10; }
	inline float* get_address_of_beamSpeed_10() { return &___beamSpeed_10; }
	inline void set_beamSpeed_10(float value)
	{
		___beamSpeed_10 = value;
	}

	inline static int32_t get_offset_of_fireRate_11() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___fireRate_11)); }
	inline float get_fireRate_11() const { return ___fireRate_11; }
	inline float* get_address_of_fireRate_11() { return &___fireRate_11; }
	inline void set_fireRate_11(float value)
	{
		___fireRate_11 = value;
	}

	inline static int32_t get_offset_of_sfxFire_13() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___sfxFire_13)); }
	inline AudioClip_t3680889665 * get_sfxFire_13() const { return ___sfxFire_13; }
	inline AudioClip_t3680889665 ** get_address_of_sfxFire_13() { return &___sfxFire_13; }
	inline void set_sfxFire_13(AudioClip_t3680889665 * value)
	{
		___sfxFire_13 = value;
		Il2CppCodeGenWriteBarrier((&___sfxFire_13), value);
	}

	inline static int32_t get_offset_of_sfxDeath_14() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___sfxDeath_14)); }
	inline AudioClip_t3680889665 * get_sfxDeath_14() const { return ___sfxDeath_14; }
	inline AudioClip_t3680889665 ** get_address_of_sfxDeath_14() { return &___sfxDeath_14; }
	inline void set_sfxDeath_14(AudioClip_t3680889665 * value)
	{
		___sfxDeath_14 = value;
		Il2CppCodeGenWriteBarrier((&___sfxDeath_14), value);
	}
};

struct PlayerController_t2064355688_StaticFields
{
public:
	// System.Single PlayerController::health
	float ___health_12;

public:
	inline static int32_t get_offset_of_health_12() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688_StaticFields, ___health_12)); }
	inline float get_health_12() const { return ___health_12; }
	inline float* get_address_of_health_12() { return &___health_12; }
	inline void set_health_12(float value)
	{
		___health_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef POSITION_T964309404_H
#define POSITION_T964309404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Position
struct  Position_t964309404  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Position::enemyPrefab
	GameObject_t1113636619 * ___enemyPrefab_2;

public:
	inline static int32_t get_offset_of_enemyPrefab_2() { return static_cast<int32_t>(offsetof(Position_t964309404, ___enemyPrefab_2)); }
	inline GameObject_t1113636619 * get_enemyPrefab_2() const { return ___enemyPrefab_2; }
	inline GameObject_t1113636619 ** get_address_of_enemyPrefab_2() { return &___enemyPrefab_2; }
	inline void set_enemyPrefab_2(GameObject_t1113636619 * value)
	{
		___enemyPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___enemyPrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T964309404_H
#ifndef LEVELMANAGER_T4033906515_H
#define LEVELMANAGER_T4033906515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t4033906515  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVELMANAGER_T4033906515_H
#ifndef MUSICPLAYER_T2462663927_H
#define MUSICPLAYER_T2462663927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicPlayer
struct  MusicPlayer_t2462663927  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip MusicPlayer::startClip
	AudioClip_t3680889665 * ___startClip_3;
	// UnityEngine.AudioClip MusicPlayer::gameClip
	AudioClip_t3680889665 * ___gameClip_4;
	// UnityEngine.AudioClip MusicPlayer::endClip
	AudioClip_t3680889665 * ___endClip_5;
	// UnityEngine.AudioSource MusicPlayer::music
	AudioSource_t3935305588 * ___music_6;

public:
	inline static int32_t get_offset_of_startClip_3() { return static_cast<int32_t>(offsetof(MusicPlayer_t2462663927, ___startClip_3)); }
	inline AudioClip_t3680889665 * get_startClip_3() const { return ___startClip_3; }
	inline AudioClip_t3680889665 ** get_address_of_startClip_3() { return &___startClip_3; }
	inline void set_startClip_3(AudioClip_t3680889665 * value)
	{
		___startClip_3 = value;
		Il2CppCodeGenWriteBarrier((&___startClip_3), value);
	}

	inline static int32_t get_offset_of_gameClip_4() { return static_cast<int32_t>(offsetof(MusicPlayer_t2462663927, ___gameClip_4)); }
	inline AudioClip_t3680889665 * get_gameClip_4() const { return ___gameClip_4; }
	inline AudioClip_t3680889665 ** get_address_of_gameClip_4() { return &___gameClip_4; }
	inline void set_gameClip_4(AudioClip_t3680889665 * value)
	{
		___gameClip_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameClip_4), value);
	}

	inline static int32_t get_offset_of_endClip_5() { return static_cast<int32_t>(offsetof(MusicPlayer_t2462663927, ___endClip_5)); }
	inline AudioClip_t3680889665 * get_endClip_5() const { return ___endClip_5; }
	inline AudioClip_t3680889665 ** get_address_of_endClip_5() { return &___endClip_5; }
	inline void set_endClip_5(AudioClip_t3680889665 * value)
	{
		___endClip_5 = value;
		Il2CppCodeGenWriteBarrier((&___endClip_5), value);
	}

	inline static int32_t get_offset_of_music_6() { return static_cast<int32_t>(offsetof(MusicPlayer_t2462663927, ___music_6)); }
	inline AudioSource_t3935305588 * get_music_6() const { return ___music_6; }
	inline AudioSource_t3935305588 ** get_address_of_music_6() { return &___music_6; }
	inline void set_music_6(AudioSource_t3935305588 * value)
	{
		___music_6 = value;
		Il2CppCodeGenWriteBarrier((&___music_6), value);
	}
};

struct MusicPlayer_t2462663927_StaticFields
{
public:
	// MusicPlayer MusicPlayer::instance
	MusicPlayer_t2462663927 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(MusicPlayer_t2462663927_StaticFields, ___instance_2)); }
	inline MusicPlayer_t2462663927 * get_instance_2() const { return ___instance_2; }
	inline MusicPlayer_t2462663927 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(MusicPlayer_t2462663927 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MUSICPLAYER_T2462663927_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<ScoreKeeper>()
#define GameObject_GetComponent_TisScoreKeeper_t338079517_m46958991(__this, method) ((  ScoreKeeper_t338079517 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::get_value()
extern "C"  float Random_get_value_m3115885645 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemyBehaviour::fire()
extern "C"  void EnemyBehaviour_fire_m3745947929 (EnemyBehaviour_t2268862405 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<Projectile>()
#define GameObject_GetComponent_TisProjectile_t1440994518_m2065665135(__this, method) ((  Projectile_t1440994518 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Projectile::GetDamage()
extern "C"  float Projectile_GetDamage_m740460952 (Projectile_t1440994518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  void AudioSource_PlayClipAtPoint_m3293894611 (RuntimeObject * __this /* static, unused */, AudioClip_t3680889665 * p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScoreKeeper::Score(System.Int32)
extern "C"  void ScoreKeeper_Score_m382650624 (ScoreKeeper_t338079517 * __this, int32_t ___points0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(__this, method) ((  Rigidbody2D_t939494601 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m2898400508 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemySpawner::respawnEnemies()
extern "C"  void EnemySpawner_respawnEnemies_m3794221638 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EnemySpawner::calculateBoundries()
extern "C"  void EnemySpawner_calculateBoundries_m477402985 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireCube(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawWireCube_m2631700312 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m3350697880 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean EnemySpawner::allMembersDead()
extern "C"  bool EnemySpawner_allMembersDead_m755430621 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform EnemySpawner::NextFreePosition()
extern "C"  Transform_t3600365921 * EnemySpawner_NextFreePosition_m882181984 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C"  void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
extern "C"  RuntimeObject* Transform_GetEnumerator_m2717073726 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ViewportToWorldPoint_m4277738824 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerController::getHealth()
extern "C"  float PlayerController_getHealth_m3618072579 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.Single)
extern "C"  int32_t Convert_ToInt32_m1613163543 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::resetHealth()
extern "C"  void PlayerController_resetHealth_m768854192 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m270272723 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
extern "C"  void AudioSource_set_loop_m3659884460 (AudioSource_t3935305588 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m650519629 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyUp_m2808015270 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
extern "C"  void MonoBehaviour_CancelInvoke_m2180046661 (MonoBehaviour_t3962482529 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HealthBarController::decrementHealth()
extern "C"  void HealthBarController_decrementHealth_m801695386 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m1268751314 (LevelManager_t4033906515 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t2627027031_m1370005186(__this, method) ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C"  Bounds_t2266837910  Renderer_get_bounds_m1803204000 (Renderer_t2627027031 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
extern "C"  Vector3_t3722313464  Bounds_get_size_m1178783246 (Bounds_t2266837910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawWireSphere_m132265467 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::Hit()
extern "C"  void Projectile_Hit_m3518257651 (Projectile_t1440994518 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t1901882714_m4196288697(__this, method) ((  Text_t1901882714 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void ScoreKeeper::ResetScore()
extern "C"  void ScoreKeeper_ResetScore_m3355957182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void EnemyBehaviour::.ctor()
extern "C"  void EnemyBehaviour__ctor_m52680153 (EnemyBehaviour_t2268862405 * __this, const RuntimeMethod* method)
{
	{
		__this->set_health_2((100.0f));
		__this->set_score_5(((int32_t)10));
		__this->set_shotsPerFrame_8((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyBehaviour::Start()
extern "C"  void EnemyBehaviour_Start_m2772253437 (EnemyBehaviour_t2268862405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyBehaviour_Start_m2772253437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1512031223, /*hidden argument*/NULL);
		ScoreKeeper_t338079517 * L_1 = GameObject_GetComponent_TisScoreKeeper_t338079517_m46958991(L_0, /*hidden argument*/GameObject_GetComponent_TisScoreKeeper_t338079517_m46958991_RuntimeMethod_var);
		__this->set_scoreKeeper_6(L_1);
		ScoreKeeper_t338079517 * L_2 = __this->get_scoreKeeper_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyBehaviour::Update()
extern "C"  void EnemyBehaviour_Update_m2717238525 (EnemyBehaviour_t2268862405 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = __this->get_shotsPerFrame_8();
		V_0 = ((float)il2cpp_codegen_multiply((float)L_0, (float)L_1));
		float L_2 = Random_get_value_m3115885645(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		EnemyBehaviour_fire_m3745947929(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void EnemyBehaviour::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void EnemyBehaviour_OnTriggerEnter2D_m3833877859 (EnemyBehaviour_t2268862405 * __this, Collider2D_t2806799626 * ___colider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyBehaviour_OnTriggerEnter2D_m3833877859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t1440994518 * V_0 = NULL;
	{
		Collider2D_t2806799626 * L_0 = ___colider0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		Projectile_t1440994518 * L_2 = GameObject_GetComponent_TisProjectile_t1440994518_m2065665135(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t1440994518_m2065665135_RuntimeMethod_var);
		V_0 = L_2;
		Projectile_t1440994518 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006c;
		}
	}
	{
		float L_5 = __this->get_health_2();
		Projectile_t1440994518 * L_6 = V_0;
		float L_7 = Projectile_GetDamage_m740460952(L_6, /*hidden argument*/NULL);
		__this->set_health_2(((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)));
		float L_8 = __this->get_health_2();
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_006c;
		}
	}
	{
		AudioClip_t3680889665 * L_9 = __this->get_sfxDeath_9();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		ScoreKeeper_t338079517 * L_12 = __this->get_scoreKeeper_6();
		int32_t L_13 = __this->get_score_5();
		ScoreKeeper_Score_m382650624(L_12, L_13, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_14 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_006c:
	{
		return;
	}
}
// System.Void EnemyBehaviour::fire()
extern "C"  void EnemyBehaviour_fire_m3745947929 (EnemyBehaviour_t2268862405 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyBehaviour_fire_m3745947929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_laserPrefab_3();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.0f), (-0.8f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_5 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_6;
		GameObject_t1113636619 * L_7 = V_0;
		Rigidbody2D_t939494601 * L_8 = GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var);
		float L_9 = __this->get_beamSpeed_4();
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), (0.0f), L_9, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_8, L_10, /*hidden argument*/NULL);
		AudioClip_t3680889665 * L_11 = __this->get_sfxFire_7();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
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
// System.Void EnemySpawner::.ctor()
extern "C"  void EnemySpawner__ctor_m1783562082 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	{
		__this->set_SPEED_10((1.0f));
		__this->set_spawnDelay_11((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Start()
extern "C"  void EnemySpawner_Start_m1918682020 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	{
		EnemySpawner_respawnEnemies_m3794221638(__this, /*hidden argument*/NULL);
		EnemySpawner_calculateBoundries_m477402985(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::OnDrawGizmos()
extern "C"  void EnemySpawner_OnDrawGizmos_m3192140129 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_width_4();
		float L_3 = __this->get_height_5();
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m1719387948((&L_4), L_2, L_3, /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m2631700312(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Update()
extern "C"  void EnemySpawner_Update_m306438552 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_Update_m306438552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = __this->get_swap_9();
		if (L_2)
		{
			goto IL_0095;
		}
	}
	{
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_x_1();
		float L_7 = __this->get_SPEED_10();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_xmin_6();
		float L_10 = __this->get_xmax_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))), L_9, L_10, /*hidden argument*/NULL);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (&V_2)->get_y_2();
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m1719387948((&L_15), L_11, L_14, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_3, L_15, /*hidden argument*/NULL);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		float L_18 = (&V_3)->get_x_1();
		float L_19 = __this->get_xmin_6();
		if ((!(((float)L_18) == ((float)L_19))))
		{
			goto IL_0090;
		}
	}
	{
		__this->set_swap_9((bool)1);
	}

IL_0090:
	{
		goto IL_0111;
	}

IL_0095:
	{
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Transform_get_position_m36019626(L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		float L_23 = (&V_4)->get_x_1();
		float L_24 = __this->get_SPEED_10();
		float L_25 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_26 = __this->get_xmin_6();
		float L_27 = __this->get_xmax_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_28 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_23, (float)((float)il2cpp_codegen_multiply((float)L_24, (float)L_25)))), L_26, L_27, /*hidden argument*/NULL);
		Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_30 = Transform_get_position_m36019626(L_29, /*hidden argument*/NULL);
		V_5 = L_30;
		float L_31 = (&V_5)->get_y_2();
		Vector3_t3722313464  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector3__ctor_m1719387948((&L_32), L_28, L_31, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_20, L_32, /*hidden argument*/NULL);
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = Transform_get_position_m36019626(L_33, /*hidden argument*/NULL);
		V_6 = L_34;
		float L_35 = (&V_6)->get_x_1();
		float L_36 = __this->get_xmax_7();
		if ((!(((float)L_35) == ((float)L_36))))
		{
			goto IL_0111;
		}
	}
	{
		__this->set_swap_9((bool)0);
	}

IL_0111:
	{
		bool L_37 = EnemySpawner_allMembersDead_m755430621(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0122;
		}
	}
	{
		EnemySpawner_respawnEnemies_m3794221638(__this, /*hidden argument*/NULL);
	}

IL_0122:
	{
		return;
	}
}
// System.Void EnemySpawner::respawnEnemies()
extern "C"  void EnemySpawner_respawnEnemies_m3794221638 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_respawnEnemies_m3794221638_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	GameObject_t1113636619 * V_2 = NULL;
	GameObject_t1113636619 * V_3 = NULL;
	{
		Transform_t3600365921 * L_0 = EnemySpawner_NextFreePosition_m882181984(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t3600365921 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		float L_3 = __this->get_width_4();
		Transform_t3600365921 * L_4 = V_0;
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_x_1();
		if ((!(((float)((float)((float)L_3/(float)L_6))) <= ((float)(2.0f)))))
		{
			goto IL_005e;
		}
	}
	{
		GameObject_t1113636619 * L_7 = __this->get_enemyPrefab_2();
		Transform_t3600365921 * L_8 = V_0;
		Transform_t3600365921 * L_9 = Component_get_transform_m3162698980(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_12 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_7, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_2 = L_12;
		GameObject_t1113636619 * L_13 = V_2;
		Transform_t3600365921 * L_14 = GameObject_get_transform_m1369836730(L_13, /*hidden argument*/NULL);
		Transform_t3600365921 * L_15 = V_0;
		Transform_set_parent_m786917804(L_14, L_15, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_005e:
	{
		GameObject_t1113636619 * L_16 = __this->get_enemyRightPrefab_3();
		Transform_t3600365921 * L_17 = V_0;
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_20 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_21 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_16, L_19, L_20, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_3 = L_21;
		GameObject_t1113636619 * L_22 = V_3;
		Transform_t3600365921 * L_23 = GameObject_get_transform_m1369836730(L_22, /*hidden argument*/NULL);
		Transform_t3600365921 * L_24 = V_0;
		Transform_set_parent_m786917804(L_23, L_24, /*hidden argument*/NULL);
	}

IL_0086:
	{
		Transform_t3600365921 * L_25 = EnemySpawner_NextFreePosition_m882181984(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00a7;
		}
	}
	{
		float L_27 = __this->get_spawnDelay_11();
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral2232404224, L_27, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		return;
	}
}
// UnityEngine.Transform EnemySpawner::NextFreePosition()
extern "C"  Transform_t3600365921 * EnemySpawner_NextFreePosition_m882181984 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_NextFreePosition_m882181984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_t3600365921 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m3145433196(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			Transform_t3600365921 * L_6 = V_0;
			V_2 = L_6;
			IL2CPP_LEAVE(0x55, FINALLY_003f);
		}

IL_002f:
		{
			RuntimeObject* L_7 = V_1;
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x53, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_1;
			RuntimeObject* L_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_10;
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			RuntimeObject* L_11 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_11);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0053:
	{
		return (Transform_t3600365921 *)NULL;
	}

IL_0055:
	{
		Transform_t3600365921 * L_12 = V_2;
		return L_12;
	}
}
// System.Boolean EnemySpawner::allMembersDead()
extern "C"  bool EnemySpawner_allMembersDead_m755430621 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_allMembersDead_m755430621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_t3600365921 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = Transform_GetEnumerator_m2717073726(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			RuntimeObject* L_2 = V_1;
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t3600365921 *)CastclassClass((RuntimeObject*)L_3, Transform_t3600365921_il2cpp_TypeInfo_var));
			Transform_t3600365921 * L_4 = V_0;
			int32_t L_5 = Transform_get_childCount_m3145433196(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			V_2 = (bool)0;
			IL2CPP_LEAVE(0x56, FINALLY_0040);
		}

IL_0030:
		{
			RuntimeObject* L_6 = V_1;
			bool L_7 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_1;
			RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			V_3 = L_9;
			if (!L_9)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			RuntimeObject* L_10 = V_3;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_10);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x56, IL_0056)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0054:
	{
		return (bool)1;
	}

IL_0056:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void EnemySpawner::calculateBoundries()
extern "C"  void EnemySpawner_calculateBoundries_m477402985 (EnemySpawner_t2006493939 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_calculateBoundries_m477402985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_z_3();
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_z_3();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_6));
		float L_7 = __this->get_width_4();
		__this->set_padding_8(((float)il2cpp_codegen_multiply((float)(0.5f), (float)L_7)));
		float L_8 = __this->get_padding_8();
		float L_9 = L_8;
		RuntimeObject * L_10 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), (0.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Camera_ViewportToWorldPoint_m4277738824(L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		Camera_t4157153871 * L_15 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_16 = V_0;
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), (1.0f), (0.0f), L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Camera_ViewportToWorldPoint_m4277738824(L_15, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		float L_19 = (&V_3)->get_x_1();
		float L_20 = __this->get_padding_8();
		__this->set_xmin_6(((float)il2cpp_codegen_add((float)L_19, (float)L_20)));
		float L_21 = (&V_4)->get_x_1();
		float L_22 = __this->get_padding_8();
		__this->set_xmax_7(((float)il2cpp_codegen_subtract((float)L_21, (float)L_22)));
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
// System.Void FinalScore::.ctor()
extern "C"  void FinalScore__ctor_m3095001966 (FinalScore_t1860948208 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void FinalScore::Start()
extern "C"  void FinalScore_Start_m1456393712 (FinalScore_t1860948208 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FinalScore_Start_m1456393712_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_scoreText_2();
		String_t* L_1 = Int32_ToString_m141394615((((ScoreKeeper_t338079517_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_t338079517_il2cpp_TypeInfo_var))->get_address_of_score_2()), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1001003224, L_1, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void FinalScore::Update()
extern "C"  void FinalScore_Update_m2864658022 (FinalScore_t1860948208 * __this, const RuntimeMethod* method)
{
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
// System.Void HealthBarController::.ctor()
extern "C"  void HealthBarController__ctor_m3041312611 (HealthBarController_t960276613 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthBarController::Start()
extern "C"  void HealthBarController_Start_m559589073 (HealthBarController_t960276613 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthBarController_Start_m559589073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		float L_0 = PlayerController_getHealth_m3618072579(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_1 = Convert_ToInt32_m1613163543(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->set_healthSize_4(L_1);
		int32_t L_2 = ((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->get_healthSize_4();
		((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->set_health_3(((GameObjectU5BU5D_t3328599146*)SZArrayNew(GameObjectU5BU5D_t3328599146_il2cpp_TypeInfo_var, (uint32_t)L_2)));
		V_0 = 0;
		goto IL_0067;
	}

IL_0025:
	{
		GameObjectU5BU5D_t3328599146* L_3 = ((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->get_health_3();
		int32_t L_4 = V_0;
		GameObject_t1113636619 * L_5 = __this->get_healthUnit_2();
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), ((float)il2cpp_codegen_multiply((float)(0.5f), (float)(((float)((float)L_8))))), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_12 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_5, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		ArrayElementTypeCheck (L_3, L_12);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4), (GameObject_t1113636619 *)L_12);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0067:
	{
		int32_t L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		float L_15 = PlayerController_getHealth_m3618072579(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)(((float)((float)L_14)))) < ((float)L_15)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}
}
// System.Void HealthBarController::decrementHealth()
extern "C"  void HealthBarController_decrementHealth_m801695386 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthBarController_decrementHealth_m801695386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->get_healthSize_4();
		((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->set_healthSize_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		GameObjectU5BU5D_t3328599146* L_1 = ((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->get_health_3();
		int32_t L_2 = ((HealthBarController_t960276613_StaticFields*)il2cpp_codegen_static_fields_for(HealthBarController_t960276613_il2cpp_TypeInfo_var))->get_healthSize_4();
		int32_t L_3 = L_2;
		GameObject_t1113636619 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthBarController::Update()
extern "C"  void HealthBarController_Update_m3402014009 (HealthBarController_t960276613 * __this, const RuntimeMethod* method)
{
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
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1695469538 (LevelManager_t4033906515 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m1243507911 (LevelManager_t4033906515 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m1243507911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral219571795, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuiteRequest()
extern "C"  void LevelManager_QuiteRequest_m3549425962 (LevelManager_t4033906515 * __this, const RuntimeMethod* method)
{
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::backToStart()
extern "C"  void LevelManager_backToStart_m132784572 (LevelManager_t4033906515 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_backToStart_m132784572_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral2707270972, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m1268751314 (LevelManager_t4033906515 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadNextLevel_m1268751314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		PlayerController_resetHealth_m768854192(NULL /*static, unused*/, /*hidden argument*/NULL);
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m270272723((&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
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
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m3706571300 (MusicPlayer_t2462663927 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Awake()
extern "C"  void MusicPlayer_Awake_m2892964012 (MusicPlayer_t2462663927 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C"  void MusicPlayer_Start_m163508746 (MusicPlayer_t2462663927 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Start_m163508746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2462663927_il2cpp_TypeInfo_var);
		MusicPlayer_t2462663927 * L_0 = ((MusicPlayer_t2462663927_StaticFields*)il2cpp_codegen_static_fields_for(MusicPlayer_t2462663927_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2462663927_il2cpp_TypeInfo_var);
		MusicPlayer_t2462663927 * L_2 = ((MusicPlayer_t2462663927_StaticFields*)il2cpp_codegen_static_fields_for(MusicPlayer_t2462663927_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		goto IL_0075;
	}

IL_0030:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t2462663927_il2cpp_TypeInfo_var);
		((MusicPlayer_t2462663927_StaticFields*)il2cpp_codegen_static_fields_for(MusicPlayer_t2462663927_il2cpp_TypeInfo_var))->set_instance_2(__this);
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_6 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_music_6(L_6);
		AudioSource_t3935305588 * L_7 = __this->get_music_6();
		AudioSource_set_loop_m3659884460(L_7, (bool)1, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_8 = __this->get_music_6();
		AudioClip_t3680889665 * L_9 = __this->get_startClip_3();
		AudioSource_set_clip_m31653938(L_8, L_9, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_10 = __this->get_music_6();
		AudioSource_Play_m48294159(L_10, /*hidden argument*/NULL);
	}

IL_0075:
	{
		return;
	}
}
// System.Void MusicPlayer::OnLevelWasLoaded(System.Int32)
extern "C"  void MusicPlayer_OnLevelWasLoaded_m2628909558 (MusicPlayer_t2462663927 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_music_6();
		bool L_1 = AudioSource_get_isPlaying_m1896551654(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		AudioSource_t3935305588 * L_2 = __this->get_music_6();
		AudioSource_Stop_m2682712816(L_2, /*hidden argument*/NULL);
	}

IL_001b:
	{
		int32_t L_3 = ___level0;
		if (L_3)
		{
			goto IL_0037;
		}
	}
	{
		AudioSource_t3935305588 * L_4 = __this->get_music_6();
		AudioClip_t3680889665 * L_5 = __this->get_startClip_3();
		AudioSource_set_clip_m31653938(L_4, L_5, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0037:
	{
		int32_t L_6 = ___level0;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0064;
		}
	}
	{
		AudioSource_t3935305588 * L_7 = __this->get_music_6();
		AudioSource_set_volume_m1273312851(L_7, (0.05f), /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_8 = __this->get_music_6();
		AudioClip_t3680889665 * L_9 = __this->get_gameClip_4();
		AudioSource_set_clip_m31653938(L_8, L_9, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0064:
	{
		int32_t L_10 = ___level0;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_007c;
		}
	}
	{
		AudioSource_t3935305588 * L_11 = __this->get_music_6();
		AudioClip_t3680889665 * L_12 = __this->get_endClip_5();
		AudioSource_set_clip_m31653938(L_11, L_12, /*hidden argument*/NULL);
	}

IL_007c:
	{
		AudioSource_t3935305588 * L_13 = __this->get_music_6();
		AudioSource_set_loop_m3659884460(L_13, (bool)1, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_14 = __this->get_music_6();
		AudioSource_Play_m48294159(L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Update()
extern "C"  void MusicPlayer_Update_m704292081 (MusicPlayer_t2462663927 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m336933773 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		__this->set_MOVE_SPEED_3((5.0f));
		__this->set_padding_4((0.5f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1746698410 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_z_3();
		Camera_t4157153871 * L_3 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_2)->get_z_3();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_6));
		Camera_t4157153871 * L_7 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t3722313464  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m3353183577((&L_9), (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Camera_ViewportToWorldPoint_m4277738824(L_7, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		Camera_t4157153871 * L_11 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t3722313464  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m3353183577((&L_13), (1.0f), (0.0f), L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Camera_ViewportToWorldPoint_m4277738824(L_11, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		Camera_t4157153871 * L_15 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_16 = V_0;
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), (1.0f), (0.0f), L_16, /*hidden argument*/NULL);
		Vector3_t3722313464  L_18 = Camera_ViewportToWorldPoint_m4277738824(L_15, L_17, /*hidden argument*/NULL);
		V_5 = L_18;
		Camera_t4157153871 * L_19 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_20 = V_0;
		Vector3_t3722313464  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m3353183577((&L_21), (1.0f), (1.0f), L_20, /*hidden argument*/NULL);
		Vector3_t3722313464  L_22 = Camera_ViewportToWorldPoint_m4277738824(L_19, L_21, /*hidden argument*/NULL);
		V_6 = L_22;
		float L_23 = (&V_3)->get_x_1();
		float L_24 = __this->get_padding_4();
		__this->set_xmin_6(((float)il2cpp_codegen_add((float)L_23, (float)L_24)));
		float L_25 = (&V_4)->get_x_1();
		float L_26 = __this->get_padding_4();
		__this->set_xmax_7(((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)));
		float L_27 = (&V_5)->get_y_2();
		float L_28 = __this->get_padding_4();
		__this->set_ymin_8(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		float L_29 = (&V_6)->get_y_2();
		float L_30 = __this->get_padding_4();
		__this->set_ymax_9(((float)il2cpp_codegen_subtract((float)L_29, (float)L_30)));
		return;
	}
}
// System.Single PlayerController::getHealth()
extern "C"  float PlayerController_getHealth_m3618072579 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_getHealth_m3618072579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		float L_0 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_health_12();
		return ((float)((float)L_0/(float)(100.0f)));
	}
}
// System.Void PlayerController::resetHealth()
extern "C"  void PlayerController_resetHealth_m768854192 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_resetHealth_m768854192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_health_12((300.0f));
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m848427540 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m848427540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		float L_1 = __this->get_fireRate_11();
		MonoBehaviour_InvokeRepeating_m650519629(__this, _stringLiteral110303690, (1.0E-06f), L_1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m2808015270(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		MonoBehaviour_CancelInvoke_m2180046661(__this, _stringLiteral110303690, /*hidden argument*/NULL);
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_009e;
		}
	}
	{
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_x_1();
		float L_8 = __this->get_MOVE_SPEED_3();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_xmin_6();
		float L_11 = __this->get_xmax_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))), L_10, L_11, /*hidden argument*/NULL);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		float L_15 = (&V_1)->get_y_2();
		Vector3_t3722313464  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m1719387948((&L_16), L_12, L_15, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_4, L_16, /*hidden argument*/NULL);
		goto IL_01cc;
	}

IL_009e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0103;
		}
	}
	{
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_19 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_x_1();
		float L_22 = __this->get_MOVE_SPEED_3();
		float L_23 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_24 = __this->get_xmin_6();
		float L_25 = __this->get_xmax_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_26 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_21, (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23)))), L_24, L_25, /*hidden argument*/NULL);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		float L_29 = (&V_3)->get_y_2();
		Vector3_t3722313464  L_30;
		memset(&L_30, 0, sizeof(L_30));
		Vector3__ctor_m1719387948((&L_30), L_26, L_29, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_18, L_30, /*hidden argument*/NULL);
		goto IL_01cc;
	}

IL_0103:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_31 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_016a;
		}
	}
	{
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_33 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_34 = Transform_get_position_m36019626(L_33, /*hidden argument*/NULL);
		V_4 = L_34;
		float L_35 = (&V_4)->get_x_1();
		Transform_t3600365921 * L_36 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_37 = Transform_get_position_m36019626(L_36, /*hidden argument*/NULL);
		V_5 = L_37;
		float L_38 = (&V_5)->get_y_2();
		float L_39 = __this->get_MOVE_SPEED_3();
		float L_40 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_41 = __this->get_ymin_8();
		float L_42 = __this->get_ymax_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_43 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)))), L_41, L_42, /*hidden argument*/NULL);
		Vector3_t3722313464  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector3__ctor_m1719387948((&L_44), L_35, L_43, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_32, L_44, /*hidden argument*/NULL);
		goto IL_01cc;
	}

IL_016a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_45 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01cc;
		}
	}
	{
		Transform_t3600365921 * L_46 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_47 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_48 = Transform_get_position_m36019626(L_47, /*hidden argument*/NULL);
		V_6 = L_48;
		float L_49 = (&V_6)->get_x_1();
		Transform_t3600365921 * L_50 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_51 = Transform_get_position_m36019626(L_50, /*hidden argument*/NULL);
		V_7 = L_51;
		float L_52 = (&V_7)->get_y_2();
		float L_53 = __this->get_MOVE_SPEED_3();
		float L_54 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_55 = __this->get_ymin_8();
		float L_56 = __this->get_ymax_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_57 = Mathf_Clamp_m3350697880(NULL /*static, unused*/, ((float)il2cpp_codegen_subtract((float)L_52, (float)((float)il2cpp_codegen_multiply((float)L_53, (float)L_54)))), L_55, L_56, /*hidden argument*/NULL);
		Vector3_t3722313464  L_58;
		memset(&L_58, 0, sizeof(L_58));
		Vector3__ctor_m1719387948((&L_58), L_49, L_57, /*hidden argument*/NULL);
		Transform_set_position_m3387557959(L_46, L_58, /*hidden argument*/NULL);
	}

IL_01cc:
	{
		return;
	}
}
// System.Void PlayerController::fire()
extern "C"  void PlayerController_fire_m2665738803 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_fire_m2665738803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = __this->get_laserPrefab_5();
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		Vector3_t3722313464  L_3;
		memset(&L_3, 0, sizeof(L_3));
		Vector3__ctor_m3353183577((&L_3), (0.0f), (0.7f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_5 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_6 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_0 = L_6;
		GameObject_t1113636619 * L_7 = V_0;
		Rigidbody2D_t939494601 * L_8 = GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t939494601_m2767154013_RuntimeMethod_var);
		float L_9 = __this->get_beamSpeed_10();
		Vector2_t2156229523  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3970636864((&L_10), (0.0f), L_9, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m2898400508(L_8, L_10, /*hidden argument*/NULL);
		AudioClip_t3680889665 * L_11 = __this->get_sfxFire_13();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m2562319700 (PlayerController_t2064355688 * __this, Collider2D_t2806799626 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter2D_m2562319700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Projectile_t1440994518 * V_0 = NULL;
	{
		Collider2D_t2806799626 * L_0 = ___collider0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		Projectile_t1440994518 * L_2 = GameObject_GetComponent_TisProjectile_t1440994518_m2065665135(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t1440994518_m2065665135_RuntimeMethod_var);
		V_0 = L_2;
		Projectile_t1440994518 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t2064355688_il2cpp_TypeInfo_var);
		float L_5 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_health_12();
		Projectile_t1440994518 * L_6 = V_0;
		float L_7 = Projectile_GetDamage_m740460952(L_6, /*hidden argument*/NULL);
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_health_12(((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)));
		HealthBarController_decrementHealth_m801695386(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = ((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->get_health_12();
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_0068;
		}
	}
	{
		AudioClip_t3680889665 * L_9 = __this->get_sfxDeath_14();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/NULL);
		LevelManager_t4033906515 * L_12 = __this->get_levelManager_2();
		LevelManager_LoadNextLevel_m1268751314(L_12, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_13 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
	}

IL_0068:
	{
		return;
	}
}
// System.Void PlayerController::.cctor()
extern "C"  void PlayerController__cctor_m483794249 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController__cctor_m483794249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PlayerController_t2064355688_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t2064355688_il2cpp_TypeInfo_var))->set_health_12((300.0f));
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
// System.Void Position::.ctor()
extern "C"  void Position__ctor_m941109694 (Position_t964309404 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Position::OnDrawGizmos()
extern "C"  void Position_OnDrawGizmos_m1697024220 (Position_t964309404 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Position_OnDrawGizmos_m1697024220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Bounds_t2266837910  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	Bounds_t2266837910  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		GameObject_t1113636619 * L_0 = __this->get_enemyPrefab_2();
		Renderer_t2627027031 * L_1 = GameObject_GetComponent_TisRenderer_t2627027031_m1370005186(L_0, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1370005186_RuntimeMethod_var);
		Bounds_t2266837910  L_2 = Renderer_get_bounds_m1803204000(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t3722313464  L_3 = Bounds_get_size_m1178783246((&V_1), /*hidden argument*/NULL);
		V_2 = L_3;
		float L_4 = (&V_2)->get_x_1();
		V_0 = L_4;
		GameObject_t1113636619 * L_5 = __this->get_enemyPrefab_2();
		Renderer_t2627027031 * L_6 = GameObject_GetComponent_TisRenderer_t2627027031_m1370005186(L_5, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m1370005186_RuntimeMethod_var);
		Bounds_t2266837910  L_7 = Renderer_get_bounds_m1803204000(L_6, /*hidden argument*/NULL);
		V_4 = L_7;
		Vector3_t3722313464  L_8 = Bounds_get_size_m1178783246((&V_4), /*hidden argument*/NULL);
		V_5 = L_8;
		float L_9 = (&V_5)->get_y_2();
		V_3 = L_9;
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		float L_12 = V_0;
		Gizmos_DrawWireSphere_m132265467(NULL /*static, unused*/, L_11, ((float)((float)L_12/(float)(2.0f))), /*hidden argument*/NULL);
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
// System.Void Projectile::.ctor()
extern "C"  void Projectile__ctor_m2984814897 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	{
		__this->set_damage_2((100.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::Start()
extern "C"  void Projectile_Start_m1343777743 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Projectile::Update()
extern "C"  void Projectile_Update_m63735601 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Single Projectile::GetDamage()
extern "C"  float Projectile_GetDamage_m740460952 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	{
		Projectile_Hit_m3518257651(__this, /*hidden argument*/NULL);
		float L_0 = __this->get_damage_2();
		return L_0;
	}
}
// System.Void Projectile::Hit()
extern "C"  void Projectile_Hit_m3518257651 (Projectile_t1440994518 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Projectile_Hit_m3518257651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
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
// System.Void ScoreKeeper::.ctor()
extern "C"  void ScoreKeeper__ctor_m440349473 (ScoreKeeper_t338079517 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::Score(System.Int32)
extern "C"  void ScoreKeeper_Score_m382650624 (ScoreKeeper_t338079517 * __this, int32_t ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Score_m382650624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((ScoreKeeper_t338079517_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_t338079517_il2cpp_TypeInfo_var))->get_score_2();
		int32_t L_1 = ___points0;
		((ScoreKeeper_t338079517_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_t338079517_il2cpp_TypeInfo_var))->set_score_2(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		Text_t1901882714 * L_2 = __this->get_scoreText_3();
		String_t* L_3 = Int32_ToString_m141394615((((ScoreKeeper_t338079517_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_t338079517_il2cpp_TypeInfo_var))->get_address_of_score_2()), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}
}
// System.Void ScoreKeeper::ResetScore()
extern "C"  void ScoreKeeper_ResetScore_m3355957182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_ResetScore_m3355957182_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ScoreKeeper_t338079517_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_t338079517_il2cpp_TypeInfo_var))->set_score_2(0);
		return;
	}
}
// System.Int32 ScoreKeeper::getScore()
extern "C"  int32_t ScoreKeeper_getScore_m3075035978 (ScoreKeeper_t338079517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_getScore_m3075035978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((ScoreKeeper_t338079517_StaticFields*)il2cpp_codegen_static_fields_for(ScoreKeeper_t338079517_il2cpp_TypeInfo_var))->get_score_2();
		return L_0;
	}
}
// System.Void ScoreKeeper::Start()
extern "C"  void ScoreKeeper_Start_m537207923 (ScoreKeeper_t338079517 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreKeeper_Start_m537207923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = Component_GetComponent_TisText_t1901882714_m4196288697(__this, /*hidden argument*/Component_GetComponent_TisText_t1901882714_m4196288697_RuntimeMethod_var);
		__this->set_scoreText_3(L_0);
		return;
	}
}
// System.Void ScoreKeeper::Update()
extern "C"  void ScoreKeeper_Update_m270203093 (ScoreKeeper_t338079517 * __this, const RuntimeMethod* method)
{
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
// System.Void Shredder::.ctor()
extern "C"  void Shredder__ctor_m1040943192 (Shredder_t747743966 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shredder::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void Shredder_OnTriggerEnter2D_m303188145 (Shredder_t747743966 * __this, Collider2D_t2806799626 * ___collider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Shredder_OnTriggerEnter2D_m303188145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___collider0;
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
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
// System.Void StartGame::.ctor()
extern "C"  void StartGame__ctor_m1907791227 (StartGame_t5410628 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartGame::Start()
extern "C"  void StartGame_Start_m2209841003 (StartGame_t5410628 * __this, const RuntimeMethod* method)
{
	{
		ScoreKeeper_ResetScore_m3355957182(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StartGame::Update()
extern "C"  void StartGame_Update_m3348428751 (StartGame_t5410628 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
