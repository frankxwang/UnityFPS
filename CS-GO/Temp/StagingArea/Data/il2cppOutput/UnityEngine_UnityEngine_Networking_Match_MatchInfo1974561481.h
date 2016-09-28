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
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t568435417;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.MatchInfo
struct  MatchInfo_t1974561481  : public Il2CppObject
{
public:
	// System.String UnityEngine.Networking.Match.MatchInfo::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_0;
	// System.Int32 UnityEngine.Networking.Match.MatchInfo::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_1;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_2;
	// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Match.MatchInfo::<accessToken>k__BackingField
	NetworkAccessToken_t568435417 * ___U3CaccessTokenU3Ek__BackingField_3;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_4;
	// System.Boolean UnityEngine.Networking.Match.MatchInfo::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CaddressU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MatchInfo_t1974561481, ___U3CaddressU3Ek__BackingField_0)); }
	inline String_t* get_U3CaddressU3Ek__BackingField_0() const { return ___U3CaddressU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CaddressU3Ek__BackingField_0() { return &___U3CaddressU3Ek__BackingField_0; }
	inline void set_U3CaddressU3Ek__BackingField_0(String_t* value)
	{
		___U3CaddressU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CaddressU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CportU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MatchInfo_t1974561481, ___U3CportU3Ek__BackingField_1)); }
	inline int32_t get_U3CportU3Ek__BackingField_1() const { return ___U3CportU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CportU3Ek__BackingField_1() { return &___U3CportU3Ek__BackingField_1; }
	inline void set_U3CportU3Ek__BackingField_1(int32_t value)
	{
		___U3CportU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MatchInfo_t1974561481, ___U3CnetworkIdU3Ek__BackingField_2)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_2() const { return ___U3CnetworkIdU3Ek__BackingField_2; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_2() { return &___U3CnetworkIdU3Ek__BackingField_2; }
	inline void set_U3CnetworkIdU3Ek__BackingField_2(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CaccessTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(MatchInfo_t1974561481, ___U3CaccessTokenU3Ek__BackingField_3)); }
	inline NetworkAccessToken_t568435417 * get_U3CaccessTokenU3Ek__BackingField_3() const { return ___U3CaccessTokenU3Ek__BackingField_3; }
	inline NetworkAccessToken_t568435417 ** get_address_of_U3CaccessTokenU3Ek__BackingField_3() { return &___U3CaccessTokenU3Ek__BackingField_3; }
	inline void set_U3CaccessTokenU3Ek__BackingField_3(NetworkAccessToken_t568435417 * value)
	{
		___U3CaccessTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CaccessTokenU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MatchInfo_t1974561481, ___U3CnodeIdU3Ek__BackingField_4)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_4() const { return ___U3CnodeIdU3Ek__BackingField_4; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_4() { return &___U3CnodeIdU3Ek__BackingField_4; }
	inline void set_U3CnodeIdU3Ek__BackingField_4(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CusingRelayU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MatchInfo_t1974561481, ___U3CusingRelayU3Ek__BackingField_5)); }
	inline bool get_U3CusingRelayU3Ek__BackingField_5() const { return ___U3CusingRelayU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CusingRelayU3Ek__BackingField_5() { return &___U3CusingRelayU3Ek__BackingField_5; }
	inline void set_U3CusingRelayU3Ek__BackingField_5(bool value)
	{
		___U3CusingRelayU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
