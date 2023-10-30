/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ARobot
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#include "ARobot.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ARobot_gen.cpp"
#endif

package fb.test;

DEFINE_ADAPTER_TYPE(FORTE_ARobot, g_nStringIdARobot)

const CStringDictionary::TStringId FORTE_ARobot::scm_anDataInputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_ARobot::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_ARobot::scm_anDataOutputNames[] = {g_nStringIdPresetPosition};

const CStringDictionary::TStringId FORTE_ARobot::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TDataIOID FORTE_ARobot::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_ARobot::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_ARobot::scm_anEventInputNames[] = {g_nStringIdPositionUpdate};

const TDataIOID FORTE_ARobot::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_ARobot::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_ARobot::scm_anEventOutputNames[] = {g_nStringIdPresetPositionUpd};


const SFBInterfaceSpec FORTE_ARobot::scm_stFBInterfaceSpecSocket = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, nullptr
};

const SFBInterfaceSpec FORTE_ARobot::scm_stFBInterfaceSpecPlug = {
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  0, nullptr
};


