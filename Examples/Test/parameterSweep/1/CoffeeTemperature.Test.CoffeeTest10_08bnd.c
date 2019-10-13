/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "CoffeeTemperature.Test.CoffeeTest10_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
 equation index: 837
 type: SIMPLE_ASSIGN
 $START._valveIncompressible1._dp = valveIncompressible1.dp_start
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,837};
  data->modelData->realVarsData[351].attribute /* valveIncompressible1.dp variable */.start = data->simulationInfo->realParameter[109];
    data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */ = data->modelData->realVarsData[351].attribute /* valveIncompressible1.dp variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[351].info /* valveIncompressible1.dp */.name, (modelica_real) data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */);
  TRACE_POP
}

/*
 equation index: 838
 type: SIMPLE_ASSIGN
 $START._pipe._flowModel._dps_fg[1] = pipe.flowModel.p_a_start - pipe.flowModel.p_b_start
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,838};
  data->modelData->realVarsData[328].attribute /* pipe.flowModel.dps_fg[1] variable */.start = data->simulationInfo->realParameter[67] - data->simulationInfo->realParameter[68];
    data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */ = data->modelData->realVarsData[328].attribute /* pipe.flowModel.dps_fg[1] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[328].info /* pipe.flowModel.dps_fg[1] */.name, (modelica_real) data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */);
  TRACE_POP
}

/*
 equation index: 839
 type: SIMPLE_ASSIGN
 $START._yakan._level = yakan.level_start_eps
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,839};
  data->modelData->realVarsData[5].attribute /* yakan.level STATE(1) */.start = data->simulationInfo->realParameter[140];
    data->localData[0]->realVars[5] /* yakan.level STATE(1) */ = data->modelData->realVarsData[5].attribute /* yakan.level STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[5].info /* yakan.level */.name, (modelica_real) data->localData[0]->realVars[5] /* yakan.level STATE(1) */);
  TRACE_POP
}

/*
 equation index: 840
 type: SIMPLE_ASSIGN
 $START._yakan._s[1] = yakan.fluidLevel_max
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,840};
  data->modelData->realVarsData[385].attribute /* yakan.s[1] variable */.start = data->simulationInfo->realParameter[134];
    data->localData[0]->realVars[385] /* yakan.s[1] variable */ = data->modelData->realVarsData[385].attribute /* yakan.s[1] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[385].info /* yakan.s[1] */.name, (modelica_real) data->localData[0]->realVars[385] /* yakan.s[1] variable */);
  TRACE_POP
}

/*
 equation index: 841
 type: SIMPLE_ASSIGN
 $START._yakan._heatTransfer._Ts[1] = yakan.T_start
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,841};
  data->modelData->realVarsData[367].attribute /* yakan.heatTransfer.Ts[1] variable */.start = data->simulationInfo->realParameter[131];
    data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */ = data->modelData->realVarsData[367].attribute /* yakan.heatTransfer.Ts[1] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[367].info /* yakan.heatTransfer.Ts[1] */.name, (modelica_real) data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */);
  TRACE_POP
}

/*
 equation index: 842
 type: SIMPLE_ASSIGN
 $START._yakan._mb_flow = -valveIncompressible1.m_flow_start
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,842};
  data->modelData->realVarsData[371].attribute /* yakan.mb_flow variable */.start = (-data->simulationInfo->realParameter[125]);
    data->localData[0]->realVars[371] /* yakan.mb_flow variable */ = data->modelData->realVarsData[371].attribute /* yakan.mb_flow variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[371].info /* yakan.mb_flow */.name, (modelica_real) data->localData[0]->realVars[371] /* yakan.mb_flow variable */);
  TRACE_POP
}

/*
 equation index: 843
 type: SIMPLE_ASSIGN
 $START._yakan._medium._h = yakan.h_start
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,843};
  data->modelData->realVarsData[6].attribute /* yakan.medium.h STATE(1) */.start = data->simulationInfo->realParameter[135];
    data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */ = data->modelData->realVarsData[6].attribute /* yakan.medium.h STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[6].info /* yakan.medium.h */.name, (modelica_real) data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */);
  TRACE_POP
}

/*
 equation index: 844
 type: SIMPLE_ASSIGN
 $START._heatCapacitor1._T = Tamb
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,844};
  data->modelData->realVarsData[2].attribute /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */.start = data->simulationInfo->realParameter[4];
    data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */ = data->modelData->realVarsData[2].attribute /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* heatCapacitor1.T */.name, (modelica_real) data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */);
  TRACE_POP
}

/*
 equation index: 845
 type: SIMPLE_ASSIGN
 $START._cup._level = cup.level_start_eps
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,845};
  data->modelData->realVarsData[0].attribute /* cup.level STATE(1) */.start = data->simulationInfo->realParameter[28];
    data->localData[0]->realVars[0] /* cup.level STATE(1) */ = data->modelData->realVarsData[0].attribute /* cup.level STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[0].info /* cup.level */.name, (modelica_real) data->localData[0]->realVars[0] /* cup.level STATE(1) */);
  TRACE_POP
}

/*
 equation index: 846
 type: SIMPLE_ASSIGN
 $START._cup._s[1] = cup.fluidLevel_max
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,846};
  data->modelData->realVarsData[260].attribute /* cup.s[1] variable */.start = data->simulationInfo->realParameter[22];
    data->localData[0]->realVars[260] /* cup.s[1] variable */ = data->modelData->realVarsData[260].attribute /* cup.s[1] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[260].info /* cup.s[1] */.name, (modelica_real) data->localData[0]->realVars[260] /* cup.s[1] variable */);
  TRACE_POP
}

/*
 equation index: 847
 type: SIMPLE_ASSIGN
 $START._cup._heatTransfer._Ts[1] = cup.T_start
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,847};
  data->modelData->realVarsData[242].attribute /* cup.heatTransfer.Ts[1] variable */.start = data->simulationInfo->realParameter[19];
    data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */ = data->modelData->realVarsData[242].attribute /* cup.heatTransfer.Ts[1] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[242].info /* cup.heatTransfer.Ts[1] */.name, (modelica_real) data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */);
  TRACE_POP
}

/*
 equation index: 848
 type: SIMPLE_ASSIGN
 $START._cup._medium._h = cup.h_start
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,848};
  data->modelData->realVarsData[1].attribute /* cup.medium.h STATE(1) */.start = data->simulationInfo->realParameter[23];
    data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */ = data->modelData->realVarsData[1].attribute /* cup.medium.h STATE(1) */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* cup.medium.h */.name, (modelica_real) data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int CoffeeTemperature_Test_CoffeeTest10_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_837(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_838(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_839(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_840(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_841(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_842(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_843(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_844(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_845(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_846(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_847(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_848(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void CoffeeTemperature_Test_CoffeeTest10_updateBoundParameters_0(DATA *data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_249(DATA *data, threadData_t *threadData);


/*
 equation index: 850
 type: ALGORITHM
 
   $cse1 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(cup.p_ambient);
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,850};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->simulationInfo->realParameter[31]);
  data->localData[0]->booleanVars[0] /* $cse1.region3boundary DISCRETE */ = tmp0._region3boundary;
  data->localData[0]->realVars[24] /* $cse1.R variable */ = tmp0._R;
  data->localData[0]->realVars[25] /* $cse1.T variable */ = tmp0._T;
  data->localData[0]->realVars[28] /* $cse1.d variable */ = tmp0._d;
  data->localData[0]->realVars[30] /* $cse1.h variable */ = tmp0._h;
  data->localData[0]->realVars[33] /* $cse1.s variable */ = tmp0._s;
  data->localData[0]->realVars[26] /* $cse1.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[27] /* $cse1.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[29] /* $cse1.dpT variable */ = tmp0._dpT;
  data->localData[0]->realVars[32] /* $cse1.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[31] /* $cse1.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[35] /* $cse1.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[34] /* $cse1.vp variable */ = tmp0._vp;
  TRACE_POP
}

/*
 equation index: 851
 type: ALGORITHM
 
   $cse2 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(cup.p_ambient);
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,851};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp1;
  tmp1 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->simulationInfo->realParameter[31]);
  data->localData[0]->booleanVars[1] /* $cse2.region3boundary DISCRETE */ = tmp1._region3boundary;
  data->localData[0]->realVars[124] /* $cse2.R variable */ = tmp1._R;
  data->localData[0]->realVars[125] /* $cse2.T variable */ = tmp1._T;
  data->localData[0]->realVars[128] /* $cse2.d variable */ = tmp1._d;
  data->localData[0]->realVars[130] /* $cse2.h variable */ = tmp1._h;
  data->localData[0]->realVars[133] /* $cse2.s variable */ = tmp1._s;
  data->localData[0]->realVars[126] /* $cse2.cp variable */ = tmp1._cp;
  data->localData[0]->realVars[127] /* $cse2.cv variable */ = tmp1._cv;
  data->localData[0]->realVars[129] /* $cse2.dpT variable */ = tmp1._dpT;
  data->localData[0]->realVars[132] /* $cse2.pt variable */ = tmp1._pt;
  data->localData[0]->realVars[131] /* $cse2.pd variable */ = tmp1._pd;
  data->localData[0]->realVars[135] /* $cse2.vt variable */ = tmp1._vt;
  data->localData[0]->realVars[134] /* $cse2.vp variable */ = tmp1._vp;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_303(DATA *data, threadData_t *threadData);


/*
 equation index: 853
 type: ALGORITHM
 
   $cse6 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(yakan.p_ambient);
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,853};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp2;
  tmp2 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->simulationInfo->realParameter[143]);
  data->localData[0]->booleanVars[2] /* $cse6.region3boundary DISCRETE */ = tmp2._region3boundary;
  data->localData[0]->realVars[193] /* $cse6.R variable */ = tmp2._R;
  data->localData[0]->realVars[194] /* $cse6.T variable */ = tmp2._T;
  data->localData[0]->realVars[197] /* $cse6.d variable */ = tmp2._d;
  data->localData[0]->realVars[199] /* $cse6.h variable */ = tmp2._h;
  data->localData[0]->realVars[202] /* $cse6.s variable */ = tmp2._s;
  data->localData[0]->realVars[195] /* $cse6.cp variable */ = tmp2._cp;
  data->localData[0]->realVars[196] /* $cse6.cv variable */ = tmp2._cv;
  data->localData[0]->realVars[198] /* $cse6.dpT variable */ = tmp2._dpT;
  data->localData[0]->realVars[201] /* $cse6.pt variable */ = tmp2._pt;
  data->localData[0]->realVars[200] /* $cse6.pd variable */ = tmp2._pd;
  data->localData[0]->realVars[204] /* $cse6.vt variable */ = tmp2._vt;
  data->localData[0]->realVars[203] /* $cse6.vp variable */ = tmp2._vp;
  TRACE_POP
}

/*
 equation index: 854
 type: ALGORITHM
 
   $cse7 := Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(yakan.p_ambient);
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,854};
  Modelica_Media_Common_IF97PhaseBoundaryProperties tmp3;
  tmp3 = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->simulationInfo->realParameter[143]);
  data->localData[0]->booleanVars[3] /* $cse7.region3boundary DISCRETE */ = tmp3._region3boundary;
  data->localData[0]->realVars[205] /* $cse7.R variable */ = tmp3._R;
  data->localData[0]->realVars[206] /* $cse7.T variable */ = tmp3._T;
  data->localData[0]->realVars[209] /* $cse7.d variable */ = tmp3._d;
  data->localData[0]->realVars[211] /* $cse7.h variable */ = tmp3._h;
  data->localData[0]->realVars[214] /* $cse7.s variable */ = tmp3._s;
  data->localData[0]->realVars[207] /* $cse7.cp variable */ = tmp3._cp;
  data->localData[0]->realVars[208] /* $cse7.cv variable */ = tmp3._cv;
  data->localData[0]->realVars[210] /* $cse7.dpT variable */ = tmp3._dpT;
  data->localData[0]->realVars[213] /* $cse7.pt variable */ = tmp3._pt;
  data->localData[0]->realVars[212] /* $cse7.pd variable */ = tmp3._pd;
  data->localData[0]->realVars[216] /* $cse7.vt variable */ = tmp3._vt;
  data->localData[0]->realVars[215] /* $cse7.vp variable */ = tmp3._vp;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_213(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_432(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_430(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_429(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_428(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_427(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_425(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_424(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_423(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_422(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_421(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_420(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_419(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_405(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_403(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_402(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_399(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_394(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_393(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_392(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_391(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_390(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_389(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_384(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_383(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_377(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_376(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_375(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_374(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_373(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_371(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_369(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_368(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_367(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_360(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_356(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_355(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_354(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_353(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_352(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_351(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_350(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_349(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_348(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_347(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_346(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_345(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_344(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_343(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_342(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_341(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_339(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_338(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_337(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_335(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_334(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_333(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_332(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_331(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_330(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_329(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_328(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_326(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_324(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_323(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_322(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_321(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_317(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_316(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_314(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_312(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_311(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_310(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_309(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_307(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_306(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_304(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_302(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_301(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_300(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_299(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_298(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_297(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_296(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_295(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_294(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_293(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_292(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_291(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_286(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_285(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_284(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_283(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_282(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_280(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_278(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_277(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_276(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_275(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_274(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_273(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_272(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_269(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_267(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_265(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_264(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_262(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_261(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_260(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_259(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_258(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_257(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_256(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_255(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_254(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_253(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_251(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_250(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_248(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_247(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_246(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_245(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_244(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_243(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_242(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_241(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_240(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_239(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_238(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_237(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_233(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_232(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_231(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_230(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_229(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_228(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_226(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_225(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_224(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_223(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_222(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_221(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_220(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_219(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_215(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_205(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_204(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_203(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_202(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_201(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_200(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_199(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_198(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_20(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_19(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_195(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_194(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_18(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_193(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_192(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_17(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_21(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_22(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_12(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_11(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_10(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_9(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_6(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_5(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_4(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_3(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_2(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1(DATA *data, threadData_t *threadData);


/*
 equation index: 1032
 type: ALGORITHM
 
   assert(system.p_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.p_ambient, has value: " + String(system.p_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,71,"Variable violating min constraint: 0.0 <= system.p_ambient, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[87],0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[87], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",8,3,10,44,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.p_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1033
 type: ALGORITHM
 
   assert(cup.p_ambient >= 611.657 and cup.p_ambient <= 100000000.0, "Variable violating min/max constraint: 611.657 <= cup.p_ambient <= 100000000.0, has value: " + String(cup.p_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,91,"Variable violating min/max constraint: 611.657 <= cup.p_ambient <= 100000000.0, has value: ");
  modelica_string tmp11;
  static int tmp12 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp12)
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[31],611.657);
    tmp9 = LessEq(data->simulationInfo->realParameter[31],100000000.0);
    if(!(tmp8 && tmp9))
    {
      tmp11 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[31], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp10),tmp11);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",62,3,64,63,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.p_ambient >= 611.657 and cup.p_ambient <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp12 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1034
 type: ALGORITHM
 
   assert(yakan.p_ambient >= 611.657 and yakan.p_ambient <= 100000000.0, "Variable violating min/max constraint: 611.657 <= yakan.p_ambient <= 100000000.0, has value: " + String(yakan.p_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,93,"Variable violating min/max constraint: 611.657 <= yakan.p_ambient <= 100000000.0, has value: ");
  modelica_string tmp16;
  static int tmp17 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp17)
  {
    tmp13 = GreaterEq(data->simulationInfo->realParameter[143],611.657);
    tmp14 = LessEq(data->simulationInfo->realParameter[143],100000000.0);
    if(!(tmp13 && tmp14))
    {
      tmp16 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[143], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp15),tmp16);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",62,3,64,63,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.p_ambient >= 611.657 and yakan.p_ambient <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp17 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1035
 type: ALGORITHM
 
   assert(combiTimeTable1.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and combiTimeTable1.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= combiTimeTable1.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(combiTimeTable1.extrapolation, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1035};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,189,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= combiTimeTable1.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp22)
  {
    tmp18 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[1],1);
    tmp19 = LessEq((modelica_integer)data->simulationInfo->integerParameter[1],4);
    if(!(tmp18 && tmp19))
    {
      tmp21 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[1], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp20),tmp21);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Sources.mo",2251,5,2253,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncombiTimeTable1.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and combiTimeTable1.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp22 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1036
 type: ALGORITHM
 
   assert(naturalConvection21.convectionType >= CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder and naturalConvection21.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates, "Variable violating min/max constraint: CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder <= naturalConvection21.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates, has value: " + String(naturalConvection21.convectionType, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1036};
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,230,"Variable violating min/max constraint: CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder <= naturalConvection21.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp23 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[11],1);
    tmp24 = LessEq((modelica_integer)data->simulationInfo->integerParameter[11],2);
    if(!(tmp23 && tmp24))
    {
      tmp26 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[11], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1/CoffeeTemperature.mo",1492,7,1492,46,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nnaturalConvection21.convectionType >= CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder and naturalConvection21.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1037
 type: ALGORITHM
 
   assert(naturalConvection1.convectionType >= CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder and naturalConvection1.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates, "Variable violating min/max constraint: CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder <= naturalConvection1.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates, has value: " + String(naturalConvection1.convectionType, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1037};
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,229,"Variable violating min/max constraint: CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder <= naturalConvection1.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates, has value: ");
  modelica_string tmp31;
  static int tmp32 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp32)
  {
    tmp28 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[10],1);
    tmp29 = LessEq((modelica_integer)data->simulationInfo->integerParameter[10],2);
    if(!(tmp28 && tmp29))
    {
      tmp31 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[10], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      {
        FILE_INFO info = {"C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1/CoffeeTemperature.mo",1492,7,1492,46,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nnaturalConvection1.convectionType >= CoffeeTemperature.UnitTest.ConvectionType.vertical_planes_cylinder and naturalConvection1.convectionType <= CoffeeTemperature.UnitTest.ConvectionType.LowerSurface_of_heatedPlates", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp32 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1038
 type: ALGORITHM
 
   assert(timeTable1.timeScale >= 1e-015, "Variable violating min constraint: 1e-015 <= timeTable1.timeScale, has value: " + String(timeTable1.timeScale, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1038};
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,78,"Variable violating min constraint: 1e-015 <= timeTable1.timeScale, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp33 = GreaterEq(data->simulationInfo->realParameter[103],1e-015);
    if(!tmp33)
    {
      tmp35 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[103], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Sources.mo",1974,5,1976,33,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntimeTable1.timeScale >= 1e-015", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp36 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1039
 type: ALGORITHM
 
   assert(combiTimeTable1.timeScale >= 1e-015, "Variable violating min constraint: 1e-015 <= combiTimeTable1.timeScale, has value: " + String(combiTimeTable1.timeScale, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1039};
  modelica_boolean tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,83,"Variable violating min constraint: 1e-015 <= combiTimeTable1.timeScale, has value: ");
  modelica_string tmp39;
  static int tmp40 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp40)
  {
    tmp37 = GreaterEq(data->simulationInfo->realParameter[14],1e-015);
    if(!tmp37)
    {
      tmp39 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[14], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp38),tmp39);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Sources.mo",2259,5,2261,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncombiTimeTable1.timeScale >= 1e-015", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp40 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1040
 type: ALGORITHM
 
   assert(combiTimeTable1.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and combiTimeTable1.smoothness <= Modelica.Blocks.Types.Smoothness.MonotoneContinuousDerivative2, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= combiTimeTable1.smoothness <= Modelica.Blocks.Types.Smoothness.MonotoneContinuousDerivative2, has value: " + String(combiTimeTable1.smoothness, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1040};
  modelica_boolean tmp41;
  modelica_boolean tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,195,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= combiTimeTable1.smoothness <= Modelica.Blocks.Types.Smoothness.MonotoneContinuousDerivative2, has value: ");
  modelica_string tmp44;
  static int tmp45 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp45)
  {
    tmp41 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[3],1);
    tmp42 = LessEq((modelica_integer)data->simulationInfo->integerParameter[3],5);
    if(!(tmp41 && tmp42))
    {
      tmp44 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[3], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp43),tmp44);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Sources.mo",2248,5,2250,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncombiTimeTable1.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and combiTimeTable1.smoothness <= Modelica.Blocks.Types.Smoothness.MonotoneContinuousDerivative2", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp45 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1041
 type: ALGORITHM
 
   assert(combiTimeTable1.nout >= 1, "Variable violating min constraint: 1 <= combiTimeTable1.nout, has value: " + String(combiTimeTable1.nout, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1041};
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,73,"Variable violating min constraint: 1 <= combiTimeTable1.nout, has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp46 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[2],((modelica_integer) 1));
    if(!tmp46)
    {
      tmp48 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[2], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Interfaces.mo",282,5,282,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncombiTimeTable1.nout >= 1", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1042
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.init >= Modelica.Blocks.Types.Init.NoInit and valveIncompressible1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= valveIncompressible1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(valveIncompressible1.filter.init, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,165,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= valveIncompressible1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp53;
  static int tmp54 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp54)
  {
    tmp50 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[23],1);
    tmp51 = LessEq((modelica_integer)data->simulationInfo->integerParameter[23],4);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[23], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1744,5,1746,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.init >= Modelica.Blocks.Types.Init.NoInit and valveIncompressible1.filter.init <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp54 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1043
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.order >= 1, "Variable violating min constraint: 1 <= valveIncompressible1.filter.order, has value: " + String(valveIncompressible1.filter.order, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1043};
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,86,"Variable violating min constraint: 1 <= valveIncompressible1.filter.order, has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp55 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[29],((modelica_integer) 1));
    if(!tmp55)
    {
      tmp57 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[29], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1731,5,1731,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.order >= 1", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1044
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.filterType >= Modelica.Blocks.Types.FilterType.LowPass and valveIncompressible1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, "Variable violating min/max constraint: Modelica.Blocks.Types.FilterType.LowPass <= valveIncompressible1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, has value: " + String(valveIncompressible1.filter.filterType, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1044};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,179,"Variable violating min/max constraint: Modelica.Blocks.Types.FilterType.LowPass <= valveIncompressible1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop, has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp59 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[22],1);
    tmp60 = LessEq((modelica_integer)data->simulationInfo->integerParameter[22],4);
    if(!(tmp59 && tmp60))
    {
      tmp62 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[22], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1729,5,1730,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.filterType >= Modelica.Blocks.Types.FilterType.LowPass and valveIncompressible1.filter.filterType <= Modelica.Blocks.Types.FilterType.BandStop", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1045
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.analogFilter >= Modelica.Blocks.Types.AnalogFilter.CriticalDamping and valveIncompressible1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, "Variable violating min/max constraint: Modelica.Blocks.Types.AnalogFilter.CriticalDamping <= valveIncompressible1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, has value: " + String(valveIncompressible1.filter.analogFilter, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1045};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,195,"Variable violating min/max constraint: Modelica.Blocks.Types.AnalogFilter.CriticalDamping <= valveIncompressible1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI, has value: ");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp68)
  {
    tmp64 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[21],1);
    tmp65 = LessEq((modelica_integer)data->simulationInfo->integerParameter[21],4);
    if(!(tmp64 && tmp65))
    {
      tmp67 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[21], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1727,5,1728,86,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.analogFilter >= Modelica.Blocks.Types.AnalogFilter.CriticalDamping and valveIncompressible1.filter.analogFilter <= Modelica.Blocks.Types.AnalogFilter.ChebyshevI", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp68 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1046
 type: ALGORITHM
 
   assert(valveIncompressible1.leakageOpening >= 0.0 and valveIncompressible1.leakageOpening <= 1.0, "Variable violating min/max constraint: 0.0 <= valveIncompressible1.leakageOpening <= 1.0, has value: " + String(valveIncompressible1.leakageOpening, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1046};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,101,"Variable violating min/max constraint: 0.0 <= valveIncompressible1.leakageOpening <= 1.0, has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp69 = GreaterEq(data->simulationInfo->realParameter[122],0.0);
    tmp70 = LessEq(data->simulationInfo->realParameter[122],1.0);
    if(!(tmp69 && tmp70))
    {
      tmp72 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[122], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",466,7,468,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.leakageOpening >= 0.0 and valveIncompressible1.leakageOpening <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1047
 type: ALGORITHM
 
   assert(system.dp_small >= 0.0, "Variable violating min constraint: 0.0 <= system.dp_small, has value: " + String(system.dp_small, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1047};
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,70,"Variable violating min constraint: 0.0 <= system.dp_small, has value: ");
  modelica_string tmp76;
  static int tmp77 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp77)
  {
    tmp74 = GreaterEq(data->simulationInfo->realParameter[81],0.0);
    if(!tmp74)
    {
      tmp76 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[81], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",60,3,62,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.dp_small >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp77 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1048
 type: ALGORITHM
 
   assert(valveIncompressible1.opening_nominal >= 0.0 and valveIncompressible1.opening_nominal <= 1.0, "Variable violating min/max constraint: 0.0 <= valveIncompressible1.opening_nominal <= 1.0, has value: " + String(valveIncompressible1.opening_nominal, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  modelica_boolean tmp78;
  modelica_boolean tmp79;
  static const MMC_DEFSTRINGLIT(tmp80,102,"Variable violating min/max constraint: 0.0 <= valveIncompressible1.opening_nominal <= 1.0, has value: ");
  modelica_string tmp81;
  static int tmp82 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp82)
  {
    tmp78 = GreaterEq(data->simulationInfo->realParameter[127],0.0);
    tmp79 = LessEq(data->simulationInfo->realParameter[127],1.0);
    if(!(tmp78 && tmp79))
    {
      tmp81 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[127], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp80),tmp81);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",456,7,458,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.opening_nominal >= 0.0 and valveIncompressible1.opening_nominal <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp82 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1049
 type: ALGORITHM
 
   assert(valveIncompressible1.rho_nominal >= 0.0 and valveIncompressible1.rho_nominal <= 100000.0, "Variable violating min/max constraint: 0.0 <= valveIncompressible1.rho_nominal <= 100000.0, has value: " + String(valveIncompressible1.rho_nominal, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1049};
  modelica_boolean tmp83;
  modelica_boolean tmp84;
  static const MMC_DEFSTRINGLIT(tmp85,103,"Variable violating min/max constraint: 0.0 <= valveIncompressible1.rho_nominal <= 100000.0, has value: ");
  modelica_string tmp86;
  static int tmp87 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp87)
  {
    tmp83 = GreaterEq(data->simulationInfo->realParameter[128],0.0);
    tmp84 = LessEq(data->simulationInfo->realParameter[128],100000.0);
    if(!(tmp83 && tmp84))
    {
      tmp86 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[128], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp85),tmp86);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",452,7,455,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.rho_nominal >= 0.0 and valveIncompressible1.rho_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp87 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1050
 type: ALGORITHM
 
   assert(valveIncompressible1.m_flow_nominal >= -100000.0 and valveIncompressible1.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valveIncompressible1.m_flow_nominal <= 100000.0, has value: " + String(valveIncompressible1.m_flow_nominal, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  modelica_boolean tmp88;
  modelica_boolean tmp89;
  static const MMC_DEFSTRINGLIT(tmp90,112,"Variable violating min/max constraint: -100000.0 <= valveIncompressible1.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp91;
  static int tmp92 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp92)
  {
    tmp88 = GreaterEq(data->simulationInfo->realParameter[123],-100000.0);
    tmp89 = LessEq(data->simulationInfo->realParameter[123],100000.0);
    if(!(tmp88 && tmp89))
    {
      tmp91 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[123], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp90),tmp91);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",450,7,451,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.m_flow_nominal >= -100000.0 and valveIncompressible1.m_flow_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp92 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1051
 type: ALGORITHM
 
   assert(valveIncompressible1.CvData >= Modelica.Fluid.Types.CvTypes.Av and valveIncompressible1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, "Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valveIncompressible1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: " + String(valveIncompressible1.CvData, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1051};
  modelica_boolean tmp93;
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,154,"Variable violating min/max constraint: Modelica.Fluid.Types.CvTypes.Av <= valveIncompressible1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint, has value: ");
  modelica_string tmp96;
  static int tmp97 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp97)
  {
    tmp93 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[20],1);
    tmp94 = LessEq((modelica_integer)data->simulationInfo->integerParameter[20],4);
    if(!(tmp93 && tmp94))
    {
      tmp96 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[20], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Valves.mo",433,7,435,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.CvData >= Modelica.Fluid.Types.CvTypes.Av and valveIncompressible1.CvData <= Modelica.Fluid.Types.CvTypes.OpPoint", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp97 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1052
 type: ALGORITHM
 
   assert(system.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= system.m_flow_small, has value: " + String(system.m_flow_small, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1052};
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,74,"Variable violating min constraint: 0.0 <= system.m_flow_small, has value: ");
  modelica_string tmp100;
  static int tmp101 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp101)
  {
    tmp98 = GreaterEq(data->simulationInfo->realParameter[85],0.0);
    if(!tmp98)
    {
      tmp100 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[85], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",63,3,65,83,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.m_flow_small >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp101 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1053
 type: ALGORITHM
 
   assert(valveIncompressible1.m_flow_small >= -100000.0 and valveIncompressible1.m_flow_small <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valveIncompressible1.m_flow_small <= 100000.0, has value: " + String(valveIncompressible1.m_flow_small, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1053};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,110,"Variable violating min/max constraint: -100000.0 <= valveIncompressible1.m_flow_small <= 100000.0, has value: ");
  modelica_string tmp105;
  static int tmp106 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp106)
  {
    tmp102 = GreaterEq(data->simulationInfo->realParameter[124],-100000.0);
    tmp103 = LessEq(data->simulationInfo->realParameter[124],100000.0);
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[124], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",314,3,316,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.m_flow_small >= -100000.0 and valveIncompressible1.m_flow_small <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp106 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1054
 type: ALGORITHM
 
   assert(valveIncompressible1.m_flow_start >= -100000.0 and valveIncompressible1.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= valveIncompressible1.m_flow_start <= 100000.0, has value: " + String(valveIncompressible1.m_flow_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1054};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  static const MMC_DEFSTRINGLIT(tmp109,110,"Variable violating min/max constraint: -100000.0 <= valveIncompressible1.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp110;
  static int tmp111 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp111)
  {
    tmp107 = GreaterEq(data->simulationInfo->realParameter[125],-100000.0);
    tmp108 = LessEq(data->simulationInfo->realParameter[125],100000.0);
    if(!(tmp107 && tmp108))
    {
      tmp110 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[125], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp109),tmp110);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",310,3,312,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.m_flow_start >= -100000.0 and valveIncompressible1.m_flow_start <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp111 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1055
 type: ALGORITHM
 
   assert(valveIncompressible1.dp_start >= -1e+060 and valveIncompressible1.dp_start <= 100000000.0, "Variable violating min/max constraint: -1e+060 <= valveIncompressible1.dp_start <= 100000000.0, has value: " + String(valveIncompressible1.dp_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1055};
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,107,"Variable violating min/max constraint: -1e+060 <= valveIncompressible1.dp_start <= 100000000.0, has value: ");
  modelica_string tmp115;
  static int tmp116 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp116)
  {
    tmp112 = GreaterEq(data->simulationInfo->realParameter[109],-1e+060);
    tmp113 = LessEq(data->simulationInfo->realParameter[109],100000000.0);
    if(!(tmp112 && tmp113))
    {
      tmp115 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[109], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp114),tmp115);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",307,3,309,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.dp_start >= -1e+060 and valveIncompressible1.dp_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp116 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1056
 type: ALGORITHM
 
   assert(pipe.flowModel.mu_nominal >= 0.0, "Variable violating min constraint: 0.0 <= pipe.flowModel.mu_nominal, has value: " + String(pipe.flowModel.mu_nominal, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1056};
  modelica_boolean tmp117;
  static const MMC_DEFSTRINGLIT(tmp118,80,"Variable violating min constraint: 0.0 <= pipe.flowModel.mu_nominal, has value: ");
  modelica_string tmp119;
  static int tmp120 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp120)
  {
    tmp117 = GreaterEq(data->simulationInfo->realParameter[65],0.0);
    if(!tmp117)
    {
      tmp119 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[65], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp118),tmp119);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1036,13,1040,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.mu_nominal >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp120 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1057
 type: ALGORITHM
 
   assert(pipe.flowModel.rho_nominal >= 0.0, "Variable violating min constraint: 0.0 <= pipe.flowModel.rho_nominal, has value: " + String(pipe.flowModel.rho_nominal, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1057};
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,81,"Variable violating min constraint: 0.0 <= pipe.flowModel.rho_nominal, has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp121 = GreaterEq(data->simulationInfo->realParameter[69],0.0);
    if(!tmp121)
    {
      tmp123 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[69], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1029,13,1031,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.rho_nominal >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1058
 type: ALGORITHM
 
   assert(system.p_start >= 0.0, "Variable violating min constraint: 0.0 <= system.p_start, has value: " + String(system.p_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1058};
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,69,"Variable violating min constraint: 0.0 <= system.p_start, has value: ");
  modelica_string tmp127;
  static int tmp128 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp128)
  {
    tmp125 = GreaterEq(data->simulationInfo->realParameter[88],0.0);
    if(!tmp125)
    {
      tmp127 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[88], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",44,3,46,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.p_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1059
 type: ALGORITHM
 
   assert(pipe.p_a_start >= 611.657 and pipe.p_a_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= pipe.p_a_start <= 100000000.0, has value: " + String(pipe.p_a_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1059};
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,92,"Variable violating min/max constraint: 611.657 <= pipe.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp129 = GreaterEq(data->simulationInfo->realParameter[74],611.657);
    tmp130 = LessEq(data->simulationInfo->realParameter[74],100000000.0);
    if(!(tmp129 && tmp130))
    {
      tmp132 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[74], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",11,5,13,49,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.p_a_start >= 611.657 and pipe.p_a_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1060
 type: ALGORITHM
 
   assert(pipe.p_b_start >= 611.657 and pipe.p_b_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= pipe.p_b_start <= 100000000.0, has value: " + String(pipe.p_b_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1060};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,92,"Variable violating min/max constraint: 611.657 <= pipe.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp137;
  static int tmp138 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp138)
  {
    tmp134 = GreaterEq(data->simulationInfo->realParameter[75],611.657);
    tmp135 = LessEq(data->simulationInfo->realParameter[75],100000000.0);
    if(!(tmp134 && tmp135))
    {
      tmp137 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[75], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",14,5,16,49,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.p_b_start >= 611.657 and pipe.p_b_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp138 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1061
 type: ALGORITHM
 
   assert(pipe.flowModel.p_b_start >= 611.657 and pipe.flowModel.p_b_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= pipe.flowModel.p_b_start <= 100000000.0, has value: " + String(pipe.flowModel.p_b_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,102,"Variable violating min/max constraint: 611.657 <= pipe.flowModel.p_b_start <= 100000000.0, has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp139 = GreaterEq(data->simulationInfo->realParameter[68],611.657);
    tmp140 = LessEq(data->simulationInfo->realParameter[68],100000000.0);
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[68], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",981,13,983,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.p_b_start >= 611.657 and pipe.flowModel.p_b_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1062
 type: ALGORITHM
 
   assert(pipe.flowModel.p_a_start >= 611.657 and pipe.flowModel.p_a_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= pipe.flowModel.p_a_start <= 100000000.0, has value: " + String(pipe.flowModel.p_a_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,102,"Variable violating min/max constraint: 611.657 <= pipe.flowModel.p_a_start <= 100000000.0, has value: ");
  modelica_string tmp147;
  static int tmp148 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp148)
  {
    tmp144 = GreaterEq(data->simulationInfo->realParameter[67],611.657);
    tmp145 = LessEq(data->simulationInfo->realParameter[67],100000000.0);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[67], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",978,13,980,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.p_a_start >= 611.657 and pipe.flowModel.p_a_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp148 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1063
 type: ALGORITHM
 
   assert(pipe.flowModel.m_flow_start >= -100000.0 and pipe.flowModel.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pipe.flowModel.m_flow_start <= 100000.0, has value: " + String(pipe.flowModel.m_flow_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1063};
  modelica_boolean tmp149;
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,104,"Variable violating min/max constraint: -100000.0 <= pipe.flowModel.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp152;
  static int tmp153 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp153)
  {
    tmp149 = GreaterEq(data->simulationInfo->realParameter[64],-100000.0);
    tmp150 = LessEq(data->simulationInfo->realParameter[64],100000.0);
    if(!(tmp149 && tmp150))
    {
      tmp152 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[64], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",975,13,977,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.m_flow_start >= -100000.0 and pipe.flowModel.m_flow_start <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp153 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1064
 type: ALGORITHM
 
   assert(pipe.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(pipe.flowModel.momentumDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1064};
  modelica_boolean tmp154;
  modelica_boolean tmp155;
  static const MMC_DEFSTRINGLIT(tmp156,180,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp157;
  static int tmp158 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp158)
  {
    tmp154 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[13],1);
    tmp155 = LessEq((modelica_integer)data->simulationInfo->integerParameter[13],4);
    if(!(tmp154 && tmp155))
    {
      tmp157 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[13], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp156),tmp157);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",970,13,972,109,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and pipe.flowModel.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp158 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1065
 type: ALGORITHM
 
   assert(pipe.nParallel >= 1.0, "Variable violating min constraint: 1.0 <= pipe.nParallel, has value: " + String(pipe.nParallel, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1065};
  modelica_boolean tmp159;
  static const MMC_DEFSTRINGLIT(tmp160,69,"Variable violating min constraint: 1.0 <= pipe.nParallel, has value: ");
  modelica_string tmp161;
  static int tmp162 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp162)
  {
    tmp159 = GreaterEq(data->simulationInfo->realParameter[73],1.0);
    if(!tmp159)
    {
      tmp161 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[73], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp160),tmp161);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",238,7,239,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.nParallel >= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp162 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1066
 type: ALGORITHM
 
   assert(pipe.m_flow_start >= -100000.0 and pipe.m_flow_start <= 100000.0, "Variable violating min/max constraint: -100000.0 <= pipe.m_flow_start <= 100000.0, has value: " + String(pipe.m_flow_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1066};
  modelica_boolean tmp163;
  modelica_boolean tmp164;
  static const MMC_DEFSTRINGLIT(tmp165,94,"Variable violating min/max constraint: -100000.0 <= pipe.m_flow_start <= 100000.0, has value: ");
  modelica_string tmp166;
  static int tmp167 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp167)
  {
    tmp163 = GreaterEq(data->simulationInfo->realParameter[72],-100000.0);
    tmp164 = LessEq(data->simulationInfo->realParameter[72],100000.0);
    if(!(tmp163 && tmp164))
    {
      tmp166 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[72], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp165),tmp166);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",17,5,19,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.m_flow_start >= -100000.0 and pipe.m_flow_start <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp167 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1067
 type: ALGORITHM
 
   assert(pipe.diameter >= 0.0, "Variable violating min constraint: 0.0 <= pipe.diameter, has value: " + String(pipe.diameter, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1067};
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,68,"Variable violating min constraint: 0.0 <= pipe.diameter, has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp168 = GreaterEq(data->simulationInfo->realParameter[57],0.0);
    if(!tmp168)
    {
      tmp170 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[57], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",245,7,246,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.diameter >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1068
 type: ALGORITHM
 
   assert(pipe.roughness >= 0.0, "Variable violating min constraint: 0.0 <= pipe.roughness, has value: " + String(pipe.roughness, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1068};
  modelica_boolean tmp172;
  static const MMC_DEFSTRINGLIT(tmp173,69,"Variable violating min constraint: 0.0 <= pipe.roughness, has value: ");
  modelica_string tmp174;
  static int tmp175 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp175)
  {
    tmp172 = GreaterEq(data->simulationInfo->realParameter[77],0.0);
    if(!tmp172)
    {
      tmp174 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[77], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp173),tmp174);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",253,7,255,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.roughness >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp175 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1069
 type: ALGORITHM
 
   assert(yakan.level_start >= 0.0, "Variable violating min constraint: 0.0 <= yakan.level_start, has value: " + String(yakan.level_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1069};
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,72,"Variable violating min constraint: 0.0 <= yakan.level_start, has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp176 = GreaterEq(data->simulationInfo->realParameter[139],0.0);
    if(!tmp176)
    {
      tmp178 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[139], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",70,3,72,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.level_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1070
 type: ALGORITHM
 
   assert(yakan.level_start_eps >= 0.0, "Variable violating min constraint: 0.0 <= yakan.level_start_eps, has value: " + String(yakan.level_start_eps, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1070};
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,76,"Variable violating min constraint: 0.0 <= yakan.level_start_eps, has value: ");
  modelica_string tmp182;
  static int tmp183 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp183)
  {
    tmp180 = GreaterEq(data->simulationInfo->realParameter[140],0.0);
    if(!tmp180)
    {
      tmp182 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[140], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",85,3,85,87,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.level_start_eps >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1071
 type: ALGORITHM
 
   assert(system.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= system.T_ambient, has value: " + String(system.T_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1071};
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,71,"Variable violating min constraint: 0.0 <= system.T_ambient, has value: ");
  modelica_string tmp186;
  static int tmp187 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp187)
  {
    tmp184 = GreaterEq(data->simulationInfo->realParameter[79],0.0);
    if(!tmp184)
    {
      tmp186 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[79], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",11,3,13,44,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.T_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1072
 type: ALGORITHM
 
   assert(yakan.T_ambient >= 273.15 and yakan.T_ambient <= 2273.15, "Variable violating min/max constraint: 273.15 <= yakan.T_ambient <= 2273.15, has value: " + String(yakan.T_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1072};
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,88,"Variable violating min/max constraint: 273.15 <= yakan.T_ambient <= 2273.15, has value: ");
  modelica_string tmp191;
  static int tmp192 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp192)
  {
    tmp188 = GreaterEq(data->simulationInfo->realParameter[130],273.15);
    tmp189 = LessEq(data->simulationInfo->realParameter[130],2273.15);
    if(!(tmp188 && tmp189))
    {
      tmp191 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[130], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",65,3,67,63,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.T_ambient >= 273.15 and yakan.T_ambient <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp192 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1073
 type: ALGORITHM
 
   assert(yakan.height >= 0.0, "Variable violating min constraint: 0.0 <= yakan.height, has value: " + String(yakan.height, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1073};
  modelica_boolean tmp193;
  static const MMC_DEFSTRINGLIT(tmp194,67,"Variable violating min constraint: 0.0 <= yakan.height, has value: ");
  modelica_string tmp195;
  static int tmp196 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp196)
  {
    tmp193 = GreaterEq(data->simulationInfo->realParameter[138],0.0);
    if(!tmp193)
    {
      tmp195 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[138], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp194),tmp195);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",58,3,58,46,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.height >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp196 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1074
 type: ALGORITHM
 
   assert(yakan.fluidLevel_max >= 0.0, "Variable violating min constraint: 0.0 <= yakan.fluidLevel_max, has value: " + String(yakan.fluidLevel_max, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1074};
  modelica_boolean tmp197;
  static const MMC_DEFSTRINGLIT(tmp198,75,"Variable violating min constraint: 0.0 <= yakan.fluidLevel_max, has value: ");
  modelica_string tmp199;
  static int tmp200 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp200)
  {
    tmp197 = GreaterEq(data->simulationInfo->realParameter[134],0.0);
    if(!tmp197)
    {
      tmp199 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[134], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp198),tmp199);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",276,9,277,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.fluidLevel_max >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp200 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1075
 type: ALGORITHM
 
   assert(yakan.heatTransfer.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= yakan.heatTransfer.T_ambient, has value: " + String(yakan.heatTransfer.T_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,83,"Variable violating min constraint: 0.0 <= yakan.heatTransfer.T_ambient, has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp201 = GreaterEq(data->simulationInfo->realParameter[136],0.0);
    if(!tmp201)
    {
      tmp203 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[136], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",487,5,488,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.heatTransfer.T_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1076
 type: ALGORITHM
 
   assert(yakan.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= yakan.m_flow_small, has value: " + String(yakan.m_flow_small, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1076};
  modelica_boolean tmp205;
  static const MMC_DEFSTRINGLIT(tmp206,73,"Variable violating min constraint: 0.0 <= yakan.m_flow_small, has value: ");
  modelica_string tmp207;
  static int tmp208 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp208)
  {
    tmp205 = GreaterEq(data->simulationInfo->realParameter[142],0.0);
    if(!tmp205)
    {
      tmp207 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[142], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp206),tmp207);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",213,9,215,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.m_flow_small >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp208 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1077
 type: ALGORITHM
 
   assert(yakan.m_flow_nominal >= -100000.0 and yakan.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= yakan.m_flow_nominal <= 100000.0, has value: " + String(yakan.m_flow_nominal, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1077};
  modelica_boolean tmp209;
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,97,"Variable violating min/max constraint: -100000.0 <= yakan.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp212;
  static int tmp213 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp213)
  {
    tmp209 = GreaterEq(data->simulationInfo->realParameter[141],-100000.0);
    tmp210 = LessEq(data->simulationInfo->realParameter[141],100000.0);
    if(!(tmp209 && tmp210))
    {
      tmp212 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[141], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",210,9,212,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.m_flow_nominal >= -100000.0 and yakan.m_flow_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1078
 type: ALGORITHM
 
   assert(yakan.portsData[1].zeta_in >= 0.0, "Variable violating min constraint: 0.0 <= yakan.portsData[1].zeta_in, has value: " + String(yakan.portsData[1].zeta_in, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,81,"Variable violating min constraint: 0.0 <= yakan.portsData[1].zeta_in, has value: ");
  modelica_string tmp216;
  static int tmp217 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp217)
  {
    tmp214 = GreaterEq(data->simulationInfo->realParameter[147],0.0);
    if(!tmp214)
    {
      tmp216 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[147], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",550,7,551,104,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.portsData[1].zeta_in >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp217 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1079
 type: ALGORITHM
 
   assert(yakan.portsData[1].zeta_out >= 0.0, "Variable violating min constraint: 0.0 <= yakan.portsData[1].zeta_out, has value: " + String(yakan.portsData[1].zeta_out, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  modelica_boolean tmp218;
  static const MMC_DEFSTRINGLIT(tmp219,82,"Variable violating min constraint: 0.0 <= yakan.portsData[1].zeta_out, has value: ");
  modelica_string tmp220;
  static int tmp221 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp221)
  {
    tmp218 = GreaterEq(data->simulationInfo->realParameter[148],0.0);
    if(!tmp218)
    {
      tmp220 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[148], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp219),tmp220);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",548,7,549,105,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.portsData[1].zeta_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp221 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1080
 type: ALGORITHM
 
   assert(yakan.portsData[1].height >= 0.0, "Variable violating min constraint: 0.0 <= yakan.portsData[1].height, has value: " + String(yakan.portsData[1].height, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  modelica_boolean tmp222;
  static const MMC_DEFSTRINGLIT(tmp223,80,"Variable violating min constraint: 0.0 <= yakan.portsData[1].height, has value: ");
  modelica_string tmp224;
  static int tmp225 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp225)
  {
    tmp222 = GreaterEq(data->simulationInfo->realParameter[146],0.0);
    if(!tmp222)
    {
      tmp224 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[146], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp223),tmp224);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",547,7,547,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.portsData[1].height >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp225 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1081
 type: ALGORITHM
 
   assert(yakan.portsData[1].diameter >= 0.0, "Variable violating min constraint: 0.0 <= yakan.portsData[1].diameter, has value: " + String(yakan.portsData[1].diameter, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,82,"Variable violating min constraint: 0.0 <= yakan.portsData[1].diameter, has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp226 = GreaterEq(data->simulationInfo->realParameter[145],0.0);
    if(!tmp226)
    {
      tmp228 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[145], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",545,7,546,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.portsData[1].diameter >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1082
 type: ALGORITHM
 
   assert(yakan.X_start[1] >= 0.0 and yakan.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= yakan.X_start[1] <= 1.0, has value: " + String(yakan.X_start[1], "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,82,"Variable violating min/max constraint: 0.0 <= yakan.X_start[1] <= 1.0, has value: ");
  modelica_string tmp233;
  static int tmp234 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp234)
  {
    tmp230 = GreaterEq(data->simulationInfo->realParameter[132],0.0);
    tmp231 = LessEq(data->simulationInfo->realParameter[132],1.0);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[132], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",565,7,567,73,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.X_start[1] >= 0.0 and yakan.X_start[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp234 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1083
 type: ALGORITHM
 
   assert(yakan.p_start >= 611.657 and yakan.p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= yakan.p_start <= 100000000.0, has value: " + String(yakan.p_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,91,"Variable violating min/max constraint: 611.657 <= yakan.p_start <= 100000000.0, has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp235 = GreaterEq(data->simulationInfo->realParameter[144],611.657);
    tmp236 = LessEq(data->simulationInfo->realParameter[144],100000000.0);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[144], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",551,7,553,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.p_start >= 611.657 and yakan.p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1084
 type: ALGORITHM
 
   assert(yakan.T_start >= 273.15 and yakan.T_start <= 2273.15, "Variable violating min/max constraint: 273.15 <= yakan.T_start <= 2273.15, has value: " + String(yakan.T_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1084};
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,86,"Variable violating min/max constraint: 273.15 <= yakan.T_start <= 2273.15, has value: ");
  modelica_string tmp243;
  static int tmp244 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp244)
  {
    tmp240 = GreaterEq(data->simulationInfo->realParameter[131],273.15);
    tmp241 = LessEq(data->simulationInfo->realParameter[131],2273.15);
    if(!(tmp240 && tmp241))
    {
      tmp243 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[131], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",557,7,560,73,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.T_start >= 273.15 and yakan.T_start <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp244 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1085
 type: ALGORITHM
 
   assert(yakan.h_start >= -10000000000.0 and yakan.h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= yakan.h_start <= 10000000000.0, has value: " + String(yakan.h_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1085};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,100,"Variable violating min/max constraint: -10000000000.0 <= yakan.h_start <= 10000000000.0, has value: ");
  modelica_string tmp248;
  static int tmp249 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp249)
  {
    tmp245 = GreaterEq(data->simulationInfo->realParameter[135],-10000000000.0);
    tmp246 = LessEq(data->simulationInfo->realParameter[135],10000000000.0);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[135], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",561,7,564,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.h_start >= -10000000000.0 and yakan.h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp249 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1086
 type: ALGORITHM
 
   assert(yakan.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(yakan.traceDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp253;
  static int tmp254 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp254)
  {
    tmp250 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[35],1);
    tmp251 = LessEq((modelica_integer)data->simulationInfo->integerParameter[35],4);
    if(!(tmp250 && tmp251))
    {
      tmp253 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[35], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",546,7,548,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp254 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1087
 type: ALGORITHM
 
   assert(yakan.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(yakan.substanceDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp258;
  static int tmp259 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp259)
  {
    tmp255 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[34],1);
    tmp256 = LessEq((modelica_integer)data->simulationInfo->integerParameter[34],4);
    if(!(tmp255 && tmp256))
    {
      tmp258 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[34], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",543,7,545,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp259 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1088
 type: ALGORITHM
 
   assert(yakan.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(yakan.massDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,167,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp263;
  static int tmp264 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp264)
  {
    tmp260 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[32],1);
    tmp261 = LessEq((modelica_integer)data->simulationInfo->integerParameter[32],4);
    if(!(tmp260 && tmp261))
    {
      tmp263 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[32], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",540,7,542,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp264 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1089
 type: ALGORITHM
 
   assert(yakan.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(yakan.energyDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  modelica_boolean tmp265;
  modelica_boolean tmp266;
  static const MMC_DEFSTRINGLIT(tmp267,169,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= yakan.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp268;
  static int tmp269 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp269)
  {
    tmp265 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[30],1);
    tmp266 = LessEq((modelica_integer)data->simulationInfo->integerParameter[30],4);
    if(!(tmp265 && tmp266))
    {
      tmp268 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[30], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp267),tmp268);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",537,7,539,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and yakan.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp269 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1090
 type: ALGORITHM
 
   assert(fixedTemperature2.T >= 0.0, "Variable violating min constraint: 0.0 <= fixedTemperature2.T, has value: " + String(fixedTemperature2.T, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1090(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1090};
  modelica_boolean tmp270;
  static const MMC_DEFSTRINGLIT(tmp271,74,"Variable violating min constraint: 0.0 <= fixedTemperature2.T, has value: ");
  modelica_string tmp272;
  static int tmp273 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp273)
  {
    tmp270 = GreaterEq(data->simulationInfo->realParameter[45],0.0);
    if(!tmp270)
    {
      tmp272 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[45], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp271),tmp272);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Thermal/HeatTransfer.mo",1359,7,1359,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nfixedTemperature2.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp273 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1091
 type: ALGORITHM
 
   assert(system.eps_m_flow >= 0.0, "Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: " + String(system.eps_m_flow, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1091(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1091};
  modelica_boolean tmp274;
  static const MMC_DEFSTRINGLIT(tmp275,72,"Variable violating min constraint: 0.0 <= system.eps_m_flow, has value: ");
  modelica_string tmp276;
  static int tmp277 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp277)
  {
    tmp274 = GreaterEq(data->simulationInfo->realParameter[82],0.0);
    if(!tmp274)
    {
      tmp276 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[82], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp275),tmp276);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",57,3,59,62,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.eps_m_flow >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp277 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1092
 type: ALGORITHM
 
   assert(system.T_start >= 0.0, "Variable violating min constraint: 0.0 <= system.T_start, has value: " + String(system.T_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1092(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1092};
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,69,"Variable violating min constraint: 0.0 <= system.T_start, has value: ");
  modelica_string tmp280;
  static int tmp281 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp281)
  {
    tmp278 = GreaterEq(data->simulationInfo->realParameter[80],0.0);
    if(!tmp278)
    {
      tmp280 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[80], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",47,3,49,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.T_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1093
 type: ALGORITHM
 
   assert(system.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.momentumDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1093(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1093};
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  static const MMC_DEFSTRINGLIT(tmp284,172,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp285;
  static int tmp286 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp286)
  {
    tmp282 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[17],1);
    tmp283 = LessEq((modelica_integer)data->simulationInfo->integerParameter[17],4);
    if(!(tmp282 && tmp283))
    {
      tmp285 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[17], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp284),tmp285);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",35,3,38,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.momentumDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.momentumDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp286 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1094
 type: ALGORITHM
 
   assert(system.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.traceDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1094(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1094};
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,169,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp290;
  static int tmp291 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp291)
  {
    tmp287 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[19],1);
    tmp288 = LessEq((modelica_integer)data->simulationInfo->integerParameter[19],4);
    if(!(tmp287 && tmp288))
    {
      tmp290 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[19], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",32,3,34,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp291 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1095
 type: ALGORITHM
 
   assert(system.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.substanceDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1095(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1095};
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  static const MMC_DEFSTRINGLIT(tmp294,173,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp295;
  static int tmp296 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp296)
  {
    tmp292 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[18],1);
    tmp293 = LessEq((modelica_integer)data->simulationInfo->integerParameter[18],4);
    if(!(tmp292 && tmp293))
    {
      tmp295 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[18], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp294),tmp295);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",29,3,31,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp296 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1096
 type: ALGORITHM
 
   assert(system.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.massDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1096(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1096};
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,168,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp297 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[16],1);
    tmp298 = LessEq((modelica_integer)data->simulationInfo->integerParameter[16],4);
    if(!(tmp297 && tmp298))
    {
      tmp300 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[16], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",26,3,28,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1097
 type: ALGORITHM
 
   assert(system.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(system.energyDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1097(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1097};
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  static const MMC_DEFSTRINGLIT(tmp304,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp305;
  static int tmp306 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp306)
  {
    tmp302 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[15],1);
    tmp303 = LessEq((modelica_integer)data->simulationInfo->integerParameter[15],4);
    if(!(tmp302 && tmp303))
    {
      tmp305 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[15], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/System.mo",22,3,25,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsystem.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and system.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1098
 type: ALGORITHM
 
   assert(cup.level_start >= 0.0, "Variable violating min constraint: 0.0 <= cup.level_start, has value: " + String(cup.level_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1098(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1098};
  modelica_boolean tmp307;
  static const MMC_DEFSTRINGLIT(tmp308,70,"Variable violating min constraint: 0.0 <= cup.level_start, has value: ");
  modelica_string tmp309;
  static int tmp310 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp310)
  {
    tmp307 = GreaterEq(data->simulationInfo->realParameter[27],0.0);
    if(!tmp307)
    {
      tmp309 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[27], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp308),tmp309);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",70,3,72,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.level_start >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp310 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1099
 type: ALGORITHM
 
   assert(cup.level_start_eps >= 0.0, "Variable violating min constraint: 0.0 <= cup.level_start_eps, has value: " + String(cup.level_start_eps, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1099(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1099};
  modelica_boolean tmp311;
  static const MMC_DEFSTRINGLIT(tmp312,74,"Variable violating min constraint: 0.0 <= cup.level_start_eps, has value: ");
  modelica_string tmp313;
  static int tmp314 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp314)
  {
    tmp311 = GreaterEq(data->simulationInfo->realParameter[28],0.0);
    if(!tmp311)
    {
      tmp313 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[28], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp312),tmp313);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",85,3,85,87,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.level_start_eps >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp314 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1100
 type: ALGORITHM
 
   assert(cup.T_ambient >= 273.15 and cup.T_ambient <= 2273.15, "Variable violating min/max constraint: 273.15 <= cup.T_ambient <= 2273.15, has value: " + String(cup.T_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1100};
  modelica_boolean tmp315;
  modelica_boolean tmp316;
  static const MMC_DEFSTRINGLIT(tmp317,86,"Variable violating min/max constraint: 273.15 <= cup.T_ambient <= 2273.15, has value: ");
  modelica_string tmp318;
  static int tmp319 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp319)
  {
    tmp315 = GreaterEq(data->simulationInfo->realParameter[18],273.15);
    tmp316 = LessEq(data->simulationInfo->realParameter[18],2273.15);
    if(!(tmp315 && tmp316))
    {
      tmp318 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[18], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp317),tmp318);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",65,3,67,63,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.T_ambient >= 273.15 and cup.T_ambient <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp319 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1101
 type: ALGORITHM
 
   assert(cup.height >= 0.0, "Variable violating min constraint: 0.0 <= cup.height, has value: " + String(cup.height, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1101};
  modelica_boolean tmp320;
  static const MMC_DEFSTRINGLIT(tmp321,65,"Variable violating min constraint: 0.0 <= cup.height, has value: ");
  modelica_string tmp322;
  static int tmp323 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp323)
  {
    tmp320 = GreaterEq(data->simulationInfo->realParameter[26],0.0);
    if(!tmp320)
    {
      tmp322 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[26], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp321),tmp322);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",58,3,58,46,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.height >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp323 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1102
 type: ALGORITHM
 
   assert(cup.fluidLevel_max >= 0.0, "Variable violating min constraint: 0.0 <= cup.fluidLevel_max, has value: " + String(cup.fluidLevel_max, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1102};
  modelica_boolean tmp324;
  static const MMC_DEFSTRINGLIT(tmp325,73,"Variable violating min constraint: 0.0 <= cup.fluidLevel_max, has value: ");
  modelica_string tmp326;
  static int tmp327 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp327)
  {
    tmp324 = GreaterEq(data->simulationInfo->realParameter[22],0.0);
    if(!tmp324)
    {
      tmp326 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[22], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp325),tmp326);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",276,9,277,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.fluidLevel_max >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp327 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1103
 type: ALGORITHM
 
   assert(cup.heatTransfer.T_ambient >= 0.0, "Variable violating min constraint: 0.0 <= cup.heatTransfer.T_ambient, has value: " + String(cup.heatTransfer.T_ambient, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1103};
  modelica_boolean tmp328;
  static const MMC_DEFSTRINGLIT(tmp329,81,"Variable violating min constraint: 0.0 <= cup.heatTransfer.T_ambient, has value: ");
  modelica_string tmp330;
  static int tmp331 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp331)
  {
    tmp328 = GreaterEq(data->simulationInfo->realParameter[24],0.0);
    if(!tmp328)
    {
      tmp330 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[24], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp329),tmp330);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",487,5,488,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.heatTransfer.T_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp331 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1104
 type: ALGORITHM
 
   assert(cup.m_flow_small >= 0.0, "Variable violating min constraint: 0.0 <= cup.m_flow_small, has value: " + String(cup.m_flow_small, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1104};
  modelica_boolean tmp332;
  static const MMC_DEFSTRINGLIT(tmp333,71,"Variable violating min constraint: 0.0 <= cup.m_flow_small, has value: ");
  modelica_string tmp334;
  static int tmp335 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp335)
  {
    tmp332 = GreaterEq(data->simulationInfo->realParameter[30],0.0);
    if(!tmp332)
    {
      tmp334 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[30], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp333),tmp334);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",213,9,215,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.m_flow_small >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp335 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1105
 type: ALGORITHM
 
   assert(cup.m_flow_nominal >= -100000.0 and cup.m_flow_nominal <= 100000.0, "Variable violating min/max constraint: -100000.0 <= cup.m_flow_nominal <= 100000.0, has value: " + String(cup.m_flow_nominal, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1105};
  modelica_boolean tmp336;
  modelica_boolean tmp337;
  static const MMC_DEFSTRINGLIT(tmp338,95,"Variable violating min/max constraint: -100000.0 <= cup.m_flow_nominal <= 100000.0, has value: ");
  modelica_string tmp339;
  static int tmp340 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp340)
  {
    tmp336 = GreaterEq(data->simulationInfo->realParameter[29],-100000.0);
    tmp337 = LessEq(data->simulationInfo->realParameter[29],100000.0);
    if(!(tmp336 && tmp337))
    {
      tmp339 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[29], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp338),tmp339);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",210,9,212,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.m_flow_nominal >= -100000.0 and cup.m_flow_nominal <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp340 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1106
 type: ALGORITHM
 
   assert(cup.portsData[1].zeta_in >= 0.0, "Variable violating min constraint: 0.0 <= cup.portsData[1].zeta_in, has value: " + String(cup.portsData[1].zeta_in, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1106};
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,79,"Variable violating min constraint: 0.0 <= cup.portsData[1].zeta_in, has value: ");
  modelica_string tmp343;
  static int tmp344 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp344)
  {
    tmp341 = GreaterEq(data->simulationInfo->realParameter[35],0.0);
    if(!tmp341)
    {
      tmp343 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[35], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",550,7,551,104,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.portsData[1].zeta_in >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp344 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1107
 type: ALGORITHM
 
   assert(cup.portsData[1].zeta_out >= 0.0, "Variable violating min constraint: 0.0 <= cup.portsData[1].zeta_out, has value: " + String(cup.portsData[1].zeta_out, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1107};
  modelica_boolean tmp345;
  static const MMC_DEFSTRINGLIT(tmp346,80,"Variable violating min constraint: 0.0 <= cup.portsData[1].zeta_out, has value: ");
  modelica_string tmp347;
  static int tmp348 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp348)
  {
    tmp345 = GreaterEq(data->simulationInfo->realParameter[36],0.0);
    if(!tmp345)
    {
      tmp347 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[36], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp346),tmp347);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",548,7,549,105,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.portsData[1].zeta_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp348 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1108
 type: ALGORITHM
 
   assert(cup.portsData[1].height >= 0.0, "Variable violating min constraint: 0.0 <= cup.portsData[1].height, has value: " + String(cup.portsData[1].height, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1108};
  modelica_boolean tmp349;
  static const MMC_DEFSTRINGLIT(tmp350,78,"Variable violating min constraint: 0.0 <= cup.portsData[1].height, has value: ");
  modelica_string tmp351;
  static int tmp352 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp352)
  {
    tmp349 = GreaterEq(data->simulationInfo->realParameter[34],0.0);
    if(!tmp349)
    {
      tmp351 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[34], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp350),tmp351);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",547,7,547,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.portsData[1].height >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp352 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1109
 type: ALGORITHM
 
   assert(cup.portsData[1].diameter >= 0.0, "Variable violating min constraint: 0.0 <= cup.portsData[1].diameter, has value: " + String(cup.portsData[1].diameter, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1109};
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,80,"Variable violating min constraint: 0.0 <= cup.portsData[1].diameter, has value: ");
  modelica_string tmp355;
  static int tmp356 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp356)
  {
    tmp353 = GreaterEq(data->simulationInfo->realParameter[33],0.0);
    if(!tmp353)
    {
      tmp355 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[33], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",545,7,546,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.portsData[1].diameter >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp356 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1110
 type: ALGORITHM
 
   assert(cup.X_start[1] >= 0.0 and cup.X_start[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= cup.X_start[1] <= 1.0, has value: " + String(cup.X_start[1], "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1110};
  modelica_boolean tmp357;
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,80,"Variable violating min/max constraint: 0.0 <= cup.X_start[1] <= 1.0, has value: ");
  modelica_string tmp360;
  static int tmp361 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp361)
  {
    tmp357 = GreaterEq(data->simulationInfo->realParameter[20],0.0);
    tmp358 = LessEq(data->simulationInfo->realParameter[20],1.0);
    if(!(tmp357 && tmp358))
    {
      tmp360 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[20], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",565,7,567,73,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.X_start[1] >= 0.0 and cup.X_start[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp361 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1111
 type: ALGORITHM
 
   assert(cup.p_start >= 611.657 and cup.p_start <= 100000000.0, "Variable violating min/max constraint: 611.657 <= cup.p_start <= 100000000.0, has value: " + String(cup.p_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1111};
  modelica_boolean tmp362;
  modelica_boolean tmp363;
  static const MMC_DEFSTRINGLIT(tmp364,89,"Variable violating min/max constraint: 611.657 <= cup.p_start <= 100000000.0, has value: ");
  modelica_string tmp365;
  static int tmp366 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp366)
  {
    tmp362 = GreaterEq(data->simulationInfo->realParameter[32],611.657);
    tmp363 = LessEq(data->simulationInfo->realParameter[32],100000000.0);
    if(!(tmp362 && tmp363))
    {
      tmp365 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[32], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp364),tmp365);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",551,7,553,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.p_start >= 611.657 and cup.p_start <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp366 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1112
 type: ALGORITHM
 
   assert(cup.T_start >= 273.15 and cup.T_start <= 2273.15, "Variable violating min/max constraint: 273.15 <= cup.T_start <= 2273.15, has value: " + String(cup.T_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1112};
  modelica_boolean tmp367;
  modelica_boolean tmp368;
  static const MMC_DEFSTRINGLIT(tmp369,84,"Variable violating min/max constraint: 273.15 <= cup.T_start <= 2273.15, has value: ");
  modelica_string tmp370;
  static int tmp371 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp371)
  {
    tmp367 = GreaterEq(data->simulationInfo->realParameter[19],273.15);
    tmp368 = LessEq(data->simulationInfo->realParameter[19],2273.15);
    if(!(tmp367 && tmp368))
    {
      tmp370 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[19], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp369),tmp370);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",557,7,560,73,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.T_start >= 273.15 and cup.T_start <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp371 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1113
 type: ALGORITHM
 
   assert(cup.h_start >= -10000000000.0 and cup.h_start <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= cup.h_start <= 10000000000.0, has value: " + String(cup.h_start, "g"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1113};
  modelica_boolean tmp372;
  modelica_boolean tmp373;
  static const MMC_DEFSTRINGLIT(tmp374,98,"Variable violating min/max constraint: -10000000000.0 <= cup.h_start <= 10000000000.0, has value: ");
  modelica_string tmp375;
  static int tmp376 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp376)
  {
    tmp372 = GreaterEq(data->simulationInfo->realParameter[23],-10000000000.0);
    tmp373 = LessEq(data->simulationInfo->realParameter[23],10000000000.0);
    if(!(tmp372 && tmp373))
    {
      tmp375 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[23], (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp374),tmp375);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",561,7,564,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.h_start >= -10000000000.0 and cup.h_start <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp376 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1114
 type: ALGORITHM
 
   assert(cup.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(cup.traceDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1114};
  modelica_boolean tmp377;
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,166,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp380;
  static int tmp381 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp381)
  {
    tmp377 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[9],1);
    tmp378 = LessEq((modelica_integer)data->simulationInfo->integerParameter[9],4);
    if(!(tmp377 && tmp378))
    {
      tmp380 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[9], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",546,7,548,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.traceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.traceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp381 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1115
 type: ALGORITHM
 
   assert(cup.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(cup.substanceDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1115};
  modelica_boolean tmp382;
  modelica_boolean tmp383;
  static const MMC_DEFSTRINGLIT(tmp384,170,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp385;
  static int tmp386 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp386)
  {
    tmp382 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[8],1);
    tmp383 = LessEq((modelica_integer)data->simulationInfo->integerParameter[8],4);
    if(!(tmp382 && tmp383))
    {
      tmp385 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[8], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp384),tmp385);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",543,7,545,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.substanceDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.substanceDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp386 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1116
 type: ALGORITHM
 
   assert(cup.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(cup.massDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1116};
  modelica_boolean tmp387;
  modelica_boolean tmp388;
  static const MMC_DEFSTRINGLIT(tmp389,165,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp390;
  static int tmp391 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp391)
  {
    tmp387 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[6],1);
    tmp388 = LessEq((modelica_integer)data->simulationInfo->integerParameter[6],4);
    if(!(tmp387 && tmp388))
    {
      tmp390 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[6], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp389),tmp390);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",540,7,542,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.massDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.massDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp391 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1117
 type: ALGORITHM
 
   assert(cup.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, "Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: " + String(cup.energyDynamics, "d"));
 */
OMC_DISABLE_OPT
static void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1117};
  modelica_boolean tmp392;
  modelica_boolean tmp393;
  static const MMC_DEFSTRINGLIT(tmp394,167,"Variable violating min/max constraint: Modelica.Fluid.Types.Dynamics.DynamicFreeInitial <= cup.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState, has value: ");
  modelica_string tmp395;
  static int tmp396 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp396)
  {
    tmp392 = GreaterEq((modelica_integer)data->simulationInfo->integerParameter[4],1);
    tmp393 = LessEq((modelica_integer)data->simulationInfo->integerParameter[4],4);
    if(!(tmp392 && tmp393))
    {
      tmp395 = modelica_integer_to_modelica_string_format((modelica_integer)data->simulationInfo->integerParameter[4], (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp394),tmp395);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",537,7,539,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.energyDynamics >= Modelica.Fluid.Types.Dynamics.DynamicFreeInitial and cup.energyDynamics <= Modelica.Fluid.Types.Dynamics.SteadyState", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp396 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void CoffeeTemperature_Test_CoffeeTest10_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_249(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_850(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_851(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_303(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_853(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_854(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_213(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_432(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_430(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_429(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_428(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_427(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_425(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_424(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_423(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_422(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_421(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_420(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_419(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_405(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_403(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_402(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_399(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_394(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_393(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_392(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_391(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_390(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_389(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_384(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_383(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_377(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_376(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_375(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_374(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_373(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_371(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_369(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_368(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_367(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_360(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_356(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_355(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_354(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_353(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_352(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_351(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_350(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_349(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_348(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_347(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_346(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_345(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_344(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_343(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_342(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_341(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_339(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_338(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_337(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_335(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_334(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_333(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_332(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_331(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_330(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_329(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_328(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_326(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_324(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_323(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_322(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_321(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_317(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_316(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_314(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_312(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_311(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_310(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_309(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_307(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_306(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_304(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_302(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_301(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_300(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_299(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_298(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_297(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_296(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_295(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_294(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_293(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_292(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_291(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_286(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_285(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_284(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_283(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_282(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_280(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_278(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_277(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_276(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_275(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_274(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_273(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_272(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_269(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_267(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_265(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_264(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_262(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_261(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_260(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_259(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_258(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_257(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_256(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_255(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_254(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_253(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_251(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_250(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_248(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_247(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_246(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_245(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_244(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_243(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_242(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_241(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_240(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_239(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_238(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_237(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_233(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_232(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_231(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_230(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_229(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_228(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_226(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_225(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_224(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_223(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_222(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_221(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_220(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_219(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_215(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_205(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_204(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_203(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_202(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_201(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_200(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_199(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_198(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_20(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_19(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_195(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_194(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_18(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_193(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_192(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_17(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_21(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_22(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_12(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_11(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_10(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_9(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_6(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_5(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_4(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_3(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_2(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1032(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1033(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1034(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1035(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1036(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1037(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1038(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1039(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1040(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1041(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1042(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1043(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1044(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1045(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1046(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1047(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1048(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1049(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1050(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1051(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1052(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1053(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1054(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1055(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1056(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1057(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1058(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1059(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1060(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1061(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1062(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1063(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1064(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1065(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1066(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1067(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1068(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1069(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1070(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1071(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1072(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1073(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1074(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1075(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1076(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1077(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1078(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1079(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1080(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1081(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1082(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1083(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1084(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1085(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1086(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1087(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1088(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1089(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1090(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1091(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1092(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1093(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1094(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1095(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1096(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1097(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1098(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1099(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1100(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1101(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1102(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1103(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1104(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1105(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1106(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1107(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1108(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1109(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1110(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1111(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1112(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1113(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1114(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1115(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1116(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1117(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int CoffeeTemperature_Test_CoffeeTest10_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->localData[0]->integerVars[24] /* pipe.flowModel.states[1].phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[24].time_unvarying = 1;
  data->localData[0]->integerVars[25] /* pipe.flowModel.states[2].phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[25].time_unvarying = 1;
  data->localData[0]->integerVars[27] /* valveIncompressible1.state_a.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[27].time_unvarying = 1;
  data->localData[0]->integerVars[28] /* valveIncompressible1.state_b.phase DISCRETE */ = ((modelica_integer) 0);
  data->modelData->integerVarsData[28].time_unvarying = 1;
  CoffeeTemperature_Test_CoffeeTest10_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

