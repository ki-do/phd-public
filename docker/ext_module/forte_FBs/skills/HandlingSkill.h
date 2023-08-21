/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: HandlingSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _HANDLINGSKILL_H_
#define _HANDLINGSKILL_H_

#include <basicfb.h>
#include <forte_word.h>
#include "IAS_Skill.h"

class FORTE_HandlingSkill: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_HandlingSkill)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_WORD &RobotPosition() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  };

  static const TEventID scm_nEventstartID = 0;
  static const TEventID scm_nEventstopID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventstartedID = 0;
  static const TEventID scm_nEventstoppedID = 1;
  static const TEventID scm_nEventRobotPositionUpdID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_IAS_Skill& AGripper() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[0]));
  };
  static const int scm_nAGripperAdpNum = 0;
  FORTE_IAS_Skill& ARobot() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[1]));
  };
  static const int scm_nARobotAdpNum = 1;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(3, 0, 1, 0, 2);
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
  static const TForteInt16 scm_nStateState_15 = 15;
  static const TForteInt16 scm_nStateState_16 = 16;
  static const TForteInt16 scm_nStateState_17 = 17;
  static const TForteInt16 scm_nStateState_18 = 18;
  static const TForteInt16 scm_nStateState_14 = 19;
  static const TForteInt16 scm_nStateState_19 = 20;
  static const TForteInt16 scm_nStateState_20 = 21;
  static const TForteInt16 scm_nStateState_21 = 22;
  static const TForteInt16 scm_nStateState_22 = 23;
  static const TForteInt16 scm_nStateState_23 = 24;
  static const TForteInt16 scm_nStateState_24 = 25;
  static const TForteInt16 scm_nStateState_25 = 26;
  static const TForteInt16 scm_nStateState_26 = 27;
  static const TForteInt16 scm_nStateState_27 = 28;
  static const TForteInt16 scm_nStateState_28 = 29;
  static const TForteInt16 scm_nStateState_29 = 30;
  static const TForteInt16 scm_nStateState_30 = 31;
  static const TForteInt16 scm_nStateState_31 = 32;
  static const TForteInt16 scm_nStateState_32 = 33;
  static const TForteInt16 scm_nStateState_33 = 34;
  static const TForteInt16 scm_nStateState_34 = 35;

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
  void enterStateState_15(void);
  void enterStateState_16(void);
  void enterStateState_17(void);
  void enterStateState_18(void);
  void enterStateState_14(void);
  void enterStateState_19(void);
  void enterStateState_20(void);
  void enterStateState_21(void);
  void enterStateState_22(void);
  void enterStateState_23(void);
  void enterStateState_24(void);
  void enterStateState_25(void);
  void enterStateState_26(void);
  void enterStateState_27(void);
  void enterStateState_28(void);
  void enterStateState_29(void);
  void enterStateState_30(void);
  void enterStateState_31(void);
  void enterStateState_32(void);
  void enterStateState_33(void);
  void enterStateState_34(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_HandlingSkill(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_HandlingSkill(){};

};

#endif //close the ifdef sequence from the beginning of the file

