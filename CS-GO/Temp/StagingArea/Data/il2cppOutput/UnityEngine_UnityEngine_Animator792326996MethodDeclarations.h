#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Animator
struct Animator_t792326996;
// System.String
struct String_t;
// UnityEngine.AnimatorControllerParameter[]
struct AnimatorControllerParameterU5BU5D_t1328223394;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t3860414472;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo4162640357.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo2791832279.h"

// System.Single UnityEngine.Animator::GetFloat(System.String)
extern "C"  float Animator_GetFloat_m2204811058 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
extern "C"  float Animator_GetFloat_m2965884705 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
extern "C"  void Animator_SetFloat_m1775105839 (Animator_t792326996 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloat_m359795641 (Animator_t792326996 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
extern "C"  void Animator_SetFloat_m57191598 (Animator_t792326996 * __this, int32_t ___id0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C"  bool Animator_GetBool_m436748612 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
extern "C"  bool Animator_GetBool_m1246282447 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C"  void Animator_SetBool_m2336836203 (Animator_t792326996 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
extern "C"  void Animator_SetBool_m1802007004 (Animator_t792326996 * __this, int32_t ___id0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C"  int32_t Animator_GetInteger_m2467155164 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
extern "C"  int32_t Animator_GetInteger_m3944178743 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C"  void Animator_SetInteger_m4253187183 (Animator_t792326996 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
extern "C"  void Animator_SetInteger_m812217484 (Animator_t792326996 * __this, int32_t ___id0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C"  void Animator_SetTrigger_m514363822 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
extern "C"  void Animator_SetTrigger_m2911354149 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C"  void Animator_ResetTrigger_m4152421915 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::get_applyRootMotion()
extern "C"  bool Animator_get_applyRootMotion_m2388146907 (Animator_t792326996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
extern "C"  void Animator_set_applyRootMotion_m394805828 (Animator_t792326996 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::get_layerCount()
extern "C"  int32_t Animator_get_layerCount_m3326924613 (Animator_t792326996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
extern "C"  float Animator_GetLayerWeight_m3878421230 (Animator_t792326996 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
extern "C"  void Animator_SetLayerWeight_m3838560187 (Animator_t792326996 * __this, int32_t ___layerIndex0, float ___weight1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t4162640357  Animator_GetCurrentAnimatorStateInfo_m3061859448 (Animator_t792326996 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
extern "C"  AnimatorStateInfo_t4162640357  Animator_GetNextAnimatorStateInfo_m791156688 (Animator_t792326996 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
extern "C"  AnimatorTransitionInfo_t2791832279  Animator_GetAnimatorTransitionInfo_m3858104711 (Animator_t792326996 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
extern "C"  bool Animator_IsInTransition_m2609196857 (Animator_t792326996 * __this, int32_t ___layerIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorControllerParameter[] UnityEngine.Animator::get_parameters()
extern "C"  AnimatorControllerParameterU5BU5D_t1328223394* Animator_get_parameters_m3704707859 (Animator_t792326996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
extern "C"  void Animator_Play_m330123001 (Animator_t792326996 * __this, int32_t ___stateNameHash0, int32_t ___layer1, float ___normalizedTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C"  RuntimeAnimatorController_t3860414472 * Animator_get_runtimeAnimatorController_m1822082727 (Animator_t792326996 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C"  int32_t Animator_StringToHash_m4020897098 (Il2CppObject * __this /* static, unused */, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
extern "C"  void Animator_SetFloatString_m82432478 (Animator_t792326996 * __this, String_t* ___name0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
extern "C"  void Animator_SetFloatID_m819072393 (Animator_t792326996 * __this, int32_t ___id0, float ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
extern "C"  float Animator_GetFloatString_m1552529953 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
extern "C"  float Animator_GetFloatID_m373159228 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C"  void Animator_SetBoolString_m275475356 (Animator_t792326996 * __this, String_t* ___name0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
extern "C"  void Animator_SetBoolID_m516262497 (Animator_t792326996 * __this, int32_t ___id0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C"  bool Animator_GetBoolString_m1806558899 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
extern "C"  bool Animator_GetBoolID_m1397798250 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C"  void Animator_SetIntegerString_m1111174752 (Animator_t792326996 * __this, String_t* ___name0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
extern "C"  void Animator_SetIntegerID_m276290769 (Animator_t792326996 * __this, int32_t ___id0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C"  int32_t Animator_GetIntegerString_m3084017739 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
extern "C"  int32_t Animator_GetIntegerID_m4210859218 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C"  void Animator_SetTriggerString_m1378271133 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerID(System.Int32)
extern "C"  void Animator_SetTriggerID_m3803869760 (Animator_t792326996 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C"  void Animator_ResetTriggerString_m1817269834 (Animator_t792326996 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
extern "C"  void Animator_SetFloatStringDamp_m2274151144 (Animator_t792326996 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
