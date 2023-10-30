/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ATURNTABLE_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "ATURNTABLE_MUX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ATURNTABLE_MUX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ATURNTABLE_MUX, g_nStringIdATURNTABLE_MUX)

const CStringDictionary::TStringId FORTE_ATURNTABLE_MUX::scm_anDataInputNames[] = {g_nStringIdPosition};

const CStringDictionary::TStringId FORTE_ATURNTABLE_MUX::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_ATURNTABLE_MUX::scm_anDataOutputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_ATURNTABLE_MUX::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TDataIOID FORTE_ATURNTABLE_MUX::scm_anEIWith[] = {0, 255};
const TForteInt16 FORTE_ATURNTABLE_MUX::scm_anEIWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_ATURNTABLE_MUX::scm_anEventInputNames[] = {g_nStringIdNewPosition};

const TDataIOID FORTE_ATURNTABLE_MUX::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_ATURNTABLE_MUX::scm_anEOWithIndexes[] = {0};
const CStringDictionary::TStringId FORTE_ATURNTABLE_MUX::scm_anEventOutputNames[] = {g_nStringIdPositionUpd};

const SAdapterInstanceDef FORTE_ATURNTABLE_MUX::scm_astAdapterInstances[] = {
  {g_nStringIdATurntable, g_nStringIdATurntable, true}
};

const SFBInterfaceSpec FORTE_ATURNTABLE_MUX::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, scm_anEIWith, scm_anEIWithIndexes,
  1, scm_anEventOutputNames, scm_anEOWith, scm_anEOWithIndexes,
  1, scm_anDataInputNames, scm_anDataInputTypeIds,
  1, scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1, scm_astAdapterInstances
};



const SCFB_FBConnectionData FORTE_ATURNTABLE_MUX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdNewPosition), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdATurntable, g_nStringIdNewPosition), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdATurntable, g_nStringIdPositionUpd), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPositionUpd), -1},
};

const SCFB_FBConnectionData FORTE_ATURNTABLE_MUX::scm_astDataConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdPosition), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdATurntable, g_nStringIdPosition), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdATurntable, g_nStringIdCurrentPosition), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdCurrentPosition), -1},
};

const SCFB_FBNData FORTE_ATURNTABLE_MUX::scm_stFBNData = {
  0, nullptr,
  2, scm_astEventConnections,
  0, nullptr,
  2, scm_astDataConnections,
  0, nullptr,
  0, nullptr
};



