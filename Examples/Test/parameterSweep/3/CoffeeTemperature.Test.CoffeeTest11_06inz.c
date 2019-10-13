/* Initialization */
#include "CoffeeTemperature.Test.CoffeeTest11_model.h"
#include "CoffeeTemperature.Test.CoffeeTest11_11mix.h"
#include "CoffeeTemperature.Test.CoffeeTest11_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void CoffeeTemperature_Test_CoffeeTest11_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
 equation index: 1
 type: SIMPLE_ASSIGN
 cup._medium._MM = 0.018015268
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[246] /* cup.medium.MM variable */ = 0.018015268;
  TRACE_POP
}

/*
 equation index: 2
 type: SIMPLE_ASSIGN
 cup._medium._R = 461.5229593031866
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[247] /* cup.medium.R variable */ = 461.5229593031866;
  TRACE_POP
}

/*
 equation index: 3
 type: SIMPLE_ASSIGN
 cup._medium._X[1] = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[249] /* cup.medium.X[1] variable */ = 1.0;
  TRACE_POP
}

/*
 equation index: 4
 type: SIMPLE_ASSIGN
 yakan._medium._MM = 0.018015268
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[372] /* yakan.medium.MM variable */ = 0.018015268;
  TRACE_POP
}

/*
 equation index: 5
 type: SIMPLE_ASSIGN
 yakan._medium._R = 461.5229593031866
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[373] /* yakan.medium.R variable */ = 461.5229593031866;
  TRACE_POP
}

/*
 equation index: 6
 type: SIMPLE_ASSIGN
 yakan._medium._X[1] = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[375] /* yakan.medium.X[1] variable */ = 1.0;
  TRACE_POP
}

/*
 equation index: 7
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_a._phase = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->integerVars[27] /* valveIncompressible1.state_a.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
 equation index: 8
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_b._phase = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->integerVars[28] /* valveIncompressible1.state_b.phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
 equation index: 9
 type: SIMPLE_ASSIGN
 naturalConvection1._C = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[284] /* naturalConvection1.C variable */ = 1.0;
  TRACE_POP
}

/*
 equation index: 10
 type: SIMPLE_ASSIGN
 naturalConvection1._n = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[299] /* naturalConvection1.n variable */ = 1.0;
  TRACE_POP
}

/*
 equation index: 11
 type: SIMPLE_ASSIGN
 naturalConvection21._C = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[304] /* naturalConvection21.C variable */ = 1.0;
  TRACE_POP
}

/*
 equation index: 12
 type: SIMPLE_ASSIGN
 naturalConvection21._n = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[319] /* naturalConvection21.n variable */ = 1.0;
  TRACE_POP
}

/*
 equation index: 13
 type: SIMPLE_ASSIGN
 yakan._level = $START.yakan.level
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[5] /* yakan.level STATE(1) */ = data->modelData->realVarsData[5].attribute /* yakan.level STATE(1) */.start;
  TRACE_POP
}

/*
 equation index: 14
 type: SIMPLE_ASSIGN
 yakan._medium._h = $START.yakan.medium.h
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */ = data->modelData->realVarsData[6].attribute /* yakan.medium.h STATE(1) */.start;
  TRACE_POP
}

/*
 equation index: 15
 type: SIMPLE_ASSIGN
 cup._level = $START.cup.level
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[0] /* cup.level STATE(1) */ = data->modelData->realVarsData[0].attribute /* cup.level STATE(1) */.start;
  TRACE_POP
}

/*
 equation index: 16
 type: SIMPLE_ASSIGN
 cup._medium._h = $START.cup.medium.h
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */ = data->modelData->realVarsData[1].attribute /* cup.medium.h STATE(1) */.start;
  TRACE_POP
}

/*
 equation index: 17
 type: SIMPLE_ASSIGN
 yakan._portAreas[1] = 0.7853981633974483 * yakan.portsData[1].diameter ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[145];
  data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */ = (0.7853981633974483) * ((tmp0 * tmp0));
  TRACE_POP
}

/*
 equation index: 18
 type: SIMPLE_ASSIGN
 cup._portAreas[1] = 0.7853981633974483 * cup.portsData[1].diameter ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  modelica_real tmp1;
  tmp1 = data->simulationInfo->realParameter[33];
  data->localData[0]->realVars[253] /* cup.portAreas[1] variable */ = (0.7853981633974483) * ((tmp1 * tmp1));
  TRACE_POP
}

/*
 equation index: 19
 type: SIMPLE_ASSIGN
 pipe._flowModel._dimensions[1] = 4.0 * pipe.crossArea / pipe.perimeter
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[325] /* pipe.flowModel.dimensions[1] variable */ = (4.0) * (DIVISION_SIM(data->simulationInfo->realParameter[56],data->simulationInfo->realParameter[76],"pipe.perimeter",equationIndexes));
  TRACE_POP
}

/*
 equation index: 20
 type: SIMPLE_ASSIGN
 pipe._flowModel._dimensions[2] = 4.0 * pipe.crossArea / pipe.perimeter
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[326] /* pipe.flowModel.dimensions[2] variable */ = (4.0) * (DIVISION_SIM(data->simulationInfo->realParameter[56],data->simulationInfo->realParameter[76],"pipe.perimeter",equationIndexes));
  TRACE_POP
}

/*
 equation index: 21
 type: SIMPLE_ASSIGN
 pipe._flowModel._diameters[1] = (pipe.flowModel.dimensions[1] + pipe.flowModel.dimensions[2]) * 0.5
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[324] /* pipe.flowModel.diameters[1] variable */ = (data->localData[0]->realVars[325] /* pipe.flowModel.dimensions[1] variable */ + data->localData[0]->realVars[326] /* pipe.flowModel.dimensions[2] variable */) * (0.5);
  TRACE_POP
}

/*
 equation index: 22
 type: SIMPLE_ASSIGN
 pipe._flowModel._dp_fric_nominal = Modelica.Fluid.Pipes.StaticPipe$pipe.FlowModel$pipe$flowModel.WallFriction.pressureLoss_m_flow(pipe.flowModel.m_flow_nominal / pipe.flowModel.nParallel, pipe.flowModel.rho_nominal, pipe.flowModel.rho_nominal, pipe.flowModel.mu_nominal, pipe.flowModel.mu_nominal, pipe.length, pipe.flowModel.diameters[1], pipe.crossArea, pipe.roughness, pipe.flowModel.m_flow_small / pipe.flowModel.nParallel, pipe.flowModel.Re_turbulent)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[327] /* pipe.flowModel.dp_fric_nominal variable */ = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow(threadData, DIVISION_SIM(data->simulationInfo->realParameter[62],data->simulationInfo->realParameter[66],"pipe.flowModel.nParallel",equationIndexes), data->simulationInfo->realParameter[69], data->simulationInfo->realParameter[69], data->simulationInfo->realParameter[65], data->simulationInfo->realParameter[65], data->simulationInfo->realParameter[71], data->localData[0]->realVars[324] /* pipe.flowModel.diameters[1] variable */, data->simulationInfo->realParameter[56], data->simulationInfo->realParameter[77], DIVISION_SIM(data->simulationInfo->realParameter[63],data->simulationInfo->realParameter[66],"pipe.flowModel.nParallel",equationIndexes), data->simulationInfo->realParameter[58]);
  TRACE_POP
}

/*
 equation index: 23
 type: SIMPLE_ASSIGN
 cup._heatTransfer._states[1]._phase = if cup.medium.h < Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(cup.p_ambient).h or cup.medium.h > Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(cup.p_ambient).h or cup.p_ambient > 22064000.0 then 1 else 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  tmp2 = Less(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->simulationInfo->realParameter[31])._h);
  tmp3 = Greater(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->simulationInfo->realParameter[31])._h);
  tmp4 = Greater(data->simulationInfo->realParameter[31],22064000.0);
  data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */ = (((tmp2 || tmp3) || tmp4)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}

/*
 equation index: 24
 type: SIMPLE_ASSIGN
 cup._heatTransfer._Ts[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.p_ambient, cup.medium.h, cup.heatTransfer.states[1].phase, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_675(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_678(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_759(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_679(DATA *data, threadData_t *threadData);


/*
 equation index: 29
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._states[1]._phase = if yakan.medium.h < Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.boilingcurve_p(yakan.p_ambient).h or yakan.medium.h > Modelica.Media.Water.IF97_Utilities.BaseIF97.Regions.dewcurve_p(yakan.p_ambient).h or yakan.p_ambient > 22064000.0 then 1 else 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  tmp5 = Less(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p(threadData, data->simulationInfo->realParameter[143])._h);
  tmp6 = Greater(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */,omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p(threadData, data->simulationInfo->realParameter[143])._h);
  tmp7 = Greater(data->simulationInfo->realParameter[143],22064000.0);
  data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */ = (((tmp5 || tmp6) || tmp7)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}

/*
 equation index: 30
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._Ts[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.p_ambient, yakan.medium.h, yakan.heatTransfer.states[1].phase, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0))._T;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_726(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_729(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_754(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_730(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_731(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_732(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_736(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_722(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_723(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_653(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_654(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_748(DATA *data, threadData_t *threadData);


/*
 equation index: 43
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._states[1]._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.p_ambient, yakan.medium.h, yakan.heatTransfer.states[1].phase, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_728(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_749(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_750(DATA *data, threadData_t *threadData);


/*
 equation index: 47
 type: SIMPLE_ASSIGN
 yakan._vessel_ps_static[1] = max(0.0, yakan.level - yakan.portsData[1].height) * system.g * yakan.heatTransfer.states[1].d + yakan.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */ = (fmax(0.0,data->localData[0]->realVars[5] /* yakan.level STATE(1) */ - data->simulationInfo->realParameter[146])) * ((data->simulationInfo->realParameter[83]) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */)) + data->simulationInfo->realParameter[143];
  TRACE_POP
}

/*
 equation index: 48
 type: SIMPLE_ASSIGN
 yakan._portInDensities[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.vessel_ps_static[1], pipe.port_a.h_outflow, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[380] /* yakan.portInDensities[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */, data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_751(DATA *data, threadData_t *threadData);


/*
 equation index: 50
 type: SIMPLE_ASSIGN
 cup._heatTransfer._states[1]._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.p_ambient, cup.medium.h, cup.heatTransfer.states[1].phase, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_677(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_752(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_753(DATA *data, threadData_t *threadData);


/*
 equation index: 54
 type: SIMPLE_ASSIGN
 cup._vessel_ps_static[1] = max(0.0, cup.level - cup.portsData[1].height) * system.g * cup.heatTransfer.states[1].d + cup.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */ = (fmax(0.0,data->localData[0]->realVars[0] /* cup.level STATE(1) */ - data->simulationInfo->realParameter[34])) * ((data->simulationInfo->realParameter[83]) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */)) + data->simulationInfo->realParameter[31];
  TRACE_POP
}

/*
 equation index: 55
 type: SIMPLE_ASSIGN
 cup._portInDensities[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.vessel_ps_static[1], pipe.port_b.h_outflow, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->localData[0]->realVars[254] /* cup.portInDensities[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}

/*
 equation index: 56
 type: SIMPLE_ASSIGN
 heatCapacitor1._T = $START.heatCapacitor1.T
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */ = data->modelData->realVarsData[2].attribute /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */.start;
  TRACE_POP
}

void CoffeeTemperature_Test_CoffeeTest11_eqFunction_57(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_58(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_59(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_60(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_61(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_62(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_63(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_64(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_65(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_66(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_67(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_68(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_69(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_70(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_71(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_72(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_73(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_74(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_75(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_76(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_77(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_78(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_79(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_80(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_81(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_82(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_83(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_84(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_85(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_86(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_87(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_88(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_89(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_90(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_91(DATA*,threadData_t*);
/*
 equation index: 92
 indexNonlinear: 0
 type: NONLINEAR
 
 vars: {naturalConvection1._T}
 eqns: {57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 92 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[292] /* naturalConvection1.T variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,92};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 92 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[292] /* naturalConvection1.T variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_724(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_94(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_95(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_96(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_97(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_98(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_99(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_100(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_101(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_102(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_103(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_104(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_105(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_106(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_107(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_108(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_109(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_110(DATA*,threadData_t*);
/*
 equation index: 111
 indexNonlinear: 1
 type: NONLINEAR
 
 vars: {enclosedConvection1._T}
 eqns: {94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 111 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[269] /* enclosedConvection1.T variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,111};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 111 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[269] /* enclosedConvection1.T variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_716(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_725(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_717(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_718(DATA *data, threadData_t *threadData);


/*
 equation index: 116
 type: SIMPLE_ASSIGN
 $PRE._combiTimeTable1._nextTimeEventScaled = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realVarsPre[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */ = 0.0;
  TRACE_POP
}

/*
 equation index: 117
 type: SIMPLE_ASSIGN
 $PRE._timeTable1._nextEvent = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */ = 0.0;
  TRACE_POP
}

/*
 equation index: 118
 type: ALGORITHM
 
   timeTable1.nextEvent := $START.timeTable1.nextEvent;
   timeTable1.last := $START.timeTable1.last;
   timeTable1.nextEventScaled := $START.timeTable1.nextEventScaled;
   timeTable1.b := $START.timeTable1.b;
   timeTable1.a := $START.timeTable1.a;
   $whenCondition1 := $START.$whenCondition1;
   timeTable1.timeScaled := $START.timeTable1.timeScaled;
   timeTable1.timeScaled := time;
   $whenCondition1 := time >= $PRE.timeTable1.nextEvent;
   (timeTable1.a, timeTable1.b, timeTable1.nextEventScaled, timeTable1.last) := Modelica.Blocks.Sources.TimeTable$timeTable1.getInterpolationCoefficients(timeTable1.table, timeTable1.offset, timeTable1.startTime, timeTable1.timeScaled, timeTable1.last, 1e-013);
   timeTable1.nextEvent := timeTable1.nextEventScaled;
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  modelica_boolean tmp0;
  real_array tmp1;
  data->localData[0]->realVars[391] /* timeTable1.nextEvent DISCRETE */ = data->modelData->realVarsData[391].attribute /* timeTable1.nextEvent DISCRETE */.start;

  data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */ = (modelica_integer)data->modelData->integerVarsData[26].attribute /* timeTable1.last DISCRETE */.start;

  data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */ = data->modelData->realVarsData[392].attribute /* timeTable1.nextEventScaled DISCRETE */.start;

  data->localData[0]->realVars[390] /* timeTable1.b DISCRETE */ = data->modelData->realVarsData[390].attribute /* timeTable1.b DISCRETE */.start;

  data->localData[0]->realVars[389] /* timeTable1.a DISCRETE */ = data->modelData->realVarsData[389].attribute /* timeTable1.a DISCRETE */.start;

  data->localData[0]->booleanVars[4] /* $whenCondition1 DISCRETE */ = data->modelData->booleanVarsData[4].attribute /* $whenCondition1 DISCRETE */.start;

  data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */ = data->modelData->realVarsData[348].attribute /* timeTable1.timeScaled variable */.start;

  data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */ = data->localData[0]->timeValue;

  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */);
  data->localData[0]->booleanVars[4] /* $whenCondition1 DISCRETE */ = tmp0;

  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[93])[calc_base_index_dims_subs(2, 5, 2, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, 5, 2);
  data->localData[0]->realVars[389] /* timeTable1.a DISCRETE */ = omc_Modelica_Blocks_Sources_TimeTable$timeTable1_getInterpolationCoefficients(threadData, tmp1, data->simulationInfo->realParameter[91], data->simulationInfo->realParameter[92], data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */, (modelica_integer)data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */, 1e-013 ,&data->localData[0]->realVars[390] /* timeTable1.b DISCRETE */ ,&data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */ ,&data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */);

  data->localData[0]->realVars[391] /* timeTable1.nextEvent DISCRETE */ = data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_738(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_739(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_740(DATA *data, threadData_t *threadData);


/*
 equation index: 122
 type: ALGORITHM
 
   combiTimeTable1.t_max := $START.combiTimeTable1.t_max;
   combiTimeTable1.t_min := $START.combiTimeTable1.t_min;
   combiTimeTable1.t_maxScaled := $START.combiTimeTable1.t_maxScaled;
   combiTimeTable1.t_minScaled := $START.combiTimeTable1.t_minScaled;
   combiTimeTable1.tableOnFileRead := $START.combiTimeTable1.tableOnFileRead;
   combiTimeTable1.tableOnFileRead := Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.readTableData(combiTimeTable1.tableID, false, combiTimeTable1.verboseRead);
   combiTimeTable1.t_minScaled := Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getTableTimeTmin(combiTimeTable1.tableID, combiTimeTable1.tableOnFileRead);
   combiTimeTable1.t_maxScaled := Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getTableTimeTmax(combiTimeTable1.tableID, combiTimeTable1.tableOnFileRead);
   combiTimeTable1.t_min := combiTimeTable1.t_minScaled;
   combiTimeTable1.t_max := combiTimeTable1.t_maxScaled;
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[9] = data->simulationInfo->realParameter[9];

  data->simulationInfo->realParameter[11] = data->simulationInfo->realParameter[11];

  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[10];

  data->simulationInfo->realParameter[12] = data->simulationInfo->realParameter[12];

  data->simulationInfo->realParameter[13] = data->simulationInfo->realParameter[13];

  data->simulationInfo->realParameter[13] = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_readTableData(threadData, data->simulationInfo->extObjs[0], 0, data->simulationInfo->booleanParameter[1]);

  data->simulationInfo->realParameter[12] = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableTimeTmin(threadData, data->simulationInfo->extObjs[0], data->simulationInfo->realParameter[13]);

  data->simulationInfo->realParameter[10] = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableTimeTmax(threadData, data->simulationInfo->extObjs[0], data->simulationInfo->realParameter[13]);

  data->simulationInfo->realParameter[11] = data->simulationInfo->realParameter[12];

  data->simulationInfo->realParameter[9] = data->simulationInfo->realParameter[10];
  TRACE_POP
}

/*
 equation index: 123
 type: SIMPLE_ASSIGN
 combiTimeTable1._nextTimeEventScaled = Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getNextTimeEvent(combiTimeTable1.tableID, combiTimeTable1.timeScaled, combiTimeTable1.tableOnFileRead)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */ = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getNextTimeEvent(threadData, data->simulationInfo->extObjs[0], data->localData[0]->realVars[232] /* combiTimeTable1.timeScaled variable */, data->simulationInfo->realParameter[13]);
  TRACE_POP
}

/*
 equation index: 124
 type: SIMPLE_ASSIGN
 combiTimeTable1._nextTimeEvent = if combiTimeTable1.nextTimeEventScaled < 1.797693134862316e+308 then combiTimeTable1.nextTimeEventScaled else 1.797693134862316e+308
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  modelica_boolean tmp2;
  tmp2 = Less(data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */,1.797693134862316e+308);
  data->localData[0]->realVars[387] /* combiTimeTable1.nextTimeEvent DISCRETE */ = (tmp2?data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */:1.797693134862316e+308);
  TRACE_POP
}

/*
 equation index: 125
 type: SIMPLE_ASSIGN
 combiTimeTable1._y[1] = combiTimeTable1.p_offset[1] + Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getTableValue(combiTimeTable1.tableID, 1, combiTimeTable1.timeScaled, combiTimeTable1.nextTimeEventScaled, $PRE.combiTimeTable1.nextTimeEventScaled, combiTimeTable1.tableOnFileRead)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->localData[0]->realVars[233] /* combiTimeTable1.y[1] variable */ = data->simulationInfo->realParameter[7] + omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableValue(threadData, data->simulationInfo->extObjs[0], ((modelica_integer) 1), data->localData[0]->realVars[232] /* combiTimeTable1.timeScaled variable */, data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */, data->simulationInfo->realVarsPre[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */, data->simulationInfo->realParameter[13]);
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_746(DATA *data, threadData_t *threadData);


/*
 equation index: 127
 type: SIMPLE_ASSIGN
 valveIncompressible1._Av = valveIncompressible1.m_flow_nominal / (Modelica.Fluid.Valves.ValveIncompressible$valveIncompressible1.valveCharacteristic(valveIncompressible1.opening_nominal) * Modelica.Fluid.Utilities.regRoot(valveIncompressible1.dp_nominal, valveIncompressible1.dp_small) * sqrt(valveIncompressible1.rho_nominal))
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  modelica_real tmp3;
  tmp3 = data->simulationInfo->realParameter[128];
  if(!(tmp3 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(valveIncompressible1.rho_nominal) was %g should be >= 0", tmp3);
  }
  data->simulationInfo->realParameter[104] = DIVISION_SIM(data->simulationInfo->realParameter[123],((omc_Modelica_Fluid_Valves_ValveIncompressible$valveIncompressible1_valveCharacteristic(threadData, data->simulationInfo->realParameter[127])) * (omc_Modelica_Fluid_Utilities_regRoot(threadData, data->simulationInfo->realParameter[107], data->simulationInfo->realParameter[108]))) * (sqrt(tmp3)),"Modelica.Fluid.Valves.ValveIncompressible$valveIncompressible1.valveCharacteristic(valveIncompressible1.opening_nominal) * Modelica.Fluid.Utilities.regRoot(valveIncompressible1.dp_nominal, valveIncompressible1.dp_small) * sqrt(valveIncompressible1.rho_nominal)",equationIndexes);
  TRACE_POP
}

/*
 equation index: 128
 type: SIMPLE_ASSIGN
 der(valveIncompressible1._filter._x[2]) = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->localData[0]->realVars[11] /* der(valveIncompressible1.filter.x[2]) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
 equation index: 129
 type: SIMPLE_ASSIGN
 der(valveIncompressible1._filter._x[1]) = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->localData[0]->realVars[10] /* der(valveIncompressible1.filter.x[1]) STATE_DER */ = 0.0;
  TRACE_POP
}

/*
 equation index: 130
 type: ARRAY_CALL_ASSIGN
 
 valveIncompressible1._filter._cr = Modelica.Blocks.Continuous.Internal.Filter.base.CriticalDamping(2, valveIncompressible1.filter.normalized)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  real_array tmp4;
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[111])[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping(threadData, ((modelica_integer) 2), data->simulationInfo->booleanParameter[28]), &tmp4);
  TRACE_POP
}

/*
 equation index: 131
 type: ALGORITHM
 
   (valveIncompressible1.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(valveIncompressible1.filter.cr, {}, {}, valveIncompressible1.filter.f_cut);
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  real_array tmp5;
  base_array_t tmp6;
  base_array_t tmp7;
  real_array tmp8;
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[111])[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  simple_alloc_1d_base_array(&tmp6, 0, NULL);
  simple_alloc_1d_base_array(&tmp7, 0, NULL);
  real_array_create(&tmp8, ((modelica_real*)&((&data->simulationInfo->realParameter[116])[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp5, tmp6, tmp7, data->simulationInfo->realParameter[113] ,NULL ,NULL ,NULL), &tmp8);
  TRACE_POP
}

/*
 equation index: 132
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._x[1] = $DER.valveIncompressible1.filter.x[1] / valveIncompressible1.filter.r[1] + valveIncompressible1.filter.uu[1]
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->localData[0]->realVars[3] /* valveIncompressible1.filter.x[1] STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[10] /* der(valveIncompressible1.filter.x[1]) STATE_DER */,data->simulationInfo->realParameter[116],"valveIncompressible1.filter.r[1]",equationIndexes) + data->localData[0]->realVars[353] /* valveIncompressible1.filter.uu[1] variable */;
  TRACE_POP
}

/*
 equation index: 133
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._x[2] = $DER.valveIncompressible1.filter.x[2] / valveIncompressible1.filter.r[2] + valveIncompressible1.filter.x[1]
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->localData[0]->realVars[4] /* valveIncompressible1.filter.x[2] STATE(1) */ = DIVISION_SIM(data->localData[0]->realVars[11] /* der(valveIncompressible1.filter.x[2]) STATE_DER */,data->simulationInfo->realParameter[117],"valveIncompressible1.filter.r[2]",equationIndexes) + data->localData[0]->realVars[3] /* valveIncompressible1.filter.x[1] STATE(1) */;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_734(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_735(DATA *data, threadData_t *threadData);


/*
 equation index: 136
 type: SIMPLE_ASSIGN
 pipe._flowModel._dp_small = system.dp_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[60] = data->simulationInfo->realParameter[81];
  TRACE_POP
}

/*
 equation index: 137
 type: SIMPLE_ASSIGN
 pipe._flowModel._dp_nominal = 1000.0 * pipe.flowModel.dp_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->simulationInfo->realParameter[59] = (1000.0) * (data->simulationInfo->realParameter[60]);
  TRACE_POP
}

void CoffeeTemperature_Test_CoffeeTest11_eqFunction_138(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_139(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_140(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_141(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_142(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_143(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_144(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_145(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_146(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_147(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_148(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_149(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_150(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_151(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_156(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_155(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_154(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_153(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_152(DATA*,threadData_t*);
/*
 equation index: 157
 indexNonlinear: 2
 type: NONLINEAR
 
 vars: {yakan._s[1], cup._s[1], cup._ports[1]._p, pipe._flowModel._states[1]._p, pipe._flowModel._states[2]._p}
 eqns: {138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 156, 155, 154, 153, 152}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 157 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[385] /* yakan.s[1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[1] = data->localData[0]->realVars[260] /* cup.s[1] variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[2] = data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[3] = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */;
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[4] = data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,157};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 157 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[385] /* yakan.s[1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  data->localData[0]->realVars[260] /* cup.s[1] variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[1];
  data->localData[0]->realVars[256] /* cup.ports[1].p variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[2];
  data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[3];
  data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[4];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_809(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_814(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_794(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_805(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_808(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_793(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_795(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_796(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_166(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_167(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_168(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_169(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_171(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_170(DATA*,threadData_t*);
/*
 equation index: 172
 indexNonlinear: 3
 type: NONLINEAR
 
 vars: {der(yakan._heatTransfer._states[1]._d), der(yakan._medium._u)}
 eqns: {166, 167, 168, 169, 171, 170}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 172 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,172};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 172 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_804(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_813(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_792(DATA *data, threadData_t *threadData);


/*
 equation index: 176
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_b._T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.ports[1].p, cup.medium.h, 0, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->localData[0]->realVars[360] /* valveIncompressible1.state_b.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[256] /* cup.ports[1].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
 equation index: 177
 type: SIMPLE_ASSIGN
 valveIncompressible1._port_b_T = Modelica.Fluid.Utilities.regStep(yakan.mb_flow, valveIncompressible1.state_b.T, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.ports[1].p, pipe.port_b.h_outflow, 0, 0).T, valveIncompressible1.m_flow_small)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->localData[0]->realVars[356] /* valveIncompressible1.port_b_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[371] /* yakan.mb_flow variable */, data->localData[0]->realVars[360] /* valveIncompressible1.state_b.T variable */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[256] /* cup.ports[1].p variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T, data->simulationInfo->realParameter[124]);
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_817(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_818(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_819(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_181(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_182(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_183(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_184(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_186(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_185(DATA*,threadData_t*);
/*
 equation index: 187
 indexNonlinear: 4
 type: NONLINEAR
 
 vars: {der(cup._medium._h), cup._Wb_flow}
 eqns: {181, 182, 183, 184, 186, 185}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 187 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */;
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[1] = data->localData[0]->realVars[240] /* cup.Wb_flow variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,187};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 187 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  data->localData[0]->realVars[240] /* cup.Wb_flow variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[1];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_827(DATA *data, threadData_t *threadData);


/*
 equation index: 189
 type: SIMPLE_ASSIGN
 valveIncompressible1._V_flow = (-yakan.mb_flow) / Modelica.Fluid.Utilities.regStep(-yakan.mb_flow, valveIncompressible1.state_a.d, valveIncompressible1.state_b.d, valveIncompressible1.m_flow_small)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->localData[0]->realVars[350] /* valveIncompressible1.V_flow variable */ = DIVISION_SIM((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[371] /* yakan.mb_flow variable */), data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */, data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */, data->simulationInfo->realParameter[124]),"Modelica.Fluid.Utilities.regStep(-yakan.mb_flow, valveIncompressible1.state_a.d, valveIncompressible1.state_b.d, valveIncompressible1.m_flow_small)",equationIndexes);
  TRACE_POP
}

/*
 equation index: 190
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_a._T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, pipe.port_b.h_outflow, 0, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->localData[0]->realVars[358] /* valveIncompressible1.state_a.T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
 equation index: 191
 type: SIMPLE_ASSIGN
 valveIncompressible1._port_a_T = Modelica.Fluid.Utilities.regStep(-yakan.mb_flow, valveIncompressible1.state_a.T, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, cup.medium.h, 0, 0).T, valveIncompressible1.m_flow_small)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->localData[0]->realVars[355] /* valveIncompressible1.port_a_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[371] /* yakan.mb_flow variable */), data->localData[0]->realVars[358] /* valveIncompressible1.state_a.T variable */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T, data->simulationInfo->realParameter[124]);
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_807(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_806(DATA *data, threadData_t *threadData);


/*
 equation index: 194
 type: SIMPLE_ASSIGN
 yakan._medium._sat._Tsat = Modelica.Media.Water.IF97_Utilities.BaseIF97.Basic.tsat(yakan.p_ambient)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->localData[0]->realVars[377] /* yakan.medium.sat.Tsat variable */ = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, data->simulationInfo->realParameter[143]);
  TRACE_POP
}

/*
 equation index: 195
 type: SIMPLE_ASSIGN
 yakan._medium._p_bar = 1e-005 * yakan.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->localData[0]->realVars[376] /* yakan.medium.p_bar variable */ = (1e-005) * (data->simulationInfo->realParameter[143]);
  TRACE_POP
}

/*
 equation index: 196
 type: SIMPLE_ASSIGN
 cup._medium._sat._Tsat = Modelica.Media.Water.IF97_Utilities.BaseIF97.Basic.tsat(cup.p_ambient)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->localData[0]->realVars[251] /* cup.medium.sat.Tsat variable */ = omc_Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat(threadData, data->simulationInfo->realParameter[31]);
  TRACE_POP
}

/*
 equation index: 197
 type: SIMPLE_ASSIGN
 cup._medium._p_bar = 1e-005 * cup.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->localData[0]->realVars[250] /* cup.medium.p_bar variable */ = (1e-005) * (data->simulationInfo->realParameter[31]);
  TRACE_POP
}

/*
 equation index: 198
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[1]._phase = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->localData[0]->integerVars[24] /* pipe.flowModel.states[1].phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
 equation index: 199
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[2]._phase = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->localData[0]->integerVars[25] /* pipe.flowModel.states[2].phase DISCRETE */ = 0.0;
  TRACE_POP
}

/*
 equation index: 200
 type: SIMPLE_ASSIGN
 pipe._flowModel._Ib_flows[1] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->localData[0]->realVars[322] /* pipe.flowModel.Ib_flows[1] variable */ = 0.0;
  TRACE_POP
}

/*
 equation index: 201
 type: SIMPLE_ASSIGN
 naturalConvection1._state._p = 101325.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->localData[0]->realVars[301] /* naturalConvection1.state.p variable */ = 101325.0;
  TRACE_POP
}

/*
 equation index: 202
 type: SIMPLE_ASSIGN
 naturalConvection21._state._p = 101325.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->localData[0]->realVars[320] /* naturalConvection21.state.p variable */ = 101325.0;
  TRACE_POP
}

/*
 equation index: 203
 type: SIMPLE_ASSIGN
 enclosedConvection1._state._p = 101325.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->localData[0]->realVars[278] /* enclosedConvection1.state.p variable */ = 101325.0;
  TRACE_POP
}

/*
 equation index: 204
 type: SIMPLE_ASSIGN
 enclosedConvection1._state._phase = 1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->localData[0]->integerVars[23] /* enclosedConvection1.state.phase DISCRETE */ = ((modelica_integer) 1);
  TRACE_POP
}

/*
 equation index: 205
 type: SIMPLE_ASSIGN
 enclosedConvection1._beta = 2.1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->localData[0]->realVars[270] /* enclosedConvection1.beta variable */ = 2.1;
  TRACE_POP
}

/*
 equation index: 206
 type: SIMPLE_ASSIGN
 $PRE._combiTimeTable1._nextTimeEvent = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realVarsPre[387] /* combiTimeTable1.nextTimeEvent DISCRETE */ = 0.0;
  TRACE_POP
}

/*
 equation index: 207
 type: SIMPLE_ASSIGN
 $whenCondition2 = time >= $PRE.combiTimeTable1.nextTimeEvent
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  modelica_boolean tmp0;
  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realVarsPre[387] /* combiTimeTable1.nextTimeEvent DISCRETE */);
  data->localData[0]->booleanVars[5] /* $whenCondition2 DISCRETE */ = tmp0;
  TRACE_POP
}

/*
 equation index: 212
 type: ALGORITHM
 
   assert(pipe.length >= pipe.height_ab, "Parameter length must be greater or equal height_ab.");
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,52,"Parameter length must be greater or equal height_ab.");
  static int tmp3 = 0;
  {
    tmp1 = GreaterEq(data->simulationInfo->realParameter[71],data->simulationInfo->realParameter[70]);
    if(!tmp1)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",271,7,271,90,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.length >= pipe.height_ab", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp2)));
      }
    }
  }
  TRACE_POP
}

/*
 equation index: 211
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.u_nominal > 0.0, "u_nominal > 0 required");
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,22,"u_nominal > 0 required");
  static int tmp6 = 0;
  {
    tmp4 = Greater(data->simulationInfo->realParameter[118],0.0);
    if(!tmp4)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1824,6,1824,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.u_nominal > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp5)));
      }
    }
  }
  TRACE_POP
}

/*
 equation index: 210
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.A_ripple > 0.0, "A_ripple > 0 required");
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  modelica_boolean tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,21,"A_ripple > 0 required");
  static int tmp9 = 0;
  {
    tmp7 = Greater(data->simulationInfo->realParameter[110],0.0);
    if(!tmp7)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1828,6,1828,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.A_ripple > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp8)));
      }
    }
  }
  TRACE_POP
}

/*
 equation index: 209
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.f_cut > 0.0, "f_cut > 0 required");
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,18,"f_cut > 0 required");
  static int tmp12 = 0;
  {
    tmp10 = Greater(data->simulationInfo->realParameter[113],0.0);
    if(!tmp10)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1829,6,1829,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.f_cut > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp11)));
      }
    }
  }
  TRACE_POP
}

/*
 equation index: 208
 type: ALGORITHM
 
   assert(combiTimeTable1.tableName <> "NoName", "tableOnFile = true and no table name given");
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  static const MMC_DEFSTRINGLIT(tmp15,6,"NoName");
  static const MMC_DEFSTRINGLIT(tmp16,42,"tableOnFile = true and no table name given");
  static int tmp17 = 0;
  {
    if(!(!stringEqual(data->simulationInfo->stringParameter[1], MMC_REFSTRINGLIT(tmp15))))
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Sources.mo",2401,7,2402,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncombiTimeTable1.tableName <> \"NoName\"", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp16)));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void CoffeeTemperature_Test_CoffeeTest11_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_1(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_2(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_3(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_4(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_5(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_6(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_7(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_8(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_9(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_10(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_11(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_12(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_13(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_14(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_15(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_16(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_17(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_18(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_19(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_20(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_21(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_22(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_23(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_24(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_675(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_678(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_759(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_679(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_29(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_30(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_726(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_729(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_754(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_730(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_731(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_732(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_736(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_722(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_723(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_653(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_654(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_748(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_43(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_728(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_749(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_750(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_47(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_48(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_751(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_50(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_677(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_752(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_753(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_54(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_55(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_56(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_92(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_724(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_111(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_716(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_725(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_717(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_718(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_116(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_117(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_118(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_738(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_739(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_740(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_122(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_123(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_124(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_125(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_746(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_127(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_128(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_129(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_130(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_131(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_132(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_133(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_734(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_735(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_136(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_137(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_157(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_809(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_814(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_794(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_805(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_808(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_793(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_795(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_796(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_172(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_804(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_813(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_792(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_176(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_177(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_817(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_818(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_819(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_187(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_827(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_189(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_190(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_191(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_807(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_806(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_194(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_195(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_196(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_197(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_198(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_199(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_200(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_201(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_202(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_203(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_204(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_205(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_206(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_207(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_212(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_211(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_210(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_209(data, threadData);
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_208(data, threadData);
  TRACE_POP
}


int CoffeeTemperature_Test_CoffeeTest11_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  CoffeeTemperature_Test_CoffeeTest11_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}

/*
 equation index: 433
 type: SIMPLE_ASSIGN
 L = 0.096
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[0] = 0.096;
  TRACE_POP
}

/*
 equation index: 432
 type: SIMPLE_ASSIGN
 enclosedConvection1._H = L
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[42] = data->simulationInfo->realParameter[0];
  TRACE_POP
}

/*
 equation index: 431
 type: SIMPLE_ASSIGN
 R = 0.0365
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[1] = 0.0365;
  TRACE_POP
}

/*
 equation index: 430
 type: SIMPLE_ASSIGN
 enclosedConvection1._L = R
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[43] = data->simulationInfo->realParameter[1];
  TRACE_POP
}

/*
 equation index: 429
 type: SIMPLE_ASSIGN
 Sin = 6.283185307179586 * R * L
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[2] = (6.283185307179586) * ((data->simulationInfo->realParameter[1]) * (data->simulationInfo->realParameter[0]));
  TRACE_POP
}

/*
 equation index: 428
 type: SIMPLE_ASSIGN
 enclosedConvection1._area = Sin
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[44] = data->simulationInfo->realParameter[2];
  TRACE_POP
}

/*
 equation index: 427
 type: SIMPLE_ASSIGN
 naturalConvection21._convectionType = CoffeeTemperature.CoffeeThermal.ConvectionType.vertical_planes_cylinder
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->integerParameter[11] = 1;
  TRACE_POP
}

/*
 equation index: 426
 type: SIMPLE_ASSIGN
 cup_t = 0.004
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  data->simulationInfo->realParameter[38] = 0.004;
  TRACE_POP
}

/*
 equation index: 425
 type: SIMPLE_ASSIGN
 naturalConvection21._L = 3.141592653589793 * (R + cup_t) ^ 2.0 / (6.283185307179586 * (R + cup_t))
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[1] + data->simulationInfo->realParameter[38];
  data->simulationInfo->realParameter[53] = DIVISION_SIM((3.141592653589793) * ((tmp0 * tmp0)),(6.283185307179586) * (data->simulationInfo->realParameter[1] + data->simulationInfo->realParameter[38]),"6.283185307179586 * (R + cup_t)",equationIndexes);
  TRACE_POP
}

/*
 equation index: 424
 type: SIMPLE_ASSIGN
 naturalConvection21._area = 6.283185307179586 * (R + cup_t) ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  modelica_real tmp1;
  tmp1 = data->simulationInfo->realParameter[1] + data->simulationInfo->realParameter[38];
  data->simulationInfo->realParameter[54] = (6.283185307179586) * ((tmp1 * tmp1));
  TRACE_POP
}

/*
 equation index: 423
 type: SIMPLE_ASSIGN
 naturalConvection1._convectionType = CoffeeTemperature.CoffeeThermal.ConvectionType.vertical_planes_cylinder
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->integerParameter[10] = 1;
  TRACE_POP
}

/*
 equation index: 422
 type: SIMPLE_ASSIGN
 naturalConvection1._L = 2.0 * (R + cup_t)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  data->simulationInfo->realParameter[51] = (2.0) * (data->simulationInfo->realParameter[1] + data->simulationInfo->realParameter[38]);
  TRACE_POP
}

/*
 equation index: 421
 type: SIMPLE_ASSIGN
 naturalConvection1._area = 6.283185307179586 * (R + cup_t) * L
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[52] = (6.283185307179586) * ((data->simulationInfo->realParameter[1] + data->simulationInfo->realParameter[38]) * (data->simulationInfo->realParameter[0]));
  TRACE_POP
}

/*
 equation index: 420
 type: SIMPLE_ASSIGN
 const._k = 204.2035224833365 * R ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  modelica_real tmp2;
  tmp2 = data->simulationInfo->realParameter[1];
  data->simulationInfo->realParameter[15] = (204.2035224833365) * ((tmp2 * tmp2));
  TRACE_POP
}

/*
 equation index: 419
 type: SIMPLE_ASSIGN
 timeTable1._timeScale = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[103] = 1.0;
  TRACE_POP
}

/*
 equation index: 418
 type: SIMPLE_ASSIGN
 timeTable1._startTime = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[92] = 0.0;
  TRACE_POP
}

/*
 equation index: 417
 type: SIMPLE_ASSIGN
 timeTable1._offset = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[91] = 0.0;
  TRACE_POP
}

/*
 equation index: 416
 type: SIMPLE_ASSIGN
 timeTable1._table[5,2] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[102] = 0.0;
  TRACE_POP
}

/*
 equation index: 415
 type: SIMPLE_ASSIGN
 timeTable1._table[5,1] = 25.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[101] = 25.0;
  TRACE_POP
}

/*
 equation index: 414
 type: SIMPLE_ASSIGN
 timeTable1._table[4,2] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[100] = 0.0;
  TRACE_POP
}

/*
 equation index: 413
 type: SIMPLE_ASSIGN
 timeTable1._table[4,1] = 20.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[99] = 20.0;
  TRACE_POP
}

/*
 equation index: 412
 type: SIMPLE_ASSIGN
 timeTable1._table[3,2] = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[98] = 1.0;
  TRACE_POP
}

/*
 equation index: 411
 type: SIMPLE_ASSIGN
 timeTable1._table[3,1] = 15.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[97] = 15.0;
  TRACE_POP
}

/*
 equation index: 410
 type: SIMPLE_ASSIGN
 timeTable1._table[2,2] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[96] = 0.0;
  TRACE_POP
}

/*
 equation index: 409
 type: SIMPLE_ASSIGN
 timeTable1._table[2,1] = 5.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[95] = 5.0;
  TRACE_POP
}

/*
 equation index: 408
 type: SIMPLE_ASSIGN
 timeTable1._table[1,2] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[94] = 0.0;
  TRACE_POP
}

/*
 equation index: 407
 type: SIMPLE_ASSIGN
 timeTable1._table[1,1] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[93] = 0.0;
  TRACE_POP
}

/*
 equation index: 406
 type: SIMPLE_ASSIGN
 h = 90.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[46] = 90.0;
  TRACE_POP
}

/*
 equation index: 405
 type: SIMPLE_ASSIGN
 const5._k = 6.283185307179586 * R * L * h
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[16] = (6.283185307179586) * ((data->simulationInfo->realParameter[1]) * ((data->simulationInfo->realParameter[0]) * (data->simulationInfo->realParameter[46])));
  TRACE_POP
}

/*
 equation index: 404
 type: SIMPLE_ASSIGN
 combiTimeTable1._offset[1] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[6] = 0.0;
  TRACE_POP
}

/*
 equation index: 403
 type: SIMPLE_ASSIGN
 combiTimeTable1._p_offset[1] = combiTimeTable1.offset[1]
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[7] = data->simulationInfo->realParameter[6];
  TRACE_POP
}

/*
 equation index: 402
 type: SIMPLE_ASSIGN
 combiTimeTable1._timeScale = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[14] = 1.0;
  TRACE_POP
}

/*
 equation index: 401
 type: SIMPLE_ASSIGN
 combiTimeTable1._startTime = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[8] = 0.0;
  TRACE_POP
}

/*
 equation index: 400
 type: SIMPLE_ASSIGN
 combiTimeTable1._extrapolation = Modelica.Blocks.Types.Extrapolation.LastTwoPoints
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->integerParameter[1] = 2;
  TRACE_POP
}

/*
 equation index: 399
 type: SIMPLE_ASSIGN
 combiTimeTable1._smoothness = Modelica.Blocks.Types.Smoothness.LinearSegments
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->integerParameter[3] = 1;
  TRACE_POP
}

/*
 equation index: 398
 type: SIMPLE_ASSIGN
 combiTimeTable1._columns[1] = 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->integerParameter[0] = ((modelica_integer) 2);
  TRACE_POP
}

/*
 equation index: 397
 type: SIMPLE_ASSIGN
 combiTimeTable1._verboseRead = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->booleanParameter[1] = 1;
  TRACE_POP
}

/*
 equation index: 396
 type: SIMPLE_ASSIGN
 combiTimeTable1._fileName = "C:/Work/2018/Coffee/CoffeeTemperature/Experiment/WaterTemp_1.txt"
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  static const MMC_DEFSTRINGLIT(tmp3,64,"C:/Work/2018/Coffee/CoffeeTemperature/Experiment/WaterTemp_1.txt");
  data->simulationInfo->stringParameter[0] = MMC_REFSTRINGLIT(tmp3);
  TRACE_POP
}

/*
 equation index: 395
 type: SIMPLE_ASSIGN
 combiTimeTable1._tableName = "Tab1"
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  static const MMC_DEFSTRINGLIT(tmp4,4,"Tab1");
  data->simulationInfo->stringParameter[1] = MMC_REFSTRINGLIT(tmp4);
  TRACE_POP
}

/*
 equation index: 394
 type: SIMPLE_ASSIGN
 combiTimeTable1._tableOnFile = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->booleanParameter[0] = 1;
  TRACE_POP
}

/*
 equation index: 393
 type: SIMPLE_ASSIGN
 combiTimeTable1._nout = 1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->integerParameter[2] = ((modelica_integer) 1);
  TRACE_POP
}

/*
 equation index: 392
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._nr = 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->integerParameter[27] = ((modelica_integer) 2);
  TRACE_POP
}

/*
 equation index: 391
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._na = 0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->integerParameter[24] = ((modelica_integer) 0);
  TRACE_POP
}

/*
 equation index: 390
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._nc0 = 0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->integerParameter[25] = ((modelica_integer) 0);
  TRACE_POP
}

/*
 equation index: 389
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._ncr = 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->integerParameter[26] = ((modelica_integer) 2);
  TRACE_POP
}

/*
 equation index: 388
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._u_nominal = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[118] = 1.0;
  TRACE_POP
}

/*
 equation index: 387
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._y_start = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[121] = 0.0;
  TRACE_POP
}

/*
 equation index: 386
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._x_start[2] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->realParameter[120] = 0.0;
  TRACE_POP
}

/*
 equation index: 385
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._x_start[1] = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->realParameter[119] = 0.0;
  TRACE_POP
}

/*
 equation index: 384
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._nx = 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->integerParameter[28] = ((modelica_integer) 2);
  TRACE_POP
}

/*
 equation index: 383
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._init = Modelica.Blocks.Types.Init.SteadyState
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->integerParameter[23] = 2;
  TRACE_POP
}

/*
 equation index: 382
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._normalized = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->simulationInfo->booleanParameter[28] = 1;
  TRACE_POP
}

/*
 equation index: 381
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._f_min = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  data->simulationInfo->realParameter[114] = 0.0;
  TRACE_POP
}

/*
 equation index: 380
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._A_ripple = 0.5
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[110] = 0.5;
  TRACE_POP
}

/*
 equation index: 379
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._gain = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[115] = 1.0;
  TRACE_POP
}

/*
 equation index: 378
 type: SIMPLE_ASSIGN
 valveIncompressible1._riseTime = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  data->simulationInfo->realParameter[129] = 1.0;
  TRACE_POP
}

/*
 equation index: 377
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._f_cut = 5.0 / (6.283185307179586 * valveIncompressible1.riseTime)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  data->simulationInfo->realParameter[113] = DIVISION_SIM(5.0,(6.283185307179586) * (data->simulationInfo->realParameter[129]),"6.283185307179586 * valveIncompressible1.riseTime",equationIndexes);
  TRACE_POP
}

/*
 equation index: 376
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._order = 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->integerParameter[29] = ((modelica_integer) 2);
  TRACE_POP
}

/*
 equation index: 375
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._filterType = Modelica.Blocks.Types.FilterType.LowPass
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  data->simulationInfo->integerParameter[22] = 1;
  TRACE_POP
}

/*
 equation index: 374
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._analogFilter = Modelica.Blocks.Types.AnalogFilter.CriticalDamping
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  data->simulationInfo->integerParameter[21] = 1;
  TRACE_POP
}

/*
 equation index: 373
 type: SIMPLE_ASSIGN
 valveIncompressible1._use_Re = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  data->simulationInfo->booleanParameter[35] = 0;
  TRACE_POP
}

/*
 equation index: 372
 type: SIMPLE_ASSIGN
 valveIncompressible1._leakageOpening = 1e-006
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  data->simulationInfo->realParameter[122] = 1e-006;
  TRACE_POP
}

/*
 equation index: 371
 type: SIMPLE_ASSIGN
 valveIncompressible1._minLimiter._uMin = valveIncompressible1.leakageOpening
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  data->simulationInfo->realParameter[126] = data->simulationInfo->realParameter[122];
  TRACE_POP
}

/*
 equation index: 370
 type: SIMPLE_ASSIGN
 system._dp_small = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  data->simulationInfo->realParameter[81] = 1.0;
  TRACE_POP
}

/*
 equation index: 369
 type: SIMPLE_ASSIGN
 valveIncompressible1._dp_small = system.dp_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  data->simulationInfo->realParameter[108] = data->simulationInfo->realParameter[81];
  TRACE_POP
}

/*
 equation index: 368
 type: SIMPLE_ASSIGN
 valveIncompressible1._checkValve = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  data->simulationInfo->booleanParameter[27] = 0;
  TRACE_POP
}

/*
 equation index: 367
 type: SIMPLE_ASSIGN
 valveIncompressible1._filteredOpening = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  data->simulationInfo->booleanParameter[29] = 1;
  TRACE_POP
}

/*
 equation index: 366
 type: SIMPLE_ASSIGN
 valveIncompressible1._opening_nominal = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  data->simulationInfo->realParameter[127] = 1.0;
  TRACE_POP
}

/*
 equation index: 365
 type: SIMPLE_ASSIGN
 valveIncompressible1._rho_nominal = 998.2060924679472
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  data->simulationInfo->realParameter[128] = 998.2060924679472;
  TRACE_POP
}

/*
 equation index: 364
 type: SIMPLE_ASSIGN
 valveIncompressible1._m_flow_nominal = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  data->simulationInfo->realParameter[123] = 1.0;
  TRACE_POP
}

/*
 equation index: 363
 type: SIMPLE_ASSIGN
 valveIncompressible1._dp_nominal = 100000.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  data->simulationInfo->realParameter[107] = 100000.0;
  TRACE_POP
}

/*
 equation index: 362
 type: SIMPLE_ASSIGN
 valveIncompressible1._Cv = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  data->simulationInfo->realParameter[105] = 0.0;
  TRACE_POP
}

/*
 equation index: 361
 type: SIMPLE_ASSIGN
 valveIncompressible1._Kv = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->simulationInfo->realParameter[106] = 0.0;
  TRACE_POP
}

/*
 equation index: 360
 type: SIMPLE_ASSIGN
 valveIncompressible1._CvData = Modelica.Fluid.Types.CvTypes.OpPoint
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->integerParameter[20] = 4;
  TRACE_POP
}

/*
 equation index: 359
 type: SIMPLE_ASSIGN
 valveIncompressible1._show_V_flow = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->booleanParameter[34] = 1;
  TRACE_POP
}

/*
 equation index: 358
 type: SIMPLE_ASSIGN
 valveIncompressible1._show_T = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->booleanParameter[33] = 1;
  TRACE_POP
}

/*
 equation index: 357
 type: SIMPLE_ASSIGN
 system._m_flow_small = 0.01
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->realParameter[85] = 0.01;
  TRACE_POP
}

/*
 equation index: 356
 type: SIMPLE_ASSIGN
 valveIncompressible1._m_flow_small = system.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->realParameter[124] = data->simulationInfo->realParameter[85];
  TRACE_POP
}

/*
 equation index: 355
 type: SIMPLE_ASSIGN
 valveIncompressible1._m_flow_start = valveIncompressible1.m_flow_nominal
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->realParameter[125] = data->simulationInfo->realParameter[123];
  TRACE_POP
}

/*
 equation index: 354
 type: SIMPLE_ASSIGN
 valveIncompressible1._dp_start = valveIncompressible1.dp_nominal
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->realParameter[109] = data->simulationInfo->realParameter[107];
  TRACE_POP
}

/*
 equation index: 353
 type: SIMPLE_ASSIGN
 valveIncompressible1._showDesignFlowDirection = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->booleanParameter[32] = 1;
  TRACE_POP
}

/*
 equation index: 352
 type: SIMPLE_ASSIGN
 valveIncompressible1._port_b_exposesState = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->booleanParameter[31] = 0;
  TRACE_POP
}

/*
 equation index: 351
 type: SIMPLE_ASSIGN
 valveIncompressible1._port_a_exposesState = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->booleanParameter[30] = 0;
  TRACE_POP
}

/*
 equation index: 350
 type: SIMPLE_ASSIGN
 valveIncompressible1._allowFlowReversal = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->booleanParameter[26] = 1;
  TRACE_POP
}

/*
 equation index: 349
 type: SIMPLE_ASSIGN
 pipe._flowModel._continuousFlowReversal = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->booleanParameter[13] = 0;
  TRACE_POP
}

/*
 equation index: 348
 type: SIMPLE_ASSIGN
 pipe._flowModel._constantPressureLossCoefficient = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->booleanParameter[12] = 0;
  TRACE_POP
}

/*
 equation index: 347
 type: SIMPLE_ASSIGN
 pipe._flowModel._m_flow_small = system.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->realParameter[63] = data->simulationInfo->realParameter[85];
  TRACE_POP
}

/*
 equation index: 346
 type: SIMPLE_ASSIGN
 pipe._flowModel._m_flow_nominal = 100.0 * pipe.flowModel.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  data->simulationInfo->realParameter[62] = (100.0) * (data->simulationInfo->realParameter[63]);
  TRACE_POP
}

/*
 equation index: 345
 type: SIMPLE_ASSIGN
 pipe._flowModel._mu_nominal = 0.001001605325647912
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,345};
  data->simulationInfo->realParameter[65] = 0.001001605325647912;
  TRACE_POP
}

/*
 equation index: 344
 type: SIMPLE_ASSIGN
 pipe._flowModel._use_mu_nominal = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->booleanParameter[18] = 0;
  TRACE_POP
}

/*
 equation index: 343
 type: SIMPLE_ASSIGN
 pipe._flowModel._rho_nominal = 998.2060924679472
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->realParameter[69] = 998.2060924679472;
  TRACE_POP
}

/*
 equation index: 342
 type: SIMPLE_ASSIGN
 pipe._flowModel._use_rho_nominal = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->booleanParameter[19] = 0;
  TRACE_POP
}

/*
 equation index: 341
 type: SIMPLE_ASSIGN
 pipe._flowModel._show_Res = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  data->simulationInfo->booleanParameter[15] = 0;
  TRACE_POP
}

/*
 equation index: 340
 type: SIMPLE_ASSIGN
 pipe._flowModel._Re_turbulent = 4000.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,340};
  data->simulationInfo->realParameter[58] = 4000.0;
  TRACE_POP
}

/*
 equation index: 339
 type: SIMPLE_ASSIGN
 pipe._flowModel._use_Ib_flows = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,339};
  data->simulationInfo->booleanParameter[17] = 0;
  TRACE_POP
}

/*
 equation index: 338
 type: SIMPLE_ASSIGN
 pipe._flowModel._useUpstreamScheme = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,338};
  data->simulationInfo->booleanParameter[16] = 1;
  TRACE_POP
}

/*
 equation index: 337
 type: SIMPLE_ASSIGN
 pipe._flowModel._m = 1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->integerParameter[12] = ((modelica_integer) 1);
  TRACE_POP
}

/*
 equation index: 336
 type: SIMPLE_ASSIGN
 system._p_ambient = 101325.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->realParameter[87] = 101325.0;
  TRACE_POP
}

/*
 equation index: 335
 type: SIMPLE_ASSIGN
 system._p_start = system.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->realParameter[88] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
 equation index: 334
 type: SIMPLE_ASSIGN
 pipe._p_a_start = system.p_start
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->realParameter[74] = data->simulationInfo->realParameter[88];
  TRACE_POP
}

/*
 equation index: 333
 type: SIMPLE_ASSIGN
 pipe._p_b_start = pipe.p_a_start
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->realParameter[75] = data->simulationInfo->realParameter[74];
  TRACE_POP
}

/*
 equation index: 332
 type: SIMPLE_ASSIGN
 pipe._flowModel._p_b_start = pipe.p_b_start
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[68] = data->simulationInfo->realParameter[75];
  TRACE_POP
}

/*
 equation index: 331
 type: SIMPLE_ASSIGN
 pipe._flowModel._p_a_start = pipe.p_a_start
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->realParameter[67] = data->simulationInfo->realParameter[74];
  TRACE_POP
}

/*
 equation index: 330
 type: SIMPLE_ASSIGN
 pipe._flowModel._m_flow_start = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->realParameter[64] = 0.0;
  TRACE_POP
}

/*
 equation index: 329
 type: SIMPLE_ASSIGN
 pipe._flowModel._momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->integerParameter[13] = 4;
  TRACE_POP
}

/*
 equation index: 328
 type: SIMPLE_ASSIGN
 pipe._flowModel._allowFlowReversal = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->booleanParameter[11] = 1;
  TRACE_POP
}

/*
 equation index: 327
 type: SIMPLE_ASSIGN
 system._g = 9.806649999999999
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->realParameter[83] = 9.806649999999999;
  TRACE_POP
}

/*
 equation index: 326
 type: SIMPLE_ASSIGN
 pipe._flowModel._g = system.g
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->realParameter[61] = data->simulationInfo->realParameter[83];
  TRACE_POP
}

/*
 equation index: 325
 type: SIMPLE_ASSIGN
 pipe._nParallel = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->simulationInfo->realParameter[73] = 1.0;
  TRACE_POP
}

/*
 equation index: 324
 type: SIMPLE_ASSIGN
 pipe._flowModel._nParallel = pipe.nParallel
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->realParameter[66] = data->simulationInfo->realParameter[73];
  TRACE_POP
}

/*
 equation index: 323
 type: SIMPLE_ASSIGN
 pipe._flowModel._n = 2
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->integerParameter[14] = ((modelica_integer) 2);
  TRACE_POP
}

/*
 equation index: 322
 type: SIMPLE_ASSIGN
 pipe._flowModel._from_dp = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->booleanParameter[14] = 1;
  TRACE_POP
}

/*
 equation index: 321
 type: SIMPLE_ASSIGN
 pipe._m_flow_start = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->realParameter[72] = 0.0;
  TRACE_POP
}

/*
 equation index: 320
 type: SIMPLE_ASSIGN
 pipe._height_ab = -0.05
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[70] = -0.05;
  TRACE_POP
}

/*
 equation index: 319
 type: SIMPLE_ASSIGN
 pipe._length = 0.05
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->realParameter[71] = 0.05;
  TRACE_POP
}

/*
 equation index: 318
 type: SIMPLE_ASSIGN
 pipe._diameter = 0.015
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->realParameter[57] = 0.015;
  TRACE_POP
}

/*
 equation index: 317
 type: SIMPLE_ASSIGN
 pipe._crossArea = 0.7853981633974483 * pipe.diameter ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  modelica_real tmp5;
  tmp5 = data->simulationInfo->realParameter[57];
  data->simulationInfo->realParameter[56] = (0.7853981633974483) * ((tmp5 * tmp5));
  TRACE_POP
}

/*
 equation index: 316
 type: SIMPLE_ASSIGN
 pipe._V = pipe.crossArea * pipe.length * pipe.nParallel
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->simulationInfo->realParameter[55] = (data->simulationInfo->realParameter[56]) * ((data->simulationInfo->realParameter[71]) * (data->simulationInfo->realParameter[73]));
  TRACE_POP
}

/*
 equation index: 315
 type: SIMPLE_ASSIGN
 pipe._roughness = 2.5e-005
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->simulationInfo->realParameter[77] = 2.5e-005;
  TRACE_POP
}

/*
 equation index: 314
 type: SIMPLE_ASSIGN
 pipe._perimeter = 3.141592653589793 * pipe.diameter
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->simulationInfo->realParameter[76] = (3.141592653589793) * (data->simulationInfo->realParameter[57]);
  TRACE_POP
}

/*
 equation index: 313
 type: SIMPLE_ASSIGN
 pipe._isCircular = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->simulationInfo->booleanParameter[20] = 1;
  TRACE_POP
}

/*
 equation index: 312
 type: SIMPLE_ASSIGN
 pipe._showDesignFlowDirection = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->simulationInfo->booleanParameter[23] = 1;
  TRACE_POP
}

/*
 equation index: 311
 type: SIMPLE_ASSIGN
 pipe._port_b_exposesState = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->simulationInfo->booleanParameter[22] = 0;
  TRACE_POP
}

/*
 equation index: 310
 type: SIMPLE_ASSIGN
 pipe._port_a_exposesState = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->simulationInfo->booleanParameter[21] = 0;
  TRACE_POP
}

/*
 equation index: 309
 type: SIMPLE_ASSIGN
 pipe._allowFlowReversal = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->booleanParameter[10] = 1;
  TRACE_POP
}

/*
 equation index: 308
 type: SIMPLE_ASSIGN
 level_start = 0.06
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[50] = 0.06;
  TRACE_POP
}

/*
 equation index: 307
 type: SIMPLE_ASSIGN
 yakan._level_start = level_start
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->realParameter[139] = data->simulationInfo->realParameter[50];
  TRACE_POP
}

/*
 equation index: 306
 type: SIMPLE_ASSIGN
 yakan._level_start_eps = max(yakan.level_start, 1e-015)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->realParameter[140] = fmax(data->simulationInfo->realParameter[139],1e-015);
  TRACE_POP
}

/*
 equation index: 305
 type: SIMPLE_ASSIGN
 system._T_ambient = 293.15
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->simulationInfo->realParameter[79] = 293.15;
  TRACE_POP
}

/*
 equation index: 304
 type: SIMPLE_ASSIGN
 yakan._T_ambient = system.T_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->simulationInfo->realParameter[130] = data->simulationInfo->realParameter[79];
  TRACE_POP
}

/*
 equation index: 303
 type: SIMPLE_ASSIGN
 yakan._p_ambient = system.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->simulationInfo->realParameter[143] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
 equation index: 302
 type: SIMPLE_ASSIGN
 yakan._crossArea = 3.141592653589793 * R ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  modelica_real tmp6;
  tmp6 = data->simulationInfo->realParameter[1];
  data->simulationInfo->realParameter[133] = (3.141592653589793) * ((tmp6 * tmp6));
  TRACE_POP
}

/*
 equation index: 301
 type: SIMPLE_ASSIGN
 yakan._height = L
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->simulationInfo->realParameter[138] = data->simulationInfo->realParameter[0];
  TRACE_POP
}

/*
 equation index: 300
 type: SIMPLE_ASSIGN
 yakan._vesselArea = yakan.crossArea
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->simulationInfo->realParameter[149] = data->simulationInfo->realParameter[133];
  TRACE_POP
}

/*
 equation index: 299
 type: SIMPLE_ASSIGN
 yakan._fluidLevel_max = yakan.height
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->simulationInfo->realParameter[134] = data->simulationInfo->realParameter[138];
  TRACE_POP
}

/*
 equation index: 298
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._T_ambient = system.T_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->simulationInfo->realParameter[136] = data->simulationInfo->realParameter[79];
  TRACE_POP
}

/*
 equation index: 297
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._k = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->simulationInfo->realParameter[137] = 0.0;
  TRACE_POP
}

/*
 equation index: 296
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._use_k = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->booleanParameter[36] = 1;
  TRACE_POP
}

/*
 equation index: 295
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._n = 1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->simulationInfo->integerParameter[31] = ((modelica_integer) 1);
  TRACE_POP
}

/*
 equation index: 294
 type: SIMPLE_ASSIGN
 yakan._use_HeatTransfer = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->booleanParameter[40] = 1;
  TRACE_POP
}

/*
 equation index: 293
 type: SIMPLE_ASSIGN
 yakan._use_Re = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->booleanParameter[41] = 0;
  TRACE_POP
}

/*
 equation index: 292
 type: SIMPLE_ASSIGN
 yakan._m_flow_small = system.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->simulationInfo->realParameter[142] = data->simulationInfo->realParameter[85];
  TRACE_POP
}

/*
 equation index: 291
 type: SIMPLE_ASSIGN
 yakan._m_flow_nominal = 100.0 * system.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->simulationInfo->realParameter[141] = (100.0) * (data->simulationInfo->realParameter[85]);
  TRACE_POP
}

/*
 equation index: 290
 type: SIMPLE_ASSIGN
 yakan._portsData[1]._zeta_in = 1.04
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->simulationInfo->realParameter[147] = 1.04;
  TRACE_POP
}

/*
 equation index: 289
 type: SIMPLE_ASSIGN
 yakan._portsData[1]._zeta_out = 0.5
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->realParameter[148] = 0.5;
  TRACE_POP
}

/*
 equation index: 288
 type: SIMPLE_ASSIGN
 yakan._portsData[1]._height = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[146] = 0.0;
  TRACE_POP
}

/*
 equation index: 287
 type: SIMPLE_ASSIGN
 yakan._portsData[1]._diameter = 0.005
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->simulationInfo->realParameter[145] = 0.005;
  TRACE_POP
}

/*
 equation index: 286
 type: SIMPLE_ASSIGN
 yakan._use_portsData = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->booleanParameter[43] = 1;
  TRACE_POP
}

/*
 equation index: 285
 type: SIMPLE_ASSIGN
 yakan._nPorts = 1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->integerParameter[33] = ((modelica_integer) 1);
  TRACE_POP
}

/*
 equation index: 284
 type: SIMPLE_ASSIGN
 yakan._initialize_p = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->simulationInfo->booleanParameter[37] = 0;
  TRACE_POP
}

/*
 equation index: 283
 type: SIMPLE_ASSIGN
 yakan._medium._standardOrderComponents = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->simulationInfo->booleanParameter[39] = 1;
  TRACE_POP
}

/*
 equation index: 282
 type: SIMPLE_ASSIGN
 yakan._medium._preferredMediumStates = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->booleanParameter[38] = 1;
  TRACE_POP
}

/*
 equation index: 281
 type: SIMPLE_ASSIGN
 yakan._X_start[1] = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->simulationInfo->realParameter[132] = 1.0;
  TRACE_POP
}

/*
 equation index: 280
 type: SIMPLE_ASSIGN
 yakan._p_start = yakan.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->simulationInfo->realParameter[144] = data->simulationInfo->realParameter[143];
  TRACE_POP
}

/*
 equation index: 279
 type: SIMPLE_ASSIGN
 yakan._T_start = 371.15
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->realParameter[131] = 371.15;
  TRACE_POP
}

/*
 equation index: 278
 type: SIMPLE_ASSIGN
 yakan._h_start = Modelica.Fluid.Vessels.OpenTank$yakan.Medium.specificEnthalpy_pTX(yakan.p_start, yakan.T_start, {yakan.X_start[1]}, 0)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp7, 1, (modelica_real)data->simulationInfo->realParameter[132]);
  data->simulationInfo->realParameter[135] = omc_Modelica_Fluid_Vessels_OpenTank$yakan_Medium_specificEnthalpy__pTX(threadData, data->simulationInfo->realParameter[144], data->simulationInfo->realParameter[131], tmp7, ((modelica_integer) 0));
  TRACE_POP
}

/*
 equation index: 277
 type: SIMPLE_ASSIGN
 yakan._use_T_start = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->simulationInfo->booleanParameter[42] = 1;
  TRACE_POP
}

/*
 equation index: 276
 type: SIMPLE_ASSIGN
 yakan._traceDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->integerParameter[35] = 1;
  TRACE_POP
}

/*
 equation index: 275
 type: SIMPLE_ASSIGN
 yakan._substanceDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->simulationInfo->integerParameter[34] = 1;
  TRACE_POP
}

/*
 equation index: 274
 type: SIMPLE_ASSIGN
 yakan._massDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->integerParameter[32] = 1;
  TRACE_POP
}

/*
 equation index: 273
 type: SIMPLE_ASSIGN
 yakan._energyDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->integerParameter[30] = 1;
  TRACE_POP
}

/*
 equation index: 272
 type: SIMPLE_ASSIGN
 V = 3.141592653589793 * ((R + cup_t) ^ 2.0 - R ^ 2.0) * L
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  modelica_real tmp8;
  modelica_real tmp9;
  tmp8 = data->simulationInfo->realParameter[1] + data->simulationInfo->realParameter[38];
  tmp9 = data->simulationInfo->realParameter[1];
  data->simulationInfo->realParameter[5] = (3.141592653589793) * (((tmp8 * tmp8) - ((tmp9 * tmp9))) * (data->simulationInfo->realParameter[0]));
  TRACE_POP
}

/*
 equation index: 271
 type: SIMPLE_ASSIGN
 rho = 2200.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->realParameter[78] = 2200.0;
  TRACE_POP
}

/*
 equation index: 270
 type: SIMPLE_ASSIGN
 cp = 1050.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[17] = 1050.0;
  TRACE_POP
}

/*
 equation index: 269
 type: SIMPLE_ASSIGN
 heatCapacitor1._C = cp * V * rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[48] = (data->simulationInfo->realParameter[17]) * ((data->simulationInfo->realParameter[5]) * (data->simulationInfo->realParameter[78]));
  TRACE_POP
}

/*
 equation index: 268
 type: SIMPLE_ASSIGN
 k = 1.3
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[49] = 1.3;
  TRACE_POP
}

/*
 equation index: 267
 type: SIMPLE_ASSIGN
 thermalConductor2._G = 6.283185307179586 * k * L / log(R / (R + (-0.5) * cup_t))
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  modelica_real tmp10;
  tmp10 = DIVISION_SIM(data->simulationInfo->realParameter[1],data->simulationInfo->realParameter[1] + (-0.5) * (data->simulationInfo->realParameter[38]),"R + (-0.5) * cup_t",equationIndexes);
  if(!(tmp10 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log(R / (R + (-0.5) * cup_t)) was %g should be > 0", tmp10);
  }
  data->simulationInfo->realParameter[90] = (6.283185307179586) * ((data->simulationInfo->realParameter[49]) * (DIVISION_SIM(data->simulationInfo->realParameter[0],log(tmp10),"log(R / (R + (-0.5) * cup_t))",equationIndexes)));
  TRACE_POP
}

/*
 equation index: 266
 type: SIMPLE_ASSIGN
 Tamb = 297.95
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[4] = 297.95;
  TRACE_POP
}

/*
 equation index: 265
 type: SIMPLE_ASSIGN
 fixedTemperature2._T = Tamb
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[45] = data->simulationInfo->realParameter[4];
  TRACE_POP
}

/*
 equation index: 264
 type: SIMPLE_ASSIGN
 thermalConductor1._G = 6.283185307179586 * k * L / log((R + 0.5 * cup_t) / R)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  modelica_real tmp11;
  tmp11 = DIVISION_SIM(data->simulationInfo->realParameter[1] + (0.5) * (data->simulationInfo->realParameter[38]),data->simulationInfo->realParameter[1],"R",equationIndexes);
  if(!(tmp11 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((R + 0.5 * cup_t) / R) was %g should be > 0", tmp11);
  }
  data->simulationInfo->realParameter[89] = (6.283185307179586) * ((data->simulationInfo->realParameter[49]) * (DIVISION_SIM(data->simulationInfo->realParameter[0],log(tmp11),"log((R + 0.5 * cup_t) / R)",equationIndexes)));
  TRACE_POP
}

/*
 equation index: 263
 type: SIMPLE_ASSIGN
 system._eps_m_flow = 0.0001
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->realParameter[82] = 0.0001;
  TRACE_POP
}

/*
 equation index: 262
 type: SIMPLE_ASSIGN
 system._m_flow_nominal = 100.0 * system.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[84] = (100.0) * (data->simulationInfo->realParameter[85]);
  TRACE_POP
}

/*
 equation index: 261
 type: SIMPLE_ASSIGN
 system._use_eps_Re = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->booleanParameter[25] = 0;
  TRACE_POP
}

/*
 equation index: 260
 type: SIMPLE_ASSIGN
 system._T_start = system.T_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->simulationInfo->realParameter[80] = data->simulationInfo->realParameter[79];
  TRACE_POP
}

/*
 equation index: 259
 type: SIMPLE_ASSIGN
 system._m_flow_start = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->realParameter[86] = 0.0;
  TRACE_POP
}

/*
 equation index: 258
 type: SIMPLE_ASSIGN
 system._momentumDynamics = Modelica.Fluid.Types.Dynamics.SteadyState
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->simulationInfo->integerParameter[17] = 4;
  TRACE_POP
}

/*
 equation index: 257
 type: SIMPLE_ASSIGN
 system._traceDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->simulationInfo->integerParameter[19] = 1;
  TRACE_POP
}

/*
 equation index: 256
 type: SIMPLE_ASSIGN
 system._substanceDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->integerParameter[18] = 1;
  TRACE_POP
}

/*
 equation index: 255
 type: SIMPLE_ASSIGN
 system._massDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->integerParameter[16] = 1;
  TRACE_POP
}

/*
 equation index: 254
 type: SIMPLE_ASSIGN
 system._energyDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->integerParameter[15] = 1;
  TRACE_POP
}

/*
 equation index: 253
 type: SIMPLE_ASSIGN
 system._allowFlowReversal = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->booleanParameter[24] = 1;
  TRACE_POP
}

/*
 equation index: 252
 type: SIMPLE_ASSIGN
 cup._level_start = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->realParameter[27] = 0.0;
  TRACE_POP
}

/*
 equation index: 251
 type: SIMPLE_ASSIGN
 cup._level_start_eps = max(cup.level_start, 1e-015)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->realParameter[28] = fmax(data->simulationInfo->realParameter[27],1e-015);
  TRACE_POP
}

/*
 equation index: 250
 type: SIMPLE_ASSIGN
 cup._T_ambient = system.T_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->realParameter[18] = data->simulationInfo->realParameter[79];
  TRACE_POP
}

/*
 equation index: 249
 type: SIMPLE_ASSIGN
 cup._p_ambient = system.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->simulationInfo->realParameter[31] = data->simulationInfo->realParameter[87];
  TRACE_POP
}

/*
 equation index: 248
 type: SIMPLE_ASSIGN
 cup._crossArea = 3.141592653589793 * R ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  modelica_real tmp12;
  tmp12 = data->simulationInfo->realParameter[1];
  data->simulationInfo->realParameter[21] = (3.141592653589793) * ((tmp12 * tmp12));
  TRACE_POP
}

/*
 equation index: 247
 type: SIMPLE_ASSIGN
 cup._height = L
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->realParameter[26] = data->simulationInfo->realParameter[0];
  TRACE_POP
}

/*
 equation index: 246
 type: SIMPLE_ASSIGN
 cup._vesselArea = cup.crossArea
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->realParameter[37] = data->simulationInfo->realParameter[21];
  TRACE_POP
}

/*
 equation index: 245
 type: SIMPLE_ASSIGN
 cup._fluidLevel_max = cup.height
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->realParameter[22] = data->simulationInfo->realParameter[26];
  TRACE_POP
}

/*
 equation index: 244
 type: SIMPLE_ASSIGN
 cup._heatTransfer._T_ambient = system.T_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->realParameter[24] = data->simulationInfo->realParameter[79];
  TRACE_POP
}

/*
 equation index: 243
 type: SIMPLE_ASSIGN
 cup._heatTransfer._k = 0.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->realParameter[25] = 0.0;
  TRACE_POP
}

/*
 equation index: 242
 type: SIMPLE_ASSIGN
 cup._heatTransfer._use_k = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->booleanParameter[2] = 1;
  TRACE_POP
}

/*
 equation index: 241
 type: SIMPLE_ASSIGN
 cup._heatTransfer._n = 1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->integerParameter[5] = ((modelica_integer) 1);
  TRACE_POP
}

/*
 equation index: 240
 type: SIMPLE_ASSIGN
 cup._use_HeatTransfer = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->booleanParameter[6] = 1;
  TRACE_POP
}

/*
 equation index: 239
 type: SIMPLE_ASSIGN
 cup._use_Re = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->booleanParameter[7] = 0;
  TRACE_POP
}

/*
 equation index: 238
 type: SIMPLE_ASSIGN
 cup._m_flow_small = system.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[30] = data->simulationInfo->realParameter[85];
  TRACE_POP
}

/*
 equation index: 237
 type: SIMPLE_ASSIGN
 cup._m_flow_nominal = 100.0 * system.m_flow_small
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->realParameter[29] = (100.0) * (data->simulationInfo->realParameter[85]);
  TRACE_POP
}

/*
 equation index: 236
 type: SIMPLE_ASSIGN
 cup._portsData[1]._zeta_in = 1.04
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->realParameter[35] = 1.04;
  TRACE_POP
}

/*
 equation index: 235
 type: SIMPLE_ASSIGN
 cup._portsData[1]._zeta_out = 0.5
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->realParameter[36] = 0.5;
  TRACE_POP
}

/*
 equation index: 234
 type: SIMPLE_ASSIGN
 cup._portsData[1]._height = 0.07000000000000001
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[34] = 0.07000000000000001;
  TRACE_POP
}

/*
 equation index: 233
 type: SIMPLE_ASSIGN
 cup._portsData[1]._diameter = R
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->realParameter[33] = data->simulationInfo->realParameter[1];
  TRACE_POP
}

/*
 equation index: 232
 type: SIMPLE_ASSIGN
 cup._use_portsData = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->booleanParameter[9] = 1;
  TRACE_POP
}

/*
 equation index: 231
 type: SIMPLE_ASSIGN
 cup._nPorts = 1
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->integerParameter[7] = ((modelica_integer) 1);
  TRACE_POP
}

/*
 equation index: 230
 type: SIMPLE_ASSIGN
 cup._initialize_p = false
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->booleanParameter[3] = 0;
  TRACE_POP
}

/*
 equation index: 229
 type: SIMPLE_ASSIGN
 cup._medium._standardOrderComponents = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->booleanParameter[5] = 1;
  TRACE_POP
}

/*
 equation index: 228
 type: SIMPLE_ASSIGN
 cup._medium._preferredMediumStates = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->simulationInfo->booleanParameter[4] = 1;
  TRACE_POP
}

/*
 equation index: 227
 type: SIMPLE_ASSIGN
 cup._X_start[1] = 1.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->simulationInfo->realParameter[20] = 1.0;
  TRACE_POP
}

/*
 equation index: 226
 type: SIMPLE_ASSIGN
 cup._p_start = cup.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->simulationInfo->realParameter[32] = data->simulationInfo->realParameter[31];
  TRACE_POP
}

/*
 equation index: 225
 type: SIMPLE_ASSIGN
 cup._T_start = Tamb
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->simulationInfo->realParameter[19] = data->simulationInfo->realParameter[4];
  TRACE_POP
}

/*
 equation index: 224
 type: SIMPLE_ASSIGN
 cup._h_start = Modelica.Fluid.Vessels.OpenTank$cup.Medium.specificEnthalpy_pTX(cup.p_start, cup.T_start, {cup.X_start[1]}, 0)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  real_array tmp13;
  array_alloc_scalar_real_array(&tmp13, 1, (modelica_real)data->simulationInfo->realParameter[20]);
  data->simulationInfo->realParameter[23] = omc_Modelica_Fluid_Vessels_OpenTank$cup_Medium_specificEnthalpy__pTX(threadData, data->simulationInfo->realParameter[32], data->simulationInfo->realParameter[19], tmp13, ((modelica_integer) 0));
  TRACE_POP
}

/*
 equation index: 223
 type: SIMPLE_ASSIGN
 cup._use_T_start = true
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->booleanParameter[8] = 1;
  TRACE_POP
}

/*
 equation index: 222
 type: SIMPLE_ASSIGN
 cup._traceDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->integerParameter[9] = 1;
  TRACE_POP
}

/*
 equation index: 221
 type: SIMPLE_ASSIGN
 cup._substanceDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->integerParameter[8] = 1;
  TRACE_POP
}

/*
 equation index: 220
 type: SIMPLE_ASSIGN
 cup._massDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->integerParameter[6] = 1;
  TRACE_POP
}

/*
 equation index: 219
 type: SIMPLE_ASSIGN
 cup._energyDynamics = Modelica.Fluid.Types.Dynamics.DynamicFreeInitial
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->integerParameter[4] = 1;
  TRACE_POP
}

/*
 equation index: 218
 type: SIMPLE_ASSIGN
 drip_L = 0.01
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->realParameter[41] = 0.01;
  TRACE_POP
}

/*
 equation index: 217
 type: SIMPLE_ASSIGN
 drip_D = 0.005
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->realParameter[40] = 0.005;
  TRACE_POP
}

/*
 equation index: 216
 type: SIMPLE_ASSIGN
 h_l = 1000.0
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->realParameter[47] = 1000.0;
  TRACE_POP
}

/*
 equation index: 215
 type: SIMPLE_ASSIGN
 Sout = 6.283185307179586 * (R + cup_t) * L
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->realParameter[3] = (6.283185307179586) * ((data->simulationInfo->realParameter[1] + data->simulationInfo->realParameter[38]) * (data->simulationInfo->realParameter[0]));
  TRACE_POP
}

/*
 equation index: 214
 type: SIMPLE_ASSIGN
 cup_t_bottom = 0.004
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->simulationInfo->realParameter[39] = 0.004;
  TRACE_POP
}

/*
 equation index: 213
 type: SIMPLE_ASSIGN
 combiTimeTable1._tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor(combiTimeTable1.tableName, if combiTimeTable1.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(combiTimeTable1.fileName) then combiTimeTable1.fileName else "NoName", {{}}, combiTimeTable1.startTime, {combiTimeTable1.columns[1]}, Modelica.Blocks.Types.Smoothness.LinearSegments, combiTimeTable1.extrapolation)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  static const MMC_DEFSTRINGLIT(tmp16,6,"NoName");
  static const MMC_DEFSTRINGLIT(tmp17,6,"NoName");
  real_array tmp18;
  integer_array tmp19;
  alloc_real_array(&tmp18, 2, 0, 1);
  array_alloc_scalar_integer_array(&tmp19, 1, (modelica_integer)(modelica_integer)data->simulationInfo->integerParameter[0]);
  data->simulationInfo->extObjs[0] = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, data->simulationInfo->stringParameter[1], (((!stringEqual(data->simulationInfo->stringParameter[0], MMC_REFSTRINGLIT(tmp16))) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, data->simulationInfo->stringParameter[0])))?data->simulationInfo->stringParameter[0]:MMC_REFSTRINGLIT(tmp17)), tmp18, data->simulationInfo->realParameter[8], tmp19, 1, (modelica_integer)data->simulationInfo->integerParameter[1]);
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_1(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_2(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_3(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_4(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_5(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_6(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_7(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_8(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_9(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_10(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_11(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_12(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_13(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_14(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_15(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_16(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_17(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_18(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_19(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_20(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_21(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_22(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_23(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_24(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_675(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_678(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_759(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_679(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_29(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_30(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_726(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_729(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_754(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_730(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_731(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_732(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_736(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_722(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_723(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_653(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_654(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_748(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_43(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_728(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_749(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_750(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_47(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_48(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_751(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_50(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_677(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_752(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_753(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_54(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_55(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_56(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_490(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_491(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_492(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_493(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_494(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_495(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_496(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_497(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_498(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_499(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_500(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_501(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_502(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_503(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_504(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_505(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_506(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_507(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_508(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_509(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_510(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_511(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_512(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_513(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_514(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_515(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_516(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_517(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_518(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_519(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_520(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_521(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_522(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_523(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_524(DATA*,threadData_t*);
/*
 equation index: 525
 indexNonlinear: 5
 type: NONLINEAR
 
 vars: {naturalConvection1._T}
 eqns: {490, 491, 492, 493, 494, 495, 496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 520, 521, 522, 523, 524}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 525 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->localData[0]->realVars[292] /* naturalConvection1.T variable */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,525};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 525 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[292] /* naturalConvection1.T variable */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_724(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_527(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_528(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_529(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_530(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_531(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_532(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_533(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_534(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_535(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_536(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_537(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_538(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_539(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_540(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_541(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_542(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_543(DATA*,threadData_t*);
/*
 equation index: 544
 indexNonlinear: 6
 type: NONLINEAR
 
 vars: {enclosedConvection1._T}
 eqns: {527, 528, 529, 530, 531, 532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 544 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->localData[0]->realVars[269] /* enclosedConvection1.T variable */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,544};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 544 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[269] /* enclosedConvection1.T variable */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_716(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_725(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_717(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_718(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_116(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_117(DATA *data, threadData_t *threadData);


/*
 equation index: 551
 type: ALGORITHM
 
   timeTable1.nextEvent := $START.timeTable1.nextEvent;
   timeTable1.last := $START.timeTable1.last;
   timeTable1.nextEventScaled := $START.timeTable1.nextEventScaled;
   timeTable1.b := $START.timeTable1.b;
   timeTable1.a := $START.timeTable1.a;
   $whenCondition1 := $START.$whenCondition1;
   timeTable1.timeScaled := $START.timeTable1.timeScaled;
   timeTable1.timeScaled := time;
   $whenCondition1 := time >= $PRE.timeTable1.nextEvent;
   (timeTable1.a, timeTable1.b, timeTable1.nextEventScaled, timeTable1.last) := Modelica.Blocks.Sources.TimeTable$timeTable1.getInterpolationCoefficients(timeTable1.table, timeTable1.offset, timeTable1.startTime, timeTable1.timeScaled, timeTable1.last, 1e-013);
   timeTable1.nextEvent := timeTable1.nextEventScaled;
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp0;
  real_array tmp1;
  data->localData[0]->realVars[391] /* timeTable1.nextEvent DISCRETE */ = data->modelData->realVarsData[391].attribute /* timeTable1.nextEvent DISCRETE */.start;

  data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */ = (modelica_integer)data->modelData->integerVarsData[26].attribute /* timeTable1.last DISCRETE */.start;

  data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */ = data->modelData->realVarsData[392].attribute /* timeTable1.nextEventScaled DISCRETE */.start;

  data->localData[0]->realVars[390] /* timeTable1.b DISCRETE */ = data->modelData->realVarsData[390].attribute /* timeTable1.b DISCRETE */.start;

  data->localData[0]->realVars[389] /* timeTable1.a DISCRETE */ = data->modelData->realVarsData[389].attribute /* timeTable1.a DISCRETE */.start;

  data->localData[0]->booleanVars[4] /* $whenCondition1 DISCRETE */ = data->modelData->booleanVarsData[4].attribute /* $whenCondition1 DISCRETE */.start;

  data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */ = data->modelData->realVarsData[348].attribute /* timeTable1.timeScaled variable */.start;

  data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */ = data->localData[0]->timeValue;

  tmp0 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */);
  data->localData[0]->booleanVars[4] /* $whenCondition1 DISCRETE */ = tmp0;

  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[93])[calc_base_index_dims_subs(2, 5, 2, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, 5, 2);
  data->localData[0]->realVars[389] /* timeTable1.a DISCRETE */ = omc_Modelica_Blocks_Sources_TimeTable$timeTable1_getInterpolationCoefficients(threadData, tmp1, data->simulationInfo->realParameter[91], data->simulationInfo->realParameter[92], data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */, (modelica_integer)data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */, 1e-013 ,&data->localData[0]->realVars[390] /* timeTable1.b DISCRETE */ ,&data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */ ,&data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */);

  data->localData[0]->realVars[391] /* timeTable1.nextEvent DISCRETE */ = data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_738(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_739(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_740(DATA *data, threadData_t *threadData);


/*
 equation index: 555
 type: ALGORITHM
 
   combiTimeTable1.t_max := $START.combiTimeTable1.t_max;
   combiTimeTable1.t_min := $START.combiTimeTable1.t_min;
   combiTimeTable1.t_maxScaled := $START.combiTimeTable1.t_maxScaled;
   combiTimeTable1.t_minScaled := $START.combiTimeTable1.t_minScaled;
   combiTimeTable1.tableOnFileRead := $START.combiTimeTable1.tableOnFileRead;
   combiTimeTable1.tableOnFileRead := Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.readTableData(combiTimeTable1.tableID, false, combiTimeTable1.verboseRead);
   combiTimeTable1.t_minScaled := Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getTableTimeTmin(combiTimeTable1.tableID, combiTimeTable1.tableOnFileRead);
   combiTimeTable1.t_maxScaled := Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getTableTimeTmax(combiTimeTable1.tableID, combiTimeTable1.tableOnFileRead);
   combiTimeTable1.t_min := combiTimeTable1.t_minScaled;
   combiTimeTable1.t_max := combiTimeTable1.t_maxScaled;
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->realParameter[9] = data->simulationInfo->realParameter[9];

  data->simulationInfo->realParameter[11] = data->simulationInfo->realParameter[11];

  data->simulationInfo->realParameter[10] = data->simulationInfo->realParameter[10];

  data->simulationInfo->realParameter[12] = data->simulationInfo->realParameter[12];

  data->simulationInfo->realParameter[13] = data->simulationInfo->realParameter[13];

  data->simulationInfo->realParameter[13] = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_readTableData(threadData, data->simulationInfo->extObjs[0], 0, data->simulationInfo->booleanParameter[1]);

  data->simulationInfo->realParameter[12] = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableTimeTmin(threadData, data->simulationInfo->extObjs[0], data->simulationInfo->realParameter[13]);

  data->simulationInfo->realParameter[10] = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableTimeTmax(threadData, data->simulationInfo->extObjs[0], data->simulationInfo->realParameter[13]);

  data->simulationInfo->realParameter[11] = data->simulationInfo->realParameter[12];

  data->simulationInfo->realParameter[9] = data->simulationInfo->realParameter[10];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_123(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_124(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_125(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_746(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_127(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_128(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_129(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_130(DATA *data, threadData_t *threadData);


/*
 equation index: 564
 type: ALGORITHM
 
   (valveIncompressible1.filter.r, _, _, _) := Modelica.Blocks.Continuous.Internal.Filter.roots.lowPass(valveIncompressible1.filter.cr, {}, {}, valveIncompressible1.filter.f_cut);
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  real_array tmp2;
  base_array_t tmp3;
  base_array_t tmp4;
  real_array tmp5;
  real_array_create(&tmp2, ((modelica_real*)&((&data->simulationInfo->realParameter[111])[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  simple_alloc_1d_base_array(&tmp3, 0, NULL);
  simple_alloc_1d_base_array(&tmp4, 0, NULL);
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[116])[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass(threadData, tmp2, tmp3, tmp4, data->simulationInfo->realParameter[113] ,NULL ,NULL ,NULL), &tmp5);
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_132(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_133(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_734(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_735(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_136(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_137(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_571(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_572(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_573(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_574(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_575(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_576(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_581(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_580(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_579(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_578(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_577(DATA*,threadData_t*);
/*
 equation index: 591
 indexNonlinear: 7
 type: NONLINEAR
 
 vars: {yakan._s[1], cup._s[1], cup._ports[1]._p, pipe._flowModel._states[1]._p, pipe._flowModel._dps_fg[1]}
 eqns: {571, 572, 573, 574, 575, 576, 581, 580, 579, 578, 577}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 591 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->localData[0]->realVars[385] /* yakan.s[1] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[1] = data->localData[0]->realVars[260] /* cup.s[1] variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[2] = data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[3] = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */;
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[4] = data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,591};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 591 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[385] /* yakan.s[1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  data->localData[0]->realVars[260] /* cup.s[1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[1];
  data->localData[0]->realVars[256] /* cup.ports[1].p variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[2];
  data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[3];
  data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */ = data->simulationInfo->nonlinearSystemData[7].nlsx[4];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_809(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_814(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_794(DATA *data, threadData_t *threadData);


/*
 equation index: 595
 type: SIMPLE_ASSIGN
 pipe._flowModel._rhos[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[1].p, yakan.medium.h, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_805(DATA *data, threadData_t *threadData);


/*
 equation index: 597
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[1]._T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[1].p, yakan.medium.h, 0, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
 equation index: 598
 type: SIMPLE_ASSIGN
 pipe._flowModel._mus[1] = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(pipe.flowModel.rhos[1], pipe.flowModel.states[1].T, pipe.flowModel.states[1].p, 0)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */, data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, ((modelica_integer) 0));
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_793(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_795(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_796(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_602(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_603(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_604(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_605(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_607(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_606(DATA*,threadData_t*);
/*
 equation index: 608
 indexNonlinear: 8
 type: NONLINEAR
 
 vars: {der(yakan._medium._h), yakan._Wb_flow}
 eqns: {602, 603, 604, 605, 607, 606}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 608 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */;
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[1] = data->localData[0]->realVars[365] /* yakan.Wb_flow variable */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,608};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 608 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  data->localData[0]->realVars[365] /* yakan.Wb_flow variable */ = data->simulationInfo->nonlinearSystemData[8].nlsx[1];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_804(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_813(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_792(DATA *data, threadData_t *threadData);


/*
 equation index: 612
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_b._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.ports[1].p, cup.medium.h, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[256] /* cup.ports[1].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_176(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_177(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_817(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_818(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_819(DATA *data, threadData_t *threadData);


void CoffeeTemperature_Test_CoffeeTest11_eqFunction_618(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_619(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_620(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_621(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_623(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_622(DATA*,threadData_t*);
/*
 equation index: 624
 indexNonlinear: 9
 type: NONLINEAR
 
 vars: {der(cup._heatTransfer._states[1]._d), der(cup._medium._u)}
 eqns: {618, 619, 620, 621, 623, 622}
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 624 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */;
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[1] = data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,624};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 624 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[9].nlsx[1];
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_827(DATA *data, threadData_t *threadData);


/*
 equation index: 626
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_a._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, pipe.port_b.h_outflow, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_189(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_190(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_191(DATA *data, threadData_t *threadData);


/*
 equation index: 630
 type: SIMPLE_ASSIGN
 pipe._flowModel._rhos[2] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, cup.medium.h, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_807(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_806(DATA *data, threadData_t *threadData);


/*
 equation index: 633
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[2]._T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, cup.medium.h, 0, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}

/*
 equation index: 634
 type: SIMPLE_ASSIGN
 pipe._flowModel._mus[2] = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(pipe.flowModel.rhos[2], pipe.flowModel.states[2].T, pipe.flowModel.states[2].p, 0)
 */
void CoffeeTemperature_Test_CoffeeTest11_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */, data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, ((modelica_integer) 0));
  TRACE_POP
}
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_808(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_194(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_195(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_196(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_197(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_198(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_199(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_200(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_201(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_202(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_203(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_204(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_205(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_206(DATA *data, threadData_t *threadData);

extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_207(DATA *data, threadData_t *threadData);


int CoffeeTemperature_Test_CoffeeTest11_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  CoffeeTemperature_Test_CoffeeTest11_eqFunction_433(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_432(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_431(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_430(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_429(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_428(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_427(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_426(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_425(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_424(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_423(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_422(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_421(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_420(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_419(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_418(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_417(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_416(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_415(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_414(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_413(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_412(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_411(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_410(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_409(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_408(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_407(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_406(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_405(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_404(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_403(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_402(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_401(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_400(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_399(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_398(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_397(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_396(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_395(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_394(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_393(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_392(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_391(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_390(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_389(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_388(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_387(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_386(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_385(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_384(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_383(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_382(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_381(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_380(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_379(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_378(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_377(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_376(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_375(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_374(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_373(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_372(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_371(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_370(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_369(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_368(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_367(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_366(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_365(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_364(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_363(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_362(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_361(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_360(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_359(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_358(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_357(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_356(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_355(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_354(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_353(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_352(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_351(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_350(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_349(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_348(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_347(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_346(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_345(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_344(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_343(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_342(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_341(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_340(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_339(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_338(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_337(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_336(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_335(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_334(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_333(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_332(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_331(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_330(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_329(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_328(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_327(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_326(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_325(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_324(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_323(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_322(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_321(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_320(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_319(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_318(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_317(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_316(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_315(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_314(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_313(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_312(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_311(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_310(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_309(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_308(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_307(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_306(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_305(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_304(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_303(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_302(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_301(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_300(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_299(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_298(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_297(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_296(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_295(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_294(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_293(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_292(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_291(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_290(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_289(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_288(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_287(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_286(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_285(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_284(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_283(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_282(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_281(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_280(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_279(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_278(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_277(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_276(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_275(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_274(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_273(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_272(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_271(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_270(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_269(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_268(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_267(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_266(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_265(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_264(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_263(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_262(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_261(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_260(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_259(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_258(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_257(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_256(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_255(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_254(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_253(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_252(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_251(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_250(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_249(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_248(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_247(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_246(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_245(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_244(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_243(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_242(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_241(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_240(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_239(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_238(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_237(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_236(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_235(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_234(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_233(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_232(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_231(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_230(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_229(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_228(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_227(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_226(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_225(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_224(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_223(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_222(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_221(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_220(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_219(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_218(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_217(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_216(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_215(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_214(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_213(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_1(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_2(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_3(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_4(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_5(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_6(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_7(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_8(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_9(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_10(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_11(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_12(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_13(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_14(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_15(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_16(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_17(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_18(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_19(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_20(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_21(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_22(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_23(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_24(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_675(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_678(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_759(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_679(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_29(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_30(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_726(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_729(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_754(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_730(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_731(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_732(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_736(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_722(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_723(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_653(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_654(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_748(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_43(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_728(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_749(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_750(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_47(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_48(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_751(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_50(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_677(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_752(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_753(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_54(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_55(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_56(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_525(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_724(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_544(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_716(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_725(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_717(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_718(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_116(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_117(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_551(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_738(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_739(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_740(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_555(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_123(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_124(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_125(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_746(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_127(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_128(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_129(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_130(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_564(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_132(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_133(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_734(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_735(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_136(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_137(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_591(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_809(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_814(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_794(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_595(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_805(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_597(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_598(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_793(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_795(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_796(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_608(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_804(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_813(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_792(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_612(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_176(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_177(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_817(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_818(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_819(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_624(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_827(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_626(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_189(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_190(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_191(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_630(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_807(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_806(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_633(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_634(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_808(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_194(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_195(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_196(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_197(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_198(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_199(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_200(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_201(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_202(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_203(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_204(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_205(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_206(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_207(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int CoffeeTemperature_Test_CoffeeTest11_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

