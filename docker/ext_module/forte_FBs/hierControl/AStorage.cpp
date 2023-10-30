/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AStorage
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#include "AStorage.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AStorage_gen.cpp"
#endif

package fb.test;

DEFINE_ADAPTER_TYPE(FORTE_AStorage, g_nStringIdAStorage)



const TForteInt16 FORTE_AStorage::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_AStorage::scm_anEventInputNames[] = {g_nStringIdIsIn, g_nStringIdIsOut};

const TForteInt16 FORTE_AStorage::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_AStorage::scm_anEventOutputNames[] = {g_nStringIdGoIn, g_nStringIdGoOut};


const SFBInterfaceSpec FORTE_AStorage::scm_stFBInterfaceSpecSocket = {
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr
};

const SFBInterfaceSpec FORTE_AStorage::scm_stFBInterfaceSpecPlug = {
  2, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  2, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr
};


