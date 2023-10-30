/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AGRIPPER_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#include "AGRIPPER_MUX.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "AGRIPPER_MUX_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_AGRIPPER_MUX, g_nStringIdAGRIPPER_MUX)



const TForteInt16 FORTE_AGRIPPER_MUX::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_AGRIPPER_MUX::scm_anEventInputNames[] = {g_nStringIdGrip, g_nStringIdRelease};

const TForteInt16 FORTE_AGRIPPER_MUX::scm_anEOWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_AGRIPPER_MUX::scm_anEventOutputNames[] = {g_nStringIdGripped, g_nStringIdReleased};

const SAdapterInstanceDef FORTE_AGRIPPER_MUX::scm_astAdapterInstances[] = {
  {g_nStringIdAGripper, g_nStringIdAGripper, true}
};

const SFBInterfaceSpec FORTE_AGRIPPER_MUX::scm_stFBInterfaceSpec = {
  2, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  2, scm_anEventOutputNames, nullptr, scm_anEOWithIndexes,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  1, scm_astAdapterInstances
};



const SCFB_FBConnectionData FORTE_AGRIPPER_MUX::scm_astEventConnections[] = {
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGrip), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAGripper, g_nStringIdGrip), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdRelease), -1, GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAGripper, g_nStringIdRelease), CCompositeFB::scm_nAdapterMarker | 0},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAGripper, g_nStringIdGripped), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdGripped), -1},
  {GENERATE_CONNECTION_PORT_ID_2_ARG(g_nStringIdAGripper, g_nStringIdReleased), CCompositeFB::scm_nAdapterMarker | 0, GENERATE_CONNECTION_PORT_ID_1_ARG(g_nStringIdReleased), -1},
};

const SCFB_FBNData FORTE_AGRIPPER_MUX::scm_stFBNData = {
  0, nullptr,
  4, scm_astEventConnections,
  0, nullptr,
  0, nullptr,
  0, nullptr,
  0, nullptr
};



