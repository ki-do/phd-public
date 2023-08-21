/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IAS_Skill_StateModel
 *** Description: Tamplate for a simple Basic Function Block Type
 *** Version: 
 ***     0.0: 2018-05-17/4DIAC-IDE - 4DIAC-Consortium - 
 ***     1.0: 2016-05-26/AZ - fortiss GmbH - 
 *************************************************************************/

#include "IAS_Skill_StateModel.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "IAS_Skill_StateModel_gen.cpp"
#endif

DEFINE_FIRMWARE_FB(FORTE_IAS_Skill_StateModel, g_nStringIdIAS_Skill_StateModel)

const CStringDictionary::TStringId FORTE_IAS_Skill_StateModel::scm_anDataOutputNames[] = {g_nStringIdCurrentStatus, g_nStringIdLastTransition};

const CStringDictionary::TStringId FORTE_IAS_Skill_StateModel::scm_anDataOutputTypeIds[] = {g_nStringIdSTRING, g_nStringIdSTRING};

const TForteInt16 FORTE_IAS_Skill_StateModel::scm_anEIWithIndexes[] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_IAS_Skill_StateModel::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdcleanUp, g_nStringIdlock, g_nStringIdreset, g_nStringIdstart, g_nStringIdstop, g_nStringIdsuspend, g_nStringIdunsuspend, g_nStringIdErrorEvent, g_nStringIdStopEvent, g_nStringIdStartEvent};

const TDataIOID FORTE_IAS_Skill_StateModel::scm_anEOWith[] = {0, 1, 255, 0, 1, 255};
const TForteInt16 FORTE_IAS_Skill_StateModel::scm_anEOWithIndexes[] = {0, 3, -1, -1, -1, -1, -1, -1, -1, -1};
const CStringDictionary::TStringId FORTE_IAS_Skill_StateModel::scm_anEventOutputNames[] = {g_nStringIdINITO, g_nStringIdCNF, g_nStringIdcleanUpO, g_nStringIdlockO, g_nStringIdresetO, g_nStringIdstartO, g_nStringIdstopO, g_nStringIdsuspendO, g_nStringIdunsupendO};

const SFBInterfaceSpec FORTE_IAS_Skill_StateModel::scm_stFBInterfaceSpec = {
  11,  scm_anEventInputNames,  0,  scm_anEIWithIndexes,
  9,  scm_anEventOutputNames,  scm_anEOWith, scm_anEOWithIndexes,  0,  0, 0, 
  2,  scm_anDataOutputNames, scm_anDataOutputTypeIds,
  0, 0
};

void FORTE_IAS_Skill_StateModel::alg_IdleState(void){
CurrentStatus() = "Idle";
}

void FORTE_IAS_Skill_StateModel::alg_SuspendedState(void){
CurrentStatus() = "Suspended";
}

void FORTE_IAS_Skill_StateModel::alg_LockedState(void){
CurrentStatus() = "Locked";

}

void FORTE_IAS_Skill_StateModel::alg_ExecutingState(void){
CurrentStatus() = "Executing";
}

void FORTE_IAS_Skill_StateModel::alg_ExecutingToIdle(void){
LastTransition() = "ExecutingToIdle";
}

void FORTE_IAS_Skill_StateModel::alg_ExecutingToLocked(void){
LastTransition() = "ExecutingToLocked";
}

void FORTE_IAS_Skill_StateModel::alg_ExecutingToSuspend(void){
LastTransition() = "ExecutingToSuspend";
}

void FORTE_IAS_Skill_StateModel::alg_IdleToExecuting(void){
LastTransition() = "IdleToExecuting";
}

void FORTE_IAS_Skill_StateModel::alg_IdleToLocked(void){
LastTransition() = "IdleToLocked";
}

void FORTE_IAS_Skill_StateModel::alg_LockedToIdle(void){
LastTransition() = "LockedToIdle";
}

void FORTE_IAS_Skill_StateModel::alg_SuspendedToExecuting(void){
LastTransition() = "SuspendedToExecuting";
}

void FORTE_IAS_Skill_StateModel::alg_SuspendedToIdle(void){
LastTransition() = "SuspendedToIdle";
}

void FORTE_IAS_Skill_StateModel::alg_SuspendedToLocked(void){
LastTransition() = "SuspendedToLocked";
}

void FORTE_IAS_Skill_StateModel::alg_LockedToLocked(void){
LastTransition() = "LockedToLocked";
}

void FORTE_IAS_Skill_StateModel::alg_ExecutingToExecuting(void){
LastTransition() = "ExecutingToExecuting";
}

void FORTE_IAS_Skill_StateModel::alg_NoLastTransition(void){
LastTransition() = "";
}


void FORTE_IAS_Skill_StateModel::enterStateStart(void){
  m_nECCState = scm_nStateStart;
}

void FORTE_IAS_Skill_StateModel::enterStateIdleFromExecuting(void){
  m_nECCState = scm_nStateIdleFromExecuting;
  alg_IdleState();
  alg_ExecutingToIdle();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventstopOID);
}

void FORTE_IAS_Skill_StateModel::enterStateExecutingFromIdle(void){
  m_nECCState = scm_nStateExecutingFromIdle;
  alg_ExecutingState();
  alg_IdleToExecuting();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventstartOID);
}

void FORTE_IAS_Skill_StateModel::enterStateSuspended(void){
  m_nECCState = scm_nStateSuspended;
  alg_SuspendedState();
  alg_ExecutingToSuspend();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventsuspendOID);
}

void FORTE_IAS_Skill_StateModel::enterStateIdleFromSuspended(void){
  m_nECCState = scm_nStateIdleFromSuspended;
  alg_IdleState();
  alg_SuspendedToIdle();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventcleanUpOID);
}

void FORTE_IAS_Skill_StateModel::enterStateLockedFromExecuting(void){
  m_nECCState = scm_nStateLockedFromExecuting;
  alg_LockedState();
  alg_ExecutingToLocked();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventlockOID);
}

void FORTE_IAS_Skill_StateModel::enterStateLockedFromSuspended(void){
  m_nECCState = scm_nStateLockedFromSuspended;
  alg_LockedState();
  alg_SuspendedToLocked();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_IAS_Skill_StateModel::enterStateLockedFromIdle(void){
  m_nECCState = scm_nStateLockedFromIdle;
  alg_LockedState();
  alg_IdleToLocked();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventlockOID);
}

void FORTE_IAS_Skill_StateModel::enterStateExecutingFromSuspended(void){
  m_nECCState = scm_nStateExecutingFromSuspended;
  alg_ExecutingState();
  alg_SuspendedToExecuting();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventunsupendOID);
}

void FORTE_IAS_Skill_StateModel::enterStateIdleFromLocked(void){
  m_nECCState = scm_nStateIdleFromLocked;
  alg_IdleState();
  alg_LockedToIdle();
  sendOutputEvent( scm_nEventCNFID);
  sendOutputEvent( scm_nEventresetOID);
}

void FORTE_IAS_Skill_StateModel::enterStateLockedInitial(void){
  m_nECCState = scm_nStateLockedInitial;
  alg_LockedState();
  sendOutputEvent( scm_nEventINITOID);
  alg_NoLastTransition();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_IAS_Skill_StateModel::enterStateLockedFromLocked(void){
  m_nECCState = scm_nStateLockedFromLocked;
  alg_LockedState();
  alg_LockedToLocked();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_IAS_Skill_StateModel::enterStateExecutingFromExecuting(void){
  m_nECCState = scm_nStateExecutingFromExecuting;
  alg_ExecutingState();
  alg_ExecutingToExecuting();
  sendOutputEvent( scm_nEventCNFID);
}

void FORTE_IAS_Skill_StateModel::enterStateState(void){
  m_nECCState = scm_nStateState;
  sendOutputEvent( scm_nEventINITOID);
}

void FORTE_IAS_Skill_StateModel::executeEvent(int pa_nEIID){
  bool bTransitionCleared;
  do{
    bTransitionCleared = true;
    switch(m_nECCState){
      case scm_nStateStart:
        if(scm_nEventINITID == pa_nEIID)
          enterStateState();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateIdleFromExecuting:
        if(scm_nEventstartID == pa_nEIID)
          enterStateExecutingFromIdle();
        else
        if(scm_nEventlockID == pa_nEIID)
          enterStateLockedFromIdle();
        else
        if(scm_nEventErrorEventID == pa_nEIID)
          enterStateLockedFromIdle();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateExecutingFromIdle();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateExecutingFromIdle:
        if(scm_nEventstopID == pa_nEIID)
          enterStateIdleFromExecuting();
        else
        if(scm_nEventErrorEventID == pa_nEIID)
          enterStateLockedFromExecuting();
        else
        if(scm_nEventsuspendID == pa_nEIID)
          enterStateSuspended();
        else
        if(scm_nEventlockID == pa_nEIID)
          enterStateExecutingFromExecuting();
        else
        if(scm_nEventStopEventID == pa_nEIID)
          enterStateIdleFromExecuting();
        else
        if(scm_nEventstartID == pa_nEIID)
          enterStateExecutingFromIdle();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateSuspended:
        if(scm_nEventunsuspendID == pa_nEIID)
          enterStateExecutingFromSuspended();
        else
        if(scm_nEventcleanUpID == pa_nEIID)
          enterStateIdleFromSuspended();
        else
        if(scm_nEventErrorEventID == pa_nEIID)
          enterStateLockedFromSuspended();
        else
        if(scm_nEventStopEventID == pa_nEIID)
          enterStateIdleFromSuspended();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateIdleFromSuspended:
        if(scm_nEventlockID == pa_nEIID)
          enterStateLockedFromIdle();
        else
        if(scm_nEventstartID == pa_nEIID)
          enterStateExecutingFromIdle();
        else
        if(scm_nEventErrorEventID == pa_nEIID)
          enterStateLockedFromIdle();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateExecutingFromIdle();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateLockedFromExecuting:
        if(scm_nEventresetID == pa_nEIID)
          enterStateIdleFromLocked();
        else
        if(scm_nEventstartID == pa_nEIID)
          enterStateLockedFromLocked();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateLockedFromLocked();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateLockedFromSuspended:
        if(scm_nEventresetID == pa_nEIID)
          enterStateIdleFromLocked();
        else
        if(scm_nEventstartID == pa_nEIID)
          enterStateLockedFromLocked();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateLockedFromLocked();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateLockedFromIdle:
        if(scm_nEventstartID == pa_nEIID)
          enterStateLockedFromLocked();
        else
        if(scm_nEventresetID == pa_nEIID)
          enterStateIdleFromLocked();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateLockedFromLocked();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateExecutingFromSuspended:
        if(scm_nEventstopID == pa_nEIID)
          enterStateIdleFromExecuting();
        else
        if(scm_nEventErrorEventID == pa_nEIID)
          enterStateLockedFromExecuting();
        else
        if(scm_nEventsuspendID == pa_nEIID)
          enterStateSuspended();
        else
        if(scm_nEventlockID == pa_nEIID)
          enterStateExecutingFromExecuting();
        else
        if(scm_nEventStopEventID == pa_nEIID)
          enterStateIdleFromExecuting();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateIdleFromLocked:
        if(scm_nEventstartID == pa_nEIID)
          enterStateExecutingFromIdle();
        else
        if(scm_nEventlockID == pa_nEIID)
          enterStateLockedFromIdle();
        else
        if(scm_nEventErrorEventID == pa_nEIID)
          enterStateLockedFromIdle();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateExecutingFromIdle();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateLockedInitial:
        if(scm_nEventresetID == pa_nEIID)
          enterStateIdleFromLocked();
        else
        if(scm_nEventstartID == pa_nEIID)
          enterStateLockedFromLocked();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateLockedFromLocked();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateLockedFromLocked:
        if(scm_nEventstartID == pa_nEIID)
          enterStateLockedFromLocked();
        else
        if(scm_nEventresetID == pa_nEIID)
          enterStateIdleFromLocked();
        else
        if(scm_nEventStartEventID == pa_nEIID)
          enterStateLockedFromLocked();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateExecutingFromExecuting:
        if(scm_nEventstopID == pa_nEIID)
          enterStateIdleFromExecuting();
        else
        if(scm_nEventErrorEventID == pa_nEIID)
          enterStateLockedFromExecuting();
        else
        if(scm_nEventsuspendID == pa_nEIID)
          enterStateSuspended();
        else
        if(scm_nEventlockID == pa_nEIID)
          enterStateExecutingFromExecuting();
        else
        if(scm_nEventStopEventID == pa_nEIID)
          enterStateIdleFromExecuting();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      case scm_nStateState:
        if((1))
          enterStateIdleFromLocked();
        else
          bTransitionCleared  = false; //no transition cleared
        break;
      default:
      DEVLOG_ERROR("The state is not in the valid range! The state value is: %d. The max value can be: 13.", m_nECCState.operator TForteUInt16 ());
        m_nECCState = 0; //0 is always the initial state
        break;
    }
    pa_nEIID = cg_nInvalidEventID;  // we have to clear the event after the first check in order to ensure correct behavior
  }while(bTransitionCleared);
}


