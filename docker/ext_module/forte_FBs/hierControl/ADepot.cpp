/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ADepot
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#include "ADepot.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ADepot_gen.cpp"
#endif

package fb.test;

DEFINE_ADAPTER_TYPE(FORTE_ADepot, g_nStringIdADepot)


const CStringDictionary::TStringId FORTE_ADepot::scm_anDataOutputNames[] = {g_nStringIdStoragePosition};

const CStringDictionary::TStringId FORTE_ADepot::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TForteInt16 FORTE_ADepot::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_ADepot::scm_anEventInputNames[] = {g_nStringIdReady};

const TDataIOID FORTE_ADepot::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_ADepot::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_ADepot::scm_anEventOutputNames[] = {g_nStringIdGetSpinner};


const SFBInterfaceSpec FORTE_ADepot::scm_stFBInterfaceSpecSocket = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  0, nullptr, nullptr,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SFBInterfaceSpec FORTE_ADepot::scm_stFBInterfaceSpecPlug = {
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr, nullptr,
  0, nullptr
};


