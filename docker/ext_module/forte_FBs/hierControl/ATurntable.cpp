/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ATurntable
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#include "ATurntable.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ATurntable_gen.cpp"
#endif

DEFINE_ADAPTER_TYPE(FORTE_ATurntable, g_nStringIdATurntable)

const CStringDictionary::TStringId FORTE_ATurntable::scm_anDataInputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_ATurntable::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_ATurntable::scm_anDataOutputNames[] = {g_nStringIdPosition};

const CStringDictionary::TStringId FORTE_ATurntable::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TDataIOID FORTE_ATurntable::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_ATurntable::scm_anEIWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_ATurntable::scm_anEventInputNames[] = {g_nStringIdPositionUpd};

const TDataIOID FORTE_ATurntable::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_ATurntable::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_ATurntable::scm_anEventOutputNames[] = {g_nStringIdNewPosition};

const SFBInterfaceSpec FORTE_ATurntable::scm_stFBInterfaceSpecSocket = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

const SFBInterfaceSpec FORTE_ATurntable::scm_stFBInterfaceSpecPlug = {
  1,  scm_anEventOutputNames,  scm_anEOWith,  scm_anEOWithIndexes,
  1,  scm_anEventInputNames,  scm_anEIWith, scm_anEIWithIndexes,  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0, 0
};



