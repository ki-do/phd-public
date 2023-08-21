/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: RobotSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _ROBOTSKILL_H_
#define _ROBOTSKILL_H_

#include <basicfb.h>
#include <forte_word.h>
#include "IAS_Skill.h"

class FORTE_RobotSkill: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_RobotSkill)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_WORD &CurrentPosition() {
    return *static_cast<CIEC_WORD*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_WORD &Position() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  };

  static const TEventID scm_nEventPositionUpdateID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventCMDID = 0;
  static const TEventID scm_nEventPresetPositionID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_IAS_Skill& ARobot() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[0]));
  };
  static const int scm_nARobotAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(2, 1, 1, 0, 1);
  void alg_PresetPositionUpd(void);
  void alg_CurrentPositionUpd(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_2 = 2;

  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_2(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_RobotSkill(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_RobotSkill(){};

};

#endif //close the ifdef sequence from the beginning of the file

