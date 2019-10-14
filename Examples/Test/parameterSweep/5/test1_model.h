/* Simulation code for test1 generated by the OpenModelica Compiler OpenModelica v1.11.0 (64-bit). */
#if !defined(test1__MODEL_H)
#define test1__MODEL_H
#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#include <string.h>

#include "test1_functions.h"


extern void test1_callExternalObjectConstructors(DATA *data, threadData_t *threadData);
extern void test1_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void test1_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int test1_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int test1_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int test1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int test1_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int test1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int test1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int test1_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int test1_checkForAsserts(DATA *data, threadData_t *threadData);
extern int test1_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int test1_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int test1_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern int test1_checkForDiscreteChanges(DATA *data, threadData_t *threadData);
extern const char* test1_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* test1_relationDescription(int i);
extern void test1_function_initSample(DATA *data, threadData_t *threadData);
extern int test1_initialAnalyticJacobianG(void* data, threadData_t *threadData);
extern int test1_initialAnalyticJacobianA(void* data, threadData_t *threadData);
extern int test1_initialAnalyticJacobianB(void* data, threadData_t *threadData);
extern int test1_initialAnalyticJacobianC(void* data, threadData_t *threadData);
extern int test1_initialAnalyticJacobianD(void* data, threadData_t *threadData);
extern int test1_functionJacG_column(void* data, threadData_t *threadData);
extern int test1_functionJacA_column(void* data, threadData_t *threadData);
extern int test1_functionJacB_column(void* data, threadData_t *threadData);
extern int test1_functionJacC_column(void* data, threadData_t *threadData);
extern int test1_functionJacD_column(void* data, threadData_t *threadData);
extern const char* test1_linear_model_frame(void);
extern const char* test1_linear_model_datarecovery_frame(void);
extern int test1_mayer(DATA* data, modelica_real** res, short *);
extern int test1_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int test1_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int test1_setInputData(DATA *data, const modelica_boolean file);
extern int test1_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void test1_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void test1_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int test1_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void test1_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void test1_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int test1_inputNames(DATA* data, char ** names);
extern int test1_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int test1_functionLocalKnownVars(DATA*, threadData_t*);

#include "test1_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#endif

