/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ASTORAGE_DEMUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "ASTORAGE_DEMUX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "ASTORAGE_DEMUX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_ASTORAGE_DEMUX, g_nStringIdASTORAGE_DEMUX)



const TForteInt16 FORTE_ASTORAGE_DEMUX::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ASTORAGE_DEMUX::scm_anEventInputNames[] = {g_nStringIdIsIn, g_nStringIdIsOut};

const TForteInt16 FORTE_ASTORAGE_DEMUX::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_ASTORAGE_DEMUX::scm_anEventOutputNames[] = {g_nStringIdGoIn, g_nStringIdGoOut};

const SAdapterInstanceDef FORTE_ASTORAGE_DEMUX::scm_astAdapterInstances[] = {
  {g_nStringIdAStorage, g_nStringIdAStorage, false}
};

const SFBInterfaceSpec FORTE_ASTORAGE_DEMUX::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  1, scm_astAdapterInstances
};



const SCFB_FBConnectionData FORTE_ASTORAGE_DEMUX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIsIn), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdIsIn), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdIsOut), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdIsOut), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdGoIn), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGoIn), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAStorage, g_nStringIdGoOut), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGoOut), -1},
};

const SCFB_FBNData FORTE_ASTORAGE_DEMUX::scm_stFBNData = {
  0, nullptr,
  4, scm_astEventConnections,
  0, nullptr,
  0, nullptr,
  0, nullptr,
  0, nullptr
};



