/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: AROBOT_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _AROBOT_MUX_H_
#define _AROBOT_MUX_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_word.h"
#include "forte_array_at.h"
#include "ARobot.h"


class FORTE_AROBOT_MUX: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_AROBOT_MUX)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventPresetPositionUpdID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventPositionUpdateID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  
  static const int scm_nARobotAdpNum = 0;
  
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_WORD &st_PresetPosition() {
    return *static_cast<CIEC_WORD*>(getDI(0));
  }
  
  CIEC_WORD &st_CurrentPosition() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  }
  
  FORTE_ARobot& st_ARobot() {
    return (*static_cast<FORTE_ARobot*>(m_apoAdapters[0]));
  };
  

  FORTE_FB_DATA_ARRAY(1, 1, 1, 1);

public:
  FORTE_AROBOT_MUX(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_AROBOT_MUX() = default;
};

#endif // _AROBOT_MUX_H_


