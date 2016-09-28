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

// UnityEngine.Networking.NetworkSystem.ReconnectMessage
struct ReconnectMessage_t2778230926;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::.ctor()
extern "C"  void ReconnectMessage__ctor_m613236810 (ReconnectMessage_t2778230926 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ReconnectMessage_Deserialize_m1465738105 (ReconnectMessage_t2778230926 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ReconnectMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ReconnectMessage_Serialize_m2627159594 (ReconnectMessage_t2778230926 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
