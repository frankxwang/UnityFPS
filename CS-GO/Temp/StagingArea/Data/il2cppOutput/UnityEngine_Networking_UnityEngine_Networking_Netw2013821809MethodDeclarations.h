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

// UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage
struct AnimationTriggerMessage_t2013821809;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::.ctor()
extern "C"  void AnimationTriggerMessage__ctor_m2613157817 (AnimationTriggerMessage_t2013821809 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AnimationTriggerMessage_Deserialize_m1024067624 (AnimationTriggerMessage_t2013821809 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationTriggerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AnimationTriggerMessage_Serialize_m959662745 (AnimationTriggerMessage_t2013821809 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
