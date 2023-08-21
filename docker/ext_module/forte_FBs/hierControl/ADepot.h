/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ADepot
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#ifndef _ADEPOT_H_
#define _ADEPOT_H_

#include <adapter.h>
#include <typelib.h>
#include <forte_word.h>

class FORTE_ADepot: public CAdapter{
  DECLARE_ADAPTER_TYPE(FORTE_ADepot)

private:
 private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
 public:
  CIEC_WORD &StoragePosition() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDO(0) : getDI(0));
  };

 public:
  static const TEventID scm_nEventReadyID = 0;
  int Ready() {
    return m_nParentAdapterListEventID + scm_nEventReadyID;
  }
 private:
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

 public:
  static const TEventID scm_nEventGetSpinnerID = 0;
  int GetSpinner() {
    return m_nParentAdapterListEventID + scm_nEventGetSpinnerID;
  }
 private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;

  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

   FORTE_ADAPTER_DATA_ARRAY(1, 1, 0, 1, 0);

public:
  ADAPTER_CTOR(FORTE_ADepot){
  };

  virtual ~FORTE_ADepot(){};

};

#endif //close the ifdef sequence from the beginning of the file

