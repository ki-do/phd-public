/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: HandlingControl
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#include "HandlingControl.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "HandlingControl_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_HandlingControl, g_nStringIdHandlingControl)





const SAdapterInstanceDef FORTE_HandlingControl::scm_astAdapterInstances[] = {
  {g_nStringIdAHandling, g_nStringIdAHandling, false},
  {g_nStringIdAGripper, g_nStringIdAGripper, true},
  {g_nStringIdARobot, g_nStringIdARobot, true}
};

const SFBInterfaceSpec FORTE_HandlingControl::scm_stFBInterfaceSpec = {
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  3, scm_astAdapterInstances
};

void FORTE_HandlingControl::alg_RobotGoTo1(void) {
  st_ARobot().PresetPosition() = 1;
}

void FORTE_HandlingControl::alg_RobotGoTo2(void) {
  st_ARobot().PresetPosition() = 2;
}

void FORTE_HandlingControl::alg_RobotGoTo3(void) {
  st_ARobot().PresetPosition() = 3;
}

void FORTE_HandlingControl::alg_RobotGoTo4(void) {
  st_ARobot().PresetPosition() = 4;
}

void FORTE_HandlingControl::alg_RobotGoTo11(void) {
  st_ARobot().PresetPosition() = 11;
}

void FORTE_HandlingControl::alg_RobotGoTo12(void) {
  st_ARobot().PresetPosition() = 12;
}

void FORTE_HandlingControl::alg_RobotGoTo13(void) {
  st_ARobot().PresetPosition() = 13;
}

void FORTE_HandlingControl::alg_RobotGoTo14(void) {
  st_ARobot().PresetPosition() = 14;
}

void FORTE_HandlingControl::alg_RobotGoTo99(void) {
  st_ARobot().PresetPosition() = 99;
}


void FORTE_HandlingControl::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_HandlingControl::enterStateState_1(void) {
  m_nECCState = scm_nStateState_1;
  alg_RobotGoTo1();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_2(void) {
  m_nECCState = scm_nStateState_2;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventGripID);
}

void FORTE_HandlingControl::enterStateState_3(void) {
  m_nECCState = scm_nStateState_3;
  alg_RobotGoTo11();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_4(void) {
  m_nECCState = scm_nStateState_4;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventReleaseID);
}

void FORTE_HandlingControl::enterStateState_5(void) {
  m_nECCState = scm_nStateState_5;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventGripID);
}

void FORTE_HandlingControl::enterStateState_6(void) {
  m_nECCState = scm_nStateState_6;
  alg_RobotGoTo12();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_7(void) {
  m_nECCState = scm_nStateState_7;
  alg_RobotGoTo3();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_8(void) {
  m_nECCState = scm_nStateState_8;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventGripID);
}

void FORTE_HandlingControl::enterStateState_9(void) {
  m_nECCState = scm_nStateState_9;
  alg_RobotGoTo13();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_10(void) {
  m_nECCState = scm_nStateState_10;
  alg_RobotGoTo4();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_11(void) {
  m_nECCState = scm_nStateState_11;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventGripID);
}

void FORTE_HandlingControl::enterStateState_12(void) {
  m_nECCState = scm_nStateState_12;
  alg_RobotGoTo14();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_13(void) {
  m_nECCState = scm_nStateState_13;
  alg_RobotGoTo99();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState(void) {
  m_nECCState = scm_nStateState;
  sendAdapterEvent(scm_nAHandlingAdpNum, FORTE_AHandling::scm_nEventReadyID);
}

void FORTE_HandlingControl::enterStateState_14(void) {
  m_nECCState = scm_nStateState_14;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventReleaseID);
}

void FORTE_HandlingControl::enterStateState_15(void) {
  m_nECCState = scm_nStateState_15;
  alg_RobotGoTo2();
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_ARobot::scm_nEventPresetPositionUpdID);
}

void FORTE_HandlingControl::enterStateState_16(void) {
  m_nECCState = scm_nStateState_16;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventReleaseID);
}

void FORTE_HandlingControl::enterStateState_17(void) {
  m_nECCState = scm_nStateState_17;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventReleaseID);
}

void FORTE_HandlingControl::enterStateState_18(void) {
  m_nECCState = scm_nStateState_18;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_AGripper::scm_nEventReleaseID);
}


void FORTE_HandlingControl::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(st_AHandling().PrepareSpinner() == pa_nEIID)
          enterStateState_14();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 1)))
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if(st_AGripper().Gripped() == pa_nEIID)
          enterStateState_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 11)))
          enterStateState_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_4:
        if(st_AGripper().Released() == pa_nEIID)
          enterStateState_15();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_5:
        if(st_AGripper().Gripped() == pa_nEIID)
          enterStateState_6();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_6:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 12)))
          enterStateState_16();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_7:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 3)))
          enterStateState_8();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_8:
        if(st_AGripper().Gripped() == pa_nEIID)
          enterStateState_9();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_9:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 13)))
          enterStateState_17();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_10:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 4)))
          enterStateState_11();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_11:
        if(st_AGripper().Gripped() == pa_nEIID)
          enterStateState_12();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_12:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 14)))
          enterStateState_18();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_13:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 99)))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_14:
        if(st_AGripper().Released() == pa_nEIID)
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_15:
        if((st_ARobot().PositionUpdate() == pa_nEIID) && ((st_ARobot().CurrentPosition() == 2)))
          enterStateState_5();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_16:
        if(st_AGripper().Released() == pa_nEIID)
          enterStateState_7();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_17:
        if(st_AGripper().Released() == pa_nEIID)
          enterStateState_10();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_18:
        if(st_AGripper().Released() == pa_nEIID)
          enterStateState_13();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 20.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


