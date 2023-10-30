/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ATurntable
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _ATURNTABLE_H_
#define _ATURNTABLE_H_

#include "adapter.h"
#include "typelib.h"
#include "forte_word.h"
#include "forte_array_at.h"

package fb.test;

class FORTE_ATurntable: public CAdapter {
  DECLARE_ADAPTER_TYPE(FORTE_ATurntable)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  public:
  	static const TEventID scm_nEventPositionUpdID = 0;
  
  private:
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  public:
  	static const TEventID scm_nEventNewPositionID = 0;
  
  private:
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;
  
  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

  CIEC_WORD &CurrentPosition() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDI(0) : getDO(0));
  }
  
  CIEC_WORD &Position() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDO(0) : getDI(0));
  }
  

public:
  int PositionUpd() {
    return m_nParentAdapterListEventID + scm_nEventPositionUpdID;
  }
  
  int NewPosition() {
    return m_nParentAdapterListEventID + scm_nEventNewPositionID;
  }
  

private:
  FORTE_ADAPTER_DATA_ARRAY(1, 1, 1, 1, 0);

public:
  FORTE_ATurntable(CStringDictionary::TStringId pa_anAdapterInstanceName, CResource *pa_poSrcRes, bool pa_bIsPlug) :
      CAdapter(pa_poSrcRes, &scm_stFBInterfaceSpecSocket, pa_anAdapterInstanceName, &scm_stFBInterfaceSpecPlug, pa_bIsPlug, m_anFBConnData, m_anFBVarsData) {	
   };

  virtual ~FORTE_ATurntable() = default;
};

#endif // _ATURNTABLE_H_


