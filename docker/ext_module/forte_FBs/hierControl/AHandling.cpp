/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AHandling
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#include "AHandling.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AHandling_gen.cpp"
#endif

package fb.test;

DEFINE_ADAPTER_TYPE(FORTE_AHandling, g_nStringIdAHandling)



const TForteInt16 FORTE_AHandling::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_AHandling::scm_anEventInputNames[] = {g_nStringIdReady};

const TForteInt16 FORTE_AHandling::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_AHandling::scm_anEventOutputNames[] = {g_nStringIdPrepareSpinner};


const SFBInterfaceSpec FORTE_AHandling::scm_stFBInterfaceSpecSocket = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr
};

const SFBInterfaceSpec FORTE_AHandling::scm_stFBInterfaceSpecPlug = {
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr
};


