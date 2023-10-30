/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: HandlingControl
 *** Description: Basic FB with empty ECC
 *** Version:
***     1.0: 2021-09-15/dorofeev -  - 
 *************************************************************************/

#ifndef _HANDLINGCONTROL_H_
#define _HANDLINGCONTROL_H_

#include "basicfb.h"
#include "forte_array_at.h"
#include "AGripper.h"
#include "AHandling.h"
#include "ARobot.h"


class FORTE_HandlingControl: public CBasicFB {
  DECLARE_FIRMWARE_FB(FORTE_HandlingControl)

private:
  
  
  
  
  static const int scm_nAHandlingAdpNum = 0;
  static const int scm_nAGripperAdpNum = 1;
  static const int scm_nARobotAdpNum = 2;
  
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  FORTE_AHandling& st_AHandling() {
    return (*static_cast<FORTE_AHandling*>(m_apoAdapters[0]));
  };
  
  FORTE_AGripper& st_AGripper() {
    return (*static_cast<FORTE_AGripper*>(m_apoAdapters[1]));
  };
  
  FORTE_ARobot& st_ARobot() {
    return (*static_cast<FORTE_ARobot*>(m_apoAdapters[2]));
  };
  

  void alg_RobotGoTo1(void);
  void alg_RobotGoTo2(void);
  void alg_RobotGoTo3(void);
  void alg_RobotGoTo4(void);
  void alg_RobotGoTo11(void);
  void alg_RobotGoTo12(void);
  void alg_RobotGoTo13(void);
  void alg_RobotGoTo14(void);
  void alg_RobotGoTo99(void);

  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_2 = 2;
  static const TForteInt16 scm_nStateState_3 = 3;
  static const TForteInt16 scm_nStateState_4 = 4;
  static const TForteInt16 scm_nStateState_5 = 5;
  static const TForteInt16 scm_nStateState_6 = 6;
  static const TForteInt16 scm_nStateState_7 = 7;
  static const TForteInt16 scm_nStateState_8 = 8;
  static const TForteInt16 scm_nStateState_9 = 9;
  static const TForteInt16 scm_nStateState_10 = 10;
  static const TForteInt16 scm_nStateState_11 = 11;
  static const TForteInt16 scm_nStateState_12 = 12;
  static const TForteInt16 scm_nStateState_13 = 13;
  static const TForteInt16 scm_nStateState = 14;
  static const TForteInt16 scm_nStateState_14 = 15;
  static const TForteInt16 scm_nStateState_15 = 16;
  static const TForteInt16 scm_nStateState_16 = 17;
  static const TForteInt16 scm_nStateState_17 = 18;
  static const TForteInt16 scm_nStateState_18 = 19;
  
  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_2(void);
  void enterStateState_3(void);
  void enterStateState_4(void);
  void enterStateState_5(void);
  void enterStateState_6(void);
  void enterStateState_7(void);
  void enterStateState_8(void);
  void enterStateState_9(void);
  void enterStateState_10(void);
  void enterStateState_11(void);
  void enterStateState_12(void);
  void enterStateState_13(void);
  void enterStateState(void);
  void enterStateState_14(void);
  void enterStateState_15(void);
  void enterStateState_16(void);
  void enterStateState_17(void);
  void enterStateState_18(void);

  virtual void executeEvent(int pa_nEIID);

  FORTE_BASIC_FB_DATA_ARRAY(0, 0, 0, 0, 3);

public:
  FORTE_HandlingControl(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, nullptr, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_HandlingControl() = default;
};

#endif // _HANDLINGCONTROL_H_


