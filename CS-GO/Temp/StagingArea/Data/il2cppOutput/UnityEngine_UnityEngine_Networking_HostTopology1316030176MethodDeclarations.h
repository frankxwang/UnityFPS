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

// UnityEngine.Networking.HostTopology
struct HostTopology_t1316030176;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"

// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
extern "C"  void HostTopology__ctor_m1444034768 (HostTopology_t1316030176 * __this, ConnectionConfig_t3291140713 * ___defaultConfig0, int32_t ___maxDefaultConnections1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.HostTopology::.ctor()
extern "C"  void HostTopology__ctor_m1912184936 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::get_DefaultConfig()
extern "C"  ConnectionConfig_t3291140713 * HostTopology_get_DefaultConfig_m3534679088 (HostTopology_t1316030176 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
