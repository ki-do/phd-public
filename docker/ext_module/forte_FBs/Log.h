/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Log
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2022-01-29/ki-do - null - 
 *************************************************************************/

#ifndef _LOG_H_
#define _LOG_H_

#include <funcbloc.h>
#include <forte_wstring.h>
#include <forte_int.h>

class FORTE_Log: public CFunctionBlock{
  DECLARE_FIRMWARE_FB(FORTE_Log)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_WSTRING &NAME() {
    return *static_cast<CIEC_WSTRING*>(getDI(0));
  };

  CIEC_INT &VALUE() {
    return *static_cast<CIEC_INT*>(getDI(1));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventREQID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TForteInt16 scm_anEOWithIndexes[];
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(0, 2, 0, 0);

  void executeEvent(int pa_nEIID);

public:
  FUNCTION_BLOCK_CTOR(FORTE_Log){
  };

  virtual ~FORTE_Log(){};

};

#endif //close the ifdef sequence from the beginning of the file

