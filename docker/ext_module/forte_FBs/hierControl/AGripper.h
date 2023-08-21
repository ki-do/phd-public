/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: AGripper
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#ifndef _AGRIPPER_H_
#define _AGRIPPER_H_

#include <adapter.h>
#include <typelib.h>

class FORTE_AGripper: public CAdapter{
  DECLARE_ADAPTER_TYPE(FORTE_AGripper)

private:
 public:
  static const TEventID scm_nEventGrippedID = 0;
  int Gripped() {
    return m_nParentAdapterListEventID + scm_nEventGrippedID;
  }
  static const TEventID scm_nEventReleasedID = 1;
  int Released() {
    return m_nParentAdapterListEventID + scm_nEventReleasedID;
  }
 private:
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

 public:
  static const TEventID scm_nEventGripID = 0;
  int Grip() {
    return m_nParentAdapterListEventID + scm_nEventGripID;
  }
  static const TEventID scm_nEventReleaseID = 1;
  int Release() {
    return m_nParentAdapterListEventID + scm_nEventReleaseID;
  }
 private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;

  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

   FORTE_ADAPTER_DATA_ARRAY(2, 2, 0, 0, 0);

public:
  ADAPTER_CTOR(FORTE_AGripper){
  };

  virtual ~FORTE_AGripper(){};

};

#endif //close the ifdef sequence from the beginning of the file

