/* Algebraic */
#include "hel_model.h"

#ifdef __cplusplus
extern "C" {
#endif

/* for continuous time variables */
int hel_functionAlgebraics(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  
  data->simulationInfo->callStatistics.functionAlgebraics++;
  
  /* no Alg systems */

  hel_function_savePreSynchronous(data, threadData);
  
  TRACE_POP
  return 0;
}

#ifdef __cplusplus
}
#endif
