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
// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t3779531565;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HostGame
struct  HostGame_t4058645978  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDesc> HostGame::matchList
	List_1_t2771363237 * ___matchList_2;
	// System.Boolean HostGame::matchCreated
	bool ___matchCreated_3;
	// UnityEngine.Networking.Match.NetworkMatch HostGame::networkMatch
	NetworkMatch_t3779531565 * ___networkMatch_4;

public:
	inline static int32_t get_offset_of_matchList_2() { return static_cast<int32_t>(offsetof(HostGame_t4058645978, ___matchList_2)); }
	inline List_1_t2771363237 * get_matchList_2() const { return ___matchList_2; }
	inline List_1_t2771363237 ** get_address_of_matchList_2() { return &___matchList_2; }
	inline void set_matchList_2(List_1_t2771363237 * value)
	{
		___matchList_2 = value;
		Il2CppCodeGenWriteBarrier(&___matchList_2, value);
	}

	inline static int32_t get_offset_of_matchCreated_3() { return static_cast<int32_t>(offsetof(HostGame_t4058645978, ___matchCreated_3)); }
	inline bool get_matchCreated_3() const { return ___matchCreated_3; }
	inline bool* get_address_of_matchCreated_3() { return &___matchCreated_3; }
	inline void set_matchCreated_3(bool value)
	{
		___matchCreated_3 = value;
	}

	inline static int32_t get_offset_of_networkMatch_4() { return static_cast<int32_t>(offsetof(HostGame_t4058645978, ___networkMatch_4)); }
	inline NetworkMatch_t3779531565 * get_networkMatch_4() const { return ___networkMatch_4; }
	inline NetworkMatch_t3779531565 ** get_address_of_networkMatch_4() { return &___networkMatch_4; }
	inline void set_networkMatch_4(NetworkMatch_t3779531565 * value)
	{
		___networkMatch_4 = value;
		Il2CppCodeGenWriteBarrier(&___networkMatch_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
