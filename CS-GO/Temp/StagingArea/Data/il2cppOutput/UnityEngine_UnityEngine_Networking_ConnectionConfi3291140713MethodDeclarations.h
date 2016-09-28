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

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t3291140713;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t292107700;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_ConnectionConfi3291140713.h"
#include "UnityEngine_UnityEngine_Networking_QosType1592524120.h"

// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
extern "C"  void ConnectionConfig__ctor_m3444257023 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig__ctor_m921396976 (ConnectionConfig_t3291140713 * __this, ConnectionConfig_t3291140713 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::Validate(UnityEngine.Networking.ConnectionConfig)
extern "C"  void ConnectionConfig_Validate_m3089562228 (Il2CppObject * __this /* static, unused */, ConnectionConfig_t3291140713 * ___config0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_PacketSize()
extern "C"  uint16_t ConnectionConfig_get_PacketSize_m1802127970 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_FragmentSize()
extern "C"  uint16_t ConnectionConfig_get_FragmentSize_m3318975530 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.ConnectionConfig::get_MinUpdateTimeout()
extern "C"  uint32_t ConnectionConfig_get_MinUpdateTimeout_m702701529 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_MinUpdateTimeout(System.UInt32)
extern "C"  void ConnectionConfig_set_MinUpdateTimeout_m907216114 (ConnectionConfig_t3291140713 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.ConnectionConfig::get_MaxCombinedReliableMessageSize()
extern "C"  uint16_t ConnectionConfig_get_MaxCombinedReliableMessageSize_m3549336942 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.ConnectionConfig::get_UsePlatformSpecificProtocols()
extern "C"  bool ConnectionConfig_get_UsePlatformSpecificProtocols_m3690597847 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.ConnectionConfig::set_UsePlatformSpecificProtocols(System.Boolean)
extern "C"  void ConnectionConfig_set_UsePlatformSpecificProtocols_m371961256 (ConnectionConfig_t3291140713 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.ConnectionConfig::get_ChannelCount()
extern "C"  int32_t ConnectionConfig_get_ChannelCount_m3845377210 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
extern "C"  uint8_t ConnectionConfig_AddChannel_m2926087471 (ConnectionConfig_t3291140713 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::get_Channels()
extern "C"  List_1_t292107700 * ConnectionConfig_get_Channels_m814037302 (ConnectionConfig_t3291140713 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
