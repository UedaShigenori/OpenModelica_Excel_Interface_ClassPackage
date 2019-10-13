#include "OpenModelica_Scripting_setInitXmlStartValue.h"
#define _OMC_LIT0_data "Windows_NT"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,10,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
#define _OMC_LIT1_data "/lib/omc/libexec/xsltproc/xsltproc.exe"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT1,38,_OMC_LIT1_data);
#define _OMC_LIT1 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT1)
#define _OMC_LIT2_data "xsltproc"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT2,8,_OMC_LIT2_data);
#define _OMC_LIT2 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT2)
#define _OMC_LIT3_data " -o "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT3,4,_OMC_LIT3_data);
#define _OMC_LIT3 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT3)
#define _OMC_LIT4_data " --stringparam variableName "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT4,28,_OMC_LIT4_data);
#define _OMC_LIT4 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data " --stringparam variableStart "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,29,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
#define _OMC_LIT6_data " "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT6,1,_OMC_LIT6_data);
#define _OMC_LIT6 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT6)
#define _OMC_LIT7_data "/share/omc/scripts/replace-startValue.xsl "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT7,42,_OMC_LIT7_data);
#define _OMC_LIT7 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,0,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#include "util/modelica.h"

#include "OpenModelica_Scripting_setInitXmlStartValue_includes.h"



void (*omc_assert)(threadData_t*,FILE_INFO info,const char *msg,...) __attribute__((noreturn)) = omc_assert_function;
void (*omc_assert_warning)(FILE_INFO info,const char *msg,...) = omc_assert_warning_function;
void (*omc_terminate)(FILE_INFO info,const char *msg,...) = omc_terminate_function;
void (*omc_throw)(threadData_t*) __attribute__ ((noreturn)) = omc_throw_function;

DLLExport
modelica_boolean omc_OpenModelica_Scripting_setInitXmlStartValue(threadData_t *threadData, modelica_string _fileName, modelica_string _variableName, modelica_string _startValue, modelica_string _outputFile)
{
  modelica_boolean _success;
  modelica_string _xsltproc = NULL;
  modelica_string _command = NULL;
  OpenModelica_Scripting_CheckSettingsResult _settings;
  OpenModelica_Scripting_CheckSettingsResult tmp1;
  modelica_boolean tmp2;
  modelica_string tmp3;
  modelica_metatype tmpMeta[10] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _success = 0;
  if(omc_OpenModelica_Scripting_regularFileExists(threadData, _fileName))
  {
    tmp1 = checkSettings();
    _settings._OPENMODELICAHOME = tmp1._OPENMODELICAHOME;
    _settings._OPENMODELICALIBRARY = tmp1._OPENMODELICALIBRARY;
    _settings._OMC_PATH = tmp1._OMC_PATH;
    _settings._SYSTEM_PATH = tmp1._SYSTEM_PATH;
    _settings._OMDEV_PATH = tmp1._OMDEV_PATH;
    _settings._OMC_FOUND = tmp1._OMC_FOUND;
    _settings._MODELICAUSERCFLAGS = tmp1._MODELICAUSERCFLAGS;
    _settings._WORKING_DIRECTORY = tmp1._WORKING_DIRECTORY;
    _settings._CREATE_FILE_WORKS = tmp1._CREATE_FILE_WORKS;
    _settings._REMOVE_FILE_WORKS = tmp1._REMOVE_FILE_WORKS;
    _settings._OS = tmp1._OS;
    _settings._SYSTEM_INFO = tmp1._SYSTEM_INFO;
    _settings._SENDDATALIBS = tmp1._SENDDATALIBS;
    _settings._C_COMPILER = tmp1._C_COMPILER;
    _settings._C_COMPILER_VERSION = tmp1._C_COMPILER_VERSION;
    _settings._C_COMPILER_RESPONDING = tmp1._C_COMPILER_RESPONDING;
    _settings._HAVE_CORBA = tmp1._HAVE_CORBA;
    _settings._CONFIGURE_CMDLINE = tmp1._CONFIGURE_CMDLINE;

    tmp2 = (modelica_boolean)(stringEqual(_settings._OS, _OMC_LIT0));
    if(tmp2)
    {
      tmpMeta[0] = stringAppend(getInstallationDirectoryPath(),_OMC_LIT1);
      tmp3 = tmpMeta[0];
    }
    else
    {
      tmp3 = _OMC_LIT2;
    }
    _xsltproc = tmp3;

    tmpMeta[0] = stringAppend(_xsltproc,_OMC_LIT3);
    tmpMeta[1] = stringAppend(tmpMeta[0],_outputFile);
    tmpMeta[2] = stringAppend(tmpMeta[1],_OMC_LIT4);
    tmpMeta[3] = stringAppend(tmpMeta[2],_variableName);
    tmpMeta[4] = stringAppend(tmpMeta[3],_OMC_LIT5);
    tmpMeta[5] = stringAppend(tmpMeta[4],_startValue);
    tmpMeta[6] = stringAppend(tmpMeta[5],_OMC_LIT6);
    tmpMeta[7] = stringAppend(tmpMeta[6],getInstallationDirectoryPath());
    tmpMeta[8] = stringAppend(tmpMeta[7],_OMC_LIT7);
    tmpMeta[9] = stringAppend(tmpMeta[8],_fileName);
    _command = tmpMeta[9];

    _success = (((modelica_integer) 0) == system(_command, _OMC_LIT8));
  }
  _return: OMC_LABEL_UNUSED
  return _success;
}
DLLExport
int in_OpenModelica_Scripting_setInitXmlStartValue(threadData_t *threadData, type_description * inArgs, type_description * outVar)
{
  //if (!mmc_GC_state) mmc_GC_init();
  modelica_string _fileName;
  modelica_string _variableName;
  modelica_string _startValue;
  modelica_string _outputFile;
  modelica_boolean _success;
  if (read_modelica_string(&inArgs, (char**) &_fileName)) return 1;
  if (read_modelica_string(&inArgs, (char**) &_variableName)) return 1;
  if (read_modelica_string(&inArgs, (char**) &_startValue)) return 1;
  if (read_modelica_string(&inArgs, (char**) &_outputFile)) return 1;
  MMC_TRY_TOP_INTERNAL()
  _success = omc_OpenModelica_Scripting_setInitXmlStartValue(threadData, _fileName, _variableName, _startValue, _outputFile);
  MMC_CATCH_TOP(return 1)
  write_modelica_boolean(outVar, &_success);
  fflush(NULL);
  return 0;
}
#ifdef GENERATE_MAIN_EXECUTABLE
static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

int main(int argc, char **argv) {
  MMC_INIT(0);
  {
  void *lst = mmc_mk_nil();
  int i = 0;

  for (i=argc-1; i>0; i--) {
    lst = mmc_mk_cons(mmc_mk_scon(argv[i]), lst);
  }

  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    omc_OpenModelica_Scripting_setInitXmlStartValue(threadData, lst);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }
  }
  
  fflush(NULL);
  EXIT(0);
  return 0;
}
#endif
modelica_metatype boxptr_OpenModelica_Scripting_setInitXmlStartValue(threadData_t *threadData, modelica_metatype _fileName, modelica_metatype _variableName, modelica_metatype _startValue, modelica_metatype _outputFile)
{
  modelica_boolean _success;
  modelica_metatype out_success;
  _success = omc_OpenModelica_Scripting_setInitXmlStartValue(threadData, _fileName, _variableName, _startValue, _outputFile);
  out_success = mmc_mk_icon(_success);
  return out_success;
}
DLLExport
modelica_boolean omc_OpenModelica_Scripting_regularFileExists(threadData_t *threadData, modelica_string _fileName)
{
  modelica_boolean _exists;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _exists = (omc_OpenModelica_Scripting_Internal_stat(threadData, _fileName) == 2);
  _return: OMC_LABEL_UNUSED
  return _exists;
}
modelica_metatype boxptr_OpenModelica_Scripting_regularFileExists(threadData_t *threadData, modelica_metatype _fileName)
{
  modelica_boolean _exists;
  modelica_metatype out_exists;
  _exists = omc_OpenModelica_Scripting_regularFileExists(threadData, _fileName);
  out_exists = mmc_mk_icon(_exists);
  return out_exists;
}

modelica_integer omc_OpenModelica_Scripting_Internal_stat(threadData_t *threadData, modelica_string _name)
{
  int _fileType_ext;
  modelica_integer _fileType;
  _fileType_ext = ModelicaInternal_stat(MMC_STRINGDATA(_name));
  _fileType = (modelica_integer)_fileType_ext;
  return _fileType;
}
modelica_metatype boxptr_OpenModelica_Scripting_Internal_stat(threadData_t *threadData, modelica_metatype _name)
{
  modelica_integer _fileType;
  modelica_metatype out_fileType;
  _fileType = omc_OpenModelica_Scripting_Internal_stat(threadData, _name);
  out_fileType = mmc_mk_icon(_fileType);
  return out_fileType;
}

