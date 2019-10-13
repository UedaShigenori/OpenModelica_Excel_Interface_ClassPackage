/* Optimization */
#include "test1_model.h"
#include "test1_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif
int test1_mayer(DATA* data, modelica_real** res,short *i){return -1;}
int test1_lagrange(DATA* data, modelica_real** res, short * i1, short*i2){return -1;}
int test1_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt){return -1;}
int test1_setInputData(DATA *data, const modelica_boolean file){return -1;}
int test1_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t){return -1;}
#if defined(__cplusplus)
}
#endif