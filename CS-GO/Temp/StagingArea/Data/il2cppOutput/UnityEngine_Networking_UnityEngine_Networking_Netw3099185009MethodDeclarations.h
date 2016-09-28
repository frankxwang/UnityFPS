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

// UnityEngine.Networking.NetworkSystem.CRCMessage
struct CRCMessage_t3099185009;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::.ctor()
extern "C"  void CRCMessage__ctor_m3507842567 (CRCMessage_t3099185009 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void CRCMessage_Deserialize_m2611746038 (CRCMessage_t3099185009 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.CRCMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void CRCMessage_Serialize_m451818215 (CRCMessage_t3099185009 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
