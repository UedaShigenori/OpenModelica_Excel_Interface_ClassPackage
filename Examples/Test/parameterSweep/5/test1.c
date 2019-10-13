/* Main Simulation File */
#include "test1_model.h"

#define prefixedName_performSimulation test1_performSimulation
#define prefixedName_updateContinuousSystem test1_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation test1_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;
#if defined(__cplusplus)
extern "C" {
#endif

int test1_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int test1_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int test1_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int test1_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int test1_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
 equation index: 4
 type: SIMPLE_ASSIGN
 d = c ^ 2.0
 */
void test1_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[0] /* c variable */;
  data->localData[0]->realVars[1] /* d variable */ = (tmp0 * tmp0);
  TRACE_POP
}
/*
 equation index: 5
 type: SIMPLE_ASSIGN
 e = 10.0 + d
 */
void test1_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[2] /* e variable */ = 10.0 + data->localData[0]->realVars[1] /* d variable */;
  TRACE_POP
}


int test1_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  test1_functionLocalKnownVars(data, threadData);
  test1_eqFunction_4(data, threadData);

  test1_eqFunction_5(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int test1_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int test1_symEulerUpdate(DATA *data, modelica_real dt)
{
  return -1;
}



int test1_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  test1_functionLocalKnownVars(data, threadData);
  /* no ODE systems */

  
  TRACE_POP
  return 0;
}

#ifdef FMU_EXPERIMENTAL
#endif
/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "test1_12jac.h"
#include "test1_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks test1_callback = {
   (int (*)(DATA *, threadData_t *, void *)) test1_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) test1_performQSSSimulation,
   test1_updateContinuousSystem,
   test1_callExternalObjectConstructors,
   test1_callExternalObjectDestructors,
   NULL,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   test1_initializeStateSets,
   #else
   NULL,
   #endif
   test1_initializeDAEmodeData,
   test1_functionODE,
   test1_functionAlgebraics,
   test1_functionDAE,
   test1_functionLocalKnownVars,
   test1_input_function,
   test1_input_function_init,
   test1_input_function_updateStartValues,
   test1_output_function,
   test1_function_storeDelayed,
   test1_updateBoundVariableAttributes,
   0 /* useHomotopy */,
   test1_functionInitialEquations,
   test1_functionInitialEquations_lambda0,
   test1_functionRemovedInitialEquations,
   test1_updateBoundParameters,
   test1_checkForAsserts,
   test1_function_ZeroCrossingsEquations,
   test1_function_ZeroCrossings,
   test1_function_updateRelations,
   test1_checkForDiscreteChanges,
   test1_zeroCrossingDescription,
   test1_relationDescription,
   test1_function_initSample,
   test1_INDEX_JAC_A,
   test1_INDEX_JAC_B,
   test1_INDEX_JAC_C,
   test1_INDEX_JAC_D,
   test1_initialAnalyticJacobianA,
   test1_initialAnalyticJacobianB,
   test1_initialAnalyticJacobianC,
   test1_initialAnalyticJacobianD,
   test1_functionJacA_column,
   test1_functionJacB_column,
   test1_functionJacC_column,
   test1_functionJacD_column,
   test1_linear_model_frame,
   test1_linear_model_datarecovery_frame,
   test1_mayer,
   test1_lagrange,
   test1_pickUpBoundsForInputsInOptimization,
   test1_setInputData,
   test1_getTimeGrid,
   test1_symEulerUpdate,
   test1_function_initSynchronous,
   test1_function_updateSynchronous,
   test1_function_equationsSynchronous,
   NULL
   #ifdef FMU_EXPERIMENTAL
   ,test1_functionODE_Partial
   ,test1_functionFMIJacobian
   #endif
   ,test1_inputNames


};

void test1_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  data->callback = &test1_callback;
  data->modelData->modelName = "test1";
  data->modelData->modelFilePrefix = "test1";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/5";
  data->modelData->modelGUID = "{d7aef6fa-ec14-4782-b6cd-3d8424104b09}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "test1_init.c"
    ;
  static const char contents_info[] =
    #include "test1_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "test1_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "test1_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 0;
  data->modelData->nVariablesReal = 3;
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
  data->modelData->modelDataXml.fileName = "test1_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 0;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 6;
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

#ifdef __cplusplus
}
#endif

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
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    test1_setupDataStruc(&data, threadData);
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

