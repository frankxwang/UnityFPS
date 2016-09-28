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

// ExitGames.Client.Photon.SocketUdp
struct SocketUdp_t3498508650;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2319621551;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase2319621551.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocke4274698837.h"

// System.Void ExitGames.Client.Photon.SocketUdp::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C"  void SocketUdp__ctor_m2078809225 (SocketUdp_t3498508650 * __this, PeerBase_t2319621551 * ___npeer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::Dispose()
extern "C"  void SocketUdp_Dispose_m3529557075 (SocketUdp_t3498508650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Connect()
extern "C"  bool SocketUdp_Connect_m2791528052 (SocketUdp_t3498508650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdp::Disconnect()
extern "C"  bool SocketUdp_Disconnect_m13136628 (SocketUdp_t3498508650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Send(System.Byte[],System.Int32)
extern "C"  int32_t SocketUdp_Send_m1135178320 (SocketUdp_t3498508650 * __this, ByteU5BU5D_t58506160* ___data0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdp::Receive(System.Byte[]&)
extern "C"  int32_t SocketUdp_Receive_m4162437070 (SocketUdp_t3498508650 * __this, ByteU5BU5D_t58506160** ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::DnsAndConnect()
extern "C"  void SocketUdp_DnsAndConnect_m851835344 (SocketUdp_t3498508650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdp::ReceiveLoop()
extern "C"  void SocketUdp_ReceiveLoop_m2405895899 (SocketUdp_t3498508650 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
