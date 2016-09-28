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

// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage
struct LobbyReadyToBeginMessage_t1996980708;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::.ctor()
extern "C"  void LobbyReadyToBeginMessage__ctor_m3451701428 (LobbyReadyToBeginMessage_t1996980708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void LobbyReadyToBeginMessage_Deserialize_m3317352291 (LobbyReadyToBeginMessage_t1996980708 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void LobbyReadyToBeginMessage_Serialize_m2079366292 (LobbyReadyToBeginMessage_t1996980708 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
