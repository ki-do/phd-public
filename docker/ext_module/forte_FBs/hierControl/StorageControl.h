/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: StorageControl
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _STORAGECONTROL_H_
#define _STORAGECONTROL_H_

#include <basicfb.h>
#include "AStorage.h"

class FORTE_StorageControl: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_StorageControl)

private:
  static const TEventID scm_nEventIsInID = 0;
  static const TEventID scm_nEventIsOutID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventGoInID = 0;
  static const TEventID scm_nEventGoOutID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_AStorage& AStorage() {
    return (*static_cast<FORTE_AStorage*>(m_apoAdapters[0]));
  };
  static const int scm_nAStorageAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(2, 0, 0, 0, 1);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_3 = 2;
  static const TForteInt16 scm_nStateState_2 = 3;
  static const TForteInt16 scm_nStateState_4 = 4;

  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_3(void);
  void enterStateState_2(void);
  void enterStateState_4(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_StorageControl(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_StorageControl(){};

};

#endif //close the ifdef sequence from the beginning of the file

