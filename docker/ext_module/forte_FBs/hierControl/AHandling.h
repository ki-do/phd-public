/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: AHandling
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#ifndef _AHANDLING_H_
#define _AHANDLING_H_

#include <adapter.h>
#include <typelib.h>

class FORTE_AHandling: public CAdapter{
  DECLARE_ADAPTER_TYPE(FORTE_AHandling)

private:
 public:
  static const TEventID scm_nEventReadyID = 0;
  int Ready() {
    return m_nParentAdapterListEventID + scm_nEventReadyID;
  }
 private:
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

 public:
  static const TEventID scm_nEventPrepareSpinnerID = 0;
  int PrepareSpinner() {
    return m_nParentAdapterListEventID + scm_nEventPrepareSpinnerID;
  }
 private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;

  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

   FORTE_ADAPTER_DATA_ARRAY(1, 1, 0, 0, 0);

public:
  ADAPTER_CTOR(FORTE_AHandling){
  };

  virtual ~FORTE_AHandling(){};

};

#endif //close the ifdef sequence from the beginning of the file

