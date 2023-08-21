/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: DepotSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "DepotSkill.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "DepotSkill_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_DepotSkill, g_nStringIdDepotSkill)

const CStringDictionary::TStringId FORTE_DepotSkill::scm_anDataOutputNames[] = {g_nStringIdTurntablePresetPosition};

const CStringDictionary::TStringId FORTE_DepotSkill::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TForteInt16 FORTE_DepotSkill::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_DepotSkill::scm_anEventInputNames[] = {g_nStringIdstart, g_nStringIdstop};

const TDataIOID FORTE_DepotSkill::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_DepotSkill::scm_anEOWithIndexes[] = {-1, -1, 0, -1};
const CStringDictionary::TStringId FORTE_DepotSkill::scm_anEventOutputNames[] = {g_nStringIdstarted, g_nStringIdstopped, g_nStringIdTurntablePresetPositionUpd};

const SAdapterInstanceDef FORTE_DepotSkill::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdAStorage, true },
{g_nStringIdIAS_Skill, g_nStringIdATurntable, true }};

const SFBInterfaceSpec FORTE_DepotSkill::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  2,scm_astAdapterInstances};

void FORTE_DepotSkill::alg_TableToPosition3(void){
TurntablePresetPosition() = 3;
}

void FORTE_DepotSkill::alg_TableToPosition1(void){
TurntablePresetPosition() = 1;
}


void FORTE_DepotSkill::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_DepotSkill::enterStateState_1(void){
  m_nECCState = scm_nStateState_1;
  alg_TableToPosition3();
  sendOutputEvent( scm_nEventTurntablePresetPositionUpdID);
  sendAdapterEvent(scm_nATurntableAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_DepotSkill::enterStateState_2(void){
  m_nECCState = scm_nStateState_2;
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_DepotSkill::enterStateState_3(void){
  m_nECCState = scm_nStateState_3;
  sendOutputEvent( scm_nEventstoppedID);
}

void FORTE_DepotSkill::enterStateState_4(void){
  m_nECCState = scm_nStateState_4;
  sendOutputEvent( scm_nEventstartedID);
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_DepotSkill::enterStateState(void){
  m_nECCState = scm_nStateState;
}

void FORTE_DepotSkill::enterStateState_5(void){
  m_nECCState = scm_nStateState_5;
}

void FORTE_DepotSkill::enterStateState_6(void){
  m_nECCState = scm_nStateState_6;
}

void FORTE_DepotSkill::enterStateState_7(void){
  m_nECCState = scm_nStateState_7;
  alg_TableToPosition1();
  sendOutputEvent( scm_nEventTurntablePresetPositionUpdID);
  sendAdapterEvent(scm_nATurntableAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_DepotSkill::enterStateState_8(void){
  m_nECCState = scm_nStateState_8;
}

void FORTE_DepotSkill::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventstartID == pa_nEIID)
          enterStateState_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((ATurntable().RSP() == pa_nEIID) && (((ATurntable().currentState() == "Executing"))))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if((AStorage().RSP() == pa_nEIID) && (((AStorage().currentState() == "Executing"))))
          enterStateState_6();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_4:
        if((AStorage().RSP() == pa_nEIID) && (((AStorage().currentState() == "Executing"))))
          enterStateState_5();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((ATurntable().RSP() == pa_nEIID) && (((ATurntable().currentState() == "Idle"))))
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_5:
        if((AStorage().RSP() == pa_nEIID) && (((AStorage().currentState() == "Idle"))))
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_6:
        if((AStorage().RSP() == pa_nEIID) && (((AStorage().currentState() == "Idle"))))
          enterStateState_7();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_7:
        if((ATurntable().RSP() == pa_nEIID) && (((ATurntable().currentState() == "Executing"))))
          enterStateState_8();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_8:
        if((ATurntable().RSP() == pa_nEIID) && (((ATurntable().currentState() == "Idle"))))
          enterStateState_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 9.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


