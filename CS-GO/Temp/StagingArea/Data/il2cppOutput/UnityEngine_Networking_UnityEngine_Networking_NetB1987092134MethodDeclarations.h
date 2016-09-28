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

// UnityEngine.Networking.NetBuffer
struct NetBuffer_t1987092134;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_ArraySegment_1_gen2801744866.h"

// System.Void UnityEngine.Networking.NetBuffer::.ctor()
extern "C"  void NetBuffer__ctor_m1267756190 (NetBuffer_t1987092134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::.ctor(System.Byte[])
extern "C"  void NetBuffer__ctor_m1377534955 (NetBuffer_t1987092134 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetBuffer::get_Position()
extern "C"  uint32_t NetBuffer_get_Position_m859208883 (NetBuffer_t1987092134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte UnityEngine.Networking.NetBuffer::ReadByte()
extern "C"  uint8_t NetBuffer_ReadByte_m3332617136 (NetBuffer_t1987092134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::ReadBytes(System.Byte[],System.UInt32)
extern "C"  void NetBuffer_ReadBytes_m2074824748 (NetBuffer_t1987092134 * __this, ByteU5BU5D_t58506160* ___buffer0, uint32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArraySegment`1<System.Byte> UnityEngine.Networking.NetBuffer::AsArraySegment()
extern "C"  ArraySegment_1_t2801744866  NetBuffer_AsArraySegment_m376714016 (NetBuffer_t1987092134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte(System.Byte)
extern "C"  void NetBuffer_WriteByte_m2811100040 (NetBuffer_t1987092134 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte2(System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte2_m2330799359 (NetBuffer_t1987092134 * __this, uint8_t ___value00, uint8_t ___value11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteByte4(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C"  void NetBuffer_WriteByte4_m1211271943 (NetBuffer_t1987092134 * __this, uint8_t ___value00, uint8_t ___value11, uint8_t ___value22, uint8_t ___value33, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteBytes(System.Byte[],System.UInt16)
extern "C"  void NetBuffer_WriteBytes_m3585096197 (NetBuffer_t1987092134 * __this, ByteU5BU5D_t58506160* ___buffer0, uint16_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::WriteCheckForSpace(System.UInt16)
extern "C"  void NetBuffer_WriteCheckForSpace_m2265169288 (NetBuffer_t1987092134 * __this, uint16_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::FinishMessage()
extern "C"  void NetBuffer_FinishMessage_m420612528 (NetBuffer_t1987092134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::SeekZero()
extern "C"  void NetBuffer_SeekZero_m3820335014 (NetBuffer_t1987092134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetBuffer::Replace(System.Byte[])
extern "C"  void NetBuffer_Replace_m3669539097 (NetBuffer_t1987092134 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.NetBuffer::ToString()
extern "C"  String_t* NetBuffer_ToString_m1860587189 (NetBuffer_t1987092134 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
