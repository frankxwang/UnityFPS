#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetBuffer
struct NetBuffer_t1987092134;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_Networking_UnityEngine_Networking_UInt1023948203.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkWriter
struct  NetworkWriter_t3691904682  : public Il2CppObject
{
public:
	// UnityEngine.Networking.NetBuffer UnityEngine.Networking.NetworkWriter::m_Buffer
	NetBuffer_t1987092134 * ___m_Buffer_1;

public:
	inline static int32_t get_offset_of_m_Buffer_1() { return static_cast<int32_t>(offsetof(NetworkWriter_t3691904682, ___m_Buffer_1)); }
	inline NetBuffer_t1987092134 * get_m_Buffer_1() const { return ___m_Buffer_1; }
	inline NetBuffer_t1987092134 ** get_address_of_m_Buffer_1() { return &___m_Buffer_1; }
	inline void set_m_Buffer_1(NetBuffer_t1987092134 * value)
	{
		___m_Buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Buffer_1, value);
	}
};

struct NetworkWriter_t3691904682_StaticFields
{
public:
	// System.Text.Encoding UnityEngine.Networking.NetworkWriter::s_Encoding
	Encoding_t180559927 * ___s_Encoding_2;
	// System.Byte[] UnityEngine.Networking.NetworkWriter::s_StringWriteBuffer
	ByteU5BU5D_t58506160* ___s_StringWriteBuffer_3;
	// UnityEngine.Networking.UIntFloat UnityEngine.Networking.NetworkWriter::s_FloatConverter
	UIntFloat_t1023948203  ___s_FloatConverter_4;

public:
	inline static int32_t get_offset_of_s_Encoding_2() { return static_cast<int32_t>(offsetof(NetworkWriter_t3691904682_StaticFields, ___s_Encoding_2)); }
	inline Encoding_t180559927 * get_s_Encoding_2() const { return ___s_Encoding_2; }
	inline Encoding_t180559927 ** get_address_of_s_Encoding_2() { return &___s_Encoding_2; }
	inline void set_s_Encoding_2(Encoding_t180559927 * value)
	{
		___s_Encoding_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_Encoding_2, value);
	}

	inline static int32_t get_offset_of_s_StringWriteBuffer_3() { return static_cast<int32_t>(offsetof(NetworkWriter_t3691904682_StaticFields, ___s_StringWriteBuffer_3)); }
	inline ByteU5BU5D_t58506160* get_s_StringWriteBuffer_3() const { return ___s_StringWriteBuffer_3; }
	inline ByteU5BU5D_t58506160** get_address_of_s_StringWriteBuffer_3() { return &___s_StringWriteBuffer_3; }
	inline void set_s_StringWriteBuffer_3(ByteU5BU5D_t58506160* value)
	{
		___s_StringWriteBuffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_StringWriteBuffer_3, value);
	}

	inline static int32_t get_offset_of_s_FloatConverter_4() { return static_cast<int32_t>(offsetof(NetworkWriter_t3691904682_StaticFields, ___s_FloatConverter_4)); }
	inline UIntFloat_t1023948203  get_s_FloatConverter_4() const { return ___s_FloatConverter_4; }
	inline UIntFloat_t1023948203 * get_address_of_s_FloatConverter_4() { return &___s_FloatConverter_4; }
	inline void set_s_FloatConverter_4(UIntFloat_t1023948203  value)
	{
		___s_FloatConverter_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
