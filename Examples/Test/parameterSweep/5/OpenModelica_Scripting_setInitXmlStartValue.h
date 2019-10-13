#ifndef OpenModelica_Scripting_setInitXmlStartValue__H
#define OpenModelica_Scripting_setInitXmlStartValue__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OpenModelica_Scripting_CheckSettingsResult_s {
  modelica_string _CONFIGURE_CMDLINE;
  modelica_boolean _CREATE_FILE_WORKS;
  modelica_string _C_COMPILER;
  modelica_boolean _C_COMPILER_RESPONDING;
  modelica_string _C_COMPILER_VERSION;
  modelica_boolean _HAVE_CORBA;
  modelica_string _MODELICAUSERCFLAGS;
  modelica_boolean _OMC_FOUND;
  modelica_string _OMC_PATH;
  modelica_string _OMDEV_PATH;
  modelica_string _OPENMODELICAHOME;
  modelica_string _OPENMODELICALIBRARY;
  modelica_string _OS;
  modelica_boolean _REMOVE_FILE_WORKS;
  modelica_string _SENDDATALIBS;
  modelica_string _SYSTEM_INFO;
  modelica_string _SYSTEM_PATH;
  modelica_string _WORKING_DIRECTORY;
} OpenModelica_Scripting_CheckSettingsResult;
typedef base_array_t OpenModelica_Scripting_CheckSettingsResult_array;
extern struct record_description OpenModelica_Scripting_CheckSettingsResult__desc;

DLLExport
modelica_boolean omc_OpenModelica_Scripting_setInitXmlStartValue(threadData_t *threadData, modelica_string _fileName, modelica_string _variableName, modelica_string _startValue, modelica_string _outputFile);
DLLExport
int in_OpenModelica_Scripting_setInitXmlStartValue(threadData_t *threadData, type_description * inArgs, type_description * outVar);
DLLExport
modelica_metatype boxptr_OpenModelica_Scripting_setInitXmlStartValue(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _variableName, modelica_metatype _startValue, modelica_metatype _outputFile);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenModelica_Scripting_setInitXmlStartValue,2,0) {(void*) boxptr_OpenModelica_Scripting_setInitXmlStartValue,0}};
#define boxvar_OpenModelica_Scripting_setInitXmlStartValue MMC_REFSTRUCTLIT(boxvar_lit_OpenModelica_Scripting_setInitXmlStartValue)

DLLExport
modelica_boolean omc_OpenModelica_Scripting_regularFileExists(threadData_t *threadData, modelica_string _fileName);
DLLExport
modelica_metatype boxptr_OpenModelica_Scripting_regularFileExists(threadData_t *threadData, modelica_metatype _fileName);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenModelica_Scripting_regularFileExists,2,0) {(void*) boxptr_OpenModelica_Scripting_regularFileExists,0}};
#define boxvar_OpenModelica_Scripting_regularFileExists MMC_REFSTRUCTLIT(boxvar_lit_OpenModelica_Scripting_regularFileExists)


DLLExport
modelica_integer omc_OpenModelica_Scripting_Internal_stat(threadData_t *threadData, modelica_string _name);
DLLExport
modelica_metatype boxptr_OpenModelica_Scripting_Internal_stat(threadData_t *threadData, modelica_metatype _name);
static const MMC_DEFSTRUCTLIT(boxvar_lit_OpenModelica_Scripting_Internal_stat,2,0) {(void*) boxptr_OpenModelica_Scripting_Internal_stat,0}};
#define boxvar_OpenModelica_Scripting_Internal_stat MMC_REFSTRUCTLIT(boxvar_lit_OpenModelica_Scripting_Internal_stat)

extern int ModelicaInternal_stat(const char* /*_name*/);

#ifdef __cplusplus
}
#endif
#endif
