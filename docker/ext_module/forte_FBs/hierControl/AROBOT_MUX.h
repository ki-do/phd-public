/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: AROBOT_MUX
 *** Description: Composite FB wrapping other FBs
 *** Version: 
 ***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _AROBOT_MUX_H_
#define _AROBOT_MUX_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_word.h>
#include "ARobot.h"

class FORTE_AROBOT_MUX: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_AROBOT_MUX)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_WORD &PresetPosition() {
    return *static_cast<CIEC_WORD*>(getDI(0));
  };

  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_WORD &CurrentPosition() {
    return *static_cast<CIEC_WORD*>(getDO(0));
  };

  static const TEventID scm_nEventPresetPositionUpdID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventPositionUpdateID = 0;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_ARobot& ARobot() {
    return (*static_cast<FORTE_ARobot*>(m_apoAdapters[0]));
  };
  static const int scm_nARobotAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(1, 1, 1, 1);

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_AROBOT_MUX){
  };

  virtual ~FORTE_AROBOT_MUX(){};

};

#endif //close the ifdef sequence from the beginning of the file

