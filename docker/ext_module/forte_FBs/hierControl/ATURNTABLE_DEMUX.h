/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ATURNTABLE_DEMUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _ATURNTABLE_DEMUX_H_
#define _ATURNTABLE_DEMUX_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_word.h"
#include "forte_array_at.h"
#include "ATurntable.h"


class FORTE_ATURNTABLE_DEMUX: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_ATURNTABLE_DEMUX)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  
  static const TEventID scm_nEventPositionUpdID = 0;
  
   static const TDataIOID scm_anEIWith[];
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventNewPositionID = 0;
  
   static const TDataIOID scm_anEOWith[]; 
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  
  static const int scm_nATurntableAdpNum = 0;
  
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

  CIEC_WORD &st_CurrentPosition() {
    return *static_cast<CIEC_WORD*>(getDI(0));
  }
  
  CIEC_WORD &st_Position() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  }
  
  FORTE_ATurntable& st_ATurntable() {
    return (*static_cast<FORTE_ATurntable*>(m_apoAdapters[0]));
  };
  

  FORTE_FB_DATA_ARRAY(1, 1, 1, 1);

public:
  FORTE_ATURNTABLE_DEMUX(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_ATURNTABLE_DEMUX() = default;
};

#endif // _ATURNTABLE_DEMUX_H_


