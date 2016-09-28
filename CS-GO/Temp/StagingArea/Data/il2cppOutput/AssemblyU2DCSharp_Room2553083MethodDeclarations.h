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

// Room
struct Room_t2553083;
// System.String
struct String_t;
// RoomOptions
struct RoomOptions_t979675427;
// System.String[]
struct StringU5BU5D_t2956870243;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_RoomOptions979675427.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"

// System.Void Room::.ctor(System.String,RoomOptions)
extern "C"  void Room__ctor_m1901968107 (Room_t2553083 * __this, String_t* ___roomName0, RoomOptions_t979675427 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_name()
extern "C"  String_t* Room_get_name_m641577115 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_name(System.String)
extern "C"  void Room_set_name_m1793471638 (Room_t2553083 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_open()
extern "C"  bool Room_get_open_m2079152939 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_open(System.Boolean)
extern "C"  void Room_set_open_m2759598114 (Room_t2553083 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_visible()
extern "C"  bool Room_get_visible_m2692442771 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_visible(System.Boolean)
extern "C"  void Room_set_visible_m3780228106 (Room_t2553083 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_propertiesListedInLobby()
extern "C"  StringU5BU5D_t2956870243* Room_get_propertiesListedInLobby_m3329718389 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_propertiesListedInLobby(System.String[])
extern "C"  void Room_set_propertiesListedInLobby_m1979282174 (Room_t2553083 * __this, StringU5BU5D_t2956870243* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_autoCleanUp()
extern "C"  bool Room_get_autoCleanUp_m1408165750 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_maxPlayers()
extern "C"  int32_t Room_get_maxPlayers_m260215657 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_maxPlayers(System.Int32)
extern "C"  void Room_set_maxPlayers_m1153477920 (Room_t2553083 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_playerCount()
extern "C"  int32_t Room_get_playerCount_m2163219765 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_expectedUsers()
extern "C"  StringU5BU5D_t2956870243* Room_get_expectedUsers_m2377179108 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_masterClientId()
extern "C"  int32_t Room_get_masterClientId_m3771412227 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_masterClientId(System.Int32)
extern "C"  void Room_set_masterClientId_m4130295482 (Room_t2553083 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void Room_SetCustomProperties_m3245925071 (Room_t2553083 * __this, Hashtable_t223732124 * ___propertiesToSet0, Hashtable_t223732124 * ___expectedValues1, bool ___webForward2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetPropertiesListedInLobby(System.String[])
extern "C"  void Room_SetPropertiesListedInLobby_m1694516733 (Room_t2553083 * __this, StringU5BU5D_t2956870243* ___propsListedInLobby0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::ClearExpectedUsers()
extern "C"  void Room_ClearExpectedUsers_m2172090407 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToString()
extern "C"  String_t* Room_ToString_m3382136659 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToStringFull()
extern "C"  String_t* Room_ToStringFull_m3145497922 (Room_t2553083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
