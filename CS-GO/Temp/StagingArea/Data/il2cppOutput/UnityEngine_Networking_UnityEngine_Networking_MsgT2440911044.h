#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.MsgType
struct  MsgType_t2440911044  : public Il2CppObject
{
public:

public:
};

struct MsgType_t2440911044_StaticFields
{
public:
	// System.String[] UnityEngine.Networking.MsgType::msgLabels
	StringU5BU5D_t2956870243* ___msgLabels_0;

public:
	inline static int32_t get_offset_of_msgLabels_0() { return static_cast<int32_t>(offsetof(MsgType_t2440911044_StaticFields, ___msgLabels_0)); }
	inline StringU5BU5D_t2956870243* get_msgLabels_0() const { return ___msgLabels_0; }
	inline StringU5BU5D_t2956870243** get_address_of_msgLabels_0() { return &___msgLabels_0; }
	inline void set_msgLabels_0(StringU5BU5D_t2956870243* value)
	{
		___msgLabels_0 = value;
		Il2CppCodeGenWriteBarrier(&___msgLabels_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
