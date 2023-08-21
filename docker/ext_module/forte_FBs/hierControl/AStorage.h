/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: AStorage
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#ifndef _ASTORAGE_H_
#define _ASTORAGE_H_

#include <adapter.h>
#include <typelib.h>

class FORTE_AStorage: public CAdapter{
  DECLARE_ADAPTER_TYPE(FORTE_AStorage)

private:
 public:
  static const TEventID scm_nEventIsInID = 0;
  int IsIn() {
    return m_nParentAdapterListEventID + scm_nEventIsInID;
  }
  static const TEventID scm_nEventIsOutID = 1;
  int IsOut() {
    return m_nParentAdapterListEventID + scm_nEventIsOutID;
  }
 private:
  static const TForteInt16 scm_anEIWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

 public:
  static const TEventID scm_nEventGoInID = 0;
  int GoIn() {
    return m_nParentAdapterListEventID + scm_nEventGoInID;
  }
  static const TEventID scm_nEventGoOutID = 1;
  int GoOut() {
    return m_nParentAdapterListEventID + scm_nEventGoOutID;
  }
 private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;

  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

   FORTE_ADAPTER_DATA_ARRAY(2, 2, 0, 0, 0);

public:
  ADAPTER_CTOR(FORTE_AStorage){
  };

  virtual ~FORTE_AStorage(){};

};

#endif //close the ifdef sequence from the beginning of the file

