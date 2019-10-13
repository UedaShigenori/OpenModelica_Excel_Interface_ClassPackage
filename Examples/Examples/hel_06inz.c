/* Initialization */
#include "hel_model.h"
#include "hel_11mix.h"
#include "hel_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void hel_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
 equation index: 1
 type: SIMPLE_ASSIGN
 x = $START.x
 */
void hel_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* x STATE(1) */ = data->modelData->realVarsData[0].attribute /* x STATE(1) */.start;
  TRACE_POP
}
extern void hel_eqFunction_3(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void hel_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  hel_eqFunction_1(data, threadData);
  hel_eqFunction_3(data, threadData);
  TRACE_POP
}


int hel_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  hel_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int hel_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int hel_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

