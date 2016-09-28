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

// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ArraySegment_1_gen2801744866.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw2936457058.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"

// System.Void UnityEngine.Networking.NetworkWriter::.ctor()
extern "C"  void NetworkWriter__ctor_m1431389466 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::.ctor(System.Byte[])
extern "C"  void NetworkWriter__ctor_m2850510063 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 UnityEngine.Networking.NetworkWriter::get_Position()
extern "C"  int16_t NetworkWriter_get_Position_m357721918 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::ToArray()
extern "C"  ByteU5BU5D_t58506160* NetworkWriter_ToArray_m3145779756 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.Networking.NetworkWriter::AsArray()
extern "C"  ByteU5BU5D_t58506160* NetworkWriter_AsArray_m1508982933 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetworkWriter::AsArraySegment()
extern "C"  ArraySegment_1_t2801744866  NetworkWriter_AsArraySegment_m3997347620 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WritePackedUInt32(System.UInt32)
extern "C"  void NetworkWriter_WritePackedUInt32_m2374050578 (NetworkWriter_t3691904682 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkInstanceId)
extern "C"  void NetworkWriter_Write_m1399142972 (NetworkWriter_t3691904682 * __this, NetworkInstanceId_t3860307911  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkSceneId)
extern "C"  void NetworkWriter_Write_m3999084671 (NetworkWriter_t3691904682 * __this, NetworkSceneId_t2936457058  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Byte)
extern "C"  void NetworkWriter_Write_m3090437300 (NetworkWriter_t3691904682 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int16)
extern "C"  void NetworkWriter_Write_m1504471586 (NetworkWriter_t3691904682 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt16)
extern "C"  void NetworkWriter_Write_m391260413 (NetworkWriter_t3691904682 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Int32)
extern "C"  void NetworkWriter_Write_m1504473384 (NetworkWriter_t3691904682 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.UInt32)
extern "C"  void NetworkWriter_Write_m391262211 (NetworkWriter_t3691904682 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Single)
extern "C"  void NetworkWriter_Write_m3827024052 (NetworkWriter_t3691904682 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.String)
extern "C"  void NetworkWriter_Write_m4145700363 (NetworkWriter_t3691904682 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(System.Boolean)
extern "C"  void NetworkWriter_Write_m4173715342 (NetworkWriter_t3691904682 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesAndSize(System.Byte[],System.Int32)
extern "C"  void NetworkWriter_WriteBytesAndSize_m2900186226 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::WriteBytesFull(System.Byte[])
extern "C"  void NetworkWriter_WriteBytesFull_m697201796 (NetworkWriter_t3691904682 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector2)
extern "C"  void NetworkWriter_Write_m710722563 (NetworkWriter_t3691904682 * __this, Vector2_t3525329788  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Vector3)
extern "C"  void NetworkWriter_Write_m710722594 (NetworkWriter_t3691904682 * __this, Vector3_t3525329789  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::Write(UnityEngine.Networking.NetworkHash128)
extern "C"  void NetworkWriter_Write_m626727197 (NetworkWriter_t3691904682 * __this, NetworkHash128_t1719292676  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::SeekZero()
extern "C"  void NetworkWriter_SeekZero_m3831379370 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::StartMessage(System.Int16)
extern "C"  void NetworkWriter_StartMessage_m3998410682 (NetworkWriter_t3691904682 * __this, int16_t ___msgType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkWriter::FinishMessage()
extern "C"  void NetworkWriter_FinishMessage_m4053837356 (NetworkWriter_t3691904682 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
