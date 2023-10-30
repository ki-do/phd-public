/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x NG!
 ***
 *** Name: ASTORAGE_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version:
***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _ASTORAGE_MUX_H_
#define _ASTORAGE_MUX_H_

#include "cfb.h"
#include "typelib.h"
#include "forte_array_at.h"
#include "AStorage.h"


class FORTE_ASTORAGE_MUX: public CCompositeFB {
  DECLARE_FIRMWARE_FB(FORTE_ASTORAGE_MUX)

private:
  
  
  static const TEventID scm_nEventGoInID = 0;
  static const TEventID scm_nEventGoOutID = 1;
  
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];
  
  static const TEventID scm_nEventIsInID = 0;
  static const TEventID scm_nEventIsOutID = 1;
  
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];
  
  static const int scm_nAStorageAdpNum = 0;
  
  static const SAdapterInstanceDef scm_astAdapterInstances[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

  static const SCFB_FBParameter scm_astParamters[];
  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];
  static const SCFB_FBNData scm_stFBNData;

  FORTE_AStorage& st_AStorage() {
    return (*static_cast<FORTE_AStorage*>(m_apoAdapters[0]));
  };
  

  FORTE_FB_DATA_ARRAY(2, 0, 0, 1);

public:
  FORTE_ASTORAGE_MUX(const CStringDictionary::TStringId pa_nInstanceNameId, CResource *pa_poSrcRes) :
      CCompositeFB(pa_poSrcRes, &scm_stFBInterfaceSpec, pa_nInstanceNameId, &scm_stFBNData, m_anFBConnData, m_anFBVarsData) {
  };

  virtual ~FORTE_ASTORAGE_MUX() = default;
};

#endif // _ASTORAGE_MUX_H_


