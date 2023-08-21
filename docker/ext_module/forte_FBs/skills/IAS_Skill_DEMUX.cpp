/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IAS_Skill_DEMUX
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-07-03/dorofeev - null - 
 *************************************************************************/

#include "IAS_Skill_DEMUX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IAS_Skill_DEMUX_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_IAS_Skill_DEMUX, g_nStringIdIAS_Skill_DEMUX)

const CStringDictionary::TStringId FORTE_IAS_Skill_DEMUX::scm_anDataInputNames[] = {g_nStringIdcurrentState, g_nStringIdlastTransition};

const CStringDictionary::TStringId FORTE_IAS_Skill_DEMUX::scm_anDataInputTypeIds[] = {g_nStringIdSTRING, g_nStringIdSTRING};

const TForteInt16 FORTE_IAS_Skill_DEMUX::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_IAS_Skill_DEMUX::scm_anEIWith[] = {0, 1, 255};
const CStringDictionary::TStringId FORTE_IAS_Skill_DEMUX::scm_anEventInputNames[] = {g_nStringIdRSP};

const TForteInt16 FORTE_IAS_Skill_DEMUX::scm_anEOWithIndexes[] = {-1, -1, -1, -1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_IAS_Skill_DEMUX::scm_anEventOutputNames[] = {g_nStringIdcleanUp, g_nStringIdlock, g_nStringIdreset, g_nStringIdstart, g_nStringIdstop, g_nStringIdsuspend, g_nStringIdunsuspend};

const SAdapterInstanceDef FORTE_IAS_Skill_DEMUX::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdIAS_Skill, false }};

const SFBInterfaceSpec FORTE_IAS_Skill_DEMUX::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  7,  scm_anEventOutputNames,  0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  1,scm_astAdapterInstances};


const SCFB_FBConnectionData FORTE_IAS_Skill_DEMUX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdcleanUp), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcleanUp), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdlock), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdlock), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdreset), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdreset), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdstart), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdstart), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdstop), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdstop), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdsuspend), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdsuspend), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdunsuspend), CCompositeFB::scm_nAdapterMarker |0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdunsuspend), -1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRSP), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdRSP), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBConnectionData FORTE_IAS_Skill_DEMUX::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdcurrentState), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdcurrentState), CCompositeFB::scm_nAdapterMarker |0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdlastTransition), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdIAS_Skill, g_nStringIdlastTransition), CCompositeFB::scm_nAdapterMarker |0},
};

const SCFB_FBNData FORTE_IAS_Skill_DEMUX::scm_stFBNData = {
  0, 0,
  8, scm_astEventConnections,
  0, 0,
  2, scm_astDataConnections,
  0, 0,
  0, 0
};


