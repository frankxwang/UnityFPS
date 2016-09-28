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

// UnityEngine.Networking.NetworkSystem.ErrorMessage
struct ErrorMessage_t3506868413;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::.ctor()
extern "C"  void ErrorMessage__ctor_m1777584251 (ErrorMessage_t3506868413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void ErrorMessage_Deserialize_m564141674 (ErrorMessage_t3506868413 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.ErrorMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void ErrorMessage_Serialize_m92146011 (ErrorMessage_t3506868413 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
