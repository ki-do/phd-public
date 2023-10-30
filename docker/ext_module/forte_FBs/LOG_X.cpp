/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: LOG_X
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     1.0: 2021-08-05/dorofeev -  - 
 *************************************************************************/

#include "LOG_X.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "LOG_X_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_LOG_X, g_nStringIdLOG_X)

const CStringDictionary::TStringId FORTE_LOG_X::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS, g_nStringIdPORT_NAME};

const CStringDictionary::TStringId FORTE_LOG_X::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdWSTRING};


const TDataIOID FORTE_LOG_X::scm_anEIWith[] = {2, 1, 0, 255};
const TForteInt16 FORTE_LOG_X::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_LOG_X::scm_anEventInputNames[] = {g_nStringIdINIT};

const TForteInt16 FORTE_LOG_X::scm_anEOWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_LOG_X::scm_anEventOutputNames[] = {g_nStringIdINITO};


const SFBInterfaceSpec FORTE_LOG_X::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  3, scm_anDataInputNames, scm_anDataInputTypeIds,
  0, nullptr, nullptr,
  0, nullptr
};

const SCFB_FBInstanceData FORTE_LOG_X::scm_astInternalFBs[] = {
  {g_nStringIdF_STRING_TO_WSTRING, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdLog_1, g_nStringIdLog},
  {g_nStringIdE_SWITCH, g_nStringIdE_SWITCH},
  {g_nStringIdE_SR, g_nStringIdE_SR},
  {g_nStringIdF_BOOL_TO_INT, g_nStringIdF_BOOL_TO_INT}
};

const SCFB_FBParameter FORTE_LOG_X::scm_astParamters[] = {
  {1, g_nStringIdQI, "1"},
};

const SCFB_FBConnectionData FORTE_LOG_X::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEO1), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdS), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEO0), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdR), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdEI), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdEO), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_BOOL_TO_INT, g_nStringIdREQ), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_BOOL_TO_INT, g_nStringIdCNF), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog_1, g_nStringIdREQ), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_LOG_X::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog_1, g_nStringIdINIT), 2},
};

const SCFB_FBConnectionData FORTE_LOG_X::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SWITCH, g_nStringIdG), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdE_SR, g_nStringIdQ), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_BOOL_TO_INT, g_nStringIdIN), 5},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_BOOL_TO_INT, g_nStringIdOUT), 5, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog_1, g_nStringIdVALUE), 2},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPORT_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog_1, g_nStringIdNAME), 2},
};

const SCFB_FBNData FORTE_LOG_X::scm_stFBNData = {
  6, scm_astInternalFBs,
  8, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  6, scm_astDataConnections,
  0, nullptr,
  1, scm_astParamters
};



