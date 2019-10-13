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
  data->localData[0]->realVars[0] /* c variable */ = data->simulationInfo->realParameter[0] /* a PARAM */ + data->simulationInfo->realParameter[1] /* b PARAM */;
  TRACE_POP
}

/*
 equation index: 2
 type: SIMPLE_ASSIGN
 d = c ^ 2.0
 */
void test1_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[0] /* c variable */;
  data->localData[0]->realVars[1] /* d variable */ = (tmp0 * tmp0);
  TRACE_POP
}

/*
 equation index: 3
 type: SIMPLE_ASSIGN
 e = 10.0 + d
 */
void test1_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[2] /* e variable */ = 10.0 + data->localData[0]->realVars[1] /* d variable */;
  TRACE_POP
}
void test1_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  test1_eqFunction_1(data, threadData);
  test1_eqFunction_2(data, threadData);
  test1_eqFunction_3(data, threadData);
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

