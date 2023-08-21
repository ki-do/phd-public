/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: HandlingSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "HandlingSkill.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "HandlingSkill_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_HandlingSkill, g_nStringIdHandlingSkill)

const CStringDictionary::TStringId FORTE_HandlingSkill::scm_anDataOutputNames[] = {g_nStringIdRobotPosition};

const CStringDictionary::TStringId FORTE_HandlingSkill::scm_anDataOutputTypeIds[] = {g_nStringIdWORD};

const TForteInt16 FORTE_HandlingSkill::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_HandlingSkill::scm_anEventInputNames[] = {g_nStringIdstart, g_nStringIdstop};

const TDataIOID FORTE_HandlingSkill::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_HandlingSkill::scm_anEOWithIndexes[] = {-1, -1, 0, -1};
const CStringDictionary::TStringId FORTE_HandlingSkill::scm_anEventOutputNames[] = {g_nStringIdstarted, g_nStringIdstopped, g_nStringIdRobotPositionUpd};

const SAdapterInstanceDef FORTE_HandlingSkill::scm_astAdapterInstances[] = {
{g_nStringIdIAS_Skill, g_nStringIdAGripper, true },
{g_nStringIdIAS_Skill, g_nStringIdARobot, true }};

const SFBInterfaceSpec FORTE_HandlingSkill::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  3,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  2,scm_astAdapterInstances};

void FORTE_HandlingSkill::alg_RobotGoTo1(void){
RobotPosition() = 1;
}

void FORTE_HandlingSkill::alg_RobotGoTo2(void){
RobotPosition() = 2;
}

void FORTE_HandlingSkill::alg_RobotGoTo3(void){
RobotPosition() = 3;
}

void FORTE_HandlingSkill::alg_RobotGoTo4(void){
RobotPosition() = 4;
}

void FORTE_HandlingSkill::alg_RobotGoTo11(void){
RobotPosition() = 11;
}

void FORTE_HandlingSkill::alg_RobotGoTo12(void){
RobotPosition() = 12;
}

void FORTE_HandlingSkill::alg_RobotGoTo13(void){
RobotPosition() = 13;
}

void FORTE_HandlingSkill::alg_RobotGoTo14(void){
RobotPosition() = 14;
}

void FORTE_HandlingSkill::alg_RobotGoTo99(void){
RobotPosition() = 99;
}


void FORTE_HandlingSkill::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_HandlingSkill::enterStateState_1(void){
  m_nECCState = scm_nStateState_1;
  alg_RobotGoTo1();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
  sendOutputEvent( scm_nEventstartedID);
}

void FORTE_HandlingSkill::enterStateState_2(void){
  m_nECCState = scm_nStateState_2;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_3(void){
  m_nECCState = scm_nStateState_3;
  alg_RobotGoTo11();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_4(void){
  m_nECCState = scm_nStateState_4;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_5(void){
  m_nECCState = scm_nStateState_5;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_6(void){
  m_nECCState = scm_nStateState_6;
  alg_RobotGoTo12();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_7(void){
  m_nECCState = scm_nStateState_7;
  alg_RobotGoTo3();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_8(void){
  m_nECCState = scm_nStateState_8;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_9(void){
  m_nECCState = scm_nStateState_9;
  alg_RobotGoTo13();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_10(void){
  m_nECCState = scm_nStateState_10;
  alg_RobotGoTo4();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_11(void){
  m_nECCState = scm_nStateState_11;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_12(void){
  m_nECCState = scm_nStateState_12;
  alg_RobotGoTo14();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_13(void){
  m_nECCState = scm_nStateState_13;
  alg_RobotGoTo99();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState(void){
  m_nECCState = scm_nStateState;
}

void FORTE_HandlingSkill::enterStateState_15(void){
  m_nECCState = scm_nStateState_15;
  alg_RobotGoTo2();
  sendOutputEvent( scm_nEventRobotPositionUpdID);
  sendAdapterEvent(scm_nARobotAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_16(void){
  m_nECCState = scm_nStateState_16;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_17(void){
  m_nECCState = scm_nStateState_17;
}

void FORTE_HandlingSkill::enterStateState_18(void){
  m_nECCState = scm_nStateState_18;
}

void FORTE_HandlingSkill::enterStateState_14(void){
  m_nECCState = scm_nStateState_14;
}

void FORTE_HandlingSkill::enterStateState_19(void){
  m_nECCState = scm_nStateState_19;
}

void FORTE_HandlingSkill::enterStateState_20(void){
  m_nECCState = scm_nStateState_20;
}

void FORTE_HandlingSkill::enterStateState_21(void){
  m_nECCState = scm_nStateState_21;
}

void FORTE_HandlingSkill::enterStateState_22(void){
  m_nECCState = scm_nStateState_22;
}

void FORTE_HandlingSkill::enterStateState_23(void){
  m_nECCState = scm_nStateState_23;
}

void FORTE_HandlingSkill::enterStateState_24(void){
  m_nECCState = scm_nStateState_24;
}

void FORTE_HandlingSkill::enterStateState_25(void){
  m_nECCState = scm_nStateState_25;
}

void FORTE_HandlingSkill::enterStateState_26(void){
  m_nECCState = scm_nStateState_26;
}

void FORTE_HandlingSkill::enterStateState_27(void){
  m_nECCState = scm_nStateState_27;
}

void FORTE_HandlingSkill::enterStateState_28(void){
  m_nECCState = scm_nStateState_28;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_29(void){
  m_nECCState = scm_nStateState_29;
}

void FORTE_HandlingSkill::enterStateState_30(void){
  m_nECCState = scm_nStateState_30;
}

void FORTE_HandlingSkill::enterStateState_31(void){
  m_nECCState = scm_nStateState_31;
}

void FORTE_HandlingSkill::enterStateState_32(void){
  m_nECCState = scm_nStateState_32;
  sendAdapterEvent(scm_nAGripperAdpNum, FORTE_IAS_Skill::scm_nEventstartID);
}

void FORTE_HandlingSkill::enterStateState_33(void){
  m_nECCState = scm_nStateState_33;
}

void FORTE_HandlingSkill::enterStateState_34(void){
  m_nECCState = scm_nStateState_34;
  sendOutputEvent( scm_nEventstoppedID);
}

void FORTE_HandlingSkill::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(scm_nEventstartID == pa_nEIID)
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_14();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_19();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_20();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_4:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_21();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_5:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_23();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_6:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_24();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_7:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_26();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_8:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_27();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_9:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_17();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_10:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_30();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_11:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_31();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_12:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_18();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_13:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_34();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_15:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Executing"))))
          enterStateState_22();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_16:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_25();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_17:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_28();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_18:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_32();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_14:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_19:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_20:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_21:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_15();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_22:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_5();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_23:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_6();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_24:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_16();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_25:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_7();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_26:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_8();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_27:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_9();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_28:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_29();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_29:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_10();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_30:
        if((ARobot().RSP() == pa_nEIID) && (((ARobot().currentState() == "Idle"))))
          enterStateState_11();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_31:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_12();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_32:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Executing"))))
          enterStateState_33();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_33:
        if((AGripper().RSP() == pa_nEIID) && (((AGripper().currentState() == "Idle"))))
          enterStateState_13();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_34:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 35.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


