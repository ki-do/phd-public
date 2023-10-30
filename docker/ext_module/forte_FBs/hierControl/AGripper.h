/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AGripper
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _AGRIPPER_H_
#define _AGRIPPER_H_

#include "adapter.h"
#include "typelib.h"
#include "forte_array_at.h"

package fb.test;

class FORTE_AGripper: public CAdapter {
  DECLARE_ADAPTER_TYPE(FORTE_AGripper)

private:
  
  
  public:
  	static const TEventID scm_nEventGrippedID = 0;
  	static const TEventID scm_nEventReleasedID = 1;
  
  private:
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  public:
  	static const TEventID scm_nEventGripID = 0;
  	static const TEventID scm_nEventReleaseID = 1;
  
  private:
  
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;
  
  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;


public:
  int Gripped() {
    return m_nParentAdapterListEventID + scm_nEventGrippedID;
  }
  
  int Released() {
    return m_nParentAdapterListEventID + scm_nEventReleasedID;
  }
  
  int Grip() {
    return m_nParentAdapterListEventID + scm_nEventGripID;
  }
  
  int Release() {
    return m_nParentAdapterListEventID + scm_nEventReleaseID;
  }
  

private:
  FORTE_ADAPTER_DATA_ARRAY(2, 2, 0, 0, 0);

public:
  FORTE_AGripper(CStringDictionary::TStringId pa_anAdapterInstanceName, CResource *pa_poSrcRes, bool pa_bIsPlug) :
      CAdapter(pa_poSrcRes, &scm_stFBInterfaceSpecSocket, pa_anAdapterInstanceName, &scm_stFBInterfaceSpecPlug, pa_bIsPlug, m_anFBConnData, m_anFBVarsData) {	
   };

  virtual ~FORTE_AGripper() = default;
};

#endif // _AGRIPPER_H_


