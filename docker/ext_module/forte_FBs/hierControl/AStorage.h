/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AStorage
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _ASTORAGE_H_
#define _ASTORAGE_H_

#include "adapter.h"
#include "typelib.h"
#include "forte_array_at.h"

package fb.test;

class FORTE_AStorage: public CAdapter {
  DECLARE_ADAPTER_TYPE(FORTE_AStorage)

private:
  
  
  public:
  	static const TEventID scm_nEventIsInID = 0;
  	static const TEventID scm_nEventIsOutID = 1;
  
  private:
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  public:
  	static const TEventID scm_nEventGoInID = 0;
  	static const TEventID scm_nEventGoOutID = 1;
  
  private:
  
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;
  
  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;


public:
  int IsIn() {
    return m_nParentAdapterListEventID + scm_nEventIsInID;
  }
  
  int IsOut() {
    return m_nParentAdapterListEventID + scm_nEventIsOutID;
  }
  
  int GoIn() {
    return m_nParentAdapterListEventID + scm_nEventGoInID;
  }
  
  int GoOut() {
    return m_nParentAdapterListEventID + scm_nEventGoOutID;
  }
  

private:
  FORTE_ADAPTER_DATA_ARRAY(2, 2, 0, 0, 0);

public:
  FORTE_AStorage(CStringDictionary::TStringId pa_anAdapterInstanceName, CResource *pa_poSrcRes, bool pa_bIsPlug) :
      CAdapter(pa_poSrcRes, &scm_stFBInterfaceSpecSocket, pa_anAdapterInstanceName, &scm_stFBInterfaceSpecPlug, pa_bIsPlug, m_anFBConnData, m_anFBVarsData) {	
   };

  virtual ~FORTE_AStorage() = default;
};

#endif // _ASTORAGE_H_


