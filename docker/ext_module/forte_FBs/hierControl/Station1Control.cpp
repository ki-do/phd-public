/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: Station1Control
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#include "Station1Control.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Station1Control_gen.cpp"
#endif


DEFINE_FIRMWARE_FB(FORTE_Station1Control, g_nStringIdStation1Control)



const TForteInt16 FORTE_Station1Control::scm_anEIWithIndexes[] = {-1};
const CStringDictionary::TStringId FORTE_Station1Control::scm_anEventInputNames[] = {g_nStringIddoRound};


const SAdapterInstanceDef FORTE_Station1Control::scm_astAdapterInstances[] = {
  {g_nStringIdADepot, g_nStringIdADepot, true},
  {g_nStringIdAHandling, g_nStringIdAHandling, true}
};

const SFBInterfaceSpec FORTE_Station1Control::scm_stFBInterfaceSpec = {
  1, scm_anEventInputNames, nullptr, scm_anEIWithIndexes,
  0, nullptr, nullptr, nullptr,
  0, nullptr, nullptr,
  0, nullptr, nullptr,
  2, scm_astAdapterInstances
};


void FORTE_Station1Control::enterStateSTART(void) {
  m_nECCState = scm_nStateSTART;
}

void FORTE_Station1Control::enterStateState(void) {
  m_nECCState = scm_nStateState;
  sendAdapterEvent(scm_nADepotAdpNum, FORTE_ADepot::scm_nEventGetSpinnerID);
}

void FORTE_Station1Control::enterStateState_1(void) {
  m_nECCState = scm_nStateState_1;
  sendAdapterEvent(scm_nAHandlingAdpNum, FORTE_AHandling::scm_nEventPrepareSpinnerID);
}


void FORTE_Station1Control::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do {
    bTransitionCleared = true;
    switch(m_nECCState) {
      case scm_nStateSTART:
        if(scm_nEventdoRoundID == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if(st_ADepot().Ready() == pa_nEIID)
          enterStateState_1();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState_1:
        if(st_AHandling().Ready() == pa_nEIID)
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
        DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 3.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; // 0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID; // we have to clear the event after the first check in order to ensure correct behavior
  } while(bTransitionCleared);
}


