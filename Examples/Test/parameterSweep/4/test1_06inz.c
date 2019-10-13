/* Initialization */
#include "test1_model.h"
#include "test1_11mix.h"
#include "test1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void test1_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
 equation index: 1
 type: SIMPLE_ASSIGN
 c = a + b
 */
void test1_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* c variable */ = data->simulationInfo->realParameter[0] + data->simulationInfo->realParameter[1];
  TRACE_POP
}
OMC_DISABLE_OPT
void test1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  test1_eqFunction_1(data, threadData);
  TRACE_POP
}


int test1_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  test1_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int test1_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int test1_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

