/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AHandling
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _AHANDLING_H_
#define _AHANDLING_H_

#include "adapter.h"
#include "typelib.h"
#include "forte_array_at.h"

package fb.test;

class FORTE_AHandling: public CAdapter {
  DECLARE_ADAPTER_TYPE(FORTE_AHandling)

private:
  
  
  public:
  	static const TEventID scm_nEventReadyID = 0;
  
  private:
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  public:
  	static const TEventID scm_nEventPrepareSpinnerID = 0;
  
  private:
  
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;
  
  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;


public:
  int Ready() {
    return m_nParentAdapterListEventID + scm_nEventReadyID;
  }
  
  int PrepareSpinner() {
    return m_nParentAdapterListEventID + scm_nEventPrepareSpinnerID;
  }
  

private:
  FORTE_ADAPTER_DATA_ARRAY(1, 1, 0, 0, 0);

public:
  FORTE_AHandling(CStringDictionary::TStringId pa_anAdapterInstanceName, CResource *pa_poSrcRes, bool pa_bIsPlug) :
      CAdapter(pa_poSrcRes, &scm_stFBInterfaceSpecSocket, pa_anAdapterInstanceName, &scm_stFBInterfaceSpecPlug, pa_bIsPlug, m_anFBConnData, m_anFBVarsData) {	
   };

  virtual ~FORTE_AHandling() = default;
};

#endif // _AHANDLING_H_


