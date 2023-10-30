/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AGRIPPER_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _AGRIPPER_MUX_H_
#define _AGRIPPER_MUX_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_array_at.h"
#include "AGripper.h"


class FORTE_AGRIPPER_MUX: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_AGRIPPER_MUX)

private:
  
  
  static const TEventID scm_nEventGripID = 0;
  static const TEventID scm_nEventReleaseID = 1;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventGrippedID = 0;
  static const TEventID scm_nEventReleasedID = 1;
  
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  
  static const int scm_nAGripperAdpNum = 0;
  
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBNData scm_stFBNData;

  FORTE_AGripper& st_AGripper() {
    return (*static_cast<FORTE_AGripper*>(m_apoAdapters[0]));
  };
  

  FORTE_FB_DATA_ARRAY(2, 0, 0, 1);

public:
  FORTE_AGRIPPER_MUX(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_AGRIPPER_MUX() = default;
};

#endif // _AGRIPPER_MUX_H_


