/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AROBOT_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "AROBOT_MUX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AROBOT_MUX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_AROBOT_MUX, g_nStringIdAROBOT_MUX)

const CStringDictionary::TStringId FORTE_AROBOT_MUX::scm_anDataInputNames[] = {g_nStringIdPresetPosition};

const CStringDictionary::TStringId FORTE_AROBOT_MUX::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_AROBOT_MUX::scm_anDataOutputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_AROBOT_MUX::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TDataIOID FORTE_AROBOT_MUX::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_AROBOT_MUX::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_AROBOT_MUX::scm_anEventInputNames[] = {g_nStringIdPresetPositionUpd};

const TDataIOID FORTE_AROBOT_MUX::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_AROBOT_MUX::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_AROBOT_MUX::scm_anEventOutputNames[] = {g_nStringIdPositionUpdate};

const SAdapterInstanceDef FORTE_AROBOT_MUX::scm_astAdapterInstances[] = {
  {g_nStringIdARobot, g_nStringIdARobot, true}
};

const SFBInterfaceSpec FORTE_AROBOT_MUX::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1, scm_astAdapterInstances
};



const SCFB_FBConnectionData FORTE_AROBOT_MUX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPresetPositionUpd), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdPresetPositionUpd), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdPositionUpdate), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPositionUpdate), -1},
};

const SCFB_FBConnectionData FORTE_AROBOT_MUX::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPresetPosition), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdPresetPosition), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdCurrentPosition), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCurrentPosition), -1},
};

const SCFB_FBNData FORTE_AROBOT_MUX::scm_stFBNData = {
  0, nullptr,
  2, scm_astEventConnections,
  0, nullptr,
  2, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



