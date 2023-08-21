/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TurntableSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "TurntableSkill.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TurntableSkill_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_TurntableSkill, g_nStringIdTurntableSkill)

const CStringDictionary::TStringId FORTE_TurntableSkill::scm_anDataInputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_TurntableSkill::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_TurntableSkill::scm_anDataOutputNames[] = {g_nStringIdPresetPosition};

const CStringDictionary::TStringId FORTE_TurntableSkill::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TForteInt16 FORTE_TurntableSkill::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_TurntableSkill::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_TurntableSkill::scm_anEventInputNames[] = {g_nStringIdPositionUpd};

const TDataIOID FORTE_TurntableSkill::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_TurntableSkill::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_TurntableSkill::scm_anEventOutputNames[] = {g_nStringIdTurn};

const SAdapterInstanceDef FORTE_TurntableSkill::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdATurntable, false }};

const SFBInterfaceSpec FORTE_TurntableSkill::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};

void FORTE_TurntableSkill::alg_PresetPositionUpdate(void){
PresetPosition() = ATurntable().Position();
}

void FORTE_TurntableSkill::alg_CurrentPositionUpdate(void){
ATurntable().CurrentPosition() = CurrentPosition();
}


void FORTE_TurntableSkill::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_TurntableSkill::enterStateState_1(void){
  m_nECCState = scm_nStateState_1;
  alg_PresetPositionUpdate();
  sendOutputEvent( scm_nEventTurnID);
}

void FORTE_TurntableSkill::enterStateState_2(void){
  m_nECCState = scm_nStateState_2;
  alg_CurrentPositionUpdate();
  sendAdapterEvent(scm_nATurntableAdpNum, FORTE_IAS_Skill::scm_nEventPositionUpdID);
}

void FORTE_TurntableSkill::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if((ATurntable().NewPosition()))
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if(scm_nEventPositionUpdID == pa_nEIID)
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
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 2.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


