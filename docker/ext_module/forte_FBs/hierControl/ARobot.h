/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ARobot
 *** Description: Adapter Interface
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _AROBOT_H_
#define _AROBOT_H_

#include "adapter.h"
#include "typelib.h"
#include "forte_word.h"
#include "forte_array_at.h"

package fb.test;

class FORTE_ARobot: public CAdapter {
  DECLARE_ADAPTER_TYPE(FORTE_ARobot)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  public:
  	static const TEventID scm_nEventPositionUpdateID = 0;
  
  private:
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  public:
  	static const TEventID scm_nEventPresetPositionUpdID = 0;
  
  private:
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;
  
  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

  CIEC_WORD &CurrentPosition() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDI(0) : getDO(0));
  }
  
  CIEC_WORD &PresetPosition() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDO(0) : getDI(0));
  }
  

public:
  int PositionUpdate() {
    return m_nParentAdapterListEventID + scm_nEventPositionUpdateID;
  }
  
  int PresetPositionUpd() {
    return m_nParentAdapterListEventID + scm_nEventPresetPositionUpdID;
  }
  

private:
  FORTE_ADAPTER_DATA_ARRAY(1, 1, 1, 1, 0);

public:
  FORTE_ARobot(CStringDictionary::TStringId pa_anAdapterInstanceName, CResource *pa_poSrcRes, bool pa_bIsPlug) :
      CAdapter(pa_poSrcRes, &scm_stFBInterfaceSpecSocket, pa_anAdapterInstanceName, &scm_stFBInterfaceSpecPlug, pa_bIsPlug, m_anFBConnData, m_anFBVarsData) {	
   };

  virtual ~FORTE_ARobot() = default;
};

#endif // _AROBOT_H_


