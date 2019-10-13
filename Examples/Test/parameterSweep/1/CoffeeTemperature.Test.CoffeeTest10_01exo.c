/* External objects file */
#include "CoffeeTemperature.Test.CoffeeTest10_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

void CoffeeTemperature_Test_CoffeeTest10_callExternalObjectDestructors(DATA *data, threadData_t *threadData)
{
  if(data->simulationInfo->extObjs)
  {
    omc_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData,data->simulationInfo->extObjs[0]);
    free(data->simulationInfo->extObjs);
    data->simulationInfo->extObjs = 0;
  }
}
#if defined(__cplusplus)
}
#endif

