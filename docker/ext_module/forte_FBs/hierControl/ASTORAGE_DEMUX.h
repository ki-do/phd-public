/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ASTORAGE_DEMUX
 *** Description: Composite FB wrapping other FBs
 *** Version: 
 ***     0.0: 2008-07-10/4DIAC-IDE - 4DIAC-Consortium - 
 *************************************************************************/

#ifndef _ASTORAGE_DEMUX_H_
#define _ASTORAGE_DEMUX_H_

#include <cfb.h>
#include <typelib.h>
#include "AStorage.h"

class FORTE_ASTORAGE_DEMUX: public CCompositeFB{
  DECLARE_FIRMWARE_FB(FORTE_ASTORAGE_DEMUX)

private:
  static const TEventID scm_nEventIsInID = 0;
  static const TEventID scm_nEventIsOutID = 1;
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

  static const TEventID scm_nEventGoInID = 0;
  static const TEventID scm_nEventGoOutID = 1;
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SAdapterInstanceDef scm_astAdapterInstances[];

  FORTE_AStorage& AStorage() {
    return (*static_cast<FORTE_AStorage*>(m_apoAdapters[0]));
  };
  static const int scm_nAStorageAdpNum = 0;
  static const SFBInterfaceSpec scm_stFBInterfaceSpec;

   FORTE_FB_DATA_ARRAY(2, 0, 0, 1);

  static const SCFB_FBConnectionData scm_astEventConnections[];
  static const SCFB_FBNData scm_stFBNData;

public:
  COMPOSITE_FUNCTION_BLOCK_CTOR(FORTE_ASTORAGE_DEMUX){
  };

  virtual ~FORTE_ASTORAGE_DEMUX(){};

};

#endif //close the ifdef sequence from the beginning of the file

