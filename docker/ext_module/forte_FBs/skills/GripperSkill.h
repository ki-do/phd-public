/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: GripperSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _GRIPPERSKILL_H_
#define _GRIPPERSKILL_H_

#include <basicfb.h>
#include "IAS_Skill.h"

class FORTE_GripperSkill: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_GripperSkill)

private:
  static const TEventID scm_nEventGrippedID = 0;
  static const TEventID scm_nEventReleasedID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventGripID = 0;
  static const TEventID scm_nEventReleaseID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_IAS_Skill& AGripper() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[0]));
  };
  static const int scm_nAGripperAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(2, 0, 0, 0, 1);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_2 = 2;
  static const TForteInt16 scm_nStateState_3 = 3;
  static const TForteInt16 scm_nStateState_4 = 4;

  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_2(void);
  void enterStateState_3(void);
  void enterStateState_4(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_GripperSkill(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_GripperSkill(){};

};

#endif //close the ifdef sequence from the beginning of the file

