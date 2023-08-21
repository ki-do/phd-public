/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Station1Skill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "Station1Skill.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Station1Skill_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_Station1Skill, g_nStringIdStation1Skill)

const TForteInt16 FORTE_Station1Skill::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Station1Skill::scm_anEventInputNames[] = {g_nStringIddoRound};

const TForteInt16 FORTE_Station1Skill::scm_anEOWithIndexes[] = {-1};
const SAdapterInstanceDef FORTE_Station1Skill::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdADepot, true },
{g_nStringIdIAS_Skill, g_nStringIdAHandling, true }};

const SFBInterfaceSpec FORTE_Station1Skill::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  0,  0,   0, 0,  0,  0, 0, 
  0,  0, 0,
  2,scm_astAdapterInstances};


void FORTE_Station1Skill::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_Station1Skill::enterStateState(void){
  m_nECCState = scm_nStateState;
  sendAdapterEvent(scm_nADepotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_Station1Skill::enterStateState_1(void){
  m_nECCState = scm_nStateState_1;
}

void FORTE_Station1Skill::enterStateState_2(void){
  m_nECCState = scm_nStateState_2;
}

void FORTE_Station1Skill::enterStateState_3(void){
  m_nECCState = scm_nStateState_3;
  sendAdapterEvent(scm_nAHandlingAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_Station1Skill::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventdoRoundID == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((ADepot().RSP() == pa_nEIID) && (((ADepot().currentState() == "Executing"))))
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((AHandling().RSP() == pa_nEIID) && (((AHandling().currentState() == "Idle"))))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if((ADepot().RSP() == pa_nEIID) && (((ADepot().currentState() == "Idle"))))
          enterStateState_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if((AHandling().RSP() == pa_nEIID) && (((AHandling().currentState() == "Executing"))))
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 4.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


