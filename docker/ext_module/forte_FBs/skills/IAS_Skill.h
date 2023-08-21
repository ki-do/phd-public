/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IAS_Skill
 *** Description: 
 *** Version: 
 *************************************************************************/

#ifndef _IAS_SKILL_H_
#define _IAS_SKILL_H_

#include <adapter.h>
#include <typelib.h>
#include <forte_string.h>

class FORTE_IAS_Skill: public CAdapter{
  DECLARE_ADAPTER_TYPE(FORTE_IAS_Skill)

private:
 private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
 public:
  CIEC_STRING &currentState() {
    return *static_cast<CIEC_STRING*>((isSocket()) ? getDI(0) : getDO(0));
  };

  CIEC_STRING &lastTransition() {
    return *static_cast<CIEC_STRING*>((isSocket()) ? getDI(1) : getDO(1));
  };

 public:
  static const TEventID scm_nEventRSPID = 0;
  int RSP() {
    return m_nParentAdapterListEventID + scm_nEventRSPID;
  }
 private:
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

 public:
  static const TEventID scm_nEventcleanUpID = 0;
  int cleanUp() {
    return m_nParentAdapterListEventID + scm_nEventcleanUpID;
  }
  static const TEventID scm_nEventlockID = 1;
  int lock() {
    return m_nParentAdapterListEventID + scm_nEventlockID;
  }
  static const TEventID scm_nEventresetID = 2;
  int reset() {
    return m_nParentAdapterListEventID + scm_nEventresetID;
  }
  static const TEventID scm_nEventstartID = 3;
  int start() {
    return m_nParentAdapterListEventID + scm_nEventstartID;
  }
  static const TEventID scm_nEventstopID = 4;
  int stop() {
    return m_nParentAdapterListEventID + scm_nEventstopID;
  }
  static const TEventID scm_nEventsuspendID = 5;
  int suspend() {
    return m_nParentAdapterListEventID + scm_nEventsuspendID;
  }
  static const TEventID scm_nEventunsuspendID = 6;
  int unsuspend() {
    return m_nParentAdapterListEventID + scm_nEventunsuspendID;
  }
 private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;

  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

   FORTE_ADAPTER_DATA_ARRAY(1, 7, 2, 0, 0);

public:
  ADAPTER_CTOR(FORTE_IAS_Skill){
  };

  virtual ~FORTE_IAS_Skill(){};

};

#endif //close the ifdef sequence from the beginning of the file

