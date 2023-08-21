/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Station1Skill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _STATION1SKILL_H_
#define _STATION1SKILL_H_

#include <basicfb.h>
#include "IAS_Skill.h"

class FORTE_Station1Skill: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_Station1Skill)

private:
  static const TEventID scm_nEventdoRoundID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TForteInt16 scm_anEOWithIndexes[];
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_IAS_Skill& ADepot() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[0]));
  };
  static const int scm_nADepotAdpNum = 0;
  FORTE_IAS_Skill& AHandling() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[1]));
  };
  static const int scm_nAHandlingAdpNum = 1;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(0, 0, 0, 0, 2);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState = 1;
  static const TForteInt16 scm_nStateState_1 = 2;
  static const TForteInt16 scm_nStateState_2 = 3;
  static const TForteInt16 scm_nStateState_3 = 4;

  void enterStateSTART(void);
  void enterStateState(void);
  void enterStateState_1(void);
  void enterStateState_2(void);
  void enterStateState_3(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_Station1Skill(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_Station1Skill(){};

};

#endif //close the ifdef sequence from the beginning of the file

