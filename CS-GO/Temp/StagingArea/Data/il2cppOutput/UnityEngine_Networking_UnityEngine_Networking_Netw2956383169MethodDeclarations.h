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

// UnityEngine.Networking.NetworkSystem.AnimationMessage
struct AnimationMessage_t2956383169;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::.ctor()
extern "C"  void AnimationMessage__ctor_m1024444023 (AnimationMessage_t2956383169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AnimationMessage_Deserialize_m970514790 (AnimationMessage_t2956383169 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AnimationMessage_Serialize_m432233303 (AnimationMessage_t2956383169 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
