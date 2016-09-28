#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Uri
struct Uri_t2776692961;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.NetworkMatch
struct  NetworkMatch_t3779531565  : public MonoBehaviour_t3012272455
{
public:
	// System.Uri UnityEngine.Networking.Match.NetworkMatch::m_BaseUri
	Uri_t2776692961 * ___m_BaseUri_3;

public:
	inline static int32_t get_offset_of_m_BaseUri_3() { return static_cast<int32_t>(offsetof(NetworkMatch_t3779531565, ___m_BaseUri_3)); }
	inline Uri_t2776692961 * get_m_BaseUri_3() const { return ___m_BaseUri_3; }
	inline Uri_t2776692961 ** get_address_of_m_BaseUri_3() { return &___m_BaseUri_3; }
	inline void set_m_BaseUri_3(Uri_t2776692961 * value)
	{
		___m_BaseUri_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_BaseUri_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
