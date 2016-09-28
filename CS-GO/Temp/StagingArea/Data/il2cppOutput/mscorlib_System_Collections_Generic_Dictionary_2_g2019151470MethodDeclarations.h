#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>
struct Dictionary_2_t2019151470;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Networking.NetworkHash128>
struct IEqualityComparer_1_t4043559327;
// System.Collections.Generic.IDictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>
struct IDictionary_2_t3194817257;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<UnityEngine.Networking.NetworkHash128>
struct ICollection_1_t2185124062;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkHash128,System.Object>[]
struct KeyValuePair_2U5BU5D_t310322417;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.NetworkHash128,System.Object>>
struct IEnumerator_1_t2990789216;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Networking.NetworkHash128,System.Object>
struct KeyCollection_t47459454;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Networking.NetworkHash128,System.Object>
struct ValueCollection_t3941288564;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21507682768.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1786179411.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m4209883583_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m4209883583(__this, method) ((  void (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2__ctor_m4209883583_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3971006134_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3971006134(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3971006134_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m2857831737_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m2857831737(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2857831737_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3111110800_gshared (Dictionary_2_t2019151470 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3111110800(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2019151470 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3111110800_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2508342372_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m2508342372(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2508342372_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3022519936_gshared (Dictionary_2_t2019151470 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3022519936(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2019151470 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m3022519936_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1267808687_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1267808687(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m1267808687_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m826783535_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m826783535(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m826783535_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2891341253_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2891341253(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2891341253_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m2102658419_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m2102658419(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m2102658419_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2071086978_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2071086978(__this, method) ((  bool (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m2071086978_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m936460087_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m936460087(__this, method) ((  bool (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m936460087_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1014124521_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1014124521(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1014124521_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2252474318_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2252474318(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2252474318_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m244714947_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m244714947(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m244714947_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1714355667_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1714355667(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2019151470 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1714355667_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3077168652_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3077168652(__this, ___key0, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3077168652_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2058926689_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2058926689(__this, method) ((  bool (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m2058926689_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m832175501_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m832175501(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m832175501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1463994213_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1463994213(__this, method) ((  bool (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1463994213_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1526076578_gshared (Dictionary_2_t2019151470 * __this, KeyValuePair_2_t1507682768  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1526076578(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2019151470 *, KeyValuePair_2_t1507682768 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1526076578_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2531101152_gshared (Dictionary_2_t2019151470 * __this, KeyValuePair_2_t1507682768  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2531101152(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2019151470 *, KeyValuePair_2_t1507682768 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2531101152_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m201842694_gshared (Dictionary_2_t2019151470 * __this, KeyValuePair_2U5BU5D_t310322417* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m201842694(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2019151470 *, KeyValuePair_2U5BU5D_t310322417*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m201842694_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1308928261_gshared (Dictionary_2_t2019151470 * __this, KeyValuePair_2_t1507682768  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1308928261(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2019151470 *, KeyValuePair_2_t1507682768 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1308928261_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m4086940773_gshared (Dictionary_2_t2019151470 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m4086940773(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m4086940773_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3137458080_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3137458080(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m3137458080_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4245203869_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4245203869(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m4245203869_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3086546232_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3086546232(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3086546232_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3984989607_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3984989607(__this, method) ((  int32_t (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_get_Count_m3984989607_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m1893321572_gshared (Dictionary_2_t2019151470 * __this, NetworkHash128_t1719292676  ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m1893321572(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, NetworkHash128_t1719292676 , const MethodInfo*))Dictionary_2_get_Item_m1893321572_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m1386116415_gshared (Dictionary_2_t2019151470 * __this, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m1386116415(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2019151470 *, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m1386116415_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3602192695_gshared (Dictionary_2_t2019151470 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3602192695(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2019151470 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3602192695_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m946681696_gshared (Dictionary_2_t2019151470 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m946681696(__this, ___size0, method) ((  void (*) (Dictionary_2_t2019151470 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m946681696_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m390835036_gshared (Dictionary_2_t2019151470 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m390835036(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m390835036_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1507682768  Dictionary_2_make_pair_m68853416_gshared (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m68853416(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1507682768  (*) (Il2CppObject * /* static, unused */, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m68853416_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::pick_key(TKey,TValue)
extern "C"  NetworkHash128_t1719292676  Dictionary_2_pick_key_m2173750350_gshared (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2173750350(__this /* static, unused */, ___key0, ___value1, method) ((  NetworkHash128_t1719292676  (*) (Il2CppObject * /* static, unused */, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m2173750350_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m880848270_gshared (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m880848270(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m880848270_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3805698291_gshared (Dictionary_2_t2019151470 * __this, KeyValuePair_2U5BU5D_t310322417* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3805698291(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2019151470 *, KeyValuePair_2U5BU5D_t310322417*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3805698291_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m1715168857_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1715168857(__this, method) ((  void (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_Resize_m1715168857_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3242525142_gshared (Dictionary_2_t2019151470 * __this, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3242525142(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2019151470 *, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m3242525142_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1616016874_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1616016874(__this, method) ((  void (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_Clear_m1616016874_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1278473296_gshared (Dictionary_2_t2019151470 * __this, NetworkHash128_t1719292676  ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1278473296(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2019151470 *, NetworkHash128_t1719292676 , const MethodInfo*))Dictionary_2_ContainsKey_m1278473296_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m1641848912_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1641848912(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2019151470 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m1641848912_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m633521629_gshared (Dictionary_2_t2019151470 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m633521629(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2019151470 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m633521629_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1139625127_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1139625127(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2019151470 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1139625127_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1861800608_gshared (Dictionary_2_t2019151470 * __this, NetworkHash128_t1719292676  ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m1861800608(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2019151470 *, NetworkHash128_t1719292676 , const MethodInfo*))Dictionary_2_Remove_m1861800608_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m133102761_gshared (Dictionary_2_t2019151470 * __this, NetworkHash128_t1719292676  ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m133102761(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2019151470 *, NetworkHash128_t1719292676 , Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m133102761_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Keys()
extern "C"  KeyCollection_t47459454 * Dictionary_2_get_Keys_m1744555766_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1744555766(__this, method) ((  KeyCollection_t47459454 * (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_get_Keys_m1744555766_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::get_Values()
extern "C"  ValueCollection_t3941288564 * Dictionary_2_get_Values_m1267670006_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1267670006(__this, method) ((  ValueCollection_t3941288564 * (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_get_Values_m1267670006_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ToTKey(System.Object)
extern "C"  NetworkHash128_t1719292676  Dictionary_2_ToTKey_m1623609257_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1623609257(__this, ___key0, method) ((  NetworkHash128_t1719292676  (*) (Dictionary_2_t2019151470 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m1623609257_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m3488129705_gshared (Dictionary_2_t2019151470 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3488129705(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t2019151470 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3488129705_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2570387587_gshared (Dictionary_2_t2019151470 * __this, KeyValuePair_2_t1507682768  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2570387587(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2019151470 *, KeyValuePair_2_t1507682768 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2570387587_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1786179412  Dictionary_2_GetEnumerator_m4101032900_gshared (Dictionary_2_t2019151470 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m4101032900(__this, method) ((  Enumerator_t1786179412  (*) (Dictionary_2_t2019151470 *, const MethodInfo*))Dictionary_2_GetEnumerator_m4101032900_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m1751776019_gshared (Il2CppObject * __this /* static, unused */, NetworkHash128_t1719292676  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1751776019(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, NetworkHash128_t1719292676 , Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1751776019_gshared)(__this /* static, unused */, ___key0, ___value1, method)
