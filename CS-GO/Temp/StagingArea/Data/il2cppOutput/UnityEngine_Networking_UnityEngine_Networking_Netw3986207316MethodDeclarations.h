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

// UnityEngine.Networking.NetworkSystem.StringMessage
struct StringMessage_t3986207316;
// System.String
struct String_t;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"

// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::.ctor(System.String)
extern "C"  void StringMessage__ctor_m3942502220 (StringMessage_t3986207316 * __this, String_t* ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Deserialize(UnityEngine.Networking.NetworkReader)
extern "C"  void StringMessage_Deserialize_m628198309 (StringMessage_t3986207316 * __this, NetworkReader_t3536499450 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkSystem.StringMessage::Serialize(UnityEngine.Networking.NetworkWriter)
extern "C"  void StringMessage_Serialize_m3484387670 (StringMessage_t3986207316 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
