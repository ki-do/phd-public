/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: GripperSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "GripperSkill.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "GripperSkill_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_GripperSkill, g_nStringIdGripperSkill)

const TForteInt16 FORTE_GripperSkill::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_GripperSkill::scm_anEventInputNames[] = {g_nStringIdGripped, g_nStringIdReleased};

const TForteInt16 FORTE_GripperSkill::scm_anEOWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_GripperSkill::scm_anEventOutputNames[] = {g_nStringIdGrip, g_nStringIdRelease};

const SAdapterInstanceDef FORTE_GripperSkill::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdAGripper, false }};

const SFBInterfaceSpec FORTE_GripperSkill::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  0, 0,  0,  0, 0, 
  0,  0, 0,
  1,scm_astAdapterInstances};


void FORTE_GripperSkill::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_GripperSkill::enterStateState_1(void){
  m_nECCState = scm_nStateState_1;
  sendOutputEvent( scm_nEventGripID);
}

void FORTE_GripperSkill::enterStateState_2(void){
  m_nECCState = scm_nStateState_2;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventGrippedID);
}

void FORTE_GripperSkill::enterStateState_3(void){
  m_nECCState = scm_nStateState_3;
  sendOutputEvent( scm_nEventReleaseID);
}

void FORTE_GripperSkill::enterStateState_4(void){
  m_nECCState = scm_nStateState_4;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventReleasedID);
}

void FORTE_GripperSkill::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if((AGripper().Release()))
          enterStateState_3();
        else
        if((AGripper().Grip()))
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if(scm_nEventGrippedID == pa_nEIID)
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if(scm_nEventReleasedID == pa_nEIID)
          enterStateState_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_4:
        if((1))
          enterStateSTART();
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


