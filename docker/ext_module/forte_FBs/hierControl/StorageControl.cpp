/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: StorageControl
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#include "StorageControl.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "StorageControl_gen.cpp"
#include <stdio.h>

#endif

DEFINE_FIRMWARE_FB(FORTE_StorageControl, g_nStringIdStorageControl)

const TForteInt16 FORTE_StorageControl::scm_anEIWithIndexes[] = {-1, -1};
const CStringDictionary::TStringId FORTE_StorageControl::scm_anEventInputNames[] = {g_nStringIdIsIn, g_nStringIdIsOut};

const TForteInt16 FORTE_StorageControl::scm_anEOWithIndexes[] = {-1, -1, -1};
const CStringDictionary::TStringId FORTE_StorageControl::scm_anEventOutputNames[] = {g_nStringIdGoIn, g_nStringIdGoOut};

const SAdapterInstanceDef FORTE_StorageControl::scm_astAdapterInstances[] = {
{g_nStringIdAStorage, g_nStringIdAStorage, false }};

const SFBInterfaceSpec FORTE_StorageControl::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  2,  scm_anEventOutputNames,  0, 0,  0,  0, 0, 
  0,  0, 0,
  1,scm_astAdapterInstances};


void FORTE_StorageControl::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_StorageControl::enterStateState_1(void){
  printf("Storage: go in\n");
  m_nECCState = scm_nStateState_1;
  sendOutputEvent( scm_nEventGoInID);
}

void FORTE_StorageControl::enterStateState_3(void){
  printf("Storage: go out\n");
  m_nECCState = scm_nStateState_3;
  sendOutputEvent( scm_nEventGoOutID);
}

void FORTE_StorageControl::enterStateState_2(void){
  printf("Storage: is out\n");
  m_nECCState = scm_nStateState_2;
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_AStorage::scm_nEventIsOutID);
}

void FORTE_StorageControl::enterStateState_4(void){
  printf("Storage: is in\n");
  m_nECCState = scm_nStateState_4;
  sendAdapterEvent(scm_nAStorageAdpNum, FORTE_AStorage::scm_nEventIsInID);
}

void FORTE_StorageControl::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if(AStorage().GoOut() == pa_nEIID)
          enterStateState_3();
        else
        if(AStorage().GoIn() == pa_nEIID)
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


