/*************************************************************************
 *** FORTE Library Element
 ***
 *** This file was generated using the 4DIAC FORTE Export Filter V1.0.x!
 ***
 *** Name: Log
 *** Description: Service Interface Function Block Type
 *** Version: 
 ***     1.0: 2022-01-29/ki-do - null - 
 *************************************************************************/

#include "Log.h"
#ifdef FORTE_ENABLE_GENERATED_SOURCE_CPP
#include "Log_gen.cpp"
#endif
#include <iostream>
#include <fstream>
#include <mutex>

std::mutex m;//you can use std::lock_guard if you want to be exception safe

DEFINE_FIRMWARE_FB(FORTE_Log, g_nStringIdLog)

const CStringDictionary::TStringId FORTE_Log::scm_anDataInputNames[] = {g_nStringIdNAME, g_nStringIdVALUE};

const CStringDictionary::TStringId FORTE_Log::scm_anDataInputTypeIds[] = {g_nStringIdWSTRING, g_nStringIdINT};

const TForteInt16 FORTE_Log::scm_anEIWithIndexes[] = {0, 2};
const TDataIOID FORTE_Log::scm_anEIWith[] = {0, 255, 1, 255};
const CStringDictionary::TStringId FORTE_Log::scm_anEventInputNames[] = {g_nStringIdINIT, g_nStringIdREQ};

const TForteInt16 FORTE_Log::scm_anEOWithIndexes[] = {-1};
const SFBInterfaceSpec FORTE_Log::scm_stFBInterfaceSpec = {
  2,  scm_anEventInputNames,  scm_anEIWith,  scm_anEIWithIndexes,
  0,  0,   0, 0,  2,  scm_anDataInputNames, scm_anDataInputTypeIds,
  0,  0, 0,
  0, 0
};


void FORTE_Log::executeEvent(int pa_nEIID){
  m.lock();
  std::ofstream logfile;
  logfile.open("iolog.txt", std::ios_base::app);  
  switch(pa_nEIID){
	case scm_nEventINITID:
      break;
    case scm_nEventREQID:	
      char valueString[10];
      char nameString[30];
      memset(valueString, '\0', sizeof(valueString));
      memset(nameString, '\0', sizeof(nameString));
	  CIEC_INT* val = &VALUE();
	  CIEC_INT realVal = *val;
	  realVal.toString(valueString,10);
	  CIEC_WSTRING* name = &NAME();
	  CIEC_WSTRING realName = *name;
	  realName.toString(nameString,30);
	  logfile << "[IOLogger]: " << nameString << " new value is " << realVal << "\n";
      break;
  }
  logfile.close();
  m.unlock();
}
