/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: LOG_W
 *** Description: Composite FB wrapping other FBs
 *** Version: 
 ***     1.0: 2021-08-05/dorofeev - null - 
 *************************************************************************/

#include "LOG_W.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "LOG_W_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_LOG_W, g_nStringIdLOG_W)

const CStringDictionary::TStringId FORTE_LOG_W::scm_anDataInputNames[] = {g_nStringIdQI, g_nStringIdPARAMS, g_nStringIdPORT_NAME};

const CStringDictionary::TStringId FORTE_LOG_W::scm_anDataInputTypeIds[] = {g_nStringIdBOOL, g_nStringIdSTRING, g_nStringIdWSTRING};

const TForteInt16 FORTE_LOG_W::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_LOG_W::scm_anEIWith[] = {2, 1, 0, 255};
const CStringDictionary::TStringId FORTE_LOG_W::scm_anEventInputNames[] = {g_nStringIdINIT};

const TForteInt16 FORTE_LOG_W::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_LOG_W::scm_anEventOutputNames[] = {g_nStringIdINITO};

const SFBInterfaceSpec FORTE_LOG_W::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  0, 0,  3,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


const SCFB_FBInstanceData FORTE_LOG_W::scm_astInternalFBs[] = {
  {g_nStringIdF_STRING_TO_WSTRING, g_nStringIdF_STRING_TO_WSTRING},
  {g_nStringIdSUBSCRIBE_1, g_nStringIdSUBSCRIBE_1},
  {g_nStringIdLog, g_nStringIdLog},
  {g_nStringIdINT2INT, g_nStringIdF_WORD_TO_INT},
  {g_nStringIdCompareInts, g_nStringIdCompareInts},
};

const SCFB_FBParameter FORTE_LOG_W::scm_astParamters[] = {
  {1, g_nStringIdQI, "1"},
};

const SCFB_FBConnectionData FORTE_LOG_W::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINIT), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdREQ), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdCNF), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINIT), 1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdINITO), 1, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdINITO), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdIND), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdREQ), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdCNF), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCompareInts, g_nStringIdREQ), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCompareInts, g_nStringIdCNF), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog, g_nStringIdREQ), 2},
};

const SCFB_FBFannedOutConnectionData FORTE_LOG_W::scm_astFannedOutEventConnections[] = {
  {0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog, g_nStringIdINIT), 2},
};

const SCFB_FBConnectionData FORTE_LOG_W::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPARAMS), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdIN), 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdF_STRING_TO_WSTRING, g_nStringIdOUT), 0, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdID), 1},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPORT_NAME), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog, g_nStringIdNAME), 2},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdSUBSCRIBE_1, g_nStringIdRD_1), 1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdIN), 3},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdINT2INT, g_nStringIdOUT), 3, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCompareInts, g_nStringIdNewValue), 4},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdCompareInts, g_nStringIdWriteValue), 4, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdLog, g_nStringIdVALUE), 2},
};

const SCFB_FBNData FORTE_LOG_W::scm_stFBNData = {
  5, scm_astInternalFBs,
  6, scm_astEventConnections,
  1, scm_astFannedOutEventConnections,
  6, scm_astDataConnections,
  0, 0,
  1, scm_astParamters
};


