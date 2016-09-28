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

#include "UnityEngine_UnityEngine_Networking_Match_BasicResp2628153669.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.JoinMatchResponse
struct  JoinMatchResponse_t2758706898  : public BasicResponse_t2628153669
{
public:
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::<address>k__BackingField
	String_t* ___U3CaddressU3Ek__BackingField_2;
	// System.Int32 UnityEngine.Networking.Match.JoinMatchResponse::<port>k__BackingField
	int32_t ___U3CportU3Ek__BackingField_3;
	// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.JoinMatchResponse::<networkId>k__BackingField
	uint64_t ___U3CnetworkIdU3Ek__BackingField_4;
	// System.String UnityEngine.Networking.Match.JoinMatchResponse::<accessTokenString>k__BackingField
	String_t* ___U3CaccessTokenStringU3Ek__BackingField_5;
	// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.JoinMatchResponse::<nodeId>k__BackingField
	uint16_t ___U3CnodeIdU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.Match.JoinMatchResponse::<usingRelay>k__BackingField
	bool ___U3CusingRelayU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CaddressU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t2758706898, ___U3CaddressU3Ek__BackingField_2)); }
	inline String_t* get_U3CaddressU3Ek__BackingField_2() const { return ___U3CaddressU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CaddressU3Ek__BackingField_2() { return &___U3CaddressU3Ek__BackingField_2; }
	inline void set_U3CaddressU3Ek__BackingField_2(String_t* value)
	{
		___U3CaddressU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CaddressU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CportU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t2758706898, ___U3CportU3Ek__BackingField_3)); }
	inline int32_t get_U3CportU3Ek__BackingField_3() const { return ___U3CportU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CportU3Ek__BackingField_3() { return &___U3CportU3Ek__BackingField_3; }
	inline void set_U3CportU3Ek__BackingField_3(int32_t value)
	{
		___U3CportU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CnetworkIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t2758706898, ___U3CnetworkIdU3Ek__BackingField_4)); }
	inline uint64_t get_U3CnetworkIdU3Ek__BackingField_4() const { return ___U3CnetworkIdU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CnetworkIdU3Ek__BackingField_4() { return &___U3CnetworkIdU3Ek__BackingField_4; }
	inline void set_U3CnetworkIdU3Ek__BackingField_4(uint64_t value)
	{
		___U3CnetworkIdU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CaccessTokenStringU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t2758706898, ___U3CaccessTokenStringU3Ek__BackingField_5)); }
	inline String_t* get_U3CaccessTokenStringU3Ek__BackingField_5() const { return ___U3CaccessTokenStringU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CaccessTokenStringU3Ek__BackingField_5() { return &___U3CaccessTokenStringU3Ek__BackingField_5; }
	inline void set_U3CaccessTokenStringU3Ek__BackingField_5(String_t* value)
	{
		___U3CaccessTokenStringU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CaccessTokenStringU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CnodeIdU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t2758706898, ___U3CnodeIdU3Ek__BackingField_6)); }
	inline uint16_t get_U3CnodeIdU3Ek__BackingField_6() const { return ___U3CnodeIdU3Ek__BackingField_6; }
	inline uint16_t* get_address_of_U3CnodeIdU3Ek__BackingField_6() { return &___U3CnodeIdU3Ek__BackingField_6; }
	inline void set_U3CnodeIdU3Ek__BackingField_6(uint16_t value)
	{
		___U3CnodeIdU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CusingRelayU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JoinMatchResponse_t2758706898, ___U3CusingRelayU3Ek__BackingField_7)); }
	inline bool get_U3CusingRelayU3Ek__BackingField_7() const { return ___U3CusingRelayU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CusingRelayU3Ek__BackingField_7() { return &___U3CusingRelayU3Ek__BackingField_7; }
	inline void set_U3CusingRelayU3Ek__BackingField_7(bool value)
	{
		___U3CusingRelayU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
