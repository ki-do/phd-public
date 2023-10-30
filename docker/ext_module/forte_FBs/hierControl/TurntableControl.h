/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: TurntableControl
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _TURNTABLECONTROL_H_
#define _TURNTABLECONTROL_H_

#include "basicfb.h"
#include "forte_word.h"
#include "forte_array_at.h"
#include "ATurntable.h"


class FORTE_TurntableControl: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_TurntableControl)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventPositionUpdID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventTurnID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  
  static const int scm_nATurntableAdpNum = 0;
  
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
  CIEC_WORD &st_CurrentPosition() {
    return *static_cast<CIEC_WORD*>(getDI(0));
  }
  
  CIEC_WORD &st_PresetPosition() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  }
  
  FORTE_ATurntable& st_ATurntable() {
    return (*static_cast<FORTE_ATurntable*>(m_apoAdapters[0]));
  };
  

  void alg_PresetPositionUpdate(void);
  void alg_CurrentPositionUpdate(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_2 = 2;
  
  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_2(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(1, 1, 1, 0, 1);

public:
  FORTE_TurntableControl(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_TurntableControl() = default;
};

#endif // _TURNTABLECONTROL_H_


