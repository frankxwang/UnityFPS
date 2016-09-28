#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetBuffer
struct  NetBuffer_t1987092134  : public Il2CppObject
{
public:
	// System.Byte[] UnityEngine.Networking.NetBuffer::m_Buffer
	ByteU5BU5D_t58506160* ___m_Buffer_3;
	// System.UInt32 UnityEngine.Networking.NetBuffer::m_Pos
	uint32_t ___m_Pos_4;

public:
	inline static int32_t get_offset_of_m_Buffer_3() { return static_cast<int32_t>(offsetof(NetBuffer_t1987092134, ___m_Buffer_3)); }
	inline ByteU5BU5D_t58506160* get_m_Buffer_3() const { return ___m_Buffer_3; }
	inline ByteU5BU5D_t58506160** get_address_of_m_Buffer_3() { return &___m_Buffer_3; }
	inline void set_m_Buffer_3(ByteU5BU5D_t58506160* value)
	{
		___m_Buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Buffer_3, value);
	}

	inline static int32_t get_offset_of_m_Pos_4() { return static_cast<int32_t>(offsetof(NetBuffer_t1987092134, ___m_Pos_4)); }
	inline uint32_t get_m_Pos_4() const { return ___m_Pos_4; }
	inline uint32_t* get_address_of_m_Pos_4() { return &___m_Pos_4; }
	inline void set_m_Pos_4(uint32_t value)
	{
		___m_Pos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
