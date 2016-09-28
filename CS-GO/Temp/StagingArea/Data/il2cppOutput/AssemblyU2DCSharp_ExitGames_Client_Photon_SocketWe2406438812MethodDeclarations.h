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

// ExitGames.Client.Photon.SocketWebTcp
struct SocketWebTcp_t2406438812;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2319621551;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase2319621551.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke4274698837.h"

// System.Void ExitGames.Client.Photon.SocketWebTcp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketWebTcp__ctor_m114502452 (SocketWebTcp_t2406438812 * __this, PeerBase_t2319621551 * ___npeer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketWebTcp::Dispose()
extern "C"  void SocketWebTcp_Dispose_m845496382 (SocketWebTcp_t2406438812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Connect()
extern "C"  bool SocketWebTcp_Connect_m101789461 (SocketWebTcp_t2406438812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketWebTcp::Disconnect()
extern "C"  bool SocketWebTcp_Disconnect_m1215613619 (SocketWebTcp_t2406438812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketWebTcp_Send_m1891399533 (SocketWebTcp_t2406438812 * __this, ByteU5BU5D_t58506160* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketWebTcp::Receive(System.Byte[]&)
extern "C"  int32_t SocketWebTcp_Receive_m151000593 (SocketWebTcp_t2406438812 * __this, ByteU5BU5D_t58506160** ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ExitGames.Client.Photon.SocketWebTcp::ReceiveLoop()
extern "C"  Il2CppObject * SocketWebTcp_ReceiveLoop_m3472869886 (SocketWebTcp_t2406438812 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
