/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: RobotControl
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "RobotControl.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "RobotControl_gen.cpp"
#include <stdio.h>

#endif

DEFINE_FIRMWARE_FB(FORTE_RobotControl, g_nStringIdRobotControl)

const CStringDictionary::TStringId FORTE_RobotControl::scm_anDataInputNames[] = {g_nStringIdCurrentPosition};

const CStringDictionary::TStringId FORTE_RobotControl::scm_anDataInputTypeIds[] = {g_nStringIdWORD};

const CStringDictionary::TStringId FORTE_RobotControl::scm_anDataOutputNames[] = {g_nStringIdPosition};

const CStringDictionary::TStringId FORTE_RobotControl::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TForteInt16 FORTE_RobotControl::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_RobotControl::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_RobotControl::scm_anEventInputNames[] = {g_nStringIdPositionUpdate};

const TDataIOID FORTE_RobotControl::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_RobotControl::scm_anEOWithIndexes[] = {-1, 0, -1};
const CStringDictionary::TStringId FORTE_RobotControl::scm_anEventOutputNames[] = {g_nStringIdCMD, g_nStringIdPresetPosition};

const SAdapterInstanceDef FORTE_RobotControl::scm_astAdapterInstances[] = {
{g_nStringIdARobot, g_nStringIdARobot, false }};

const SFBInterfaceSpec FORTE_RobotControl::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  1,scm_astAdapterInstances};

void FORTE_RobotControl::alg_PresetPositionUpd(void){
Position() = ARobot().PresetPosition();
}

void FORTE_RobotControl::alg_CurrentPositionUpd(void){
ARobot().CurrentPosition() = CurrentPosition();
}


void FORTE_RobotControl::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_RobotControl::enterStateState_1(void){
  printf("Robot: go to %u\n", (unsigned int)ARobot().PresetPosition());
  m_nECCState = scm_nStateState_1;
  alg_PresetPositionUpd();
  sendOutputEvent( scm_nEventPresetPositionID);
  sendOutputEvent( scm_nEventCMDID);
}

void FORTE_RobotControl::enterStateState_2(void){
  printf("Robot: turned current position %u\n", (unsigned int)CurrentPosition());
  m_nECCState = scm_nStateState_2;
  alg_CurrentPositionUpd();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPositionUpdateID);
}

void FORTE_RobotControl::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(ARobot().PresetPositionUpd() == pa_nEIID)
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if(scm_nEventPositionUpdateID == pa_nEIID)
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


