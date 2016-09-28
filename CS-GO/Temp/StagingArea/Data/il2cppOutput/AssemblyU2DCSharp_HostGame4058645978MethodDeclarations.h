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

// HostGame
struct HostGame_t4058645978;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t411996224;
// UnityEngine.Networking.Match.ListMatchResponse
struct ListMatchResponse_t3390828510;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t2758706898;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatc411996224.h"
#include "UnityEngine_UnityEngine_Networking_Match_ListMatch3390828510.h"
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatch2758706898.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"

// System.Void HostGame::.ctor()
extern "C"  void HostGame__ctor_m328642049 (HostGame_t4058645978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HostGame::Awake()
extern "C"  void HostGame_Awake_m566247268 (HostGame_t4058645978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HostGame::OnGUI()
extern "C"  void HostGame_OnGUI_m4119007995 (HostGame_t4058645978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HostGame::OnMatchCreate(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void HostGame_OnMatchCreate_m3098902851 (HostGame_t4058645978 * __this, CreateMatchResponse_t411996224 * ___matchResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HostGame::OnMatchList(UnityEngine.Networking.Match.ListMatchResponse)
extern "C"  void HostGame_OnMatchList_m2714919687 (HostGame_t4058645978 * __this, ListMatchResponse_t3390828510 * ___matchListResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HostGame::OnMatchJoined(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void HostGame_OnMatchJoined_m2936854078 (HostGame_t4058645978 * __this, JoinMatchResponse_t2758706898 * ___matchJoin0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HostGame::OnConnected(UnityEngine.Networking.NetworkMessage)
extern "C"  void HostGame_OnConnected_m3176100557 (HostGame_t4058645978 * __this, NetworkMessage_t1976735906 * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
