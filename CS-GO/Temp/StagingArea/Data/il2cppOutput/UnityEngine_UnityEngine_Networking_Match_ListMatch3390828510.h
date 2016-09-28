#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc>
struct List_1_t2771363237;

#include "UnityEngine_UnityEngine_Networking_Match_BasicResp2628153669.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.ListMatchResponse
struct  ListMatchResponse_t3390828510  : public BasicResponse_t2628153669
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> UnityEngine.Networking.Match.ListMatchResponse::<matches>k__BackingField
	List_1_t2771363237 * ___U3CmatchesU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CmatchesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ListMatchResponse_t3390828510, ___U3CmatchesU3Ek__BackingField_2)); }
	inline List_1_t2771363237 * get_U3CmatchesU3Ek__BackingField_2() const { return ___U3CmatchesU3Ek__BackingField_2; }
	inline List_1_t2771363237 ** get_address_of_U3CmatchesU3Ek__BackingField_2() { return &___U3CmatchesU3Ek__BackingField_2; }
	inline void set_U3CmatchesU3Ek__BackingField_2(List_1_t2771363237 * value)
	{
		___U3CmatchesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmatchesU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
