/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "test1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

OMC_DISABLE_OPT
int test1_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void test1_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void test1_eqFunction_1(DATA *data, threadData_t *threadData);

OMC_DISABLE_OPT
void test1_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  test1_eqFunction_1(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int test1_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  test1_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

