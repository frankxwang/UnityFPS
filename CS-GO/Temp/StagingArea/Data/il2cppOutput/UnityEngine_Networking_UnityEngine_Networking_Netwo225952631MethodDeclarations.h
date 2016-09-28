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

// UnityEngine.Networking.NetworkSystem.AnimationParametersMessage
struct AnimationParametersMessage_t225952631;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::.ctor()
extern "C"  void AnimationParametersMessage__ctor_m2834698945 (AnimationParametersMessage_t225952631 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void AnimationParametersMessage_Deserialize_m403321136 (AnimationParametersMessage_t225952631 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.AnimationParametersMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void AnimationParametersMessage_Serialize_m1522144673 (AnimationParametersMessage_t225952631 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
