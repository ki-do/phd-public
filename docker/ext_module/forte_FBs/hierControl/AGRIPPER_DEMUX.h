/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: AGRIPPER_DEMUX
 *** Description: Composite FB wrapping other FBs
 *** Version: 
 ***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _AGRIPPER_DEMUX_H_
#define _AGRIPPER_DEMUX_H_

#include <cfb.h>
#include <typelib.h>
#include "AGripper.h"

class FORTE_AGRIPPER_DEMUX: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_AGRIPPER_DEMUX)

private:
  static const TEventID scm_nEventGrippedID = 0;
  static const TEventID scm_nEventReleasedID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventGripID = 0;
  static const TEventID scm_nEventReleaseID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_AGripper& AGripper() {
    return (*static_cast<FORTE_AGripper*>(m_apoAdapters[0]));
  };
  static const int scm_nAGripperAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 0, 0, 1);

  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_AGRIPPER_DEMUX){
  };

  virtual ~FORTE_AGRIPPER_DEMUX(){};

};

#endif //close the ifdef sequence from the beginning of the file

