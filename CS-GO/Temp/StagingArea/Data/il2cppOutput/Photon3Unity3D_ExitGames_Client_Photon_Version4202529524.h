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

// ExitGames.Client.Photon.Version
struct  Version_t4202529524  : public Il2CppObject
{
public:

public:
};

struct Version_t4202529524_StaticFields
{
public:
	// System.Byte[] ExitGames.Client.Photon.Version::clientVersion
	ByteU5BU5D_t58506160* ___clientVersion_0;

public:
	inline static int32_t get_offset_of_clientVersion_0() { return static_cast<int32_t>(offsetof(Version_t4202529524_StaticFields, ___clientVersion_0)); }
	inline ByteU5BU5D_t58506160* get_clientVersion_0() const { return ___clientVersion_0; }
	inline ByteU5BU5D_t58506160** get_address_of_clientVersion_0() { return &___clientVersion_0; }
	inline void set_clientVersion_0(ByteU5BU5D_t58506160* value)
	{
		___clientVersion_0 = value;
		Il2CppCodeGenWriteBarrier(&___clientVersion_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
