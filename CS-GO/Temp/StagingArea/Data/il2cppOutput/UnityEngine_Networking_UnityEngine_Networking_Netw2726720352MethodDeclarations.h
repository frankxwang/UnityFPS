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

// UnityEngine.Networking.NetworkSystem.RemovePlayerMessage
struct RemovePlayerMessage_t2726720352;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::.ctor()
extern "C"  void RemovePlayerMessage__ctor_m3188085034 (RemovePlayerMessage_t2726720352 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void RemovePlayerMessage_Deserialize_m3116588121 (RemovePlayerMessage_t2726720352 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.RemovePlayerMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void RemovePlayerMessage_Serialize_m2548430602 (RemovePlayerMessage_t2726720352 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
