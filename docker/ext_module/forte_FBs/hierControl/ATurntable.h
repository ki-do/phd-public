/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ATurntable
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#ifndef _ATURNTABLE_H_
#define _ATURNTABLE_H_

#include <adapter.h>
#include <typelib.h>
#include <forte_word.h>

class FORTE_ATurntable: public CAdapter{
  DECLARE_ADAPTER_TYPE(FORTE_ATurntable)

private:
 private:
  static const CStringDictionary::TStringId scm_anDataInputNames[];
  static const CStringDictionary::TStringId scm_anDataInputTypeIds[];
 public:
  CIEC_WORD &CurrentPosition() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDI(0) : getDO(0));
  };

 private:
  static const CStringDictionary::TStringId scm_anDataOutputNames[];
  static const CStringDictionary::TStringId scm_anDataOutputTypeIds[];
 public:
  CIEC_WORD &Position() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDO(0) : getDI(0));
  };

 public:
  static const TEventID scm_nEventPositionUpdID = 0;
  int PositionUpd() {
    return m_nParentAdapterListEventID + scm_nEventPositionUpdID;
  }
 private:
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

 public:
  static const TEventID scm_nEventNewPositionID = 0;
  int NewPosition() {
    return m_nParentAdapterListEventID + scm_nEventNewPositionID;
  }
 private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;

  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

   FORTE_ADAPTER_DATA_ARRAY(1, 1, 1, 1, 0);

public:
  ADAPTER_CTOR(FORTE_ATurntable){
  };

  virtual ~FORTE_ATurntable(){};

};

#endif //close the ifdef sequence from the beginning of the file

