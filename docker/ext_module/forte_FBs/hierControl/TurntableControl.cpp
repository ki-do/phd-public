/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: TurntableControl
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "TurntableControl.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "TurntableControl_gen.cpp"
#include <stdio.h>

#endif

DEFINE_FIRMWARE_FB(FORTE_TurntableControl, g_nStringIdTurntableControl)

const CStringDictionary::TStringId FORTE_TurntableControl::scm_anDataInputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_TurntableControl::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_TurntableControl::scm_anDataOutputNames[] = {g_nStringIdPresetPosition};

const CStringDictionary::TStringId FORTE_TurntableControl::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TForteInt16 FORTE_TurntableControl::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_TurntableControl::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_TurntableControl::scm_anEventInputNames[] = {g_nStringIdPositionUpd};

const TDataIOID FORTE_TurntableControl::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_TurntableControl::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_TurntableControl::scm_anEventOutputNames[] = {g_nStringIdTurn};

const SAdapterInstanceDef FORTE_TurntableControl::scm_astAdapterInstances[] = {
{g_nStringIdATurntable, g_nStringIdATurntable, false }};

const SFBInterfaceSpec FORTE_TurntableControl::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};

void FORTE_TurntableControl::alg_PresetPositionUpdate(void){
PresetPosition() = ATurntable().Position();
}

void FORTE_TurntableControl::alg_CurrentPositionUpdate(void){
ATurntable().CurrentPosition() = CurrentPosition();
}


void FORTE_TurntableControl::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_TurntableControl::enterStateState_1(void){
  printf("Turntable: turn to %u\n", (unsigned int)ATurntable().Position());
  m_nECCState = scm_nStateState_1;
  alg_PresetPositionUpdate();
  sendOutputEvent( scm_nEventTurnID);
}

void FORTE_TurntableControl::enterStateState_2(void){
  printf("Turntable: turned current position %u\n", (unsigned int)CurrentPosition());
  m_nECCState = scm_nStateState_2;
  alg_CurrentPositionUpdate();
  sendAdapterEvent(scm_nATurntableAdpNum, FORTE_ATurntable::scm_nEventPositionUpdID);
}

void FORTE_TurntableControl::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(ATurntable().NewPosition() == pa_nEIID)
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


