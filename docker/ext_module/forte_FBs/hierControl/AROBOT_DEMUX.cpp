/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AROBOT_DEMUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "AROBOT_DEMUX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AROBOT_DEMUX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_AROBOT_DEMUX, g_nStringIdAROBOT_DEMUX)

const CStringDictionary::TStringId FORTE_AROBOT_DEMUX::scm_anDataInputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_AROBOT_DEMUX::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_AROBOT_DEMUX::scm_anDataOutputNames[] = {g_nStringIdPresetPosition};

const CStringDictionary::TStringId FORTE_AROBOT_DEMUX::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TDataIOID FORTE_AROBOT_DEMUX::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_AROBOT_DEMUX::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_AROBOT_DEMUX::scm_anEventInputNames[] = {g_nStringIdPositionUpdate};

const TDataIOID FORTE_AROBOT_DEMUX::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_AROBOT_DEMUX::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_AROBOT_DEMUX::scm_anEventOutputNames[] = {g_nStringIdPresetPositionUpd};

const SAdapterInstanceDef FORTE_AROBOT_DEMUX::scm_astAdapterInstances[] = {
  {g_nStringIdARobot, g_nStringIdARobot, false}
};

const SFBInterfaceSpec FORTE_AROBOT_DEMUX::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1, scm_astAdapterInstances
};



const SCFB_FBConnectionData FORTE_AROBOT_DEMUX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPositionUpdate), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdPositionUpdate), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdPresetPositionUpd), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPresetPositionUpd), -1},
};

const SCFB_FBConnectionData FORTE_AROBOT_DEMUX::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCurrentPosition), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdCurrentPosition), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdARobot, g_nStringIdPresetPosition), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPresetPosition), -1},
};

const SCFB_FBNData FORTE_AROBOT_DEMUX::scm_stFBNData = {
  0, nullptr,
  2, scm_astEventConnections,
  0, nullptr,
  2, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



