/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: DepotControl
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _DEPOTCONTROL_H_
#define _DEPOTCONTROL_H_

#include <basicfb.h>
#include "ADepot.h"
#include "AStorage.h"
#include "ATurntable.h"

class FORTE_DepotControl: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_DepotControl)

private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_AStorage& AStorage() {
    return (*static_cast<FORTE_AStorage*>(m_apoAdapters[0]));
  };
  static const int scm_nAStorageAdpNum = 0;
  FORTE_ATurntable& ATurntable() {
    return (*static_cast<FORTE_ATurntable*>(m_apoAdapters[1]));
  };
  static const int scm_nATurntableAdpNum = 1;
  FORTE_ADepot& ADepot() {
    return (*static_cast<FORTE_ADepot*>(m_apoAdapters[2]));
  };
  static const int scm_nADepotAdpNum = 2;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(0, 0, 0, 0, 3);
  void alg_TableToPosition3(void);
  void alg_TableToPosition1(void);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState_1 = 1;
  static const TForteInt16 scm_nStateState_2 = 2;
  static const TForteInt16 scm_nStateState_3 = 3;
  static const TForteInt16 scm_nStateState_4 = 4;
  static const TForteInt16 scm_nStateState = 5;

  void enterStateSTART(void);
  void enterStateState_1(void);
  void enterStateState_2(void);
  void enterStateState_3(void);
  void enterStateState_4(void);
  void enterStateState(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_DepotControl(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_DepotControl(){};

};

#endif //close the ifdef sequence from the beginning of the file

