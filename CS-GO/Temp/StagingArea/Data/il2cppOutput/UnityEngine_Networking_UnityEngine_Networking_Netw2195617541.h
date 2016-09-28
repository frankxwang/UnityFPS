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
// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t3092760455;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransformVisualizer
struct  NetworkTransformVisualizer_t2195617541  : public NetworkBehaviour_t1633744088
{
public:
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_VisualizerPrefab
	GameObject_t4012695102 * ___m_VisualizerPrefab_8;
	// UnityEngine.Networking.NetworkTransform UnityEngine.Networking.NetworkTransformVisualizer::m_NetworkTransform
	NetworkTransform_t3092760455 * ___m_NetworkTransform_9;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkTransformVisualizer::m_Visualizer
	GameObject_t4012695102 * ___m_Visualizer_10;

public:
	inline static int32_t get_offset_of_m_VisualizerPrefab_8() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2195617541, ___m_VisualizerPrefab_8)); }
	inline GameObject_t4012695102 * get_m_VisualizerPrefab_8() const { return ___m_VisualizerPrefab_8; }
	inline GameObject_t4012695102 ** get_address_of_m_VisualizerPrefab_8() { return &___m_VisualizerPrefab_8; }
	inline void set_m_VisualizerPrefab_8(GameObject_t4012695102 * value)
	{
		___m_VisualizerPrefab_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_VisualizerPrefab_8, value);
	}

	inline static int32_t get_offset_of_m_NetworkTransform_9() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2195617541, ___m_NetworkTransform_9)); }
	inline NetworkTransform_t3092760455 * get_m_NetworkTransform_9() const { return ___m_NetworkTransform_9; }
	inline NetworkTransform_t3092760455 ** get_address_of_m_NetworkTransform_9() { return &___m_NetworkTransform_9; }
	inline void set_m_NetworkTransform_9(NetworkTransform_t3092760455 * value)
	{
		___m_NetworkTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_NetworkTransform_9, value);
	}

	inline static int32_t get_offset_of_m_Visualizer_10() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2195617541, ___m_Visualizer_10)); }
	inline GameObject_t4012695102 * get_m_Visualizer_10() const { return ___m_Visualizer_10; }
	inline GameObject_t4012695102 ** get_address_of_m_Visualizer_10() { return &___m_Visualizer_10; }
	inline void set_m_Visualizer_10(GameObject_t4012695102 * value)
	{
		___m_Visualizer_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Visualizer_10, value);
	}
};

struct NetworkTransformVisualizer_t2195617541_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.Networking.NetworkTransformVisualizer::s_LineMaterial
	Material_t1886596500 * ___s_LineMaterial_11;

public:
	inline static int32_t get_offset_of_s_LineMaterial_11() { return static_cast<int32_t>(offsetof(NetworkTransformVisualizer_t2195617541_StaticFields, ___s_LineMaterial_11)); }
	inline Material_t1886596500 * get_s_LineMaterial_11() const { return ___s_LineMaterial_11; }
	inline Material_t1886596500 ** get_address_of_s_LineMaterial_11() { return &___s_LineMaterial_11; }
	inline void set_s_LineMaterial_11(Material_t1886596500 * value)
	{
		___s_LineMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___s_LineMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
