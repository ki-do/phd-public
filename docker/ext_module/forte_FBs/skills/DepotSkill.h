/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: DepotSkill
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _DEPOTSKILL_H_
#define _DEPOTSKILL_H_

#include <basicfb.h>
#include <forte_word.h>
#include "IAS_Skill.h"

class FORTE_DepotSkill: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_DepotSkill)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_WORD &TurntablePresetPosition() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  };

  static const TEventID scm_nEventstartID = 0;
  static const TEventID scm_nEventstopID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventstartedID = 0;
  static const TEventID scm_nEventstoppedID = 1;
  static const TEventID scm_nEventTurntablePresetPositionUpdID = 2;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_IAS_Skill& AStorage() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[0]));
  };
  static const int scm_nAStorageAdpNum = 0;
  FORTE_IAS_Skill& ATurntable() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[1]));
  };
  static const int scm_nATurntableAdpNum = 1;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(3, 0, 1, 0, 2);
  void alg_TableToPosition3(void);
  void alg_TableToPosition1(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_2 = 2;
  static const TForteInt16 scm_nStateState_3 = 3;
  static const TForteInt16 scm_nStateState_4 = 4;
  static const TForteInt16 scm_nStateState = 5;
  static const TForteInt16 scm_nStateState_5 = 6;
  static const TForteInt16 scm_nStateState_6 = 7;
  static const TForteInt16 scm_nStateState_7 = 8;
  static const TForteInt16 scm_nStateState_8 = 9;

  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_2(void);
  void enterStateState_3(void);
  void enterStateState_4(void);
  void enterStateState(void);
  void enterStateState_5(void);
  void enterStateState_6(void);
  void enterStateState_7(void);
  void enterStateState_8(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_DepotSkill(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_DepotSkill(){};

};

#endif //close the ifdef sequence from the beginning of the file

