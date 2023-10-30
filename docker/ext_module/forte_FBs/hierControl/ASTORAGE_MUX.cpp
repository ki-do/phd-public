/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ASTORAGE_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "ASTORAGE_MUX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ASTORAGE_MUX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ASTORAGE_MUX, g_nStringIdASTORAGE_MUX)



const TForteInt16 FORTE_ASTORAGE_MUX::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ASTORAGE_MUX::scm_anEventInputNames[] = {g_nStringIdGoIn, g_nStringIdGoOut};

const TForteInt16 FORTE_ASTORAGE_MUX::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ASTORAGE_MUX::scm_anEventOutputNames[] = {g_nStringIdIsIn, g_nStringIdIsOut};

const SAdapterInstanceDef FORTE_ASTORAGE_MUX::scm_astAdapterInstances[] = {
  {g_nStringIdAStorage, g_nStringIdAStorage, true}
};

const SFBInterfaceSpec FORTE_ASTORAGE_MUX::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  1, scm_astAdapterInstances
};



const SCFB_FBConnectionData FORTE_ASTORAGE_MUX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGoIn), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdGoIn), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGoOut), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdGoOut), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdIsIn), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIsIn), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdIsOut), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIsOut), -1},
};

const SCFB_FBNData FORTE_ASTORAGE_MUX::scm_stFBNData = {
  0, nullptr,
  4, scm_astEventConnections,
  0, nullptr,
  0, nullptr,
  0, nullptr,
  0, nullptr
};



