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
// PhotonHandler
struct PhotonHandler_t1652511502;
// System.Diagnostics.Stopwatch
struct Stopwatch_t2509581612;
// System.Type
struct Type_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonHandler
struct  PhotonHandler_t1652511502  : public MonoBehaviour_t4025988718
{
public:
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval_5;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize_6;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount_7;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize_8;

public:
	inline static int32_t get_offset_of_updateInterval_5() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502, ___updateInterval_5)); }
	inline int32_t get_updateInterval_5() const { return ___updateInterval_5; }
	inline int32_t* get_address_of_updateInterval_5() { return &___updateInterval_5; }
	inline void set_updateInterval_5(int32_t value)
	{
		___updateInterval_5 = value;
	}

	inline static int32_t get_offset_of_updateIntervalOnSerialize_6() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502, ___updateIntervalOnSerialize_6)); }
	inline int32_t get_updateIntervalOnSerialize_6() const { return ___updateIntervalOnSerialize_6; }
	inline int32_t* get_address_of_updateIntervalOnSerialize_6() { return &___updateIntervalOnSerialize_6; }
	inline void set_updateIntervalOnSerialize_6(int32_t value)
	{
		___updateIntervalOnSerialize_6 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCount_7() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502, ___nextSendTickCount_7)); }
	inline int32_t get_nextSendTickCount_7() const { return ___nextSendTickCount_7; }
	inline int32_t* get_address_of_nextSendTickCount_7() { return &___nextSendTickCount_7; }
	inline void set_nextSendTickCount_7(int32_t value)
	{
		___nextSendTickCount_7 = value;
	}

	inline static int32_t get_offset_of_nextSendTickCountOnSerialize_8() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502, ___nextSendTickCountOnSerialize_8)); }
	inline int32_t get_nextSendTickCountOnSerialize_8() const { return ___nextSendTickCountOnSerialize_8; }
	inline int32_t* get_address_of_nextSendTickCountOnSerialize_8() { return &___nextSendTickCountOnSerialize_8; }
	inline void set_nextSendTickCountOnSerialize_8(int32_t value)
	{
		___nextSendTickCountOnSerialize_8 = value;
	}
};

struct PhotonHandler_t1652511502_StaticFields
{
public:
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t1652511502 * ___SP_4;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun_9;
	// System.Diagnostics.Stopwatch PhotonHandler::timerToStopConnectionInBackground
	Stopwatch_t2509581612 * ___timerToStopConnectionInBackground_10;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits_11;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation_12;
	// CloudRegionCode PhotonHandler::BestRegionCodeCurrently
	int32_t ___BestRegionCodeCurrently_13;

public:
	inline static int32_t get_offset_of_SP_4() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502_StaticFields, ___SP_4)); }
	inline PhotonHandler_t1652511502 * get_SP_4() const { return ___SP_4; }
	inline PhotonHandler_t1652511502 ** get_address_of_SP_4() { return &___SP_4; }
	inline void set_SP_4(PhotonHandler_t1652511502 * value)
	{
		___SP_4 = value;
		Il2CppCodeGenWriteBarrier(&___SP_4, value);
	}

	inline static int32_t get_offset_of_sendThreadShouldRun_9() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502_StaticFields, ___sendThreadShouldRun_9)); }
	inline bool get_sendThreadShouldRun_9() const { return ___sendThreadShouldRun_9; }
	inline bool* get_address_of_sendThreadShouldRun_9() { return &___sendThreadShouldRun_9; }
	inline void set_sendThreadShouldRun_9(bool value)
	{
		___sendThreadShouldRun_9 = value;
	}

	inline static int32_t get_offset_of_timerToStopConnectionInBackground_10() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502_StaticFields, ___timerToStopConnectionInBackground_10)); }
	inline Stopwatch_t2509581612 * get_timerToStopConnectionInBackground_10() const { return ___timerToStopConnectionInBackground_10; }
	inline Stopwatch_t2509581612 ** get_address_of_timerToStopConnectionInBackground_10() { return &___timerToStopConnectionInBackground_10; }
	inline void set_timerToStopConnectionInBackground_10(Stopwatch_t2509581612 * value)
	{
		___timerToStopConnectionInBackground_10 = value;
		Il2CppCodeGenWriteBarrier(&___timerToStopConnectionInBackground_10, value);
	}

	inline static int32_t get_offset_of_AppQuits_11() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502_StaticFields, ___AppQuits_11)); }
	inline bool get_AppQuits_11() const { return ___AppQuits_11; }
	inline bool* get_address_of_AppQuits_11() { return &___AppQuits_11; }
	inline void set_AppQuits_11(bool value)
	{
		___AppQuits_11 = value;
	}

	inline static int32_t get_offset_of_PingImplementation_12() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502_StaticFields, ___PingImplementation_12)); }
	inline Type_t * get_PingImplementation_12() const { return ___PingImplementation_12; }
	inline Type_t ** get_address_of_PingImplementation_12() { return &___PingImplementation_12; }
	inline void set_PingImplementation_12(Type_t * value)
	{
		___PingImplementation_12 = value;
		Il2CppCodeGenWriteBarrier(&___PingImplementation_12, value);
	}

	inline static int32_t get_offset_of_BestRegionCodeCurrently_13() { return static_cast<int32_t>(offsetof(PhotonHandler_t1652511502_StaticFields, ___BestRegionCodeCurrently_13)); }
	inline int32_t get_BestRegionCodeCurrently_13() const { return ___BestRegionCodeCurrently_13; }
	inline int32_t* get_address_of_BestRegionCodeCurrently_13() { return &___BestRegionCodeCurrently_13; }
	inline void set_BestRegionCodeCurrently_13(int32_t value)
	{
		___BestRegionCodeCurrently_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
