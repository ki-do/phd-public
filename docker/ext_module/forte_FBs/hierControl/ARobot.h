/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: ARobot
 *** Description: Adapter Interface
 *** Version: 
 *************************************************************************/

#ifndef _AROBOT_H_
#define _AROBOT_H_

#include <adapter.h>
#include <typelib.h>
#include <forte_word.h>

class FORTE_ARobot: public CAdapter{
  DECLARE_ADAPTER_TYPE(FORTE_ARobot)

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
  CIEC_WORD &PresetPosition() {
    return *static_cast<CIEC_WORD*>((isSocket()) ? getDO(0) : getDI(0));
  };

 public:
  static const TEventID scm_nEventPositionUpdateID = 0;
  int PositionUpdate() {
    return m_nParentAdapterListEventID + scm_nEventPositionUpdateID;
  }
 private:
  static const TForteInt16 scm_anEIWithIndexes[];
  static const TDataIOID scm_anEIWith[];
  static const CStringDictionary::TStringId scm_anEventInputNames[];

 public:
  static const TEventID scm_nEventPresetPositionUpdID = 0;
  int PresetPositionUpd() {
    return m_nParentAdapterListEventID + scm_nEventPresetPositionUpdID;
  }
 private:
  static const TForteInt16 scm_anEOWithIndexes[];
  static const TDataIOID scm_anEOWith[];
  static const CStringDictionary::TStringId scm_anEventOutputNames[];

  static const SFBInterfaceSpec scm_stFBInterfaceSpecSocket;

  static const SFBInterfaceSpec scm_stFBInterfaceSpecPlug;

   FORTE_ADAPTER_DATA_ARRAY(1, 1, 1, 1, 0);

public:
  ADAPTER_CTOR(FORTE_ARobot){
  };

  virtual ~FORTE_ARobot(){};

};

#endif //close the ifdef sequence from the beginning of the file

