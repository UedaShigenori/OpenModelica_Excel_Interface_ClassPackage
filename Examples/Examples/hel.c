/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "hel_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation hel_performSimulation
#define prefixedName_updateContinuousSystem hel_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation hel_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int hel_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int hel_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int hel_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int hel_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int hel_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
 equation index: 3
 type: SIMPLE_ASSIGN
 der(x) = a * x
 */
void hel_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[1] /* der(x) STATE_DER */ = (data->simulationInfo->realParameter[0]) * (data->localData[0]->realVars[0] /* x STATE(1) */);
  TRACE_POP
}

OMC_DISABLE_OPT
int hel_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  hel_functionLocalKnownVars(data, threadData);
  hel_eqFunction_3(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int hel_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void hel_eqFunction_3(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    hel_eqFunction_3(data, threadData);
}

int hel_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  hel_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "hel_12jac.h"
#include "hel_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks hel_callback = {
   (int (*)(DATA *, threadData_t *, void *)) hel_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) hel_performQSSSimulation,
   hel_updateContinuousSystem,
   hel_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   hel_initializeStateSets,
   #else
   NULL,
   #endif
   hel_initializeDAEmodeData,
   hel_functionODE,
   hel_functionAlgebraics,
   hel_functionDAE,
   hel_functionLocalKnownVars,
   hel_input_function,
   hel_input_function_init,
   hel_input_function_updateStartValues,
   hel_output_function,
   hel_function_storeDelayed,
   hel_updateBoundVariableAttributes,
   hel_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   hel_functionInitialEquations_lambda0,
   hel_functionRemovedInitialEquations,
   hel_updateBoundParameters,
   hel_checkForAsserts,
   hel_function_ZeroCrossingsEquations,
   hel_function_ZeroCrossings,
   hel_function_updateRelations,
   hel_zeroCrossingDescription,
   hel_relationDescription,
   hel_function_initSample,
   hel_INDEX_JAC_A,
   hel_INDEX_JAC_B,
   hel_INDEX_JAC_C,
   hel_INDEX_JAC_D,
   hel_initialAnalyticJacobianA,
   hel_initialAnalyticJacobianB,
   hel_initialAnalyticJacobianC,
   hel_initialAnalyticJacobianD,
   hel_functionJacA_column,
   hel_functionJacB_column,
   hel_functionJacC_column,
   hel_functionJacD_column,
   hel_linear_model_frame,
   hel_linear_model_datarecovery_frame,
   hel_mayer,
   hel_lagrange,
   hel_pickUpBoundsForInputsInOptimization,
   hel_setInputData,
   hel_getTimeGrid,
   hel_symbolicInlineSystem,
   hel_function_initSynchronous,
   hel_function_updateSynchronous,
   hel_function_equationsSynchronous,
   hel_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "hel"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Examples"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,3,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,93,_OMC_LIT_RESOURCE_0_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,2,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir)}};
void hel_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &hel_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "hel";
  data->modelData->modelFilePrefix = "hel";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Examples";
  data->modelData->modelGUID = "{4f47b5c9-c1e6-486a-85f1-83a874c95d68}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "hel_init.c"
    ;
  static const char contents_info[] =
    #include "hel_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "hel_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "hel_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 1;
  data->modelData->nVariablesReal = 2;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 0;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 2;
  data->modelData->nParametersInteger = 0;
  data->modelData->nParametersBoolean = 0;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 0;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 0;
  data->modelData->modelDataXml.fileName = "hel_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 4;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 0;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 4;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    hel_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


