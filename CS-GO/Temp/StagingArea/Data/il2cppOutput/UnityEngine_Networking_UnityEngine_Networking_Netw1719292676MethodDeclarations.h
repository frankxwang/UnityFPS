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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"

// System.Boolean UnityEngine.Networking.NetworkHash128::IsValid()
extern "C"  bool NetworkHash128_IsValid_m3065742702 (NetworkHash128_t1719292676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkHash128::ToString()
extern "C"  String_t* NetworkHash128_ToString_m3335927901 (NetworkHash128_t1719292676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct NetworkHash128_t1719292676;
struct NetworkHash128_t1719292676_marshaled_pinvoke;

extern "C" void NetworkHash128_t1719292676_marshal_pinvoke(const NetworkHash128_t1719292676& unmarshaled, NetworkHash128_t1719292676_marshaled_pinvoke& marshaled);
extern "C" void NetworkHash128_t1719292676_marshal_pinvoke_back(const NetworkHash128_t1719292676_marshaled_pinvoke& marshaled, NetworkHash128_t1719292676& unmarshaled);
extern "C" void NetworkHash128_t1719292676_marshal_pinvoke_cleanup(NetworkHash128_t1719292676_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct NetworkHash128_t1719292676;
struct NetworkHash128_t1719292676_marshaled_com;

extern "C" void NetworkHash128_t1719292676_marshal_com(const NetworkHash128_t1719292676& unmarshaled, NetworkHash128_t1719292676_marshaled_com& marshaled);
extern "C" void NetworkHash128_t1719292676_marshal_com_back(const NetworkHash128_t1719292676_marshaled_com& marshaled, NetworkHash128_t1719292676& unmarshaled);
extern "C" void NetworkHash128_t1719292676_marshal_com_cleanup(NetworkHash128_t1719292676_marshaled_com& marshaled);
