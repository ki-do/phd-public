/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: AGripper
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#include "AGripper.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AGripper_gen.cpp"
#endif

DEFINE_ADAPTER_TYPE(FORTE_AGripper, g_nStringIdAGripper)

const TForteInt16 FORTE_AGripper::scm_anEIWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_AGripper::scm_anEventInputNames[] = {g_nStringIdGripped, g_nStringIdReleased};

const TForteInt16 FORTE_AGripper::scm_anEOWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_AGripper::scm_anEventOutputNames[] = {g_nStringIdGrip, g_nStringIdRelease};

const SFBInterfaceSpec FORTE_AGripper::scm_stFBInterfaceSpecSocket = {
  2,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  0, 0,  0,  0, 0, 
  0,  0, 0,
  0, 0
};

const SFBInterfaceSpec FORTE_AGripper::scm_stFBInterfaceSpecPlug = {
  2,  scm_anEventOutputNames,  0,  scm_anEOWithIndexes,
  2,  scm_anEventInputNames,  0, 0,  0,  0, 0, 
  0,  0, 0,
  0, 0
};



