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

// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"

// System.Void UnityEngine.Networking.NetworkReader::.ctor(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkReader__ctor_m717295404 (NetworkReader_t3536499450 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::.ctor(System.Byte[])
extern "C"  void NetworkReader__ctor_m3135565119 (NetworkReader_t3536499450 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Initialize()
extern "C"  void NetworkReader_Initialize_m1300175370 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::get_Position()
extern "C"  uint32_t NetworkReader_get_Position_m1564888967 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::SeekZero()
extern "C"  void NetworkReader_SeekZero_m1251930618 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkReader::Replace(System.Byte[])
extern "C"  void NetworkReader_Replace_m919412077 (NetworkReader_t3536499450 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadPackedUInt32()
extern "C"  uint32_t NetworkReader_ReadPackedUInt32_m1171987132 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkReader::ReadNetworkId()
extern "C"  NetworkInstanceId_t3860307911  NetworkReader_ReadNetworkId_m1641462175 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkSceneId UnityEngine.Networking.NetworkReader::ReadSceneId()
extern "C"  NetworkSceneId_t2936457058  NetworkReader_ReadSceneId_m2295918978 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetworkReader::ReadByte()
extern "C"  uint8_t NetworkReader_ReadByte_m3073347588 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkReader::ReadInt16()
extern "C"  int16_t NetworkReader_ReadInt16_m1285805732 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 UnityEngine.Networking.NetworkReader::ReadUInt16()
extern "C"  uint16_t NetworkReader_ReadUInt16_m2242711140 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkReader::ReadInt32()
extern "C"  int32_t NetworkReader_ReadInt32_m2586406424 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkReader::ReadUInt32()
extern "C"  uint32_t NetworkReader_ReadUInt32_m3904954788 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkReader::ReadSingle()
extern "C"  float NetworkReader_ReadSingle_m3516828036 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ReadString()
extern "C"  String_t* NetworkReader_ReadString_m2071466148 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkReader::ReadBoolean()
extern "C"  bool NetworkReader_ReadBoolean_m2155710412 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* NetworkReader_ReadBytes_m278866820 (NetworkReader_t3536499450 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkReader::ReadBytesAndSize()
extern "C"  ByteU5BU5D_t58506160* NetworkReader_ReadBytesAndSize_m4087750503 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Networking.NetworkReader::ReadVector2()
extern "C"  Vector2_t3525329788  NetworkReader_ReadVector2_m1763066630 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkReader::ReadVector3()
extern "C"  Vector3_t3525329789  NetworkReader_ReadVector3_m4132501576 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkReader::ReadNetworkHash128()
extern "C"  NetworkHash128_t1719292676  NetworkReader_ReadNetworkHash128_m2848463104 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetworkReader::ToString()
extern "C"  String_t* NetworkReader_ToString_m534275977 (NetworkReader_t3536499450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
