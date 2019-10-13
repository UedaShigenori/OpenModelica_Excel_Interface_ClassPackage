/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "CoffeeTemperature.Test.CoffeeTest10_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation CoffeeTemperature_Test_CoffeeTest10_performSimulation
#define prefixedName_updateContinuousSystem CoffeeTemperature_Test_CoffeeTest10_updateContinuousSystem
#include <simulation/solver/perform_simulation.c>

#define prefixedName_performQSSSimulation CoffeeTemperature_Test_CoffeeTest10_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int CoffeeTemperature_Test_CoffeeTest10_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CoffeeTemperature_Test_CoffeeTest10_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CoffeeTemperature_Test_CoffeeTest10_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CoffeeTemperature_Test_CoffeeTest10_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int CoffeeTemperature_Test_CoffeeTest10_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
 equation index: 650
 type: SIMPLE_ASSIGN
 cup._heatTransfer._states[1]._phase = if cup.medium.h < $cse1.h or cup.medium.h > $cse2.h or cup.p_ambient > 22064000.0 then 1 else 2
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, data->localData[0]->realVars[30] /* $cse1.h variable */, 7, Less);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, data->localData[0]->realVars[130] /* $cse2.h variable */, 8, Greater);
  tmp2 = Greater(data->simulationInfo->realParameter[31],22064000.0);
  data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */ = (((tmp0 || tmp1) || tmp2)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}
/*
 equation index: 651
 type: ALGORITHM
 
   $cse3 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.p_ambient, cup.medium.h, cup.heatTransfer.states[1].phase, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  Modelica_Media_Common_IF97BaseTwoPhase tmp3;
  tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0));
  data->localData[0]->integerVars[16] /* $cse3.phase DISCRETE */ = tmp3._phase;
  data->localData[0]->integerVars[17] /* $cse3.region DISCRETE */ = tmp3._region;
  data->localData[0]->realVars[170] /* $cse3.p variable */ = tmp3._p;
  data->localData[0]->realVars[165] /* $cse3.T variable */ = tmp3._T;
  data->localData[0]->realVars[169] /* $cse3.h variable */ = tmp3._h;
  data->localData[0]->realVars[164] /* $cse3.R variable */ = tmp3._R;
  data->localData[0]->realVars[166] /* $cse3.cp variable */ = tmp3._cp;
  data->localData[0]->realVars[167] /* $cse3.cv variable */ = tmp3._cv;
  data->localData[0]->realVars[173] /* $cse3.rho variable */ = tmp3._rho;
  data->localData[0]->realVars[174] /* $cse3.s variable */ = tmp3._s;
  data->localData[0]->realVars[172] /* $cse3.pt variable */ = tmp3._pt;
  data->localData[0]->realVars[171] /* $cse3.pd variable */ = tmp3._pd;
  data->localData[0]->realVars[176] /* $cse3.vt variable */ = tmp3._vt;
  data->localData[0]->realVars[175] /* $cse3.vp variable */ = tmp3._vp;
  data->localData[0]->realVars[177] /* $cse3.x variable */ = tmp3._x;
  data->localData[0]->realVars[168] /* $cse3.dpT variable */ = tmp3._dpT;
  TRACE_POP
}
/*
 equation index: 652
 type: SIMPLE_ASSIGN
 cup._heatTransfer._Ts[1] = $cse3.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */ = data->localData[0]->realVars[165] /* $cse3.T variable */;
  TRACE_POP
}
/*
 equation index: 653
 type: SIMPLE_ASSIGN
 convection1._dT = cup.heatTransfer.Ts[1] - fixedTemperature2.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->localData[0]->realVars[235] /* convection1.dT variable */ = data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */ - data->simulationInfo->realParameter[45];
  TRACE_POP
}
/*
 equation index: 654
 type: SIMPLE_ASSIGN
 convection1._Q_flow = const.k * convection1.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->localData[0]->realVars[234] /* convection1.Q_flow variable */ = (data->simulationInfo->realParameter[15]) * (data->localData[0]->realVars[235] /* convection1.dT variable */);
  TRACE_POP
}
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_655(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_656(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_657(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_658(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_659(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_660(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_661(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_662(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_663(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_664(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_665(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_666(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_667(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_668(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_669(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_670(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_671(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_672(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_673(DATA*,threadData_t*);
/*
 equation index: 674
 indexNonlinear: 10
 type: NONLINEAR
 
 vars: {enclosedConvection1._T}
 eqns: {655, 656, 657, 658, 659, 660, 661, 662, 663, 664, 665, 666, 667, 668, 669, 670, 671, 672, 673}
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 674 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = data->localData[0]->realVars[269] /* enclosedConvection1.T variable */;
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,674};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 674 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[269] /* enclosedConvection1.T variable */ = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  TRACE_POP
}
/*
 equation index: 675
 type: SIMPLE_ASSIGN
 cup._medium._T_degC = -273.15 + cup.heatTransfer.Ts[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->localData[0]->realVars[248] /* cup.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */;
  TRACE_POP
}
/*
 equation index: 676
 type: SIMPLE_ASSIGN
 cup._heatTransfer._states[1]._d = $cse3.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */ = data->localData[0]->realVars[173] /* $cse3.rho variable */;
  TRACE_POP
}
/*
 equation index: 677
 type: SIMPLE_ASSIGN
 cup._medium._u = cup.medium.h - cup.p_ambient / cup.heatTransfer.states[1].d
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */ = data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */ - (DIVISION_SIM(data->simulationInfo->realParameter[31],data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */,"cup.heatTransfer.states[1].d",equationIndexes));
  TRACE_POP
}
/*
 equation index: 678
 type: SIMPLE_ASSIGN
 cup._heatTransfer._surfaceAreas[1] = cup.crossArea + 3.544907701811032 * sqrt(cup.crossArea) * cup.level
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[21];
  if(!(tmp0 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(cup.crossArea) was %g should be >= 0", tmp0);
  }
  data->localData[0]->realVars[244] /* cup.heatTransfer.surfaceAreas[1] variable */ = data->simulationInfo->realParameter[21] + (3.544907701811032) * ((sqrt(tmp0)) * (data->localData[0]->realVars[0] /* cup.level STATE(1) */));
  TRACE_POP
}
/*
 equation index: 679
 type: SIMPLE_ASSIGN
 cup._regularFlow[1] = cup.level >= cup.portsData[1].height
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[0] /* cup.level STATE(1) */, data->simulationInfo->realParameter[34], 6, GreaterEq);
  data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */ = tmp1;
  TRACE_POP
}
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_680(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_681(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_682(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_683(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_684(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_685(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_686(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_687(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_688(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_689(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_690(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_691(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_692(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_693(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_694(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_695(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_696(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_697(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_698(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_699(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_700(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_701(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_702(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_703(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_704(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_705(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_706(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_707(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_708(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_709(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_710(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_711(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_712(DATA*,threadData_t*);
/*
 equation index: 713
 indexNonlinear: 11
 type: NONLINEAR
 
 vars: {naturalConvection21._T}
 eqns: {680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712}
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 713 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = data->localData[0]->realVars[312] /* naturalConvection21.T variable */;
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,713};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 713 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[312] /* naturalConvection21.T variable */ = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  TRACE_POP
}
/*
 equation index: 714
 type: SIMPLE_ASSIGN
 heatCapacitor1._port._Q_flow = thermalConductor2.Q_flow - thermalConductor1.Q_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->localData[0]->realVars[281] /* heatCapacitor1.port.Q_flow variable */ = data->localData[0]->realVars[346] /* thermalConductor2.Q_flow variable */ - data->localData[0]->realVars[344] /* thermalConductor1.Q_flow variable */;
  TRACE_POP
}
/*
 equation index: 715
 type: SIMPLE_ASSIGN
 heatCapacitor1._der_T = heatCapacitor1.port.Q_flow / heatCapacitor1.C
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->localData[0]->realVars[280] /* heatCapacitor1.der_T variable */ = DIVISION_SIM(data->localData[0]->realVars[281] /* heatCapacitor1.port.Q_flow variable */,data->simulationInfo->realParameter[48],"heatCapacitor1.C",equationIndexes);
  TRACE_POP
}
/*
 equation index: 716
 type: SIMPLE_ASSIGN
 der(heatCapacitor1._T) = heatCapacitor1.der_T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->localData[0]->realVars[9] /* der(heatCapacitor1.T) STATE_DER */ = data->localData[0]->realVars[280] /* heatCapacitor1.der_T variable */;
  TRACE_POP
}
/*
 equation index: 717
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._states[1]._phase = if yakan.medium.h < $cse6.h or yakan.medium.h > $cse7.h or yakan.p_ambient > 22064000.0 then 1 else 2
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, data->localData[0]->realVars[199] /* $cse6.h variable */, 3, Less);
  RELATIONHYSTERESIS(tmp1, data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, data->localData[0]->realVars[211] /* $cse7.h variable */, 4, Greater);
  tmp2 = Greater(data->simulationInfo->realParameter[143],22064000.0);
  data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */ = (((tmp0 || tmp1) || tmp2)?((modelica_integer) 1):((modelica_integer) 2));
  TRACE_POP
}
/*
 equation index: 718
 type: ALGORITHM
 
   $cse8 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.p_ambient, yakan.medium.h, yakan.heatTransfer.states[1].phase, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  Modelica_Media_Common_IF97BaseTwoPhase tmp3;
  tmp3 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0));
  data->localData[0]->integerVars[20] /* $cse8.phase DISCRETE */ = tmp3._phase;
  data->localData[0]->integerVars[21] /* $cse8.region DISCRETE */ = tmp3._region;
  data->localData[0]->realVars[223] /* $cse8.p variable */ = tmp3._p;
  data->localData[0]->realVars[218] /* $cse8.T variable */ = tmp3._T;
  data->localData[0]->realVars[222] /* $cse8.h variable */ = tmp3._h;
  data->localData[0]->realVars[217] /* $cse8.R variable */ = tmp3._R;
  data->localData[0]->realVars[219] /* $cse8.cp variable */ = tmp3._cp;
  data->localData[0]->realVars[220] /* $cse8.cv variable */ = tmp3._cv;
  data->localData[0]->realVars[226] /* $cse8.rho variable */ = tmp3._rho;
  data->localData[0]->realVars[227] /* $cse8.s variable */ = tmp3._s;
  data->localData[0]->realVars[225] /* $cse8.pt variable */ = tmp3._pt;
  data->localData[0]->realVars[224] /* $cse8.pd variable */ = tmp3._pd;
  data->localData[0]->realVars[229] /* $cse8.vt variable */ = tmp3._vt;
  data->localData[0]->realVars[228] /* $cse8.vp variable */ = tmp3._vp;
  data->localData[0]->realVars[230] /* $cse8.x variable */ = tmp3._x;
  data->localData[0]->realVars[221] /* $cse8.dpT variable */ = tmp3._dpT;
  TRACE_POP
}
/*
 equation index: 719
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._Ts[1] = $cse8.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */ = data->localData[0]->realVars[218] /* $cse8.T variable */;
  TRACE_POP
}
/*
 equation index: 720
 type: SIMPLE_ASSIGN
 convection5._dT = fixedTemperature2.T - yakan.heatTransfer.Ts[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  data->localData[0]->realVars[236] /* convection5.dT variable */ = data->simulationInfo->realParameter[45] - data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */;
  TRACE_POP
}
/*
 equation index: 721
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._Q_flows[1] = const5.k * convection5.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->localData[0]->realVars[366] /* yakan.heatTransfer.Q_flows[1] variable */ = (data->simulationInfo->realParameter[16]) * (data->localData[0]->realVars[236] /* convection5.dT variable */);
  TRACE_POP
}
/*
 equation index: 722
 type: SIMPLE_ASSIGN
 fixedTemperature2._port._Q_flow = naturalConvection1.Q_flow - (yakan.heatTransfer.Q_flows[1] - naturalConvection21.Q_flow - convection1.Q_flow)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->localData[0]->realVars[279] /* fixedTemperature2.port.Q_flow variable */ = data->localData[0]->realVars[290] /* naturalConvection1.Q_flow variable */ - (data->localData[0]->realVars[366] /* yakan.heatTransfer.Q_flows[1] variable */ - data->localData[0]->realVars[310] /* naturalConvection21.Q_flow variable */ - data->localData[0]->realVars[234] /* convection1.Q_flow variable */);
  TRACE_POP
}
/*
 equation index: 723
 type: SIMPLE_ASSIGN
 cup._heatTransfer._Q_flows[1] = (-fixedTemperature2.port.Q_flow) - heatCapacitor1.port.Q_flow - yakan.heatTransfer.Q_flows[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->localData[0]->realVars[241] /* cup.heatTransfer.Q_flows[1] variable */ = (-data->localData[0]->realVars[279] /* fixedTemperature2.port.Q_flow variable */) - data->localData[0]->realVars[281] /* heatCapacitor1.port.Q_flow variable */ - data->localData[0]->realVars[366] /* yakan.heatTransfer.Q_flows[1] variable */;
  TRACE_POP
}
/*
 equation index: 724
 type: SIMPLE_ASSIGN
 yakan._medium._T_degC = -273.15 + yakan.heatTransfer.Ts[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->localData[0]->realVars[374] /* yakan.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */;
  TRACE_POP
}
/*
 equation index: 725
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._states[1]._d = $cse8.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */ = data->localData[0]->realVars[226] /* $cse8.rho variable */;
  TRACE_POP
}
/*
 equation index: 726
 type: SIMPLE_ASSIGN
 yakan._medium._u = yakan.medium.h - yakan.p_ambient / yakan.heatTransfer.states[1].d
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */ = data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */ - (DIVISION_SIM(data->simulationInfo->realParameter[143],data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */,"yakan.heatTransfer.states[1].d",equationIndexes));
  TRACE_POP
}
/*
 equation index: 727
 type: SIMPLE_ASSIGN
 yakan._heatTransfer._surfaceAreas[1] = yakan.crossArea + 3.544907701811032 * sqrt(yakan.crossArea) * yakan.level
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  modelica_real tmp4;
  tmp4 = data->simulationInfo->realParameter[133];
  if(!(tmp4 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(yakan.crossArea) was %g should be >= 0", tmp4);
  }
  data->localData[0]->realVars[369] /* yakan.heatTransfer.surfaceAreas[1] variable */ = data->simulationInfo->realParameter[133] + (3.544907701811032) * ((sqrt(tmp4)) * (data->localData[0]->realVars[5] /* yakan.level STATE(1) */));
  TRACE_POP
}
/*
 equation index: 728
 type: SIMPLE_ASSIGN
 yakan._regularFlow[1] = yakan.level >= yakan.portsData[1].height
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  modelica_boolean tmp5;
  RELATIONHYSTERESIS(tmp5, data->localData[0]->realVars[5] /* yakan.level STATE(1) */, data->simulationInfo->realParameter[146], 2, GreaterEq);
  data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */ = tmp5;
  TRACE_POP
}
/*
 equation index: 729
 type: SIMPLE_ASSIGN
 pipe._port_b._h_outflow = yakan.medium.h - system.g * pipe.height_ab
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */ = data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */ - ((data->simulationInfo->realParameter[83]) * (data->simulationInfo->realParameter[70]));
  TRACE_POP
}
/*
 equation index: 730
 type: SIMPLE_ASSIGN
 pipe._port_a._h_outflow = cup.medium.h + system.g * pipe.height_ab
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */ = data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */ + (data->simulationInfo->realParameter[83]) * (data->simulationInfo->realParameter[70]);
  TRACE_POP
}
/*
 equation index: 731
 type: SIMPLE_ASSIGN
 der(valveIncompressible1._filter._x[2]) = valveIncompressible1.filter.r[2] * (valveIncompressible1.filter.x[2] - valveIncompressible1.filter.x[1])
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->localData[0]->realVars[11] /* der(valveIncompressible1.filter.x[2]) STATE_DER */ = (data->simulationInfo->realParameter[117]) * (data->localData[0]->realVars[4] /* valveIncompressible1.filter.x[2] STATE(1) */ - data->localData[0]->realVars[3] /* valveIncompressible1.filter.x[1] STATE(1) */);
  TRACE_POP
}
/*
 equation index: 732
 type: SIMPLE_ASSIGN
 valveIncompressible1._opening_filtered = valveIncompressible1.filter.gain * valveIncompressible1.filter.u_nominal * valveIncompressible1.filter.x[2]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->localData[0]->realVars[354] /* valveIncompressible1.opening_filtered variable */ = (data->simulationInfo->realParameter[115]) * ((data->simulationInfo->realParameter[118]) * (data->localData[0]->realVars[4] /* valveIncompressible1.filter.x[2] STATE(1) */));
  TRACE_POP
}
/*
 equation index: 733
 type: SIMPLE_ASSIGN
 valveIncompressible1._relativeFlowCoefficient = Modelica.Fluid.Valves.ValveIncompressible$valveIncompressible1.valveCharacteristic(valveIncompressible1.opening_filtered)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->localData[0]->realVars[357] /* valveIncompressible1.relativeFlowCoefficient variable */ = omc_Modelica_Fluid_Valves_ValveIncompressible$valveIncompressible1_valveCharacteristic(threadData, data->localData[0]->realVars[354] /* valveIncompressible1.opening_filtered variable */);
  TRACE_POP
}
/*
 equation index: 734
 type: SIMPLE_ASSIGN
 combiTimeTable1._timeScaled = time
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->localData[0]->realVars[232] /* combiTimeTable1.timeScaled variable */ = data->localData[0]->timeValue;
  TRACE_POP
}
/*
 equation index: 735
 type: ALGORITHM
 
   timeTable1.nextEvent := pre(timeTable1.nextEvent);
   timeTable1.last := pre(timeTable1.last);
   timeTable1.nextEventScaled := pre(timeTable1.nextEventScaled);
   timeTable1.b := pre(timeTable1.b);
   timeTable1.a := pre(timeTable1.a);
   $whenCondition1 := pre($whenCondition1);
   timeTable1.timeScaled := $START.timeTable1.timeScaled;
   timeTable1.timeScaled := time;
   $whenCondition1 := time >= pre(timeTable1.nextEvent);
   when {$whenCondition1, false} then
     (timeTable1.a, timeTable1.b, timeTable1.nextEventScaled, timeTable1.last) := Modelica.Blocks.Sources.TimeTable$timeTable1.getInterpolationCoefficients(timeTable1.table, timeTable1.offset, timeTable1.startTime, timeTable1.timeScaled, timeTable1.last, 1e-013);
     timeTable1.nextEvent := timeTable1.nextEventScaled;
   end when;
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  modelica_boolean tmp6;
  real_array tmp7;
  data->localData[0]->realVars[391] /* timeTable1.nextEvent DISCRETE */ = data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */;

  data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */ = data->simulationInfo->integerVarsPre[26] /* timeTable1.last DISCRETE */;

  data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */ = data->simulationInfo->realVarsPre[392] /* timeTable1.nextEventScaled DISCRETE */;

  data->localData[0]->realVars[390] /* timeTable1.b DISCRETE */ = data->simulationInfo->realVarsPre[390] /* timeTable1.b DISCRETE */;

  data->localData[0]->realVars[389] /* timeTable1.a DISCRETE */ = data->simulationInfo->realVarsPre[389] /* timeTable1.a DISCRETE */;

  data->localData[0]->booleanVars[4] /* $whenCondition1 DISCRETE */ = data->simulationInfo->booleanVarsPre[4] /* $whenCondition1 DISCRETE */;

  data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */ = data->modelData->realVarsData[348].attribute /* timeTable1.timeScaled variable */.start;

  data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */ = data->localData[0]->timeValue;

  RELATIONHYSTERESIS(tmp6, data->localData[0]->timeValue, data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */, 1, GreaterEq);
  data->localData[0]->booleanVars[4] /* $whenCondition1 DISCRETE */ = tmp6;

  if(data->simulationInfo->discreteCall == 1)
  {
    if((data->localData[0]->booleanVars[4] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[4] /* $whenCondition1 DISCRETE */ /* edge */))
    {
      real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[93])[calc_base_index_dims_subs(2, 5, 2, ((modelica_integer) 1), ((modelica_integer) 1))])), 2, 5, 2);
      data->localData[0]->realVars[389] /* timeTable1.a DISCRETE */ = omc_Modelica_Blocks_Sources_TimeTable$timeTable1_getInterpolationCoefficients(threadData, tmp7, data->simulationInfo->realParameter[91], data->simulationInfo->realParameter[92], data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */, (modelica_integer)data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */, 1e-013 ,&data->localData[0]->realVars[390] /* timeTable1.b DISCRETE */ ,&data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */ ,&data->localData[0]->integerVars[26] /* timeTable1.last DISCRETE */);

      data->localData[0]->realVars[391] /* timeTable1.nextEvent DISCRETE */ = data->localData[0]->realVars[392] /* timeTable1.nextEventScaled DISCRETE */;
    }
  }
  TRACE_POP
}
/*
 equation index: 736
 type: SIMPLE_ASSIGN
 timeTable1._y = timeTable1.a * timeTable1.timeScaled + timeTable1.b
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->localData[0]->realVars[349] /* timeTable1.y variable */ = (data->localData[0]->realVars[389] /* timeTable1.a DISCRETE */) * (data->localData[0]->realVars[348] /* timeTable1.timeScaled variable */) + data->localData[0]->realVars[390] /* timeTable1.b DISCRETE */;
  TRACE_POP
}
/*
 equation index: 737
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._u = smooth(0, if noEvent(timeTable1.y < valveIncompressible1.minLimiter.uMin) then valveIncompressible1.minLimiter.uMin else timeTable1.y)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  modelica_boolean tmp8;
  tmp8 = Less(data->localData[0]->realVars[349] /* timeTable1.y variable */,data->simulationInfo->realParameter[126]);
  data->localData[0]->realVars[352] /* valveIncompressible1.filter.u variable */ = (tmp8?data->simulationInfo->realParameter[126]:data->localData[0]->realVars[349] /* timeTable1.y variable */);
  TRACE_POP
}
/*
 equation index: 738
 type: SIMPLE_ASSIGN
 valveIncompressible1._filter._uu[1] = valveIncompressible1.filter.u / valveIncompressible1.filter.u_nominal
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  data->localData[0]->realVars[353] /* valveIncompressible1.filter.uu[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[352] /* valveIncompressible1.filter.u variable */,data->simulationInfo->realParameter[118],"valveIncompressible1.filter.u_nominal",equationIndexes);
  TRACE_POP
}
/*
 equation index: 739
 type: SIMPLE_ASSIGN
 der(valveIncompressible1._filter._x[1]) = valveIncompressible1.filter.r[1] * (valveIncompressible1.filter.x[1] - valveIncompressible1.filter.uu[1])
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  data->localData[0]->realVars[10] /* der(valveIncompressible1.filter.x[1]) STATE_DER */ = (data->simulationInfo->realParameter[116]) * (data->localData[0]->realVars[3] /* valveIncompressible1.filter.x[1] STATE(1) */ - data->localData[0]->realVars[353] /* valveIncompressible1.filter.uu[1] variable */);
  TRACE_POP
}
/*
 equation index: 740
 type: SIMPLE_ASSIGN
 $whenCondition2 = time >= pre(combiTimeTable1.nextTimeEvent)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  modelica_boolean tmp9;
  RELATIONHYSTERESIS(tmp9, data->localData[0]->timeValue, data->simulationInfo->realVarsPre[387] /* combiTimeTable1.nextTimeEvent DISCRETE */, 0, GreaterEq);
  data->localData[0]->booleanVars[5] /* $whenCondition2 DISCRETE */ = tmp9;
  TRACE_POP
}
/*
 equation index: 741
 type: WHEN
 
 when {$whenCondition2} then
   combiTimeTable1._nextTimeEventScaled = Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getNextTimeEvent(combiTimeTable1.tableID, combiTimeTable1.timeScaled, combiTimeTable1.tableOnFileRead);
 end when;
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  if((data->localData[0]->booleanVars[5] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[5] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */ = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getNextTimeEvent(threadData, data->simulationInfo->extObjs[0], data->localData[0]->realVars[232] /* combiTimeTable1.timeScaled variable */, data->simulationInfo->realParameter[13]);
  }
  TRACE_POP
}
/*
 equation index: 742
 type: SIMPLE_ASSIGN
 $cse19 = Modelica.Blocks.Sources.CombiTimeTable$combiTimeTable1.getTableValue(combiTimeTable1.tableID, 1, combiTimeTable1.timeScaled, combiTimeTable1.nextTimeEventScaled, pre(combiTimeTable1.nextTimeEventScaled), combiTimeTable1.tableOnFileRead)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->localData[0]->realVars[123] /* $cse19 variable */ = omc_Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableValue(threadData, data->simulationInfo->extObjs[0], ((modelica_integer) 1), data->localData[0]->realVars[232] /* combiTimeTable1.timeScaled variable */, data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */, data->simulationInfo->realVarsPre[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */, data->simulationInfo->realParameter[13]);
  TRACE_POP
}
/*
 equation index: 743
 type: SIMPLE_ASSIGN
 combiTimeTable1._y[1] = combiTimeTable1.p_offset[1] + $cse19
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->localData[0]->realVars[233] /* combiTimeTable1.y[1] variable */ = data->simulationInfo->realParameter[7] + data->localData[0]->realVars[123] /* $cse19 variable */;
  TRACE_POP
}
/*
 equation index: 744
 type: SIMPLE_ASSIGN
 res = (-273.15 + cup.heatTransfer.Ts[1] - combiTimeTable1.y[1]) ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  modelica_real tmp10;
  tmp10 = -273.15 + data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */ - data->localData[0]->realVars[233] /* combiTimeTable1.y[1] variable */;
  data->localData[0]->realVars[343] /* res variable */ = (tmp10 * tmp10);
  TRACE_POP
}
/*
 equation index: 745
 type: WHEN
 
 when {$whenCondition2} then
   combiTimeTable1._nextTimeEvent = if combiTimeTable1.nextTimeEventScaled < 1.797693134862316e+308 then combiTimeTable1.nextTimeEventScaled else 1.797693134862316e+308;
 end when;
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  modelica_boolean tmp11;
  if((data->localData[0]->booleanVars[5] /* $whenCondition2 DISCRETE */ && !data->simulationInfo->booleanVarsPre[5] /* $whenCondition2 DISCRETE */ /* edge */))
  {
    tmp11 = Less(data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */,1.797693134862316e+308);
    data->localData[0]->realVars[387] /* combiTimeTable1.nextTimeEvent DISCRETE */ = (tmp11?data->localData[0]->realVars[388] /* combiTimeTable1.nextTimeEventScaled DISCRETE */:1.797693134862316e+308);
  }
  TRACE_POP
}
/*
 equation index: 746
 type: SIMPLE_ASSIGN
 yakan._V = yakan.crossArea * yakan.level
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[364] /* yakan.V DUMMY_STATE */ = (data->simulationInfo->realParameter[133]) * (data->localData[0]->realVars[5] /* yakan.level STATE(1) */);
  TRACE_POP
}
/*
 equation index: 747
 type: SIMPLE_ASSIGN
 yakan._m = yakan.V * yakan.heatTransfer.states[1].d
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  data->localData[0]->realVars[370] /* yakan.m DUMMY_STATE */ = (data->localData[0]->realVars[364] /* yakan.V DUMMY_STATE */) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */);
  TRACE_POP
}
/*
 equation index: 748
 type: SIMPLE_ASSIGN
 yakan._U = yakan.m * yakan.medium.u
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  data->localData[0]->realVars[363] /* yakan.U DUMMY_STATE */ = (data->localData[0]->realVars[370] /* yakan.m DUMMY_STATE */) * (data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */);
  TRACE_POP
}
/*
 equation index: 749
 type: SIMPLE_ASSIGN
 cup._V = cup.crossArea * cup.level
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->localData[0]->realVars[239] /* cup.V DUMMY_STATE */ = (data->simulationInfo->realParameter[21]) * (data->localData[0]->realVars[0] /* cup.level STATE(1) */);
  TRACE_POP
}
/*
 equation index: 750
 type: SIMPLE_ASSIGN
 cup._m = cup.V * cup.heatTransfer.states[1].d
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->localData[0]->realVars[245] /* cup.m DUMMY_STATE */ = (data->localData[0]->realVars[239] /* cup.V DUMMY_STATE */) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */);
  TRACE_POP
}
/*
 equation index: 751
 type: SIMPLE_ASSIGN
 cup._U = cup.m * cup.medium.u
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[238] /* cup.U DUMMY_STATE */ = (data->localData[0]->realVars[245] /* cup.m DUMMY_STATE */) * (data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */);
  TRACE_POP
}
/*
 equation index: 752
 type: SIMPLE_ASSIGN
 yakan._ports_penetration[1] = Modelica.Fluid.Utilities.regStep(yakan.level + (-0.1) * yakan.portsData[1].diameter - yakan.portsData[1].height, 1.0, 0.001, 0.1 * yakan.portsData[1].diameter)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  data->localData[0]->realVars[384] /* yakan.ports_penetration[1] variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[5] /* yakan.level STATE(1) */ + (-0.1) * (data->simulationInfo->realParameter[145]) - data->simulationInfo->realParameter[146], 1.0, 0.001, (0.1) * (data->simulationInfo->realParameter[145]));
  TRACE_POP
}
/*
 equation index: 753
 type: SIMPLE_ASSIGN
 $cse9 = max(0.0, yakan.level - yakan.portsData[1].height)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[231] /* $cse9 variable */ = fmax(0.0,data->localData[0]->realVars[5] /* yakan.level STATE(1) */ - data->simulationInfo->realParameter[146]);
  TRACE_POP
}
/*
 equation index: 754
 type: SIMPLE_ASSIGN
 yakan._vessel_ps_static[1] = $cse9 * system.g * yakan.heatTransfer.states[1].d + yakan.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */ = (data->localData[0]->realVars[231] /* $cse9 variable */) * ((data->simulationInfo->realParameter[83]) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */)) + data->simulationInfo->realParameter[143];
  TRACE_POP
}
/*
 equation index: 755
 type: ALGORITHM
 
   $cse10 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.vessel_ps_static[1], pipe.port_a.h_outflow, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  Modelica_Media_Common_IF97BaseTwoPhase tmp12;
  tmp12 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */, data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[0] /* $cse10.phase DISCRETE */ = tmp12._phase;
  data->localData[0]->integerVars[1] /* $cse10.region DISCRETE */ = tmp12._region;
  data->localData[0]->realVars[42] /* $cse10.p variable */ = tmp12._p;
  data->localData[0]->realVars[37] /* $cse10.T variable */ = tmp12._T;
  data->localData[0]->realVars[41] /* $cse10.h variable */ = tmp12._h;
  data->localData[0]->realVars[36] /* $cse10.R variable */ = tmp12._R;
  data->localData[0]->realVars[38] /* $cse10.cp variable */ = tmp12._cp;
  data->localData[0]->realVars[39] /* $cse10.cv variable */ = tmp12._cv;
  data->localData[0]->realVars[45] /* $cse10.rho variable */ = tmp12._rho;
  data->localData[0]->realVars[46] /* $cse10.s variable */ = tmp12._s;
  data->localData[0]->realVars[44] /* $cse10.pt variable */ = tmp12._pt;
  data->localData[0]->realVars[43] /* $cse10.pd variable */ = tmp12._pd;
  data->localData[0]->realVars[48] /* $cse10.vt variable */ = tmp12._vt;
  data->localData[0]->realVars[47] /* $cse10.vp variable */ = tmp12._vp;
  data->localData[0]->realVars[49] /* $cse10.x variable */ = tmp12._x;
  data->localData[0]->realVars[40] /* $cse10.dpT variable */ = tmp12._dpT;
  TRACE_POP
}
/*
 equation index: 756
 type: SIMPLE_ASSIGN
 yakan._portInDensities[1] = $cse10.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[380] /* yakan.portInDensities[1] variable */ = data->localData[0]->realVars[45] /* $cse10.rho variable */;
  TRACE_POP
}
/*
 equation index: 757
 type: SIMPLE_ASSIGN
 cup._ports_penetration[1] = Modelica.Fluid.Utilities.regStep(cup.level + (-0.1) * cup.portsData[1].diameter - cup.portsData[1].height, 1.0, 0.001, 0.1 * cup.portsData[1].diameter)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[259] /* cup.ports_penetration[1] variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[0] /* cup.level STATE(1) */ + (-0.1) * (data->simulationInfo->realParameter[33]) - data->simulationInfo->realParameter[34], 1.0, 0.001, (0.1) * (data->simulationInfo->realParameter[33]));
  TRACE_POP
}
/*
 equation index: 758
 type: SIMPLE_ASSIGN
 $cse4 = max(0.0, cup.level - cup.portsData[1].height)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[178] /* $cse4 variable */ = fmax(0.0,data->localData[0]->realVars[0] /* cup.level STATE(1) */ - data->simulationInfo->realParameter[34]);
  TRACE_POP
}
/*
 equation index: 759
 type: SIMPLE_ASSIGN
 cup._vessel_ps_static[1] = $cse4 * system.g * cup.heatTransfer.states[1].d + cup.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */ = (data->localData[0]->realVars[178] /* $cse4 variable */) * ((data->simulationInfo->realParameter[83]) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */)) + data->simulationInfo->realParameter[31];
  TRACE_POP
}
/*
 equation index: 760
 type: ALGORITHM
 
   $cse5 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.vessel_ps_static[1], pipe.port_b.h_outflow, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  Modelica_Media_Common_IF97BaseTwoPhase tmp13;
  tmp13 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[18] /* $cse5.phase DISCRETE */ = tmp13._phase;
  data->localData[0]->integerVars[19] /* $cse5.region DISCRETE */ = tmp13._region;
  data->localData[0]->realVars[185] /* $cse5.p variable */ = tmp13._p;
  data->localData[0]->realVars[180] /* $cse5.T variable */ = tmp13._T;
  data->localData[0]->realVars[184] /* $cse5.h variable */ = tmp13._h;
  data->localData[0]->realVars[179] /* $cse5.R variable */ = tmp13._R;
  data->localData[0]->realVars[181] /* $cse5.cp variable */ = tmp13._cp;
  data->localData[0]->realVars[182] /* $cse5.cv variable */ = tmp13._cv;
  data->localData[0]->realVars[188] /* $cse5.rho variable */ = tmp13._rho;
  data->localData[0]->realVars[189] /* $cse5.s variable */ = tmp13._s;
  data->localData[0]->realVars[187] /* $cse5.pt variable */ = tmp13._pt;
  data->localData[0]->realVars[186] /* $cse5.pd variable */ = tmp13._pd;
  data->localData[0]->realVars[191] /* $cse5.vt variable */ = tmp13._vt;
  data->localData[0]->realVars[190] /* $cse5.vp variable */ = tmp13._vp;
  data->localData[0]->realVars[192] /* $cse5.x variable */ = tmp13._x;
  data->localData[0]->realVars[183] /* $cse5.dpT variable */ = tmp13._dpT;
  TRACE_POP
}
/*
 equation index: 761
 type: SIMPLE_ASSIGN
 cup._portInDensities[1] = $cse5.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[254] /* cup.portInDensities[1] variable */ = data->localData[0]->realVars[188] /* $cse5.rho variable */;
  TRACE_POP
}
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_762(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_763(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_764(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_765(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_766(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_767(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_768(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_769(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_770(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_771(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_772(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_773(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_774(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_775(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_776(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_777(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_778(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_779(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_780(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_781(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_786(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_785(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_784(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_783(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_782(DATA*,threadData_t*);
/*
 equation index: 787
 indexNonlinear: 12
 type: NONLINEAR
 
 vars: {yakan._s[1], cup._s[1], cup._ports[1]._p, pipe._flowModel._states[1]._p, pipe._flowModel._states[2]._p}
 eqns: {762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 786, 785, 784, 783, 782}
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 787 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = data->localData[0]->realVars[385] /* yakan.s[1] variable */;
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[1] = data->localData[0]->realVars[260] /* cup.s[1] variable */;
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[2] = data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[3] = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */;
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[4] = data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */;
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,787};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 787 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[385] /* yakan.s[1] variable */ = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  data->localData[0]->realVars[260] /* cup.s[1] variable */ = data->simulationInfo->nonlinearSystemData[12].nlsx[1];
  data->localData[0]->realVars[256] /* cup.ports[1].p variable */ = data->simulationInfo->nonlinearSystemData[12].nlsx[2];
  data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ = data->simulationInfo->nonlinearSystemData[12].nlsx[3];
  data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ = data->simulationInfo->nonlinearSystemData[12].nlsx[4];
  TRACE_POP
}
/*
 equation index: 788
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_a._T = $cse17.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->localData[0]->realVars[358] /* valveIncompressible1.state_a.T variable */ = data->localData[0]->realVars[96] /* $cse17.T variable */;
  TRACE_POP
}
/*
 equation index: 789
 type: ALGORITHM
 
   $cse15 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.ports[1].p, pipe.port_b.h_outflow, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,789};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[256] /* cup.ports[1].p variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[6] /* $cse15.phase DISCRETE */ = tmp0._phase;
  data->localData[0]->integerVars[7] /* $cse15.region DISCRETE */ = tmp0._region;
  data->localData[0]->realVars[86] /* $cse15.p variable */ = tmp0._p;
  data->localData[0]->realVars[81] /* $cse15.T variable */ = tmp0._T;
  data->localData[0]->realVars[85] /* $cse15.h variable */ = tmp0._h;
  data->localData[0]->realVars[80] /* $cse15.R variable */ = tmp0._R;
  data->localData[0]->realVars[82] /* $cse15.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[83] /* $cse15.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[89] /* $cse15.rho variable */ = tmp0._rho;
  data->localData[0]->realVars[90] /* $cse15.s variable */ = tmp0._s;
  data->localData[0]->realVars[88] /* $cse15.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[87] /* $cse15.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[92] /* $cse15.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[91] /* $cse15.vp variable */ = tmp0._vp;
  data->localData[0]->realVars[93] /* $cse15.x variable */ = tmp0._x;
  data->localData[0]->realVars[84] /* $cse15.dpT variable */ = tmp0._dpT;
  TRACE_POP
}
/*
 equation index: 790
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_b._T = $cse18.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,790};
  data->localData[0]->realVars[360] /* valveIncompressible1.state_b.T variable */ = data->localData[0]->realVars[110] /* $cse18.T variable */;
  TRACE_POP
}
/*
 equation index: 791
 type: SIMPLE_ASSIGN
 cup._ports_H_flow[1] = (-yakan.mb_flow) * smooth(0, if (-yakan.mb_flow) > 0.0 then pipe.port_b.h_outflow else cup.medium.h)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,791};
  modelica_boolean tmp1;
  tmp1 = Greater((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),0.0);
  data->localData[0]->realVars[258] /* cup.ports_H_flow[1] variable */ = ((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */)) * ((tmp1?data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */:data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */));
  TRACE_POP
}
/*
 equation index: 792
 type: SIMPLE_ASSIGN
 yakan._portVelocities[1] = smooth(0, yakan.mb_flow / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.vessel_ps_static[1], smooth(0, if yakan.mb_flow > 0.0 then pipe.port_a.h_outflow else yakan.medium.h), 0, 0).rho * yakan.portAreas[1]))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,792};
  modelica_boolean tmp2;
  tmp2 = Greater(data->localData[0]->realVars[371] /* yakan.mb_flow variable */,0.0);
  data->localData[0]->realVars[381] /* yakan.portVelocities[1] variable */ = DIVISION_SIM(data->localData[0]->realVars[371] /* yakan.mb_flow variable */,(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */, (tmp2?data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */:data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */), ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.vessel_ps_static[1], smooth(0, if yakan.mb_flow > 0.0 then pipe.port_a.h_outflow else yakan.medium.h), 0, 0).rho * yakan.portAreas[1]",equationIndexes);
  TRACE_POP
}
/*
 equation index: 793
 type: SIMPLE_ASSIGN
 yakan._ports_H_flow[1] = yakan.mb_flow * smooth(0, if yakan.mb_flow > 0.0 then pipe.port_a.h_outflow else yakan.medium.h)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,793};
  modelica_boolean tmp3;
  tmp3 = Greater(data->localData[0]->realVars[371] /* yakan.mb_flow variable */,0.0);
  data->localData[0]->realVars[383] /* yakan.ports_H_flow[1] variable */ = (data->localData[0]->realVars[371] /* yakan.mb_flow variable */) * ((tmp3?data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */:data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */));
  TRACE_POP
}
/*
 equation index: 794
 type: SIMPLE_ASSIGN
 yakan._ports_E_flow[1] = yakan.mb_flow * (0.5 * yakan.portVelocities[1] ^ 2.0 + system.g * yakan.portsData[1].height)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,794};
  modelica_real tmp4;
  tmp4 = data->localData[0]->realVars[381] /* yakan.portVelocities[1] variable */;
  data->localData[0]->realVars[382] /* yakan.ports_E_flow[1] variable */ = (data->localData[0]->realVars[371] /* yakan.mb_flow variable */) * ((0.5) * ((tmp4 * tmp4)) + (data->simulationInfo->realParameter[83]) * (data->simulationInfo->realParameter[146]));
  TRACE_POP
}
/*
 equation index: 795
 type: SIMPLE_ASSIGN
 yakan._Hb_flow = yakan.ports_H_flow[1] + yakan.ports_E_flow[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,795};
  data->localData[0]->realVars[362] /* yakan.Hb_flow variable */ = data->localData[0]->realVars[383] /* yakan.ports_H_flow[1] variable */ + data->localData[0]->realVars[382] /* yakan.ports_E_flow[1] variable */;
  TRACE_POP
}
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_796(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_797(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_798(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_799(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_801(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_800(DATA*,threadData_t*);
/*
 equation index: 802
 indexNonlinear: 13
 type: NONLINEAR
 
 vars: {der(yakan._heatTransfer._states[1]._d), der(yakan._medium._u)}
 eqns: {796, 797, 798, 799, 801, 800}
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,802};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 802 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */;
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[1] = data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */;
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,802};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 802 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[13].nlsx[1];
  TRACE_POP
}
/*
 equation index: 803
 type: SIMPLE_ASSIGN
 der(yakan._level) = $DER.yakan.V / yakan.crossArea
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,803};
  data->localData[0]->realVars[12] /* der(yakan.level) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[20] /* der(yakan.V) DUMMY_DER */,data->simulationInfo->realParameter[133],"yakan.crossArea",equationIndexes);
  TRACE_POP
}
/*
 equation index: 804
 type: SIMPLE_ASSIGN
 pipe._flowModel._vs[1] = (-yakan.mb_flow) / (pipe.nParallel * pipe.flowModel.rhos[1] * pipe.crossArea)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,804};
  data->localData[0]->realVars[339] /* pipe.flowModel.vs[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),((data->simulationInfo->realParameter[73]) * (data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */)) * (data->simulationInfo->realParameter[56]),"pipe.nParallel * pipe.flowModel.rhos[1] * pipe.crossArea",equationIndexes);
  TRACE_POP
}
/*
 equation index: 805
 type: SIMPLE_ASSIGN
 pipe._flowModel._vs[2] = (-yakan.mb_flow) / (pipe.nParallel * pipe.flowModel.rhos[2] * pipe.crossArea)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,805};
  data->localData[0]->realVars[340] /* pipe.flowModel.vs[2] variable */ = DIVISION_SIM((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),((data->simulationInfo->realParameter[73]) * (data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */)) * (data->simulationInfo->realParameter[56]),"pipe.nParallel * pipe.flowModel.rhos[2] * pipe.crossArea",equationIndexes);
  TRACE_POP
}
/*
 equation index: 806
 type: SIMPLE_ASSIGN
 pipe._flowModel._rhos_act[1] = if noEvent((-yakan.mb_flow) > 0.0) then pipe.flowModel.rhos[1] else pipe.flowModel.rhos[2]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,806};
  modelica_boolean tmp0;
  tmp0 = Greater((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),0.0);
  data->localData[0]->realVars[334] /* pipe.flowModel.rhos_act[1] variable */ = (tmp0?data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */:data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */);
  TRACE_POP
}
/*
 equation index: 807
 type: SIMPLE_ASSIGN
 pipe._flowModel._mus_act[1] = if noEvent((-yakan.mb_flow) > 0.0) then pipe.flowModel.mus[1] else pipe.flowModel.mus[2]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,807};
  modelica_boolean tmp1;
  tmp1 = Greater((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),0.0);
  data->localData[0]->realVars[331] /* pipe.flowModel.mus_act[1] variable */ = (tmp1?data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */:data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */);
  TRACE_POP
}
/*
 equation index: 808
 type: SIMPLE_ASSIGN
 pipe._flowModel._Is[1] = (-yakan.mb_flow) * pipe.length
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,808};
  data->localData[0]->realVars[323] /* pipe.flowModel.Is[1] variable */ = ((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */)) * (data->simulationInfo->realParameter[71]);
  TRACE_POP
}
/*
 equation index: 809
 type: SIMPLE_ASSIGN
 valveIncompressible1._port_a_T = Modelica.Fluid.Utilities.regStep(-yakan.mb_flow, valveIncompressible1.state_a.T, $cse12.T, valveIncompressible1.m_flow_small)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,809};
  data->localData[0]->realVars[355] /* valveIncompressible1.port_a_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[371] /* yakan.mb_flow variable */), data->localData[0]->realVars[358] /* valveIncompressible1.state_a.T variable */, data->localData[0]->realVars[65] /* $cse12.T variable */, data->simulationInfo->realParameter[124]);
  TRACE_POP
}
/*
 equation index: 810
 type: SIMPLE_ASSIGN
 $cse14 = Modelica.Fluid.Utilities.regStep(-yakan.mb_flow, valveIncompressible1.state_a.d, valveIncompressible1.state_b.d, valveIncompressible1.m_flow_small)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,810};
  data->localData[0]->realVars[79] /* $cse14 variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, (-data->localData[0]->realVars[371] /* yakan.mb_flow variable */), data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */, data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */, data->simulationInfo->realParameter[124]);
  TRACE_POP
}
/*
 equation index: 811
 type: SIMPLE_ASSIGN
 valveIncompressible1._V_flow = (-yakan.mb_flow) / $cse14
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,811};
  data->localData[0]->realVars[350] /* valveIncompressible1.V_flow variable */ = DIVISION_SIM((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),data->localData[0]->realVars[79] /* $cse14 variable */,"$cse14",equationIndexes);
  TRACE_POP
}
/*
 equation index: 812
 type: SIMPLE_ASSIGN
 valveIncompressible1._port_b_T = Modelica.Fluid.Utilities.regStep(yakan.mb_flow, valveIncompressible1.state_b.T, $cse15.T, valveIncompressible1.m_flow_small)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,812};
  data->localData[0]->realVars[356] /* valveIncompressible1.port_b_T variable */ = omc_Modelica_Fluid_Utilities_regStep(threadData, data->localData[0]->realVars[371] /* yakan.mb_flow variable */, data->localData[0]->realVars[360] /* valveIncompressible1.state_b.T variable */, data->localData[0]->realVars[81] /* $cse15.T variable */, data->simulationInfo->realParameter[124]);
  TRACE_POP
}
/*
 equation index: 813
 type: SIMPLE_ASSIGN
 der(cup._m) = -yakan.mb_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,813};
  data->localData[0]->realVars[17] /* der(cup.m) DUMMY_DER */ = (-data->localData[0]->realVars[371] /* yakan.mb_flow variable */);
  TRACE_POP
}
/*
 equation index: 814
 type: SIMPLE_ASSIGN
 der(yakan._m) = yakan.mb_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,814};
  data->localData[0]->realVars[22] /* der(yakan.m) DUMMY_DER */ = data->localData[0]->realVars[371] /* yakan.mb_flow variable */;
  TRACE_POP
}
/*
 equation index: 815
 type: SIMPLE_ASSIGN
 cup._portVelocities[1] = smooth(0, (-yakan.mb_flow) / (Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.vessel_ps_static[1], smooth(0, if (-yakan.mb_flow) > 0.0 then pipe.port_b.h_outflow else cup.medium.h), 0, 0).rho * cup.portAreas[1]))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,815};
  modelica_boolean tmp2;
  tmp2 = Greater((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),0.0);
  data->localData[0]->realVars[255] /* cup.portVelocities[1] variable */ = DIVISION_SIM((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */),(omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */, (tmp2?data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */:data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */), ((modelica_integer) 0), ((modelica_integer) 0))._rho) * (data->localData[0]->realVars[253] /* cup.portAreas[1] variable */),"Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.vessel_ps_static[1], smooth(0, if (-yakan.mb_flow) > 0.0 then pipe.port_b.h_outflow else cup.medium.h), 0, 0).rho * cup.portAreas[1]",equationIndexes);
  TRACE_POP
}
/*
 equation index: 816
 type: SIMPLE_ASSIGN
 cup._ports_E_flow[1] = (-yakan.mb_flow) * (0.5 * cup.portVelocities[1] ^ 2.0 + system.g * cup.portsData[1].height)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,816};
  modelica_real tmp3;
  tmp3 = data->localData[0]->realVars[255] /* cup.portVelocities[1] variable */;
  data->localData[0]->realVars[257] /* cup.ports_E_flow[1] variable */ = ((-data->localData[0]->realVars[371] /* yakan.mb_flow variable */)) * ((0.5) * ((tmp3 * tmp3)) + (data->simulationInfo->realParameter[83]) * (data->simulationInfo->realParameter[34]));
  TRACE_POP
}
/*
 equation index: 817
 type: SIMPLE_ASSIGN
 cup._Hb_flow = cup.ports_H_flow[1] + cup.ports_E_flow[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,817};
  data->localData[0]->realVars[237] /* cup.Hb_flow variable */ = data->localData[0]->realVars[258] /* cup.ports_H_flow[1] variable */ + data->localData[0]->realVars[257] /* cup.ports_E_flow[1] variable */;
  TRACE_POP
}
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_818(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_819(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_820(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_821(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_823(DATA*,threadData_t*);
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_822(DATA*,threadData_t*);
/*
 equation index: 824
 indexNonlinear: 14
 type: NONLINEAR
 
 vars: {der(cup._heatTransfer._states[1]._d), der(cup._medium._u)}
 eqns: {818, 819, 820, 821, 823, 822}
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,824};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 824 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */;
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[1] = data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */;
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,824};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 824 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */ = data->simulationInfo->nonlinearSystemData[14].nlsx[1];
  TRACE_POP
}
/*
 equation index: 825
 type: SIMPLE_ASSIGN
 der(cup._level) = $DER.cup.V / cup.crossArea
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,825};
  data->localData[0]->realVars[7] /* der(cup.level) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[15] /* der(cup.V) DUMMY_DER */,data->simulationInfo->realParameter[21],"cup.crossArea",equationIndexes);
  TRACE_POP
}
/*
 equation index: 836
 type: ALGORITHM
 
   assert(combiTimeTable1.tableName <> "NoName", "tableOnFile = true and no table name given");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,836};
  static const MMC_DEFSTRINGLIT(tmp2,6,"NoName");
  static const MMC_DEFSTRINGLIT(tmp3,42,"tableOnFile = true and no table name given");
  static int tmp4 = 0;
  {
    if(!(!stringEqual(data->simulationInfo->stringParameter[1], MMC_REFSTRINGLIT(tmp2))))
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Sources.mo",2401,7,2402,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncombiTimeTable1.tableName <> \"NoName\"", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp3)));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 835
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.f_cut > 0.0, "f_cut > 0 required");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,835};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,18,"f_cut > 0 required");
  static int tmp7 = 0;
  {
    tmp5 = Greater(data->simulationInfo->realParameter[113],0.0);
    if(!tmp5)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1829,6,1829,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.f_cut > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp6)));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 834
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.A_ripple > 0.0, "A_ripple > 0 required");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,834};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,21,"A_ripple > 0 required");
  static int tmp10 = 0;
  {
    tmp8 = Greater(data->simulationInfo->realParameter[110],0.0);
    if(!tmp8)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1828,6,1828,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.A_ripple > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp9)));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 833
 type: ALGORITHM
 
   assert(valveIncompressible1.filter.u_nominal > 0.0, "u_nominal > 0 required");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,833};
  modelica_boolean tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,22,"u_nominal > 0 required");
  static int tmp13 = 0;
  {
    tmp11 = Greater(data->simulationInfo->realParameter[118],0.0);
    if(!tmp11)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Continuous.mo",1824,6,1824,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.filter.u_nominal > 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp12)));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 832
 type: ALGORITHM
 
   assert(pipe.length >= pipe.height_ab, "Parameter length must be greater or equal height_ab.");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,832};
  modelica_boolean tmp14;
  static const MMC_DEFSTRINGLIT(tmp15,52,"Parameter length must be greater or equal height_ab.");
  static int tmp16 = 0;
  {
    tmp14 = GreaterEq(data->simulationInfo->realParameter[71],data->simulationInfo->realParameter[70]);
    if(!tmp14)
    {
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",271,7,271,90,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.length >= pipe.height_ab", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp15)));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 831
 type: ALGORITHM
 
   assert(yakan.level > (-1e-006) * yakan.fluidLevel_max, "Fluid level (= " + String(yakan.level, 6, 0, true) + ") is below zero meaning that the solution failed.");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,831};
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,15,"Fluid level (= ");
  modelica_string tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,49,") is below zero meaning that the solution failed.");
  static int tmp21 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp17 = Greater(data->localData[0]->realVars[5] /* yakan.level STATE(1) */,(-1e-006) * (data->simulationInfo->realParameter[134]));
    if(!tmp17)
    {
      tmp19 = modelica_real_to_modelica_string(data->localData[0]->realVars[5] /* yakan.level STATE(1) */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp20));
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",315,9,315,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.level > (-1e-006) * yakan.fluidLevel_max", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 830
 type: ALGORITHM
 
   assert(yakan.level <= yakan.fluidLevel_max, "Vessel is overflowing (fluidLevel > fluidLevel_max = " + String(yakan.level, 6, 0, true) + ")");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,830};
  modelica_boolean tmp22;
  static const MMC_DEFSTRINGLIT(tmp23,53,"Vessel is overflowing (fluidLevel > fluidLevel_max = ");
  modelica_string tmp24;
  static int tmp25 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp22 = LessEq(data->localData[0]->realVars[5] /* yakan.level STATE(1) */,data->simulationInfo->realParameter[134]);
    if(!tmp22)
    {
      tmp24 = modelica_real_to_modelica_string(data->localData[0]->realVars[5] /* yakan.level STATE(1) */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp23),tmp24);
      tmpMeta[1] = stringAppend(tmpMeta[0],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",314,9,314,129,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.level <= yakan.fluidLevel_max", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 829
 type: ALGORITHM
 
   assert(yakan.p_ambient >= 0.0, "Pressure (= " + String(yakan.p_ambient, 6, 0, true) + " Pa) of medium \"" + "WaterIF97" + "\" is negative
 (Temperature = " + String(yakan.heatTransfer.Ts[1], 6, 0, true) + " K)");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,829};
  modelica_boolean tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,12,"Pressure (= ");
  modelica_string tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp30,9,"WaterIF97");
  static const MMC_DEFSTRINGLIT(tmp31,29,"\" is negative\n(Temperature = ");
  modelica_string tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,3," K)");
  static int tmp34 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp26 = GreaterEq(data->simulationInfo->realParameter[143],0.0);
    if(!tmp26)
    {
      tmp28 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[143], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp27),tmp28);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp29));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp30));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp31));
      tmp32 = modelica_real_to_modelica_string(data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp32);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp33));
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.p_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 828
 type: ALGORITHM
 
   assert(cup.level > (-1e-006) * cup.fluidLevel_max, "Fluid level (= " + String(cup.level, 6, 0, true) + ") is below zero meaning that the solution failed.");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,828};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,15,"Fluid level (= ");
  modelica_string tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,49,") is below zero meaning that the solution failed.");
  static int tmp39 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp35 = Greater(data->localData[0]->realVars[0] /* cup.level STATE(1) */,(-1e-006) * (data->simulationInfo->realParameter[22]));
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string(data->localData[0]->realVars[0] /* cup.level STATE(1) */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp38));
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",315,9,315,144,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.level > (-1e-006) * cup.fluidLevel_max", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 827
 type: ALGORITHM
 
   assert(cup.level <= cup.fluidLevel_max, "Vessel is overflowing (fluidLevel > fluidLevel_max = " + String(cup.level, 6, 0, true) + ")");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,827};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,53,"Vessel is overflowing (fluidLevel > fluidLevel_max = ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp40 = LessEq(data->localData[0]->realVars[0] /* cup.level STATE(1) */,data->simulationInfo->realParameter[22]);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string(data->localData[0]->realVars[0] /* cup.level STATE(1) */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      tmpMeta[1] = stringAppend(tmpMeta[0],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",314,9,314,129,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.level <= cup.fluidLevel_max", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }
  TRACE_POP
}
/*
 equation index: 826
 type: ALGORITHM
 
   assert(cup.p_ambient >= 0.0, "Pressure (= " + String(cup.p_ambient, 6, 0, true) + " Pa) of medium \"" + "WaterIF97" + "\" is negative
 (Temperature = " + String(cup.heatTransfer.Ts[1], 6, 0, true) + " K)");
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,826};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,12,"Pressure (= ");
  modelica_string tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp48,9,"WaterIF97");
  static const MMC_DEFSTRINGLIT(tmp49,29,"\" is negative\n(Temperature = ");
  modelica_string tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,3," K)");
  static int tmp52 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp44 = GreaterEq(data->simulationInfo->realParameter[31],0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[31], ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp47));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp48));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp49));
      tmp50 = modelica_real_to_modelica_string(data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp50);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp51));
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.p_ambient >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int CoffeeTemperature_Test_CoffeeTest10_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  
  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  CoffeeTemperature_Test_CoffeeTest10_functionLocalKnownVars(data, threadData);
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_650(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_651(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_652(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_653(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_654(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_674(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_675(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_676(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_677(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_678(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_679(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_713(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_714(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_715(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_716(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_717(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_718(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_719(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_720(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_721(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_722(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_723(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_724(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_725(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_726(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_727(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_728(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_729(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_730(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_731(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_732(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_733(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_734(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_735(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_736(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_737(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_738(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_739(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_740(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_741(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_742(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_743(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_744(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_745(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_746(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_747(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_748(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_749(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_750(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_751(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_752(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_753(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_754(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_755(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_756(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_757(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_758(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_759(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_760(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_761(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_787(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_788(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_789(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_790(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_791(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_792(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_793(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_794(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_795(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_802(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_803(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_804(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_805(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_806(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_807(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_808(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_809(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_810(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_811(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_812(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_813(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_814(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_815(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_816(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_817(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_824(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_825(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_836(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_835(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_834(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_833(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_832(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_831(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_830(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_829(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_828(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_827(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_826(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int CoffeeTemperature_Test_CoffeeTest10_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_650(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_651(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_652(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_653(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_654(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_674(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_676(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_677(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_679(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_713(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_714(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_715(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_716(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_717(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_718(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_719(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_720(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_721(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_722(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_723(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_725(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_726(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_728(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_729(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_730(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_731(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_732(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_733(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_735(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_736(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_737(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_738(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_739(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_746(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_747(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_749(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_750(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_752(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_753(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_754(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_755(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_756(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_757(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_758(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_759(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_760(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_761(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_787(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_791(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_792(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_793(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_794(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_795(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_802(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_803(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_815(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_816(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_817(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_824(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_eqFunction_825(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    CoffeeTemperature_Test_CoffeeTest10_eqFunction_650(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_651(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_652(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_653(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_654(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_674(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_676(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_677(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_679(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_713(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_714(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_715(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_716(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_717(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_718(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_719(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_720(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_721(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_722(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_723(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_725(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_726(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_728(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_729(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_730(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_731(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_732(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_733(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_735(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_736(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_737(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_738(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_739(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_746(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_747(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_749(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_750(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_752(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_753(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_754(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_755(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_756(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_757(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_758(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_759(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_760(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_761(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_787(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_791(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_792(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_793(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_794(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_795(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_802(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_803(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_815(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_816(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_817(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_824(data, threadData);

    CoffeeTemperature_Test_CoffeeTest10_eqFunction_825(data, threadData);
}

int CoffeeTemperature_Test_CoffeeTest10_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  data->simulationInfo->callStatistics.functionODE++;
  
  CoffeeTemperature_Test_CoffeeTest10_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

  
  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "CoffeeTemperature.Test.CoffeeTest10_12jac.h"
#include "CoffeeTemperature.Test.CoffeeTest10_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks CoffeeTemperature_Test_CoffeeTest10_callback = {
   (int (*)(DATA *, threadData_t *, void *)) CoffeeTemperature_Test_CoffeeTest10_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) CoffeeTemperature_Test_CoffeeTest10_performQSSSimulation,
   CoffeeTemperature_Test_CoffeeTest10_updateContinuousSystem,
   CoffeeTemperature_Test_CoffeeTest10_callExternalObjectDestructors,
   CoffeeTemperature_Test_CoffeeTest10_initialNonLinearSystem,
   NULL,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   CoffeeTemperature_Test_CoffeeTest10_initializeStateSets,
   #else
   NULL,
   #endif
   CoffeeTemperature_Test_CoffeeTest10_initializeDAEmodeData,
   CoffeeTemperature_Test_CoffeeTest10_functionODE,
   CoffeeTemperature_Test_CoffeeTest10_functionAlgebraics,
   CoffeeTemperature_Test_CoffeeTest10_functionDAE,
   CoffeeTemperature_Test_CoffeeTest10_functionLocalKnownVars,
   CoffeeTemperature_Test_CoffeeTest10_input_function,
   CoffeeTemperature_Test_CoffeeTest10_input_function_init,
   CoffeeTemperature_Test_CoffeeTest10_input_function_updateStartValues,
   CoffeeTemperature_Test_CoffeeTest10_output_function,
   CoffeeTemperature_Test_CoffeeTest10_function_storeDelayed,
   CoffeeTemperature_Test_CoffeeTest10_updateBoundVariableAttributes,
   CoffeeTemperature_Test_CoffeeTest10_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   CoffeeTemperature_Test_CoffeeTest10_functionInitialEquations_lambda0,
   CoffeeTemperature_Test_CoffeeTest10_functionRemovedInitialEquations,
   CoffeeTemperature_Test_CoffeeTest10_updateBoundParameters,
   CoffeeTemperature_Test_CoffeeTest10_checkForAsserts,
   CoffeeTemperature_Test_CoffeeTest10_function_ZeroCrossingsEquations,
   CoffeeTemperature_Test_CoffeeTest10_function_ZeroCrossings,
   CoffeeTemperature_Test_CoffeeTest10_function_updateRelations,
   CoffeeTemperature_Test_CoffeeTest10_zeroCrossingDescription,
   CoffeeTemperature_Test_CoffeeTest10_relationDescription,
   CoffeeTemperature_Test_CoffeeTest10_function_initSample,
   CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_A,
   CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_B,
   CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_C,
   CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_D,
   CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianA,
   CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianB,
   CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianC,
   CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianD,
   CoffeeTemperature_Test_CoffeeTest10_functionJacA_column,
   CoffeeTemperature_Test_CoffeeTest10_functionJacB_column,
   CoffeeTemperature_Test_CoffeeTest10_functionJacC_column,
   CoffeeTemperature_Test_CoffeeTest10_functionJacD_column,
   CoffeeTemperature_Test_CoffeeTest10_linear_model_frame,
   CoffeeTemperature_Test_CoffeeTest10_linear_model_datarecovery_frame,
   CoffeeTemperature_Test_CoffeeTest10_mayer,
   CoffeeTemperature_Test_CoffeeTest10_lagrange,
   CoffeeTemperature_Test_CoffeeTest10_pickUpBoundsForInputsInOptimization,
   CoffeeTemperature_Test_CoffeeTest10_setInputData,
   CoffeeTemperature_Test_CoffeeTest10_getTimeGrid,
   CoffeeTemperature_Test_CoffeeTest10_symbolicInlineSystem,
   CoffeeTemperature_Test_CoffeeTest10_function_initSynchronous,
   CoffeeTemperature_Test_CoffeeTest10_function_updateSynchronous,
   CoffeeTemperature_Test_CoffeeTest10_function_equationsSynchronous,
   CoffeeTemperature_Test_CoffeeTest10_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "CoffeeTemperature"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,17,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,106,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Complex"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,7,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,45,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "Modelica"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,8,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,60,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/ModelicaServices 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,16,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,68,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void CoffeeTemperature_Test_CoffeeTest10_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &CoffeeTemperature_Test_CoffeeTest10_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "CoffeeTemperature.Test.CoffeeTest10";
  data->modelData->modelFilePrefix = "CoffeeTemperature.Test.CoffeeTest10";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1";
  data->modelData->modelGUID = "{2ed45231-4315-403f-8069-1debe9043dd1}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "CoffeeTemperature.Test.CoffeeTest10_init.c"
    ;
  static const char contents_info[] =
    #include "CoffeeTemperature.Test.CoffeeTest10_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "CoffeeTemperature.Test.CoffeeTest10_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "CoffeeTemperature.Test.CoffeeTest10_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 7;
  data->modelData->nVariablesReal = 393;
  data->modelData->nDiscreteReal = 6;
  data->modelData->nVariablesInteger = 30;
  data->modelData->nVariablesBoolean = 10;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 150;
  data->modelData->nParametersInteger = 36;
  data->modelData->nParametersBoolean = 44;
  data->modelData->nParametersString = 2;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 135;
  data->modelData->nAliasInteger = 4;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 16;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 16;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 1;
  data->modelData->modelDataXml.fileName = "CoffeeTemperature.Test.CoffeeTest10_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 197;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1167;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 0;
  data->modelData->nNonLinearSystems = 15;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 5;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    CoffeeTemperature_Test_CoffeeTest10_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


