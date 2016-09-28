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

// UnityEngine.Networking.NetworkSystem.EmptyMessage
struct EmptyMessage_t3162150360;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::.ctor()
extern "C"  void EmptyMessage__ctor_m1408520640 (EmptyMessage_t3162150360 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void EmptyMessage_Deserialize_m1518879087 (EmptyMessage_t3162150360 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.EmptyMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void EmptyMessage_Serialize_m2376935840 (EmptyMessage_t3162150360 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
