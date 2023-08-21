/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: CompareInts
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2022-02-08/ki-do -  - 
 *************************************************************************/

#include "CompareInts.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "CompareInts_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_CompareInts, g_nStringIdCompareInts)

const CStringDictionary::TStringId FORTE_CompareInts::scm_anDataInputNames[] = {g_nStringIdNewValue};

const CStringDictionary::TStringId FORTE_CompareInts::scm_anDataInputTypeIds[] = {g_nStringIdINT};

const CStringDictionary::TStringId FORTE_CompareInts::scm_anDataOutputNames[] = {g_nStringIdWriteValue};

const CStringDictionary::TStringId FORTE_CompareInts::scm_anDataOutputTypeIds[] = {g_nStringIdINT};

const TForteInt16 FORTE_CompareInts::scm_anEIWithIndexes[] = {0};
const TDataIOID FORTE_CompareInts::scm_anEIWith[] = {0, 255};
const CStringDictionary::TStringId FORTE_CompareInts::scm_anEventInputNames[] = {g_nStringIdREQ};

const TDataIOID FORTE_CompareInts::scm_anEOWith[] = {0, 255};
const TForteInt16 FORTE_CompareInts::scm_anEOWithIndexes[] = {0, -1};
const CStringDictionary::TStringId FORTE_CompareInts::scm_anEventOutputNames[] = {g_nStringIdCNF};

const CStringDictionary::TStringId FORTE_CompareInts::scm_anInternalsNames[] = {g_nStringIdOldValue};

const CStringDictionary::TStringId FORTE_CompareInts::scm_anInternalsTypeIds[] = {g_nStringIdINT};

const SFBInterfaceSpec FORTE_CompareInts::scm_stFBInterfaceSpec = {
  1,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  1,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  1,  scm_anDataInputNames, scm_anDataInputTypeIds,
  1,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};


const SInternalVarsInformation FORTE_CompareInts::scm_stInternalVars = {1, scm_anInternalsNames, scm_anInternalsTypeIds};


void FORTE_CompareInts::setInitialValues(){
  OldValue() = -32767;
}

void FORTE_CompareInts::alg_CMP(void){
WriteValue() = NewValue();
OldValue() = NewValue();

}


void FORTE_CompareInts::enterStateSTART(void){
  m_nECCState = scm_nStateSTART;
}

void FORTE_CompareInts::enterStateState(void){
  m_nECCState = scm_nStateState;
  alg_CMP();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_CompareInts::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateSTART:
        if((scm_nEventREQID == pa_nEIID) && (((NewValue() != OldValue()))))
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((1))
          enterStateSTART();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 1.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


