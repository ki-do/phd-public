/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IAS_Skill
 *** Description: 
 *** Version: 
 *************************************************************************/

#include "IAS_Skill.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IAS_Skill_gen.cpp"
#endif

DEFINE_ADAPTER_TYPE(FORTE_IAS_Skill, g_nStringIdIAS_Skill)

const CStringDictionary::TStringId FORTE_IAS_Skill::scm_anDataInputNames[] = {g_nStringIdcurrentState, g_nStringIdlastTransition};

const CStringDictionary::TStringId FORTE_IAS_Skill::scm_anDataInputTypeIds[] = {g_nStringIdSTRING, g_nStringIdSTRING};

const TDataIOID FORTE_IAS_Skill::scm_anEIWith[] = {0, 1, 255};
const TForteInt16 FORTE_IAS_Skill::scm_anEIWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_IAS_Skill::scm_anEventInputNames[] = {g_nStringIdRSP};

const TForteInt16 FORTE_IAS_Skill::scm_anEOWithIndexes[] = {-1, -1, -1, -1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_IAS_Skill::scm_anEventOutputNames[] = {g_nStringIdcleanUp, g_nStringIdlock, g_nStringIdreset, g_nStringIdstart, g_nStringIdstop, g_nStringIdsuspend, g_nStringIdunsuspend};

const SFBInterfaceSpec FORTE_IAS_Skill::scm_stFBInterfaceSpecSocket = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  7,  scm_anEventOutputNames,  0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};

const SFBInterfaceSpec FORTE_IAS_Skill::scm_stFBInterfaceSpecPlug = {
  7,  scm_anEventOutputNames,  0,  scm_anEOWithIndexes,
  1,  scm_anEventInputNames,  scm_anEIWith, scm_anEIWithIndexes,  0,  0, 0, 
  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0, 0
};



