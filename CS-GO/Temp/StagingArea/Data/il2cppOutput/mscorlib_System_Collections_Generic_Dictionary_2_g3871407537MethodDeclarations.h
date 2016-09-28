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

// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t3871407537;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t807993176;
// System.Collections.Generic.IDictionary`2<System.Byte,System.Object>
struct IDictionary_2_t752106028;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.Generic.ICollection`1<System.Byte>
struct ICollection_1_t3244525207;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1302937806;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>[]
struct KeyValuePair_2U5BU5D_t1276836162;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>>
struct IEnumerator_1_t548077987;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Object>
struct KeyCollection_t1899715521;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Byte,System.Object>
struct ValueCollection_t1498577335;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23359938835.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3638435478.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m3983279474_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3983279474(__this, method) ((  void (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2__ctor_m3983279474_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1303775679_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1303775679(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1303775679_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m1778066256_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m1778066256(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1778066256_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m124985283_gshared (Dictionary_2_t3871407537 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m124985283(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t3871407537 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m124985283_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m163073709_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m163073709(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m163073709_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3395800201_gshared (Dictionary_2_t3871407537 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3395800201(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3871407537 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m3395800201_gshared)(__this, ___info0, ___context1, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23940550_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23940550(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m23940550_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m513795078_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m513795078(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m513795078_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m2130896398_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m2130896398(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m2130896398_gshared)(__this, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Values()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Values_m1459593084_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Values_m1459593084(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Values_m1459593084_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_IsFixedSize()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m3850757785_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m3850757785(__this, method) ((  bool (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsFixedSize_m3850757785_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2379342144_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2379342144(__this, method) ((  bool (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2379342144_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m3445263232_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m3445263232(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m3445263232_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2509641445_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2509641445(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2509641445_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2256317516_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2256317516(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2256317516_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1971236778_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1971236778(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3871407537 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1971236778_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2136275747_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2136275747(__this, ___key0, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2136275747_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3155636202_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3155636202(__this, method) ((  bool (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3155636202_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m198118422_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m198118422(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m198118422_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2399113134_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2399113134(__this, method) ((  bool (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m2399113134_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m955415097_gshared (Dictionary_2_t3871407537 * __this, KeyValuePair_2_t3359938835  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m955415097(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t3871407537 *, KeyValuePair_2_t3359938835 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m955415097_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1160199209_gshared (Dictionary_2_t3871407537 * __this, KeyValuePair_2_t3359938835  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1160199209(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3871407537 *, KeyValuePair_2_t3359938835 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1160199209_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1796517341_gshared (Dictionary_2_t3871407537 * __this, KeyValuePair_2U5BU5D_t1276836162* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1796517341(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3871407537 *, KeyValuePair_2U5BU5D_t1276836162*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1796517341_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1249401230_gshared (Dictionary_2_t3871407537 * __this, KeyValuePair_2_t3359938835  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1249401230(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t3871407537 *, KeyValuePair_2_t3359938835 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1249401230_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2022110972_gshared (Dictionary_2_t3871407537 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2022110972(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2022110972_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2465438071_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2465438071(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2465438071_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2202824948_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2202824948(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2202824948_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3701614479_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3701614479(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3701614479_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1693086640_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1693086640(__this, method) ((  int32_t (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_get_Count_m1693086640_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m2557185851_gshared (Dictionary_2_t3871407537 * __this, uint8_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m2557185851(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, uint8_t, const MethodInfo*))Dictionary_2_get_Item_m2557185851_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2207801096_gshared (Dictionary_2_t3871407537 * __this, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2207801096(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3871407537 *, uint8_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m2207801096_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2646417088_gshared (Dictionary_2_t3871407537 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m2646417088(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t3871407537 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2646417088_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2736393463_gshared (Dictionary_2_t3871407537 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2736393463(__this, ___size0, method) ((  void (*) (Dictionary_2_t3871407537 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2736393463_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m4106972339_gshared (Dictionary_2_t3871407537 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m4106972339(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m4106972339_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3359938835  Dictionary_2_make_pair_m2393422079_gshared (Il2CppObject * __this /* static, unused */, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2393422079(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t3359938835  (*) (Il2CppObject * /* static, unused */, uint8_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2393422079_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_key(TKey,TValue)
extern "C"  uint8_t Dictionary_2_pick_key_m975496727_gshared (Il2CppObject * __this /* static, unused */, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m975496727(__this /* static, unused */, ___key0, ___value1, method) ((  uint8_t (*) (Il2CppObject * /* static, unused */, uint8_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m975496727_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m451431319_gshared (Il2CppObject * __this /* static, unused */, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m451431319(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, uint8_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m451431319_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m305943484_gshared (Dictionary_2_t3871407537 * __this, KeyValuePair_2U5BU5D_t1276836162* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m305943484(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t3871407537 *, KeyValuePair_2U5BU5D_t1276836162*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m305943484_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m3705424368_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3705424368(__this, method) ((  void (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_Resize_m3705424368_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3132120685_gshared (Dictionary_2_t3871407537 * __this, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3132120685(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t3871407537 *, uint8_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m3132120685_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m4174070643_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m4174070643(__this, method) ((  void (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_Clear_m4174070643_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m1049467929_gshared (Dictionary_2_t3871407537 * __this, uint8_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1049467929(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3871407537 *, uint8_t, const MethodInfo*))Dictionary_2_ContainsKey_m1049467929_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3155901337_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3155901337(__this, ___value0, method) ((  bool (*) (Dictionary_2_t3871407537 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m3155901337_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3569122022_gshared (Dictionary_2_t3871407537 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3569122022(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t3871407537 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m3569122022_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2807208766_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2807208766(__this, ___sender0, method) ((  void (*) (Dictionary_2_t3871407537 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2807208766_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2644881719_gshared (Dictionary_2_t3871407537 * __this, uint8_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2644881719(__this, ___key0, method) ((  bool (*) (Dictionary_2_t3871407537 *, uint8_t, const MethodInfo*))Dictionary_2_Remove_m2644881719_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2674707314_gshared (Dictionary_2_t3871407537 * __this, uint8_t ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2674707314(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t3871407537 *, uint8_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m2674707314_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Keys()
extern "C"  KeyCollection_t1899715521 * Dictionary_2_get_Keys_m444377549_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m444377549(__this, method) ((  KeyCollection_t1899715521 * (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_get_Keys_m444377549_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Values()
extern "C"  ValueCollection_t1498577335 * Dictionary_2_get_Values_m2115071885_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2115071885(__this, method) ((  ValueCollection_t1498577335 * (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_get_Values_m2115071885_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTKey(System.Object)
extern "C"  uint8_t Dictionary_2_ToTKey_m425355634_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m425355634(__this, ___key0, method) ((  uint8_t (*) (Dictionary_2_t3871407537 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m425355634_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m3058712754_gshared (Dictionary_2_t3871407537 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3058712754(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t3871407537 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3058712754_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1306634010_gshared (Dictionary_2_t3871407537 * __this, KeyValuePair_2_t3359938835  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1306634010(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t3871407537 *, KeyValuePair_2_t3359938835 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1306634010_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3638435478  Dictionary_2_GetEnumerator_m1804505000_gshared (Dictionary_2_t3871407537 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1804505000(__this, method) ((  Enumerator_t3638435478  (*) (Dictionary_2_t3871407537 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1804505000_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m282674588_gshared (Il2CppObject * __this /* static, unused */, uint8_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m282674588(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, uint8_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m282674588_gshared)(__this /* static, unused */, ___key0, ___value1, method)
