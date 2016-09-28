#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonRigidbodyView
struct  PhotonRigidbodyView_t1273153366  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean PhotonRigidbodyView::m_SynchronizeVelocity
	bool ___m_SynchronizeVelocity_2;
	// System.Boolean PhotonRigidbodyView::m_SynchronizeAngularVelocity
	bool ___m_SynchronizeAngularVelocity_3;
	// UnityEngine.Rigidbody PhotonRigidbodyView::m_Body
	Rigidbody_t1972007546 * ___m_Body_4;

public:
	inline static int32_t get_offset_of_m_SynchronizeVelocity_2() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t1273153366, ___m_SynchronizeVelocity_2)); }
	inline bool get_m_SynchronizeVelocity_2() const { return ___m_SynchronizeVelocity_2; }
	inline bool* get_address_of_m_SynchronizeVelocity_2() { return &___m_SynchronizeVelocity_2; }
	inline void set_m_SynchronizeVelocity_2(bool value)
	{
		___m_SynchronizeVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_SynchronizeAngularVelocity_3() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t1273153366, ___m_SynchronizeAngularVelocity_3)); }
	inline bool get_m_SynchronizeAngularVelocity_3() const { return ___m_SynchronizeAngularVelocity_3; }
	inline bool* get_address_of_m_SynchronizeAngularVelocity_3() { return &___m_SynchronizeAngularVelocity_3; }
	inline void set_m_SynchronizeAngularVelocity_3(bool value)
	{
		___m_SynchronizeAngularVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_Body_4() { return static_cast<int32_t>(offsetof(PhotonRigidbodyView_t1273153366, ___m_Body_4)); }
	inline Rigidbody_t1972007546 * get_m_Body_4() const { return ___m_Body_4; }
	inline Rigidbody_t1972007546 ** get_address_of_m_Body_4() { return &___m_Body_4; }
	inline void set_m_Body_4(Rigidbody_t1972007546 * value)
	{
		___m_Body_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Body_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
