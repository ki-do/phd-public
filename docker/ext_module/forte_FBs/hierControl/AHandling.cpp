/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: AHandling
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#include "AHandling.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AHandling_gen.cpp"
#endif

DEFINE_ADAPTER_TYPE(FORTE_AHandling, g_nStringIdAHandling)

const TForteInt16 FORTE_AHandling::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_AHandling::scm_anEventInputNames[] = {g_nStringIdReady};

const TForteInt16 FORTE_AHandling::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_AHandling::scm_anEventOutputNames[] = {g_nStringIdPrepareSpinner};

const SFBInterfaceSpec FORTE_AHandling::scm_stFBInterfaceSpecSocket = {
  1,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  0, 0,  0,  0, 0, 
  0,  0, 0,
  0, 0
};

const SFBInterfaceSpec FORTE_AHandling::scm_stFBInterfaceSpecPlug = {
  1,  scm_anEventOutputNames,  0,  scm_anEOWithIndexes,
  1,  scm_anEventInputNames,  0, 0,  0,  0, 0, 
  0,  0, 0,
  0, 0
};



