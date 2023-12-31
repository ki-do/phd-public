/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: DepotControl
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#include "DepotControl.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "DepotControl_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_DepotControl, g_nStringIdDepotControl)





const SAdapterInstanceDef FORTE_DepotControl::scm_astAdapterInstances[] = {
  {g_nStringIdADepot, g_nStringIdADepot, false},
  {g_nStringIdAStorage, g_nStringIdAStorage, true},
  {g_nStringIdATurntable, g_nStringIdATurntable, true}
};

const SFBInterfaceSpec FORTE_DepotControl::scm_stFBInterfaceSpec = {
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  3, scm_astAdapterInstances
};

void FORTE_DepotControl::alg_TableToPosition3(void) {
  st_ATurntable().Position() = 3;
}

void FORTE_DepotControl::alg_TableToPosition1(void) {
  st_ATurntable().Position() = 1;
}


void FORTE_DepotControl::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_DepotControl::enterStateState_1(void) {
  m_nECCState = scm_nStateState_1;
  alg_TableToPosition3();
  sendAdapterEvent(scm_nATurntableAdpNum, FORTE_ATurntable::scm_nEventNewPositionID);
}

void FORTE_DepotControl::enterStateState_2(void) {
  m_nECCState = scm_nStateState_2;
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_AStorage::scm_nEventGoOutID);
}

void FORTE_DepotControl::enterStateState_3(void) {
  m_nECCState = scm_nStateState_3;
  sendAdapterEvent(scm_nADepotAdpNum, FORTE_ADepot::scm_nEventReadyID);
}

void FORTE_DepotControl::enterStateState_4(void) {
  m_nECCState = scm_nStateState_4;
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_AStorage::scm_nEventGoInID);
}

void FORTE_DepotControl::enterStateState(void) {
  m_nECCState = scm_nStateState;
  alg_TableToPosition1();
  sendAdapterEvent(scm_nATurntableAdpNum, FORTE_ATurntable::scm_nEventNewPositionID);
}


void FORTE_DepotControl::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(st_ADepot().GetSpinner() == pa_nEIID)
          enterStateState_4();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if((st_ATurntable().PositionUpd() == pa_nEIID) && ((st_ATurntable().CurrentPosition() == 3)))
          enterStateState_2();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_2:
        if(st_AStorage().IsOut() == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_3:
        if(1)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_4:
        if(st_AStorage().IsIn() == pa_nEIID)
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((st_ATurntable().PositionUpd() == pa_nEIID) && ((st_ATurntable().CurrentPosition() == 1)))
          enterStateState_3();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 6.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


