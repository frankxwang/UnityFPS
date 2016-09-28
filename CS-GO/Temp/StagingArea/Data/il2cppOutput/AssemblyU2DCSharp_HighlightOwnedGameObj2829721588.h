#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HighlightOwnedGameObj
struct  HighlightOwnedGameObj_t2829721588  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject HighlightOwnedGameObj::PointerPrefab
	GameObject_t4012695102 * ___PointerPrefab_3;
	// System.Single HighlightOwnedGameObj::Offset
	float ___Offset_4;
	// UnityEngine.Transform HighlightOwnedGameObj::markerTransform
	Transform_t284553113 * ___markerTransform_5;

public:
	inline static int32_t get_offset_of_PointerPrefab_3() { return static_cast<int32_t>(offsetof(HighlightOwnedGameObj_t2829721588, ___PointerPrefab_3)); }
	inline GameObject_t4012695102 * get_PointerPrefab_3() const { return ___PointerPrefab_3; }
	inline GameObject_t4012695102 ** get_address_of_PointerPrefab_3() { return &___PointerPrefab_3; }
	inline void set_PointerPrefab_3(GameObject_t4012695102 * value)
	{
		___PointerPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___PointerPrefab_3, value);
	}

	inline static int32_t get_offset_of_Offset_4() { return static_cast<int32_t>(offsetof(HighlightOwnedGameObj_t2829721588, ___Offset_4)); }
	inline float get_Offset_4() const { return ___Offset_4; }
	inline float* get_address_of_Offset_4() { return &___Offset_4; }
	inline void set_Offset_4(float value)
	{
		___Offset_4 = value;
	}

	inline static int32_t get_offset_of_markerTransform_5() { return static_cast<int32_t>(offsetof(HighlightOwnedGameObj_t2829721588, ___markerTransform_5)); }
	inline Transform_t284553113 * get_markerTransform_5() const { return ___markerTransform_5; }
	inline Transform_t284553113 ** get_address_of_markerTransform_5() { return &___markerTransform_5; }
	inline void set_markerTransform_5(Transform_t284553113 * value)
	{
		___markerTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___markerTransform_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
