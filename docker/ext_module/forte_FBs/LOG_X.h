/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: LOG_X
 *** Description: Composite FB wrapping other FBs
 *** Version: 
 ***     1.0: 2021-08-05/dorofeev - null - 
 *************************************************************************/

#ifndef _LOG_X_H_
#define _LOG_X_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_bool.h>
#include <forte_string.h>
#include <forte_wstring.h>

class FORTE_LOG_X: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_LOG_X)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_BOOL &QI() {
    return *static_cast<CIEC_BOOL*>(getDI(0));
  };

  CIEC_STRING &PARAMS() {
    return *static_cast<CIEC_STRING*>(getDI(1));
  };

  CIEC_WSTRING &PORT_NAME() {
    return *static_cast<CIEC_WSTRING*>(getDI(2));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 3, 0, 0);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBParameter scm_astParamters[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_LOG_X){
  };

  virtual ~FORTE_LOG_X(){};

};

#endif //close the ifdef sequence from the beginning of the file

