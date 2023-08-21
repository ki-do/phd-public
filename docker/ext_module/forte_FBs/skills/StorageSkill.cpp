/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: StorageSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "StorageSkill.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "StorageSkill_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_StorageSkill, g_nStringIdStorageSkill)

const TForteInt16 FORTE_StorageSkill::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_StorageSkill::scm_anEventInputNames[] = {g_nStringIdIsIn, g_nStringIdIsOut};

const TForteInt16 FORTE_StorageSkill::scm_anEOWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_StorageSkill::scm_anEventOutputNames[] = {g_nStringIdGoIn, g_nStringIdGoOut};

const SAdapterInstanceDef FORTE_StorageSkill::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdAStorage, false }};

const SFBInterfaceSpec FORTE_StorageSkill::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  0, 0,  0,  0, 0, 
  0,  0, 0,
  1,scm_astAdapterInstances};

void FORTE_StorageSkill::alg_exec(void){
AStorage().currentState() = "Executing";
}

void FORTE_StorageSkill::alg_stop(void){
AStorage().currentState() = "Idle";
}


void FORTE_StorageSkill::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_StorageSkill::enterStateState_1(void){
  printf("Storage: go in\n");
  m_nECCState = scm_nStateState_1;
  sendOutputEvent( scm_nEventGoInID);
}

void FORTE_StorageSkill::enterStateState_3(void){
  printf("Storage: go out\n");
  m_nECCState = scm_nStateState_3;
  sendOutputEvent( scm_nEventGoOutID);
}

void FORTE_StorageSkill::enterStateState_2(void){
  m_nECCState = scm_nStateState_2;
  alg_exec();
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_IAS_Skill::scm_nEventRSPID);
}

void FORTE_StorageSkill::enterStateState_4(void){
  m_nECCState = scm_nStateState_4;
  alg_stop();
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_IAS_Skill::scm_nEventRSPID);
}

void FORTE_StorageSkill::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(AStorage().start() == pa_nEIID)
          enterStateState_3();
        else
        if(AStorage().stop() == pa_nEIID)
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if(scm_nEventIsInID == pa_nEIID)
          enterStateState_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if(scm_nEventIsOutID == pa_nEIID)
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


