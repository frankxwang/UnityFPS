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

// RoomInfo
struct RoomInfo_t4185970761;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"
#include "mscorlib_System_Object837106420.h"

// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo__ctor_m1206933654 (RoomInfo_t4185970761 * __this, String_t* ___roomName0, Hashtable_t223732124 * ___properties1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
extern "C"  bool RoomInfo_get_removedFromList_m3075505019 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
extern "C"  void RoomInfo_set_removedFromList_m1253086450 (RoomInfo_t4185970761 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_serverSideMasterClient()
extern "C"  bool RoomInfo_get_serverSideMasterClient_m124174230 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_serverSideMasterClient(System.Boolean)
extern "C"  void RoomInfo_set_serverSideMasterClient_m795227981 (RoomInfo_t4185970761 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
extern "C"  Hashtable_t223732124 * RoomInfo_get_customProperties_m4199167276 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_name()
extern "C"  String_t* RoomInfo_get_name_m3557593449 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_playerCount()
extern "C"  int32_t RoomInfo_get_playerCount_m1346795047 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_playerCount(System.Int32)
extern "C"  void RoomInfo_set_playerCount_m2823427282 (RoomInfo_t4185970761 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_isLocalClientInside()
extern "C"  bool RoomInfo_get_isLocalClientInside_m1475051835 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
extern "C"  void RoomInfo_set_isLocalClientInside_m17885874 (RoomInfo_t4185970761 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_maxPlayers()
extern "C"  uint8_t RoomInfo_get_maxPlayers_m2135404469 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_open()
extern "C"  bool RoomInfo_get_open_m3740175225 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_visible()
extern "C"  bool RoomInfo_get_visible_m3889147781 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::Equals(System.Object)
extern "C"  bool RoomInfo_Equals_m2323770799 (RoomInfo_t4185970761 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::GetHashCode()
extern "C"  int32_t RoomInfo_GetHashCode_m1284300243 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToString()
extern "C"  String_t* RoomInfo_ToString_m2003185697 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToStringFull()
extern "C"  String_t* RoomInfo_ToStringFull_m842155792 (RoomInfo_t4185970761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void RoomInfo_InternalCacheProperties_m2129054180 (RoomInfo_t4185970761 * __this, Hashtable_t223732124 * ___propertiesToCache0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
