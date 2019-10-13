#if defined(__cplusplus)
  extern "C" {
#endif
  int CoffeeTemperature_Test_CoffeeTest10_mayer(DATA* data, modelica_real** res, short*);
  int CoffeeTemperature_Test_CoffeeTest10_lagrange(DATA* data, modelica_real** res, short *, short *);
  int CoffeeTemperature_Test_CoffeeTest10_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int CoffeeTemperature_Test_CoffeeTest10_setInputData(DATA *data, const modelica_boolean file);
  int CoffeeTemperature_Test_CoffeeTest10_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif