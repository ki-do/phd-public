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

#ifndef _IAS_SKILL_STATEMODEL_H_
#define _IAS_SKILL_STATEMODEL_H_

#include <basicfb.h>
#include <forte_string.h>

class FORTE_IAS_Skill_StateModel: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_IAS_Skill_StateModel)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_STRING &CurrentStatus() {
    return *static_cast<CIEC_STRING*>(getDO(0));
  };

  CIEC_STRING &LastTransition() {
    return *static_cast<CIEC_STRING*>(getDO(1));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventcleanUpID = 1;
  static const TEventID scm_nEventlockID = 2;
  static const TEventID scm_nEventresetID = 3;
  static const TEventID scm_nEventstartID = 4;
  static const TEventID scm_nEventstopID = 5;
  static const TEventID scm_nEventsuspendID = 6;
  static const TEventID scm_nEventunsuspendID = 7;
  static const TEventID scm_nEventErrorEventID = 8;
  static const TEventID scm_nEventStopEventID = 9;
  static const TEventID scm_nEventStartEventID = 10;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventCNFID = 1;
  static const TEventID scm_nEventcleanUpOID = 2;
  static const TEventID scm_nEventlockOID = 3;
  static const TEventID scm_nEventresetOID = 4;
  static const TEventID scm_nEventstartOID = 5;
  static const TEventID scm_nEventstopOID = 6;
  static const TEventID scm_nEventsuspendOID = 7;
  static const TEventID scm_nEventunsupendOID = 8;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(9, 0, 2, 0, 0);
  void alg_IdleState(void);
  void alg_SuspendedState(void);
  void alg_LockedState(void);
  void alg_ExecutingState(void);
  void alg_ExecutingToIdle(void);
  void alg_ExecutingToLocked(void);
  void alg_ExecutingToSuspend(void);
  void alg_IdleToExecuting(void);
  void alg_IdleToLocked(void);
  void alg_LockedToIdle(void);
  void alg_SuspendedToExecuting(void);
  void alg_SuspendedToIdle(void);
  void alg_SuspendedToLocked(void);
  void alg_LockedToLocked(void);
  void alg_ExecutingToExecuting(void);
  void alg_NoLastTransition(void);
  static const TForteInt16 scm_nStateStart = 0;
  static const TForteInt16 scm_nStateIdleFromExecuting = 1;
  static const TForteInt16 scm_nStateExecutingFromIdle = 2;
  static const TForteInt16 scm_nStateSuspended = 3;
  static const TForteInt16 scm_nStateIdleFromSuspended = 4;
  static const TForteInt16 scm_nStateLockedFromExecuting = 5;
  static const TForteInt16 scm_nStateLockedFromSuspended = 6;
  static const TForteInt16 scm_nStateLockedFromIdle = 7;
  static const TForteInt16 scm_nStateExecutingFromSuspended = 8;
  static const TForteInt16 scm_nStateIdleFromLocked = 9;
  static const TForteInt16 scm_nStateLockedInitial = 10;
  static const TForteInt16 scm_nStateLockedFromLocked = 11;
  static const TForteInt16 scm_nStateExecutingFromExecuting = 12;
  static const TForteInt16 scm_nStateState = 13;

  void enterStateStart(void);
  void enterStateIdleFromExecuting(void);
  void enterStateExecutingFromIdle(void);
  void enterStateSuspended(void);
  void enterStateIdleFromSuspended(void);
  void enterStateLockedFromExecuting(void);
  void enterStateLockedFromSuspended(void);
  void enterStateLockedFromIdle(void);
  void enterStateExecutingFromSuspended(void);
  void enterStateIdleFromLocked(void);
  void enterStateLockedInitial(void);
  void enterStateLockedFromLocked(void);
  void enterStateExecutingFromExecuting(void);
  void enterStateState(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_IAS_Skill_StateModel(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_IAS_Skill_StateModel(){};

};

#endif //close the ifdef sequence from the beginning of the file

