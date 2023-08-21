/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Station1Control
 *** Description: Basic FB with empty ECC
 *** Version: 
 ***     1.0: 2021-09-15/dorofeev - null - 
 *************************************************************************/

#ifndef _STATION1CONTROL_H_
#define _STATION1CONTROL_H_

#include <basicfb.h>
#include "ADepot.h"
#include "AHandling.h"

class FORTE_Station1Control: public CBasicFB{
  DECLARE_FIRMWARE_FB(FORTE_Station1Control)

private:
  static const TEventID scm_nEventdoRoundID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TForteInt16 scm_anEOWithIndexes[];
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_ADepot& ADepot() {
    return (*static_cast<FORTE_ADepot*>(m_apoAdapters[0]));
  };
  static const int scm_nADepotAdpNum = 0;
  FORTE_AHandling& AHandling() {
    return (*static_cast<FORTE_AHandling*>(m_apoAdapters[1]));
  };
  static const int scm_nAHandlingAdpNum = 1;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_BASIC_FB_DATA_ARRAY(0, 0, 0, 0, 2);
  static const TForteInt16 scm_nStateSTART = 0;
  static const TForteInt16 scm_nStateState = 1;
  static const TForteInt16 scm_nStateState_1 = 2;

  void enterStateSTART(void);
  void enterStateState(void);
  void enterStateState_1(void);

  virtual void executeEvent(int pa_nEIID);

public:
  FORTE_Station1Control(CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) : 
       CBasicFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId,
              0, m_anFBConnData, m_anFBVarsData){
  };

  virtual ~FORTE_Station1Control(){};

};

#endif //close the ifdef sequence from the beginning of the file

