/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: IAS_Skill_Full
 *** Description: Composite Function Block Type
 *** Version: 
 ***     0.0: 2018-04-30/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _IAS_SKILL_FULL_H_
#define _IAS_SKILL_FULL_H_

#include <cfb.h>
#include <typelib.h>
#include <forte_string.h>
#include "IAS_Skill.h"

class FORTE_IAS_Skill_Full: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_IAS_Skill_Full)

private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
  CIEC_STRING &currentState() {
    return *static_cast<CIEC_STRING*>(getDO(0));
  };

  static const TEventID scm_nEventINITID = 0;
  static const TEventID scm_nEventErrorEventInternalID = 1;
  static const TEventID scm_nEventStopEventInternalID = 2;
  static const TEventID scm_nEventStartEventInternalID = 3;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventINITOID = 0;
  static const TEventID scm_nEventcleanUpID = 1;
  static const TEventID scm_nEventlockID = 2;
  static const TEventID scm_nEventresetID = 3;
  static const TEventID scm_nEventstartID = 4;
  static const TEventID scm_nEventstopID = 5;
  static const TEventID scm_nEventsuspendID = 6;
  static const TEventID scm_nEventunsuspendID = 7;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_IAS_Skill& IAS_Skill() {
    return (*static_cast<FORTE_IAS_Skill*>(m_apoAdapters[0]));
  };
  static const int scm_nIAS_SkillAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(8, 0, 1, 1);

  static const SCFB_FBInstanceData scm_astInternalFBs[];

  static const SCFB_FBConnectionData scm_astEventConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutEventConnections[];

  static const SCFB_FBConnectionData scm_astDataConnections[];

  static const SCFB_FBFannedOutConnectionData scm_astFannedOutDataConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_IAS_Skill_Full){
  };

  virtual ~FORTE_IAS_Skill_Full(){};

};

#endif //close the ifdef sequence from the beginning of the file

