/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: RobotControl
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _ROBOTCONTROL_H_
#define _ROBOTCONTROL_H_

#include "basicfb.h"
#include "forte_word.h"
#include "forte_array_at.h"
#include "ARobot.h"


class FORTE_RobotControl: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_RobotControl)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventPositionUpdateID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventCMDID = 0;
  static const TEventID scm_nEventPresetPositionID = 1;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  
  static const int scm_nARobotAdpNum = 0;
  
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

virtual void setInitialValues();
  CIEC_WORD &st_CurrentPosition() {
    return *static_cast<CIEC_WORD*>(getDI(0));
  }
  
  CIEC_WORD &st_Position() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  }
  
  FORTE_ARobot& st_ARobot() {
    return (*static_cast<FORTE_ARobot*>(m_apoAdapters[0]));
  };
  

  void alg_PresetPositionUpd(void);
  void alg_CurrentPositionUpd(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_2 = 2;
  
  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_2(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(2, 1, 1, 0, 1);

public:
  FORTE_RobotControl(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_RobotControl() = default;
};

#endif // _ROBOTCONTROL_H_


