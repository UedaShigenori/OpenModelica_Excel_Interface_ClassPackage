/* Simulation code for hel generated by the OpenModelica Compiler v1.13.0-dev-862-gceb595ee2 (64-bit). */
#if !defined(hel__MODEL_H)
#define hel__MODEL_H

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

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "hel_functions.h"


extern void hel_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void hel_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int hel_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int hel_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int hel_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int hel_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int hel_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int hel_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int hel_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int hel_checkForAsserts(DATA *data, threadData_t *threadData);
extern int hel_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int hel_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int hel_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* hel_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* hel_relationDescription(int i);
extern void hel_function_initSample(DATA *data, threadData_t *threadData);
extern int hel_initialAnalyticJacobianG(void* data, threadData_t *threadData);
extern int hel_initialAnalyticJacobianA(void* data, threadData_t *threadData);
extern int hel_initialAnalyticJacobianB(void* data, threadData_t *threadData);
extern int hel_initialAnalyticJacobianC(void* data, threadData_t *threadData);
extern int hel_initialAnalyticJacobianD(void* data, threadData_t *threadData);
extern int hel_functionJacG_column(void* data, threadData_t *threadData);
extern int hel_functionJacA_column(void* data, threadData_t *threadData);
extern int hel_functionJacB_column(void* data, threadData_t *threadData);
extern int hel_functionJacC_column(void* data, threadData_t *threadData);
extern int hel_functionJacD_column(void* data, threadData_t *threadData);
extern const char* hel_linear_model_frame(void);
extern const char* hel_linear_model_datarecovery_frame(void);
extern int hel_mayer(DATA* data, modelica_real** res, short *);
extern int hel_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int hel_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int hel_setInputData(DATA *data, const modelica_boolean file);
extern int hel_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void hel_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void hel_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int hel_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void hel_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void hel_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int hel_inputNames(DATA* data, char ** names);
extern int hel_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int hel_functionLocalKnownVars(DATA*, threadData_t*);
extern int hel_symbolicInlineSystem(DATA*, threadData_t*);

#include "hel_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(hel__MODEL_H) */

