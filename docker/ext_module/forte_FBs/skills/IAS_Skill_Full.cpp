/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IAS_Skill_Full
 *** Description: Composite Function Block Type
 *** Version: 
 ***     0.0: 2018-04-30/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "IAS_Skill_Full.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IAS_Skill_Full_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_IAS_Skill_Full, g_nStringIdIAS_Skill_Full)

const CStringDictionary::TStringId FORTE_IAS_Skill_Full::scm_anDataOutputNames[] = {g_nStringIdcurrentState};

const CStringDictionary::TStringId FORTE_IAS_Skill_Full::scm_anDataOutputTypeIds[] = {g_nStringIdSTRING};

const TForteInt16 FORTE_IAS_Skill_Full::scm_anEIWithIndexes[] = {-1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_IAS_Skill_Full::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdErrorEventInternal, g_nStringIdStopEventInternal, g_nStringIdStartEventInternal};

const TDataIOID FORTE_IAS_Skill_Full::scm_anEOWith[] = {0, 255, 0, 255, 0, 255, 0, 255, 0, 255, 0, 255, 0, 255, 0, 255};
const TForteInt16 FORTE_IAS_Skill_Full::scm_anEOWithIndexes[] = {0, 2, 4, 6, 8, 10, 12, 14, -1};
const CStringDictionary::TStringId FORTE_IAS_Skill_Full::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdcleanUp, g_nStringIdlock, g_nStringIdreset, g_nStringIdstart, g_nStringIdstop, g_nStringIdsuspend, g_nStringIdunsuspend};

const SAdapterInstanceDef FORTE_IAS_Skill_Full::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdIAS_Skill, false }};

const SFBInterfaceSpec FORTE_IAS_Skill_Full::scm_stFBInterfaceSpec = {
  4,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  8,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};


const SCFB_FBInstanceData FORTE_IAS_Skill_Full::scm_astInternalFBs[] = {
  {g_nStringIdIAS_Skill_StateModel, g_nStringIdIAS_Skill_StateModel},
};

const SCFB_FBConnectionData FORTE_IAS_Skill_Full::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdINIT), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdcleanUp), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdcleanUp), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdlock), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdlock), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdreset), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdreset), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdstart), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdstart), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdstop), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdstop), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdsuspend), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdsuspend), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdunsuspend), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdunsuspend), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdErrorEventInternal), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdErrorEvent), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStopEventInternal), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdStopEvent), 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdStartEventInternal), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdStartEvent), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdINITO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdcleanUpO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcleanUp), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdlockO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdlock), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdresetO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdreset), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdstartO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdstart), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdstopO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdstop), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdsuspendO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdsuspend), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdunsupendO), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdunsuspend), -1},
};

const SCFB_FBFannedOutConnectionData FORTE_IAS_Skill_Full::scm_astFannedOutEventConnections[] = {
  {12, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
  {13, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
  {14, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
  {15, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
  {16, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
  {17, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
  {18, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBConnectionData FORTE_IAS_Skill_Full::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdCurrentStatus), 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcurrentState), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill_StateModel, g_nStringIdLastTransition), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdlastTransition), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBFannedOutConnectionData FORTE_IAS_Skill_Full::scm_astFannedOutDataConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdcurrentState), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBNData FORTE_IAS_Skill_Full::scm_stFBNData = {
  1, scm_astInternalFBs,
  19, scm_astEventConnections,
  7, scm_astFannedOutEventConnections,
  2, scm_astDataConnections,
  1, scm_astFannedOutDataConnections,
  0, 0
};


