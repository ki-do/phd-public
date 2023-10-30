/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ADepot
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _ADEPOT_H_
#define _ADEPOT_H_

#include "adapter.h"
#include "typelib.h"
#include "forte_word.h"
#include "forte_array_at.h"

package fb.test;

class FORTE_ADepot: public CAdapter {
  DECLARE_ADAPTER_TYPE(FORTE_ADepot)

private:
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  public:
  	static const TEventID scm_nEventReadyID = 0;
  
  private:
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  public:
  	static const TEventID scm_nEventGetSpinnerID = 0;
  
  private:
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;
  
  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

  CIEC_WORD &StoragePosition() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDO(0) : getDI(0));
  }
  

public:
  int Ready() {
    return m_nParentAdapterListEventID + scm_nEventReadyID;
  }
  
  int GetSpinner() {
    return m_nParentAdapterListEventID + scm_nEventGetSpinnerID;
  }
  

private:
  FORTE_ADAPTER_DATA_ARRAY(1, 1, 0, 1, 0);

public:
  FORTE_ADepot(CStringDictionary::TStringId pa_anAdapterInstanceName, CResource *pa_poSrcRes, bool pa_bIsPlug) :
      CAdapter(pa_poSrcRes, &scm_stFBInterfaceSpecSocket, pa_anAdapterInstanceName, &scm_stFBInterfaceSpecPlug, pa_bIsPlug, m_anFBConnData, m_anFBVarsData) {	
   };

  virtual ~FORTE_ADepot() = default;
};

#endif // _ADEPOT_H_


