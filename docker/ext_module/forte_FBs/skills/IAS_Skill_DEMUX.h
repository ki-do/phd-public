/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IAS_Skill_DEMUX
 *** Description: Composite Function Block Type
 *** Version: 
 ***     1.0: 2019-07-03/dorofeev - null - 
 *************************************************************************/

#ifndef _IAS_SKILL_DEMUX_H_
#define _IAS_SKILL_DEMUX_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_string.h>
#include "IAS_Skill.h"

class FORTE_IAS_Skill_DEMUX: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_IAS_Skill_DEMUX)

private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
  CIEC_STRING &currentState() {
    return *static_cast<CIEC_STRING*>(getDI(0));
  };

  CIEC_STRING &lastTransition() {
    return *static_cast<CIEC_STRING*>(getDI(1));
  };

  static const TEventID scm_nEventRSPID = 0;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventcleanUpID = 0;
  static const TEventID scm_nEventlockID = 1;
  static const TEventID scm_nEventresetID = 2;
  static const TEventID scm_nEventstartID = 3;
  static const TEventID scm_nEventstopID = 4;
  static const TEventID scm_nEventsuspendID = 5;
  static const TEventID scm_nEventunsuspendID = 6;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_IAS_Skill& IAS_Skill() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[0]));
  };
  static const int scm_nIAS_SkillAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(7, 2, 0, 1);

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_IAS_Skill_DEMUX){
  };

  virtual ~FORTE_IAS_Skill_DEMUX(){};

};

#endif //close the ifdef sequence from the beginning of the file

