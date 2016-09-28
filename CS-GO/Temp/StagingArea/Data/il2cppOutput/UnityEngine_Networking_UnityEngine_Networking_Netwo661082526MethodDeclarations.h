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

// UnityEngine.Networking.NetworkAnimator
struct NetworkAnimator_t661082526;
// UnityEngine.Animator
struct Animator_t792326996;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t2956383169;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_t225952631;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator792326996.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2956383169.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo225952631.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"

// System.Void UnityEngine.Networking.NetworkAnimator::.ctor()
extern "C"  void NetworkAnimator__ctor_m30965414 (NetworkAnimator_t661082526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::.cctor()
extern "C"  void NetworkAnimator__cctor_m477831623 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.Networking.NetworkAnimator::get_animator()
extern "C"  Animator_t792326996 * NetworkAnimator_get_animator_m1200642663 (NetworkAnimator_t661082526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::set_animator(UnityEngine.Animator)
extern "C"  void NetworkAnimator_set_animator_m2619129348 (NetworkAnimator_t661082526 * __this, Animator_t792326996 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetParameterAutoSend(System.Int32,System.Boolean)
extern "C"  void NetworkAnimator_SetParameterAutoSend_m3888623568 (NetworkAnimator_t661082526 * __this, int32_t ___index0, bool ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::GetParameterAutoSend(System.Int32)
extern "C"  bool NetworkAnimator_GetParameterAutoSend_m1590777447 (NetworkAnimator_t661082526 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::ResetParameterOptions()
extern "C"  void NetworkAnimator_ResetParameterOptions_m1119654632 (NetworkAnimator_t661082526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnStartAuthority()
extern "C"  void NetworkAnimator_OnStartAuthority_m2432567070 (NetworkAnimator_t661082526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::FixedUpdate()
extern "C"  void NetworkAnimator_FixedUpdate_m3025553313 (NetworkAnimator_t661082526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::CheckAnimStateChanged(System.Int32&,System.Single&)
extern "C"  bool NetworkAnimator_CheckAnimStateChanged_m1946003198 (NetworkAnimator_t661082526 * __this, int32_t* ___stateHash0, float* ___normalizedTime1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::CheckSendRate()
extern "C"  void NetworkAnimator_CheckSendRate_m2205684340 (NetworkAnimator_t661082526 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetSendTrackingParam(System.String,System.Int32)
extern "C"  void NetworkAnimator_SetSendTrackingParam_m2009561759 (NetworkAnimator_t661082526 * __this, String_t* ___p0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetRecvTrackingParam(System.String,System.Int32)
extern "C"  void NetworkAnimator_SetRecvTrackingParam_m2289349121 (NetworkAnimator_t661082526 * __this, String_t* ___p0, int32_t ___i1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimMsg(UnityEngine.Networking.NetworkSystem.AnimationMessage,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkAnimator_HandleAnimMsg_m3297023209 (NetworkAnimator_t661082526 * __this, AnimationMessage_t2956383169 * ___msg0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimParamsMsg(UnityEngine.Networking.NetworkSystem.AnimationParametersMessage,UnityEngine.Networking.NetworkReader)
extern "C"  void NetworkAnimator_HandleAnimParamsMsg_m873400569 (NetworkAnimator_t661082526 * __this, AnimationParametersMessage_t225952631 * ___msg0, NetworkReader_t3536499450 * ___reader1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::HandleAnimTriggerMsg(System.Int32)
extern "C"  void NetworkAnimator_HandleAnimTriggerMsg_m20741265 (NetworkAnimator_t661082526 * __this, int32_t ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::WriteParameters(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  void NetworkAnimator_WriteParameters_m2883320782 (NetworkAnimator_t661082526 * __this, NetworkWriter_t3691904682 * ___writer0, bool ___autoSend1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::ReadParameters(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkAnimator_ReadParameters_m3266636717 (NetworkAnimator_t661082526 * __this, NetworkReader_t3536499450 * ___reader0, bool ___autoSend1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkAnimator::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkAnimator_OnSerialize_m2471463940 (NetworkAnimator_t661082526 * __this, NetworkWriter_t3691904682 * ___writer0, bool ___forceAll1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkAnimator_OnDeserialize_m3909166791 (NetworkAnimator_t661082526 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetTrigger(System.String)
extern "C"  void NetworkAnimator_SetTrigger_m1619652078 (NetworkAnimator_t661082526 * __this, String_t* ___triggerName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::SetTrigger(System.Int32)
extern "C"  void NetworkAnimator_SetTrigger_m3085555941 (NetworkAnimator_t661082526 * __this, int32_t ___hash0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationServerMessage_m2194566361 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationParametersServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationParametersServerMessage_m2522482659 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationTriggerServerMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationTriggerServerMessage_m3883032097 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationClientMessage_m4195124065 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationParametersClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationParametersClientMessage_m228073067 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkAnimator::OnAnimationTriggerClientMessage(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkAnimator_OnAnimationTriggerClientMessage_m1588622505 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
