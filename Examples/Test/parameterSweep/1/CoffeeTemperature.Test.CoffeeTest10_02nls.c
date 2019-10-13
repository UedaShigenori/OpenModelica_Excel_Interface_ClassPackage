/* Non Linear Systems */
#include "CoffeeTemperature.Test.CoffeeTest10_model.h"
#include "CoffeeTemperature.Test.CoffeeTest10_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
 equation index: 818
 type: SIMPLE_ASSIGN
 der(cup._U) = cup.m * $DER.cup.medium.u - yakan.mb_flow * cup.medium.u
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,818};
  data->localData[0]->realVars[14] /* der(cup.U) DUMMY_DER */ = (data->localData[0]->realVars[245] /* cup.m DUMMY_STATE */) * (data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */) - ((data->localData[0]->realVars[371] /* yakan.mb_flow variable */) * (data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */));
  TRACE_POP
}
/*
 equation index: 819
 type: SIMPLE_ASSIGN
 cup._Wb_flow = $DER.cup.U - (cup.Hb_flow + cup.heatTransfer.Q_flows[1])
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,819};
  data->localData[0]->realVars[240] /* cup.Wb_flow variable */ = data->localData[0]->realVars[14] /* der(cup.U) DUMMY_DER */ - (data->localData[0]->realVars[237] /* cup.Hb_flow variable */ + data->localData[0]->realVars[241] /* cup.heatTransfer.Q_flows[1] variable */);
  TRACE_POP
}
/*
 equation index: 820
 type: SIMPLE_ASSIGN
 der(cup._V) = (-cup.Wb_flow) / cup.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,820};
  data->localData[0]->realVars[15] /* der(cup.V) DUMMY_DER */ = DIVISION_SIM((-data->localData[0]->realVars[240] /* cup.Wb_flow variable */),data->simulationInfo->realParameter[31],"cup.p_ambient",equationIndexes);
  TRACE_POP
}
/*
 equation index: 821
 type: SIMPLE_ASSIGN
 der(cup._medium._h) = $DER.cup.medium.u - cup.p_ambient * $DER.cup.heatTransfer.states[1].d / cup.heatTransfer.states[1].d ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,821};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */;
  data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */ = data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */ - ((data->simulationInfo->realParameter[31]) * (DIVISION_SIM(data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */,(tmp0 * tmp0),"cup.heatTransfer.states[1].d ^ 2.0",equationIndexes)));
  TRACE_POP
}

void residualFunc824(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,824};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_818(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_819(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_820(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_821(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[15] /* der(cup.V) DUMMY_DER */) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */) + (data->localData[0]->realVars[239] /* cup.V DUMMY_STATE */) * (data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */) + data->localData[0]->realVars[371] /* yakan.mb_flow variable */;

  res[1] = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, omc_Modelica_Media_Common_IF97BaseTwoPhase(threadData, (modelica_integer)data->localData[0]->integerVars[16] /* $cse3.phase DISCRETE */, (modelica_integer)data->localData[0]->integerVars[17] /* $cse3.region DISCRETE */, data->localData[0]->realVars[170] /* $cse3.p variable */, data->localData[0]->realVars[165] /* $cse3.T variable */, data->localData[0]->realVars[169] /* $cse3.h variable */, data->localData[0]->realVars[164] /* $cse3.R variable */, data->localData[0]->realVars[166] /* $cse3.cp variable */, data->localData[0]->realVars[167] /* $cse3.cv variable */, data->localData[0]->realVars[173] /* $cse3.rho variable */, data->localData[0]->realVars[174] /* $cse3.s variable */, data->localData[0]->realVars[172] /* $cse3.pt variable */, data->localData[0]->realVars[171] /* $cse3.pd variable */, data->localData[0]->realVars[176] /* $cse3.vt variable */, data->localData[0]->realVars[175] /* $cse3.vp variable */, data->localData[0]->realVars[177] /* $cse3.x variable */, data->localData[0]->realVars[168] /* $cse3.dpT variable */), 0.0, data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */) - data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS824(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS824(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for der(cup.heatTransfer.states[1].d) */
  sysData->nominal[i] = data->modelData->realVarsData[16].attribute /* der(cup.heatTransfer.states[1].d) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[16].attribute /* der(cup.heatTransfer.states[1].d) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[16].attribute /* der(cup.heatTransfer.states[1].d) */.max;
  /* static nls data for der(cup.medium.u) */
  sysData->nominal[i] = data->modelData->realVarsData[18].attribute /* der(cup.medium.u) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[18].attribute /* der(cup.medium.u) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[18].attribute /* der(cup.medium.u) */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS824(sysData);
}

void getIterationVarsNLS824(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */;
  array[1] = data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */;
}


/* inner equations */

/*
 equation index: 796
 type: SIMPLE_ASSIGN
 der(yakan._U) = yakan.m * $DER.yakan.medium.u + yakan.mb_flow * yakan.medium.u
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,796};
  data->localData[0]->realVars[19] /* der(yakan.U) DUMMY_DER */ = (data->localData[0]->realVars[370] /* yakan.m DUMMY_STATE */) * (data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */) + (data->localData[0]->realVars[371] /* yakan.mb_flow variable */) * (data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */);
  TRACE_POP
}
/*
 equation index: 797
 type: SIMPLE_ASSIGN
 yakan._Wb_flow = $DER.yakan.U - (yakan.Hb_flow + yakan.heatTransfer.Q_flows[1])
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,797};
  data->localData[0]->realVars[365] /* yakan.Wb_flow variable */ = data->localData[0]->realVars[19] /* der(yakan.U) DUMMY_DER */ - (data->localData[0]->realVars[362] /* yakan.Hb_flow variable */ + data->localData[0]->realVars[366] /* yakan.heatTransfer.Q_flows[1] variable */);
  TRACE_POP
}
/*
 equation index: 798
 type: SIMPLE_ASSIGN
 der(yakan._V) = (-yakan.Wb_flow) / yakan.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,798};
  data->localData[0]->realVars[20] /* der(yakan.V) DUMMY_DER */ = DIVISION_SIM((-data->localData[0]->realVars[365] /* yakan.Wb_flow variable */),data->simulationInfo->realParameter[143],"yakan.p_ambient",equationIndexes);
  TRACE_POP
}
/*
 equation index: 799
 type: SIMPLE_ASSIGN
 der(yakan._medium._h) = $DER.yakan.medium.u - yakan.p_ambient * $DER.yakan.heatTransfer.states[1].d / yakan.heatTransfer.states[1].d ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,799};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */;
  data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */ = data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */ - ((data->simulationInfo->realParameter[143]) * (DIVISION_SIM(data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */,(tmp0 * tmp0),"yakan.heatTransfer.states[1].d ^ 2.0",equationIndexes)));
  TRACE_POP
}

void residualFunc802(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,802};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */ = xloc[0];
  data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_796(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_797(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_798(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_799(data, threadData);
  /* body */
  res[0] = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, omc_Modelica_Media_Common_IF97BaseTwoPhase(threadData, (modelica_integer)data->localData[0]->integerVars[20] /* $cse8.phase DISCRETE */, (modelica_integer)data->localData[0]->integerVars[21] /* $cse8.region DISCRETE */, data->localData[0]->realVars[223] /* $cse8.p variable */, data->localData[0]->realVars[218] /* $cse8.T variable */, data->localData[0]->realVars[222] /* $cse8.h variable */, data->localData[0]->realVars[217] /* $cse8.R variable */, data->localData[0]->realVars[219] /* $cse8.cp variable */, data->localData[0]->realVars[220] /* $cse8.cv variable */, data->localData[0]->realVars[226] /* $cse8.rho variable */, data->localData[0]->realVars[227] /* $cse8.s variable */, data->localData[0]->realVars[225] /* $cse8.pt variable */, data->localData[0]->realVars[224] /* $cse8.pd variable */, data->localData[0]->realVars[229] /* $cse8.vt variable */, data->localData[0]->realVars[228] /* $cse8.vp variable */, data->localData[0]->realVars[230] /* $cse8.x variable */, data->localData[0]->realVars[221] /* $cse8.dpT variable */), 0.0, data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */) - data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */;

  res[1] = (data->localData[0]->realVars[20] /* der(yakan.V) DUMMY_DER */) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */) + (data->localData[0]->realVars[364] /* yakan.V DUMMY_STATE */) * (data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */) - data->localData[0]->realVars[371] /* yakan.mb_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS802(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS802(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for der(yakan.heatTransfer.states[1].d) */
  sysData->nominal[i] = data->modelData->realVarsData[21].attribute /* der(yakan.heatTransfer.states[1].d) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[21].attribute /* der(yakan.heatTransfer.states[1].d) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[21].attribute /* der(yakan.heatTransfer.states[1].d) */.max;
  /* static nls data for der(yakan.medium.u) */
  sysData->nominal[i] = data->modelData->realVarsData[23].attribute /* der(yakan.medium.u) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[23].attribute /* der(yakan.medium.u) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[23].attribute /* der(yakan.medium.u) */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS802(sysData);
}

void getIterationVarsNLS802(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */;
  array[1] = data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */;
}


/* inner equations */

/*
 equation index: 762
 type: ALGORITHM
 
   $cse12 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, cup.medium.h, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[4] /* $cse12.phase DISCRETE */ = tmp0._phase;
  data->localData[0]->integerVars[5] /* $cse12.region DISCRETE */ = tmp0._region;
  data->localData[0]->realVars[70] /* $cse12.p variable */ = tmp0._p;
  data->localData[0]->realVars[65] /* $cse12.T variable */ = tmp0._T;
  data->localData[0]->realVars[69] /* $cse12.h variable */ = tmp0._h;
  data->localData[0]->realVars[64] /* $cse12.R variable */ = tmp0._R;
  data->localData[0]->realVars[66] /* $cse12.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[67] /* $cse12.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[73] /* $cse12.rho variable */ = tmp0._rho;
  data->localData[0]->realVars[74] /* $cse12.s variable */ = tmp0._s;
  data->localData[0]->realVars[72] /* $cse12.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[71] /* $cse12.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[76] /* $cse12.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[75] /* $cse12.vp variable */ = tmp0._vp;
  data->localData[0]->realVars[77] /* $cse12.x variable */ = tmp0._x;
  data->localData[0]->realVars[68] /* $cse12.dpT variable */ = tmp0._dpT;
  TRACE_POP
}
/*
 equation index: 763
 type: SIMPLE_ASSIGN
 pipe._flowModel._rhos[2] = $cse12.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */ = data->localData[0]->realVars[73] /* $cse12.rho variable */;
  TRACE_POP
}
/*
 equation index: 764
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[2]._T = $cse12.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */ = data->localData[0]->realVars[65] /* $cse12.T variable */;
  TRACE_POP
}
/*
 equation index: 765
 type: SIMPLE_ASSIGN
 pipe._flowModel._mus[2] = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(pipe.flowModel.rhos[2], pipe.flowModel.states[2].T, pipe.flowModel.states[2].p, 0)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */, data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, ((modelica_integer) 0));
  TRACE_POP
}
/*
 equation index: 766
 type: ALGORITHM
 
   $cse17 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, pipe.port_b.h_outflow, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[8] /* $cse17.phase DISCRETE */ = tmp0._phase;
  data->localData[0]->integerVars[9] /* $cse17.region DISCRETE */ = tmp0._region;
  data->localData[0]->realVars[101] /* $cse17.p variable */ = tmp0._p;
  data->localData[0]->realVars[96] /* $cse17.T variable */ = tmp0._T;
  data->localData[0]->realVars[100] /* $cse17.h variable */ = tmp0._h;
  data->localData[0]->realVars[95] /* $cse17.R variable */ = tmp0._R;
  data->localData[0]->realVars[97] /* $cse17.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[98] /* $cse17.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[104] /* $cse17.rho variable */ = tmp0._rho;
  data->localData[0]->realVars[105] /* $cse17.s variable */ = tmp0._s;
  data->localData[0]->realVars[103] /* $cse17.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[102] /* $cse17.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[107] /* $cse17.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[106] /* $cse17.vp variable */ = tmp0._vp;
  data->localData[0]->realVars[108] /* $cse17.x variable */ = tmp0._x;
  data->localData[0]->realVars[99] /* $cse17.dpT variable */ = tmp0._dpT;
  TRACE_POP
}
/*
 equation index: 767
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_a._d = $cse17.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */ = data->localData[0]->realVars[104] /* $cse17.rho variable */;
  TRACE_POP
}
/*
 equation index: 768
 type: ALGORITHM
 
   $cse11 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[1].p, yakan.medium.h, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[2] /* $cse11.phase DISCRETE */ = tmp0._phase;
  data->localData[0]->integerVars[3] /* $cse11.region DISCRETE */ = tmp0._region;
  data->localData[0]->realVars[56] /* $cse11.p variable */ = tmp0._p;
  data->localData[0]->realVars[51] /* $cse11.T variable */ = tmp0._T;
  data->localData[0]->realVars[55] /* $cse11.h variable */ = tmp0._h;
  data->localData[0]->realVars[50] /* $cse11.R variable */ = tmp0._R;
  data->localData[0]->realVars[52] /* $cse11.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[53] /* $cse11.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[59] /* $cse11.rho variable */ = tmp0._rho;
  data->localData[0]->realVars[60] /* $cse11.s variable */ = tmp0._s;
  data->localData[0]->realVars[58] /* $cse11.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[57] /* $cse11.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[62] /* $cse11.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[61] /* $cse11.vp variable */ = tmp0._vp;
  data->localData[0]->realVars[63] /* $cse11.x variable */ = tmp0._x;
  data->localData[0]->realVars[54] /* $cse11.dpT variable */ = tmp0._dpT;
  TRACE_POP
}
/*
 equation index: 769
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[1]._T = $cse11.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */ = data->localData[0]->realVars[51] /* $cse11.T variable */;
  TRACE_POP
}
/*
 equation index: 770
 type: SIMPLE_ASSIGN
 pipe._flowModel._rhos[1] = $cse11.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */ = data->localData[0]->realVars[59] /* $cse11.rho variable */;
  TRACE_POP
}
/*
 equation index: 771
 type: SIMPLE_ASSIGN
 pipe._flowModel._mus[1] = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(pipe.flowModel.rhos[1], pipe.flowModel.states[1].T, pipe.flowModel.states[1].p, 0)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */, data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, ((modelica_integer) 0));
  TRACE_POP
}
/*
 equation index: 772
 type: SIMPLE_ASSIGN
 pipe._flowModel._Fs_p[1] = pipe.crossArea * (pipe.flowModel.states[2].p - pipe.flowModel.states[1].p) * pipe.flowModel.nParallel
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[321] /* pipe.flowModel.Fs_p[1] variable */ = (data->simulationInfo->realParameter[56]) * ((data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ - data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */) * (data->simulationInfo->realParameter[66]));
  TRACE_POP
}
/*
 equation index: 773
 type: SIMPLE_ASSIGN
 pipe._flowModel._dps_fg[1] = (-2.0) * pipe.flowModel.Fs_p[1] / (pipe.flowModel.nParallel * 2.0 * pipe.crossArea)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */ = DIVISION_SIM((-2.0) * (data->localData[0]->realVars[321] /* pipe.flowModel.Fs_p[1] variable */),(data->simulationInfo->realParameter[66]) * ((2.0) * (data->simulationInfo->realParameter[56])),"pipe.flowModel.nParallel * 2.0 * pipe.crossArea",equationIndexes);
  TRACE_POP
}
/*
 equation index: 774
 type: SIMPLE_ASSIGN
 $cse13 = Modelica.Fluid.Pipes.StaticPipe$pipe.FlowModel$pipe$flowModel.WallFriction.massFlowRate_dp_staticHead(pipe.flowModel.dps_fg[1], pipe.flowModel.rhos[1], pipe.flowModel.rhos[2], pipe.flowModel.mus[1], pipe.flowModel.mus[2], pipe.length, pipe.flowModel.diameters[1], pipe.height_ab * pipe.flowModel.g, pipe.crossArea, pipe.roughness, pipe.flowModel.dp_small, pipe.flowModel.Re_turbulent)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[78] /* $cse13 variable */ = omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */, data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */, data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */, data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */, data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */, data->simulationInfo->realParameter[71], data->localData[0]->realVars[324] /* pipe.flowModel.diameters[1] variable */, (data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[61]), data->simulationInfo->realParameter[56], data->simulationInfo->realParameter[77], data->simulationInfo->realParameter[60], data->simulationInfo->realParameter[58]);
  TRACE_POP
}
/*
 equation index: 775
 type: SIMPLE_ASSIGN
 yakan._mb_flow = (-$cse13) * pipe.flowModel.nParallel
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->localData[0]->realVars[371] /* yakan.mb_flow variable */ = ((-data->localData[0]->realVars[78] /* $cse13 variable */)) * (data->simulationInfo->realParameter[66]);
  TRACE_POP
}
/*
 equation index: 776
 type: ALGORITHM
 
   $cse18 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.ports[1].p, cup.medium.h, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[256] /* cup.ports[1].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[10] /* $cse18.phase DISCRETE */ = tmp0._phase;
  data->localData[0]->integerVars[11] /* $cse18.region DISCRETE */ = tmp0._region;
  data->localData[0]->realVars[115] /* $cse18.p variable */ = tmp0._p;
  data->localData[0]->realVars[110] /* $cse18.T variable */ = tmp0._T;
  data->localData[0]->realVars[114] /* $cse18.h variable */ = tmp0._h;
  data->localData[0]->realVars[109] /* $cse18.R variable */ = tmp0._R;
  data->localData[0]->realVars[111] /* $cse18.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[112] /* $cse18.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[118] /* $cse18.rho variable */ = tmp0._rho;
  data->localData[0]->realVars[119] /* $cse18.s variable */ = tmp0._s;
  data->localData[0]->realVars[117] /* $cse18.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[116] /* $cse18.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[121] /* $cse18.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[120] /* $cse18.vp variable */ = tmp0._vp;
  data->localData[0]->realVars[122] /* $cse18.x variable */ = tmp0._x;
  data->localData[0]->realVars[113] /* $cse18.dpT variable */ = tmp0._dpT;
  TRACE_POP
}
/*
 equation index: 777
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_b._d = $cse18.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */ = data->localData[0]->realVars[118] /* $cse18.rho variable */;
  TRACE_POP
}
/*
 equation index: 778
 type: SIMPLE_ASSIGN
 valveIncompressible1._dp = pipe.flowModel.states[2].p - cup.ports[1].p
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */ = data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ - data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  TRACE_POP
}
/*
 equation index: 779
 type: SIMPLE_ASSIGN
 $cse16 = Modelica.Fluid.Utilities.regRoot2(valveIncompressible1.dp, valveIncompressible1.dp_small, valveIncompressible1.state_a.d, valveIncompressible1.state_b.d, false, 1.0)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[94] /* $cse16 variable */ = omc_Modelica_Fluid_Utilities_regRoot2(threadData, data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */, data->simulationInfo->realParameter[108], data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */, data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */, 0, 1.0);
  TRACE_POP
}
/*
 equation index: 780
 type: SIMPLE_ASSIGN
 cup._inFlow[1] = not cup.regularFlow[1] and (cup.s[1] > 0.0 or cup.portsData[1].height >= cup.fluidLevel_max)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[260] /* cup.s[1] variable */, 0.0, 15, Greater);
  tmp1 = GreaterEq(data->simulationInfo->realParameter[34],data->simulationInfo->realParameter[22]);
  data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */ = ((!data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */) && (tmp0 || tmp1));
  TRACE_POP
}
/*
 equation index: 781
 type: SIMPLE_ASSIGN
 yakan._inFlow[1] = not yakan.regularFlow[1] and (yakan.s[1] > 0.0 or yakan.portsData[1].height >= yakan.fluidLevel_max)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[385] /* yakan.s[1] variable */, 0.0, 14, Greater);
  tmp1 = GreaterEq(data->simulationInfo->realParameter[146],data->simulationInfo->realParameter[134]);
  data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */ = ((!data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */) && (tmp0 || tmp1));
  TRACE_POP
}

void residualFunc787(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,787};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[385] /* yakan.s[1] variable */ = xloc[0];
  data->localData[0]->realVars[260] /* cup.s[1] variable */ = xloc[1];
  data->localData[0]->realVars[256] /* cup.ports[1].p variable */ = xloc[2];
  data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ = xloc[3];
  data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_762(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_763(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_764(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_765(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_766(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_767(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_768(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_769(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_770(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_771(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_772(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_773(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_774(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_775(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_776(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_777(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_778(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_779(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_780(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_781(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[357] /* valveIncompressible1.relativeFlowCoefficient variable */) * ((data->simulationInfo->realParameter[104]) * (data->localData[0]->realVars[94] /* $cse16 variable */)) + data->localData[0]->realVars[371] /* yakan.mb_flow variable */;

  tmp2 = (modelica_boolean)data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */;
  if(tmp2)
  {
    tmp0 = DIVISION_SIM(data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */,data->simulationInfo->realParameter[149],"yakan.vesselArea",equationIndexes);
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */,data->simulationInfo->realParameter[149],"yakan.vesselArea",equationIndexes);
    tmp3 = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - (data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */ + (0.5) * ((real_int_pow(threadData, data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */, -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, data->localData[0]->realVars[371] /* yakan.mb_flow variable */, data->simulationInfo->realParameter[142], (-1.0 + data->simulationInfo->realParameter[147] + (tmp0 * tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[384] /* yakan.ports_penetration[1] variable */,data->localData[0]->realVars[380] /* yakan.portInDensities[1] variable */,"yakan.portInDensities[1]",equationIndexes)), DIVISION_SIM(1.0 + data->simulationInfo->realParameter[148] - ((tmp1 * tmp1)),(data->localData[0]->realVars[384] /* yakan.ports_penetration[1] variable */) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */),"yakan.ports_penetration[1] * yakan.heatTransfer.states[1].d",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp3 = (data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */:data->localData[0]->realVars[371] /* yakan.mb_flow variable */);
  }
  res[1] = tmp3;

  res[2] = (data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */?data->localData[0]->realVars[385] /* yakan.s[1] variable */ - (data->localData[0]->realVars[5] /* yakan.level STATE(1) */ - data->simulationInfo->realParameter[146]):(data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?data->localData[0]->realVars[385] /* yakan.s[1] variable */ - data->localData[0]->realVars[371] /* yakan.mb_flow variable */:data->localData[0]->realVars[385] /* yakan.s[1] variable */ - ((9.869232667160129e-006) * ((data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */) * (data->simulationInfo->realParameter[146] - data->localData[0]->realVars[5] /* yakan.level STATE(1) */)))));

  tmp6 = (modelica_boolean)data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */;
  if(tmp6)
  {
    tmp4 = DIVISION_SIM(data->localData[0]->realVars[253] /* cup.portAreas[1] variable */,data->simulationInfo->realParameter[37],"cup.vesselArea",equationIndexes);
    tmp5 = DIVISION_SIM(data->localData[0]->realVars[253] /* cup.portAreas[1] variable */,data->simulationInfo->realParameter[37],"cup.vesselArea",equationIndexes);
    tmp7 = data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - (data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */ + (0.5) * ((real_int_pow(threadData, data->localData[0]->realVars[253] /* cup.portAreas[1] variable */, -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (-data->localData[0]->realVars[371] /* yakan.mb_flow variable */), data->simulationInfo->realParameter[30], (-1.0 + data->simulationInfo->realParameter[35] + (tmp4 * tmp4)) * (DIVISION_SIM(data->localData[0]->realVars[259] /* cup.ports_penetration[1] variable */,data->localData[0]->realVars[254] /* cup.portInDensities[1] variable */,"cup.portInDensities[1]",equationIndexes)), DIVISION_SIM(1.0 + data->simulationInfo->realParameter[36] - ((tmp5 * tmp5)),(data->localData[0]->realVars[259] /* cup.ports_penetration[1] variable */) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */),"cup.ports_penetration[1] * cup.heatTransfer.states[1].d",equationIndexes), 0, 1.0))));
  }
  else
  {
    tmp7 = (data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */:(-data->localData[0]->realVars[371] /* yakan.mb_flow variable */));
  }
  res[3] = tmp7;

  res[4] = (data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */?data->localData[0]->realVars[260] /* cup.s[1] variable */ - (data->localData[0]->realVars[0] /* cup.level STATE(1) */ - data->simulationInfo->realParameter[34]):(data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?data->localData[0]->realVars[260] /* cup.s[1] variable */ + data->localData[0]->realVars[371] /* yakan.mb_flow variable */:data->localData[0]->realVars[260] /* cup.s[1] variable */ - ((9.869232667160129e-006) * ((data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */) * (data->simulationInfo->realParameter[34] - data->localData[0]->realVars[0] /* cup.level STATE(1) */)))));
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS787(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,2,3,5,5};
  const int rowIndex[17] = {1,2,3,4,0,3,4,0,1,2,3,4,0,1,2,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(17*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 17;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 17*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[2] = 3;
  inSysData->sparsePattern.colorCols[0] = 4;
  inSysData->sparsePattern.colorCols[1] = 4;
}
void initializeStaticDataNLS787(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for yakan.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.max;
  /* static nls data for cup.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[260].attribute /* cup.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[260].attribute /* cup.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[260].attribute /* cup.s[1] */.max;
  /* static nls data for cup.ports[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.max;
  /* static nls data for pipe.flowModel.states[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.max;
  /* static nls data for pipe.flowModel.states[2].p */
  sysData->nominal[i] = data->modelData->realVarsData[338].attribute /* pipe.flowModel.states[2].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[338].attribute /* pipe.flowModel.states[2].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[338].attribute /* pipe.flowModel.states[2].p */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS787(sysData);
}

void getIterationVarsNLS787(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[385] /* yakan.s[1] variable */;
  array[1] = data->localData[0]->realVars[260] /* cup.s[1] variable */;
  array[2] = data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  array[3] = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */;
  array[4] = data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */;
}


/* inner equations */

/*
 equation index: 680
 type: SIMPLE_ASSIGN
 naturalConvection21._k = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.thermalConductivity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.ThermodynamicState(101325.0, naturalConvection21.T), 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->localData[0]->realVars[317] /* naturalConvection21.k variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_thermalConductivity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[312] /* naturalConvection21.T variable */), ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 681
 type: SIMPLE_ASSIGN
 naturalConvection21._Cp = smooth(0, if noEvent(naturalConvection21.T < 1000) then 287.0512249529787 * naturalConvection21.T ^ (-2.0) * (10099.5016 + naturalConvection21.T * (-196.827561 + naturalConvection21.T * (5.00915511 + naturalConvection21.T * (-0.00576101373 + naturalConvection21.T * (1.06685993e-005 + naturalConvection21.T * (-7.94029797e-009 + 2.18523191e-012 * naturalConvection21.T)))))) else 287.0512249529787 * naturalConvection21.T ^ (-2.0) * (241521.443 + naturalConvection21.T * (-1257.8746 + naturalConvection21.T * (5.14455867 + naturalConvection21.T * (-0.000213854179 + naturalConvection21.T * (7.06522784e-008 + naturalConvection21.T * (-1.07148349e-011 + 6.57780015e-016 * naturalConvection21.T)))))))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[312] /* naturalConvection21.T variable */,((modelica_integer) 1000));
  data->localData[0]->realVars[305] /* naturalConvection21.Cp variable */ = (tmp0?(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[312] /* naturalConvection21.T variable */, -2)) * (10099.5016 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-196.827561 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (5.00915511 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-0.00576101373 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (1.06685993e-005 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-7.94029797e-009 + (2.18523191e-012) * (data->localData[0]->realVars[312] /* naturalConvection21.T variable */)))))))):(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[312] /* naturalConvection21.T variable */, -2)) * (241521.443 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-1257.8746 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (5.14455867 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-0.000213854179 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (7.06522784e-008 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-1.07148349e-011 + (6.57780015e-016) * (data->localData[0]->realVars[312] /* naturalConvection21.T variable */)))))))));
  TRACE_POP
}
/*
 equation index: 682
 type: SIMPLE_ASSIGN
 naturalConvection21._mu = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.dynamicViscosity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.ThermodynamicState(101325.0, naturalConvection21.T))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->localData[0]->realVars[318] /* naturalConvection21.mu variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_dynamicViscosity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[312] /* naturalConvection21.T variable */));
  TRACE_POP
}
/*
 equation index: 683
 type: SIMPLE_ASSIGN
 naturalConvection21._Pr = naturalConvection21.mu * naturalConvection21.Cp / naturalConvection21.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->localData[0]->realVars[309] /* naturalConvection21.Pr variable */ = (data->localData[0]->realVars[318] /* naturalConvection21.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[305] /* naturalConvection21.Cp variable */,data->localData[0]->realVars[317] /* naturalConvection21.k variable */,"naturalConvection21.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 684
 type: SIMPLE_ASSIGN
 naturalConvection21._d = 352.9857781188631 / naturalConvection21.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->localData[0]->realVars[314] /* naturalConvection21.d variable */ = DIVISION_SIM(352.9857781188631,data->localData[0]->realVars[312] /* naturalConvection21.T variable */,"naturalConvection21.T",equationIndexes);
  TRACE_POP
}
/*
 equation index: 685
 type: SIMPLE_ASSIGN
 naturalConvection21._beta = 352.9857781188631 / (naturalConvection21.T ^ 2.0 * naturalConvection21.d)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[312] /* naturalConvection21.T variable */;
  data->localData[0]->realVars[313] /* naturalConvection21.beta variable */ = DIVISION_SIM(352.9857781188631,((tmp0 * tmp0)) * (data->localData[0]->realVars[314] /* naturalConvection21.d variable */),"naturalConvection21.T ^ 2.0 * naturalConvection21.d",equationIndexes);
  TRACE_POP
}
/*
 equation index: 686
 type: SIMPLE_ASSIGN
 naturalConvection1._solid._T = (-fixedTemperature2.T) - (-2.0) * naturalConvection21.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ = (-data->simulationInfo->realParameter[45]) - ((-2.0) * (data->localData[0]->realVars[312] /* naturalConvection21.T variable */));
  TRACE_POP
}
/*
 equation index: 687
 type: SIMPLE_ASSIGN
 naturalConvection1._T = 0.5 * (naturalConvection1.solid.T + fixedTemperature2.T)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->localData[0]->realVars[292] /* naturalConvection1.T variable */ = (0.5) * (data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ + data->simulationInfo->realParameter[45]);
  TRACE_POP
}
/*
 equation index: 688
 type: SIMPLE_ASSIGN
 naturalConvection1._Cp = smooth(0, if noEvent(naturalConvection1.T < 1000) then 287.0512249529787 * naturalConvection1.T ^ (-2.0) * (10099.5016 + naturalConvection1.T * (-196.827561 + naturalConvection1.T * (5.00915511 + naturalConvection1.T * (-0.00576101373 + naturalConvection1.T * (1.06685993e-005 + naturalConvection1.T * (-7.94029797e-009 + 2.18523191e-012 * naturalConvection1.T)))))) else 287.0512249529787 * naturalConvection1.T ^ (-2.0) * (241521.443 + naturalConvection1.T * (-1257.8746 + naturalConvection1.T * (5.14455867 + naturalConvection1.T * (-0.000213854179 + naturalConvection1.T * (7.06522784e-008 + naturalConvection1.T * (-1.07148349e-011 + 6.57780015e-016 * naturalConvection1.T)))))))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[292] /* naturalConvection1.T variable */,((modelica_integer) 1000));
  data->localData[0]->realVars[285] /* naturalConvection1.Cp variable */ = (tmp0?(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[292] /* naturalConvection1.T variable */, -2)) * (10099.5016 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-196.827561 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (5.00915511 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-0.00576101373 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (1.06685993e-005 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-7.94029797e-009 + (2.18523191e-012) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */)))))))):(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[292] /* naturalConvection1.T variable */, -2)) * (241521.443 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-1257.8746 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (5.14455867 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-0.000213854179 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (7.06522784e-008 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-1.07148349e-011 + (6.57780015e-016) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */)))))))));
  TRACE_POP
}
/*
 equation index: 689
 type: SIMPLE_ASSIGN
 naturalConvection1._mu = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.dynamicViscosity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.ThermodynamicState(101325.0, naturalConvection1.T))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->localData[0]->realVars[298] /* naturalConvection1.mu variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_dynamicViscosity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[292] /* naturalConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 690
 type: SIMPLE_ASSIGN
 naturalConvection1._k = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.thermalConductivity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.ThermodynamicState(101325.0, naturalConvection1.T), 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->localData[0]->realVars[297] /* naturalConvection1.k variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_thermalConductivity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[292] /* naturalConvection1.T variable */), ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 691
 type: SIMPLE_ASSIGN
 naturalConvection1._Pr = naturalConvection1.mu * naturalConvection1.Cp / naturalConvection1.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */ = (data->localData[0]->realVars[298] /* naturalConvection1.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[285] /* naturalConvection1.Cp variable */,data->localData[0]->realVars[297] /* naturalConvection1.k variable */,"naturalConvection1.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 692
 type: SIMPLE_ASSIGN
 naturalConvection1._d = 352.9857781188631 / naturalConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[294] /* naturalConvection1.d variable */ = DIVISION_SIM(352.9857781188631,data->localData[0]->realVars[292] /* naturalConvection1.T variable */,"naturalConvection1.T",equationIndexes);
  TRACE_POP
}
/*
 equation index: 693
 type: SIMPLE_ASSIGN
 naturalConvection1._beta = 352.9857781188631 / (naturalConvection1.T ^ 2.0 * naturalConvection1.d)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[292] /* naturalConvection1.T variable */;
  data->localData[0]->realVars[293] /* naturalConvection1.beta variable */ = DIVISION_SIM(352.9857781188631,((tmp0 * tmp0)) * (data->localData[0]->realVars[294] /* naturalConvection1.d variable */),"naturalConvection1.T ^ 2.0 * naturalConvection1.d",equationIndexes);
  TRACE_POP
}
/*
 equation index: 694
 type: SIMPLE_ASSIGN
 naturalConvection1._A2 = (1.0 + 0.0625 * (0.492 / naturalConvection1.Pr) ^ 9.0) ^ 0.2962962962962963
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = 1.0 + (0.0625) * (real_int_pow(threadData, DIVISION_SIM(0.492,data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */,"naturalConvection1.Pr",equationIndexes), 9));
  tmp1 = 0.2962962962962963;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[283] /* naturalConvection1.A2 variable */ = tmp2;
  TRACE_POP
}
/*
 equation index: 695
 type: SIMPLE_ASSIGN
 naturalConvection1._dT = naturalConvection1.solid.T - fixedTemperature2.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->localData[0]->realVars[295] /* naturalConvection1.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->simulationInfo->realParameter[45];
  TRACE_POP
}
/*
 equation index: 696
 type: SIMPLE_ASSIGN
 naturalConvection1._Gr = 9.810000000000001 * naturalConvection1.d ^ 2.0 * naturalConvection1.beta * naturalConvection1.dT * naturalConvection1.L ^ 3.0 / naturalConvection1.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[294] /* naturalConvection1.d variable */;
  tmp1 = data->simulationInfo->realParameter[51];
  tmp2 = data->localData[0]->realVars[298] /* naturalConvection1.mu variable */;
  data->localData[0]->realVars[287] /* naturalConvection1.Gr variable */ = (9.810000000000001) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[293] /* naturalConvection1.beta variable */) * ((data->localData[0]->realVars[295] /* naturalConvection1.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"naturalConvection1.mu ^ 2.0",equationIndexes)))));
  TRACE_POP
}
/*
 equation index: 697
 type: SIMPLE_ASSIGN
 naturalConvection1._Ra = naturalConvection1.Pr * naturalConvection1.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->localData[0]->realVars[291] /* naturalConvection1.Ra variable */ = (data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */) * (data->localData[0]->realVars[287] /* naturalConvection1.Gr variable */);
  TRACE_POP
}
/*
 equation index: 698
 type: SIMPLE_ASSIGN
 naturalConvection1._A1 = 0.387 * naturalConvection1.Ra ^ 0.1666666666666667
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[291] /* naturalConvection1.Ra variable */;
  tmp1 = 0.1666666666666667;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[282] /* naturalConvection1.A1 variable */ = (0.387) * (tmp2);
  TRACE_POP
}
/*
 equation index: 699
 type: SIMPLE_ASSIGN
 naturalConvection1._Nu = (0.825 + naturalConvection1.A1 / naturalConvection1.A2) ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  modelica_real tmp0;
  tmp0 = 0.825 + DIVISION_SIM(data->localData[0]->realVars[282] /* naturalConvection1.A1 variable */,data->localData[0]->realVars[283] /* naturalConvection1.A2 variable */,"naturalConvection1.A2",equationIndexes);
  data->localData[0]->realVars[288] /* naturalConvection1.Nu variable */ = (tmp0 * tmp0);
  TRACE_POP
}
/*
 equation index: 700
 type: SIMPLE_ASSIGN
 naturalConvection1._h = naturalConvection1.k * naturalConvection1.Nu / naturalConvection1.L
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->localData[0]->realVars[296] /* naturalConvection1.h variable */ = (data->localData[0]->realVars[297] /* naturalConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[288] /* naturalConvection1.Nu variable */,data->simulationInfo->realParameter[51],"naturalConvection1.L",equationIndexes));
  TRACE_POP
}
/*
 equation index: 701
 type: SIMPLE_ASSIGN
 naturalConvection1._Gc = naturalConvection1.area * naturalConvection1.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->localData[0]->realVars[286] /* naturalConvection1.Gc variable */ = (data->simulationInfo->realParameter[52]) * (data->localData[0]->realVars[296] /* naturalConvection1.h variable */);
  TRACE_POP
}
/*
 equation index: 702
 type: SIMPLE_ASSIGN
 naturalConvection1._Q_flow = naturalConvection1.Gc * naturalConvection1.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->localData[0]->realVars[290] /* naturalConvection1.Q_flow variable */ = (data->localData[0]->realVars[286] /* naturalConvection1.Gc variable */) * (data->localData[0]->realVars[295] /* naturalConvection1.dT variable */);
  TRACE_POP
}
/*
 equation index: 703
 type: SIMPLE_ASSIGN
 naturalConvection21._dT = naturalConvection1.solid.T - fixedTemperature2.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->localData[0]->realVars[315] /* naturalConvection21.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->simulationInfo->realParameter[45];
  TRACE_POP
}
/*
 equation index: 704
 type: SIMPLE_ASSIGN
 naturalConvection21._Gr = 9.810000000000001 * naturalConvection21.d ^ 2.0 * naturalConvection21.beta * naturalConvection21.dT * naturalConvection21.L ^ 3.0 / naturalConvection21.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[314] /* naturalConvection21.d variable */;
  tmp1 = data->simulationInfo->realParameter[53];
  tmp2 = data->localData[0]->realVars[318] /* naturalConvection21.mu variable */;
  data->localData[0]->realVars[307] /* naturalConvection21.Gr variable */ = (9.810000000000001) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[313] /* naturalConvection21.beta variable */) * ((data->localData[0]->realVars[315] /* naturalConvection21.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"naturalConvection21.mu ^ 2.0",equationIndexes)))));
  TRACE_POP
}
/*
 equation index: 705
 type: SIMPLE_ASSIGN
 naturalConvection21._Ra = naturalConvection21.Pr * naturalConvection21.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */ = (data->localData[0]->realVars[309] /* naturalConvection21.Pr variable */) * (data->localData[0]->realVars[307] /* naturalConvection21.Gr variable */);
  TRACE_POP
}
/*
 equation index: 706
 type: SIMPLE_ASSIGN
 naturalConvection21._Nu = 0.27 * naturalConvection21.Ra ^ 0.25
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */;
  tmp1 = 0.25;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[308] /* naturalConvection21.Nu variable */ = (0.27) * (tmp2);
  TRACE_POP
}
/*
 equation index: 707
 type: SIMPLE_ASSIGN
 naturalConvection21._h = if naturalConvection21.Ra > 100000.0 then naturalConvection21.k * naturalConvection21.Nu / naturalConvection21.L else 5.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  modelica_boolean tmp0;
  RELATIONHYSTERESIS(tmp0, data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */, 100000.0, 5, Greater);
  data->localData[0]->realVars[316] /* naturalConvection21.h variable */ = (tmp0?(data->localData[0]->realVars[317] /* naturalConvection21.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[308] /* naturalConvection21.Nu variable */,data->simulationInfo->realParameter[53],"naturalConvection21.L",equationIndexes)):5.0);
  TRACE_POP
}
/*
 equation index: 708
 type: SIMPLE_ASSIGN
 naturalConvection21._Gc = naturalConvection21.area * naturalConvection21.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->localData[0]->realVars[306] /* naturalConvection21.Gc variable */ = (data->simulationInfo->realParameter[54]) * (data->localData[0]->realVars[316] /* naturalConvection21.h variable */);
  TRACE_POP
}
/*
 equation index: 709
 type: SIMPLE_ASSIGN
 naturalConvection21._Q_flow = naturalConvection21.Gc * naturalConvection21.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->localData[0]->realVars[310] /* naturalConvection21.Q_flow variable */ = (data->localData[0]->realVars[306] /* naturalConvection21.Gc variable */) * (data->localData[0]->realVars[315] /* naturalConvection21.dT variable */);
  TRACE_POP
}
/*
 equation index: 710
 type: SIMPLE_ASSIGN
 thermalConductor2._Q_flow = (-naturalConvection1.Q_flow) - naturalConvection21.Q_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->localData[0]->realVars[346] /* thermalConductor2.Q_flow variable */ = (-data->localData[0]->realVars[290] /* naturalConvection1.Q_flow variable */) - data->localData[0]->realVars[310] /* naturalConvection21.Q_flow variable */;
  TRACE_POP
}
/*
 equation index: 711
 type: SIMPLE_ASSIGN
 thermalConductor2._dT = thermalConductor2.Q_flow / thermalConductor2.G
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->localData[0]->realVars[347] /* thermalConductor2.dT variable */ = DIVISION_SIM(data->localData[0]->realVars[346] /* thermalConductor2.Q_flow variable */,data->simulationInfo->realParameter[90],"thermalConductor2.G",equationIndexes);
  TRACE_POP
}

void residualFunc713(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,713};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[312] /* naturalConvection21.T variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_680(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_681(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_682(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_683(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_684(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_685(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_686(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_687(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_688(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_689(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_690(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_691(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_692(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_693(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_694(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_695(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_696(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_697(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_698(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_699(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_700(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_701(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_702(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_703(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_704(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_705(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_706(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_707(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_708(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_709(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_710(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_711(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ + (-data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */) - data->localData[0]->realVars[347] /* thermalConductor2.dT variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS713(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS713(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for naturalConvection21.T */
  sysData->nominal[i] = data->modelData->realVarsData[312].attribute /* naturalConvection21.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[312].attribute /* naturalConvection21.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[312].attribute /* naturalConvection21.T */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS713(sysData);
}

void getIterationVarsNLS713(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[312] /* naturalConvection21.T variable */;
}


/* inner equations */

/*
 equation index: 655
 type: ALGORITHM
 
   $cse20 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(101325.0, enclosedConvection1.T, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, 101325.0, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, ((modelica_integer) 0));
  data->localData[0]->integerVars[12] /* $cse20.phase DISCRETE */ = tmp0._phase;
  data->localData[0]->integerVars[13] /* $cse20.region DISCRETE */ = tmp0._region;
  data->localData[0]->realVars[142] /* $cse20.p variable */ = tmp0._p;
  data->localData[0]->realVars[137] /* $cse20.T variable */ = tmp0._T;
  data->localData[0]->realVars[141] /* $cse20.h variable */ = tmp0._h;
  data->localData[0]->realVars[136] /* $cse20.R variable */ = tmp0._R;
  data->localData[0]->realVars[138] /* $cse20.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[139] /* $cse20.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[145] /* $cse20.rho variable */ = tmp0._rho;
  data->localData[0]->realVars[146] /* $cse20.s variable */ = tmp0._s;
  data->localData[0]->realVars[144] /* $cse20.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[143] /* $cse20.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[148] /* $cse20.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[147] /* $cse20.vp variable */ = tmp0._vp;
  data->localData[0]->realVars[149] /* $cse20.x variable */ = tmp0._x;
  data->localData[0]->realVars[140] /* $cse20.dpT variable */ = tmp0._dpT;
  TRACE_POP
}
/*
 equation index: 656
 type: SIMPLE_ASSIGN
 enclosedConvection1._state._h = $cse20.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */ = data->localData[0]->realVars[141] /* $cse20.h variable */;
  TRACE_POP
}
/*
 equation index: 657
 type: SIMPLE_ASSIGN
 enclosedConvection1._d = $cse20.rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->localData[0]->realVars[271] /* enclosedConvection1.d variable */ = data->localData[0]->realVars[145] /* $cse20.rho variable */;
  TRACE_POP
}
/*
 equation index: 658
 type: SIMPLE_ASSIGN
 enclosedConvection1._k = Modelica.Media.Water.IF97_Utilities.thermalConductivity(enclosedConvection1.d, enclosedConvection1.T, 101325.0, 1, true)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->localData[0]->realVars[274] /* enclosedConvection1.k variable */ = omc_Modelica_Media_Water_IF97__Utilities_thermalConductivity(threadData, data->localData[0]->realVars[271] /* enclosedConvection1.d variable */, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, 101325.0, ((modelica_integer) 1), 1);
  TRACE_POP
}
/*
 equation index: 659
 type: SIMPLE_ASSIGN
 enclosedConvection1._mu = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(enclosedConvection1.d, enclosedConvection1.T, 101325.0, 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[271] /* enclosedConvection1.d variable */, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, 101325.0, ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 660
 type: ALGORITHM
 
   $cse21 := Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(101325.0, enclosedConvection1.state.h, 0, 0);
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  Modelica_Media_Common_IF97BaseTwoPhase tmp0;
  tmp0 = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, 101325.0, data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */, ((modelica_integer) 0), ((modelica_integer) 0));
  data->localData[0]->integerVars[14] /* $cse21.phase DISCRETE */ = tmp0._phase;
  data->localData[0]->integerVars[15] /* $cse21.region DISCRETE */ = tmp0._region;
  data->localData[0]->realVars[156] /* $cse21.p variable */ = tmp0._p;
  data->localData[0]->realVars[151] /* $cse21.T variable */ = tmp0._T;
  data->localData[0]->realVars[155] /* $cse21.h variable */ = tmp0._h;
  data->localData[0]->realVars[150] /* $cse21.R variable */ = tmp0._R;
  data->localData[0]->realVars[152] /* $cse21.cp variable */ = tmp0._cp;
  data->localData[0]->realVars[153] /* $cse21.cv variable */ = tmp0._cv;
  data->localData[0]->realVars[159] /* $cse21.rho variable */ = tmp0._rho;
  data->localData[0]->realVars[160] /* $cse21.s variable */ = tmp0._s;
  data->localData[0]->realVars[158] /* $cse21.pt variable */ = tmp0._pt;
  data->localData[0]->realVars[157] /* $cse21.pd variable */ = tmp0._pd;
  data->localData[0]->realVars[162] /* $cse21.vt variable */ = tmp0._vt;
  data->localData[0]->realVars[161] /* $cse21.vp variable */ = tmp0._vp;
  data->localData[0]->realVars[163] /* $cse21.x variable */ = tmp0._x;
  data->localData[0]->realVars[154] /* $cse21.dpT variable */ = tmp0._dpT;
  TRACE_POP
}
/*
 equation index: 661
 type: SIMPLE_ASSIGN
 enclosedConvection1._Cp = $cse21.cp
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->localData[0]->realVars[263] /* enclosedConvection1.Cp variable */ = data->localData[0]->realVars[152] /* $cse21.cp variable */;
  TRACE_POP
}
/*
 equation index: 662
 type: SIMPLE_ASSIGN
 enclosedConvection1._Pr = enclosedConvection1.mu * enclosedConvection1.Cp / enclosedConvection1.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */ = (data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[263] /* enclosedConvection1.Cp variable */,data->localData[0]->realVars[274] /* enclosedConvection1.k variable */,"enclosedConvection1.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 663
 type: SIMPLE_ASSIGN
 enclosedConvection1._solid._T = (-cup.heatTransfer.Ts[1]) - (-2.0) * enclosedConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */ = (-data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */) - ((-2.0) * (data->localData[0]->realVars[269] /* enclosedConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 664
 type: SIMPLE_ASSIGN
 enclosedConvection1._dT = enclosedConvection1.solid.T - cup.heatTransfer.Ts[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */ = data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */ - data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */;
  TRACE_POP
}
/*
 equation index: 665
 type: SIMPLE_ASSIGN
 enclosedConvection1._Gr = 20.601 * enclosedConvection1.d ^ 2.0 * enclosedConvection1.dT * enclosedConvection1.L ^ 3.0 / enclosedConvection1.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[271] /* enclosedConvection1.d variable */;
  tmp1 = data->simulationInfo->realParameter[43];
  tmp2 = data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */;
  data->localData[0]->realVars[265] /* enclosedConvection1.Gr variable */ = (20.601) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"enclosedConvection1.mu ^ 2.0",equationIndexes))));
  TRACE_POP
}
/*
 equation index: 666
 type: SIMPLE_ASSIGN
 enclosedConvection1._Ra = enclosedConvection1.Pr * enclosedConvection1.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */ = (data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */) * (data->localData[0]->realVars[265] /* enclosedConvection1.Gr variable */);
  TRACE_POP
}
/*
 equation index: 667
 type: SIMPLE_ASSIGN
 enclosedConvection1._A1 = enclosedConvection1.Pr * enclosedConvection1.Ra / (0.2 + enclosedConvection1.Pr)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */ = (data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */) * (DIVISION_SIM(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */,0.2 + data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,"0.2 + enclosedConvection1.Pr",equationIndexes));
  TRACE_POP
}
/*
 equation index: 668
 type: SIMPLE_ASSIGN
 enclosedConvection1._Nu = if 2.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 10.0 and enclosedConvection1.Pr < 100000.0 and 1000.0 < enclosedConvection1.Ra and enclosedConvection1.Ra < 10000000000.0 then (-0.055) * enclosedConvection1.A1 ^ 0.28 * enclosedConvection1.H / enclosedConvection1.L else if 1.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 2.0 and 0.001 < enclosedConvection1.Pr and enclosedConvection1.Pr < 100000.0 and enclosedConvection1.A1 > 100.0 then 0.18 * enclosedConvection1.A1 ^ 0.29 else 1.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  tmp0 = Less(2.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  tmp1 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),10.0);
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, 9, Less);
  RELATIONHYSTERESIS(tmp3, 1000.0, data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, 10, Less);
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, 10000000000.0, 11, Less);
  tmp26 = (modelica_boolean)((((tmp0 && tmp1) && tmp2) && tmp3) && tmp4);
  if(tmp26)
  {
    tmp5 = data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */;
    tmp6 = 0.28;
    if(tmp5 < 0.0 && tmp6 != 0.0)
    {
      tmp8 = modf(tmp6, &tmp9);
      
      if(tmp8 > 0.5)
      {
        tmp8 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp8 < -0.5)
      {
        tmp8 += 1.0;
        tmp9 -= 1.0;
      }
      
      if(fabs(tmp8) < 1e-10)
        tmp7 = pow(tmp5, tmp9);
      else
      {
        tmp11 = modf(1.0/tmp6, &tmp10);
        if(tmp11 > 0.5)
        {
          tmp11 -= 1.0;
          tmp10 += 1.0;
        }
        else if(tmp11 < -0.5)
        {
          tmp11 += 1.0;
          tmp10 -= 1.0;
        }
        if(fabs(tmp11) < 1e-10 && ((unsigned long)tmp10 & 1))
        {
          tmp7 = -pow(-tmp5, tmp8)*pow(tmp5, tmp9);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
        }
      }
    }
    else
    {
      tmp7 = pow(tmp5, tmp6);
    }
    if(isnan(tmp7) || isinf(tmp7))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
    }
    tmp27 = (-0.055) * ((tmp7) * (DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes)));
  }
  else
  {
    tmp12 = Less(1.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
    tmp13 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),2.0);
    RELATIONHYSTERESIS(tmp14, 0.001, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 12, Less);
    RELATIONHYSTERESIS(tmp15, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, 9, Less);
    RELATIONHYSTERESIS(tmp16, data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */, 100.0, 13, Greater);
    tmp24 = (modelica_boolean)((((tmp12 && tmp13) && tmp14) && tmp15) && tmp16);
    if(tmp24)
    {
      tmp17 = data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */;
      tmp18 = 0.29;
      if(tmp17 < 0.0 && tmp18 != 0.0)
      {
        tmp20 = modf(tmp18, &tmp21);
        
        if(tmp20 > 0.5)
        {
          tmp20 -= 1.0;
          tmp21 += 1.0;
        }
        else if(tmp20 < -0.5)
        {
          tmp20 += 1.0;
          tmp21 -= 1.0;
        }
        
        if(fabs(tmp20) < 1e-10)
          tmp19 = pow(tmp17, tmp21);
        else
        {
          tmp23 = modf(1.0/tmp18, &tmp22);
          if(tmp23 > 0.5)
          {
            tmp23 -= 1.0;
            tmp22 += 1.0;
          }
          else if(tmp23 < -0.5)
          {
            tmp23 += 1.0;
            tmp22 -= 1.0;
          }
          if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
          {
            tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
          }
        }
      }
      else
      {
        tmp19 = pow(tmp17, tmp18);
      }
      if(isnan(tmp19) || isinf(tmp19))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
      tmp25 = (0.18) * (tmp19);
    }
    else
    {
      tmp25 = 1.0;
    }
    tmp27 = tmp25;
  }
  data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */ = tmp27;
  TRACE_POP
}
/*
 equation index: 669
 type: SIMPLE_ASSIGN
 enclosedConvection1._h = if 2.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 10.0 and enclosedConvection1.Pr < 100000.0 and 1000.0 < enclosedConvection1.Ra and enclosedConvection1.Ra < 10000000000.0 then enclosedConvection1.k * enclosedConvection1.Nu / enclosedConvection1.L else if 1.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 2.0 and 0.001 < enclosedConvection1.Pr and enclosedConvection1.Pr < 100000.0 and enclosedConvection1.A1 > 100.0 then enclosedConvection1.k * enclosedConvection1.Nu / enclosedConvection1.L else 1000.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  tmp0 = Less(2.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  tmp1 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),10.0);
  RELATIONHYSTERESIS(tmp2, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, 9, Less);
  RELATIONHYSTERESIS(tmp3, 1000.0, data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, 10, Less);
  RELATIONHYSTERESIS(tmp4, data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, 10000000000.0, 11, Less);
  tmp10 = (modelica_boolean)((((tmp0 && tmp1) && tmp2) && tmp3) && tmp4);
  if(tmp10)
  {
    tmp11 = (data->localData[0]->realVars[274] /* enclosedConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */,data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  }
  else
  {
    tmp5 = Less(1.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
    tmp6 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),2.0);
    RELATIONHYSTERESIS(tmp7, 0.001, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 12, Less);
    RELATIONHYSTERESIS(tmp8, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, 9, Less);
    RELATIONHYSTERESIS(tmp9, data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */, 100.0, 13, Greater);
    tmp11 = (((((tmp5 && tmp6) && tmp7) && tmp8) && tmp9)?(data->localData[0]->realVars[274] /* enclosedConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */,data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes)):1000.0);
  }
  data->localData[0]->realVars[273] /* enclosedConvection1.h variable */ = tmp11;
  TRACE_POP
}
/*
 equation index: 670
 type: SIMPLE_ASSIGN
 enclosedConvection1._Gc = enclosedConvection1.area * enclosedConvection1.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->localData[0]->realVars[264] /* enclosedConvection1.Gc variable */ = (data->simulationInfo->realParameter[44]) * (data->localData[0]->realVars[273] /* enclosedConvection1.h variable */);
  TRACE_POP
}
/*
 equation index: 671
 type: SIMPLE_ASSIGN
 thermalConductor1._Q_flow = enclosedConvection1.Gc * enclosedConvection1.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->localData[0]->realVars[344] /* thermalConductor1.Q_flow variable */ = (data->localData[0]->realVars[264] /* enclosedConvection1.Gc variable */) * (data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */);
  TRACE_POP
}
/*
 equation index: 672
 type: SIMPLE_ASSIGN
 thermalConductor1._dT = thermalConductor1.Q_flow / thermalConductor1.G
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->localData[0]->realVars[345] /* thermalConductor1.dT variable */ = DIVISION_SIM(data->localData[0]->realVars[344] /* thermalConductor1.Q_flow variable */,data->simulationInfo->realParameter[89],"thermalConductor1.G",equationIndexes);
  TRACE_POP
}

void residualFunc674(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,674};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[269] /* enclosedConvection1.T variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_655(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_656(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_657(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_658(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_659(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_660(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_661(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_662(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_663(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_664(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_665(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_666(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_667(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_668(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_669(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_670(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_671(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_672(data, threadData);
  /* body */
  res[0] = data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */ + (-data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */) - data->localData[0]->realVars[345] /* thermalConductor1.dT variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS674(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS674(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for enclosedConvection1.T */
  sysData->nominal[i] = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS674(sysData);
}

void getIterationVarsNLS674(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[269] /* enclosedConvection1.T variable */;
}


/* inner equations */

/*
 equation index: 616
 type: SIMPLE_ASSIGN
 der(cup._V) = (-cup.Wb_flow) / cup.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->localData[0]->realVars[15] /* der(cup.V) DUMMY_DER */ = DIVISION_SIM((-data->localData[0]->realVars[240] /* cup.Wb_flow variable */),data->simulationInfo->realParameter[31],"cup.p_ambient",equationIndexes);
  TRACE_POP
}
/*
 equation index: 617
 type: SIMPLE_ASSIGN
 der(cup._U) = cup.Hb_flow + cup.heatTransfer.Q_flows[1] + cup.Wb_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->localData[0]->realVars[14] /* der(cup.U) DUMMY_DER */ = data->localData[0]->realVars[237] /* cup.Hb_flow variable */ + data->localData[0]->realVars[241] /* cup.heatTransfer.Q_flows[1] variable */ + data->localData[0]->realVars[240] /* cup.Wb_flow variable */;
  TRACE_POP
}
/*
 equation index: 618
 type: SIMPLE_ASSIGN
 der(cup._heatTransfer._states[1]._d) = Modelica.Media.Water.IF97_Utilities.rho_ph_der(cup.p_ambient, cup.medium.h, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.p_ambient, cup.medium.h, cup.heatTransfer.states[1].phase, 0), 0.0, $DER.cup.medium.h)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */ = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0)), 0.0, data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */);
  TRACE_POP
}
/*
 equation index: 619
 type: SIMPLE_ASSIGN
 der(cup._medium._u) = $DER.cup.medium.h + cup.p_ambient * $DER.cup.heatTransfer.states[1].d / cup.heatTransfer.states[1].d ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */;
  data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */ = data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */ + (data->simulationInfo->realParameter[31]) * (DIVISION_SIM(data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */,(tmp0 * tmp0),"cup.heatTransfer.states[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}

void residualFunc622(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,622};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[240] /* cup.Wb_flow variable */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_616(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_617(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_618(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_619(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[17] /* der(cup.m) DUMMY_DER */) * (data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */) + (data->localData[0]->realVars[245] /* cup.m DUMMY_STATE */) * (data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */) - data->localData[0]->realVars[14] /* der(cup.U) DUMMY_DER */;

  res[1] = (data->localData[0]->realVars[15] /* der(cup.V) DUMMY_DER */) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */) + (data->localData[0]->realVars[239] /* cup.V DUMMY_STATE */) * (data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */) - data->localData[0]->realVars[17] /* der(cup.m) DUMMY_DER */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS622(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS622(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for der(cup.medium.h) */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* der(cup.medium.h) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* der(cup.medium.h) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* der(cup.medium.h) */.max;
  /* static nls data for cup.Wb_flow */
  sysData->nominal[i] = data->modelData->realVarsData[240].attribute /* cup.Wb_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[240].attribute /* cup.Wb_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[240].attribute /* cup.Wb_flow */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS622(sysData);
}

void getIterationVarsNLS622(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */;
  array[1] = data->localData[0]->realVars[240] /* cup.Wb_flow variable */;
}


/* inner equations */

/*
 equation index: 600
 type: SIMPLE_ASSIGN
 der(yakan._V) = (-yakan.Wb_flow) / yakan.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->localData[0]->realVars[20] /* der(yakan.V) DUMMY_DER */ = DIVISION_SIM((-data->localData[0]->realVars[365] /* yakan.Wb_flow variable */),data->simulationInfo->realParameter[143],"yakan.p_ambient",equationIndexes);
  TRACE_POP
}
/*
 equation index: 601
 type: SIMPLE_ASSIGN
 der(yakan._U) = yakan.Hb_flow + yakan.heatTransfer.Q_flows[1] + yakan.Wb_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->localData[0]->realVars[19] /* der(yakan.U) DUMMY_DER */ = data->localData[0]->realVars[362] /* yakan.Hb_flow variable */ + data->localData[0]->realVars[366] /* yakan.heatTransfer.Q_flows[1] variable */ + data->localData[0]->realVars[365] /* yakan.Wb_flow variable */;
  TRACE_POP
}
/*
 equation index: 602
 type: SIMPLE_ASSIGN
 der(yakan._heatTransfer._states[1]._d) = Modelica.Media.Water.IF97_Utilities.rho_ph_der(yakan.p_ambient, yakan.medium.h, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.p_ambient, yakan.medium.h, yakan.heatTransfer.states[1].phase, 0), 0.0, $DER.yakan.medium.h)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */ = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0)), 0.0, data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */);
  TRACE_POP
}
/*
 equation index: 603
 type: SIMPLE_ASSIGN
 der(yakan._medium._u) = $DER.yakan.medium.h + yakan.p_ambient * $DER.yakan.heatTransfer.states[1].d / yakan.heatTransfer.states[1].d ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */;
  data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */ = data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */ + (data->simulationInfo->realParameter[143]) * (DIVISION_SIM(data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */,(tmp0 * tmp0),"yakan.heatTransfer.states[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}

void residualFunc606(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,606};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[365] /* yakan.Wb_flow variable */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_600(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_601(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_602(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_603(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[371] /* yakan.mb_flow variable */) * (data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */) + (data->localData[0]->realVars[370] /* yakan.m DUMMY_STATE */) * (data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */) - data->localData[0]->realVars[19] /* der(yakan.U) DUMMY_DER */;

  res[1] = (data->localData[0]->realVars[20] /* der(yakan.V) DUMMY_DER */) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */) + (data->localData[0]->realVars[364] /* yakan.V DUMMY_STATE */) * (data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */) - data->localData[0]->realVars[371] /* yakan.mb_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS606(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS606(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for der(yakan.medium.h) */
  sysData->nominal[i] = data->modelData->realVarsData[13].attribute /* der(yakan.medium.h) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[13].attribute /* der(yakan.medium.h) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[13].attribute /* der(yakan.medium.h) */.max;
  /* static nls data for yakan.Wb_flow */
  sysData->nominal[i] = data->modelData->realVarsData[365].attribute /* yakan.Wb_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[365].attribute /* yakan.Wb_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[365].attribute /* yakan.Wb_flow */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS606(sysData);
}

void getIterationVarsNLS606(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */;
  array[1] = data->localData[0]->realVars[365] /* yakan.Wb_flow variable */;
}


/* inner equations */

/*
 equation index: 569
 type: SIMPLE_ASSIGN
 yakan._mb_flow = (pipe.height_ab * pipe.flowModel.g * pipe.flowModel.rho_nominal - pipe.flowModel.dps_fg[1]) * pipe.flowModel.m_flow_nominal / pipe.flowModel.dp_nominal
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->localData[0]->realVars[371] /* yakan.mb_flow variable */ = (((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[61])) * (data->simulationInfo->realParameter[69]) - data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */) * (DIVISION_SIM(data->simulationInfo->realParameter[62],data->simulationInfo->realParameter[59],"pipe.flowModel.dp_nominal",equationIndexes));
  TRACE_POP
}
/*
 equation index: 570
 type: SIMPLE_ASSIGN
 pipe._flowModel._Fs_p[1] = 0.5 * (-pipe.flowModel.dps_fg[1]) * pipe.flowModel.nParallel * 2.0 * pipe.crossArea
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->localData[0]->realVars[321] /* pipe.flowModel.Fs_p[1] variable */ = (0.5) * (((-data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */)) * (((data->simulationInfo->realParameter[66]) * (2.0)) * (data->simulationInfo->realParameter[56])));
  TRACE_POP
}
/*
 equation index: 571
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[2]._p = (pipe.flowModel.Fs_p[1] - (-pipe.flowModel.states[1].p) * pipe.flowModel.nParallel * pipe.crossArea) / (pipe.crossArea * pipe.flowModel.nParallel)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ = DIVISION_SIM(data->localData[0]->realVars[321] /* pipe.flowModel.Fs_p[1] variable */ - ((((-data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */)) * (data->simulationInfo->realParameter[66])) * (data->simulationInfo->realParameter[56])),(data->simulationInfo->realParameter[56]) * (data->simulationInfo->realParameter[66]),"pipe.crossArea * pipe.flowModel.nParallel",equationIndexes);
  TRACE_POP
}
/*
 equation index: 572
 type: SIMPLE_ASSIGN
 valveIncompressible1._dp = pipe.flowModel.states[2].p - cup.ports[1].p
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */ = data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ - data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  TRACE_POP
}
/*
 equation index: 573
 type: SIMPLE_ASSIGN
 cup._inFlow[1] = not cup.regularFlow[1] and (cup.s[1] > 0.0 or cup.portsData[1].height >= cup.fluidLevel_max)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater(data->localData[0]->realVars[260] /* cup.s[1] variable */,0.0);
  tmp1 = GreaterEq(data->simulationInfo->realParameter[34],data->simulationInfo->realParameter[22]);
  data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */ = ((!data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */) && (tmp0 || tmp1));
  TRACE_POP
}
/*
 equation index: 574
 type: SIMPLE_ASSIGN
 yakan._inFlow[1] = not yakan.regularFlow[1] and (yakan.s[1] > 0.0 or yakan.portsData[1].height >= yakan.fluidLevel_max)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater(data->localData[0]->realVars[385] /* yakan.s[1] variable */,0.0);
  tmp1 = GreaterEq(data->simulationInfo->realParameter[146],data->simulationInfo->realParameter[134]);
  data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */ = ((!data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */) && (tmp0 || tmp1));
  TRACE_POP
}

void residualFunc589(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,589};
  int i;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[385] /* yakan.s[1] variable */ = xloc[0];
  data->localData[0]->realVars[260] /* cup.s[1] variable */ = xloc[1];
  data->localData[0]->realVars[256] /* cup.ports[1].p variable */ = xloc[2];
  data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ = xloc[3];
  data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_569(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_570(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_571(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_572(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_573(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_574(data, threadData);
  /* body */
  res[0] = (data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */?data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */:(data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */:data->localData[0]->realVars[371] /* yakan.mb_flow variable */));

  res[1] = (data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */?data->localData[0]->realVars[385] /* yakan.s[1] variable */ - (data->localData[0]->realVars[5] /* yakan.level STATE(1) */ - data->simulationInfo->realParameter[146]):(data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?data->localData[0]->realVars[385] /* yakan.s[1] variable */ - data->localData[0]->realVars[371] /* yakan.mb_flow variable */:data->localData[0]->realVars[385] /* yakan.s[1] variable */ - ((9.869232667160129e-006) * ((data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */) * (data->simulationInfo->realParameter[146] - data->localData[0]->realVars[5] /* yakan.level STATE(1) */)))));

  res[2] = (data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */?data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */:(data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */:(-data->localData[0]->realVars[371] /* yakan.mb_flow variable */)));

  res[3] = (data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */?data->localData[0]->realVars[260] /* cup.s[1] variable */ - (data->localData[0]->realVars[0] /* cup.level STATE(1) */ - data->simulationInfo->realParameter[34]):(data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?data->localData[0]->realVars[260] /* cup.s[1] variable */ + data->localData[0]->realVars[371] /* yakan.mb_flow variable */:data->localData[0]->realVars[260] /* cup.s[1] variable */ - ((9.869232667160129e-006) * ((data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */) * (data->simulationInfo->realParameter[34] - data->localData[0]->realVars[0] /* cup.level STATE(1) */)))));

  res[4] = (data->localData[0]->realVars[357] /* valveIncompressible1.relativeFlowCoefficient variable */) * ((data->simulationInfo->realParameter[123]) * (DIVISION_SIM(data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */,data->simulationInfo->realParameter[107],"valveIncompressible1.dp_nominal",equationIndexes))) + data->localData[0]->realVars[371] /* yakan.mb_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS589(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,2,3,3,5};
  const int rowIndex[15] = {0,1,2,3,2,3,4,0,1,4,0,1,2,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 15;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[2] = 3;
  inSysData->sparsePattern.colorCols[0] = 4;
  inSysData->sparsePattern.colorCols[1] = 4;
}
void initializeStaticDataNLS589(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for yakan.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.max;
  /* static nls data for cup.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[260].attribute /* cup.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[260].attribute /* cup.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[260].attribute /* cup.s[1] */.max;
  /* static nls data for cup.ports[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.max;
  /* static nls data for pipe.flowModel.states[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.max;
  /* static nls data for pipe.flowModel.dps_fg[1] */
  sysData->nominal[i] = data->modelData->realVarsData[328].attribute /* pipe.flowModel.dps_fg[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[328].attribute /* pipe.flowModel.dps_fg[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[328].attribute /* pipe.flowModel.dps_fg[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS589(sysData);
}

void getIterationVarsNLS589(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[385] /* yakan.s[1] variable */;
  array[1] = data->localData[0]->realVars[260] /* cup.s[1] variable */;
  array[2] = data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  array[3] = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */;
  array[4] = data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */;
}


/* inner equations */

/*
 equation index: 525
 type: SIMPLE_ASSIGN
 enclosedConvection1._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(101325.0, enclosedConvection1.T, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->localData[0]->realVars[271] /* enclosedConvection1.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, 101325.0, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
 equation index: 526
 type: SIMPLE_ASSIGN
 enclosedConvection1._k = Modelica.Media.Water.IF97_Utilities.thermalConductivity(enclosedConvection1.d, enclosedConvection1.T, 101325.0, 1, true)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->localData[0]->realVars[274] /* enclosedConvection1.k variable */ = omc_Modelica_Media_Water_IF97__Utilities_thermalConductivity(threadData, data->localData[0]->realVars[271] /* enclosedConvection1.d variable */, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, 101325.0, ((modelica_integer) 1), 1);
  TRACE_POP
}
/*
 equation index: 527
 type: SIMPLE_ASSIGN
 enclosedConvection1._mu = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(enclosedConvection1.d, enclosedConvection1.T, 101325.0, 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[271] /* enclosedConvection1.d variable */, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, 101325.0, ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 528
 type: SIMPLE_ASSIGN
 enclosedConvection1._state._h = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(101325.0, enclosedConvection1.T, 0).h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, 101325.0, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, ((modelica_integer) 0))._h;
  TRACE_POP
}
/*
 equation index: 529
 type: SIMPLE_ASSIGN
 enclosedConvection1._Cp = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(101325.0, enclosedConvection1.state.h, 0, 0).cp
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->localData[0]->realVars[263] /* enclosedConvection1.Cp variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, 101325.0, data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */, ((modelica_integer) 0), ((modelica_integer) 0))._cp;
  TRACE_POP
}
/*
 equation index: 530
 type: SIMPLE_ASSIGN
 enclosedConvection1._Pr = enclosedConvection1.mu * enclosedConvection1.Cp / enclosedConvection1.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */ = (data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[263] /* enclosedConvection1.Cp variable */,data->localData[0]->realVars[274] /* enclosedConvection1.k variable */,"enclosedConvection1.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 531
 type: SIMPLE_ASSIGN
 enclosedConvection1._solid._T = (-cup.heatTransfer.Ts[1]) - (-2.0) * enclosedConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */ = (-data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */) - ((-2.0) * (data->localData[0]->realVars[269] /* enclosedConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 532
 type: SIMPLE_ASSIGN
 thermalConductor1._dT = heatCapacitor1.T - enclosedConvection1.solid.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->localData[0]->realVars[345] /* thermalConductor1.dT variable */ = data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */ - data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */;
  TRACE_POP
}
/*
 equation index: 533
 type: SIMPLE_ASSIGN
 thermalConductor1._Q_flow = thermalConductor1.G * thermalConductor1.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->localData[0]->realVars[344] /* thermalConductor1.Q_flow variable */ = (data->simulationInfo->realParameter[89]) * (data->localData[0]->realVars[345] /* thermalConductor1.dT variable */);
  TRACE_POP
}
/*
 equation index: 534
 type: SIMPLE_ASSIGN
 enclosedConvection1._dT = enclosedConvection1.solid.T - cup.heatTransfer.Ts[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */ = data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */ - data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */;
  TRACE_POP
}
/*
 equation index: 535
 type: SIMPLE_ASSIGN
 enclosedConvection1._Gr = 20.601 * enclosedConvection1.d ^ 2.0 * enclosedConvection1.dT * enclosedConvection1.L ^ 3.0 / enclosedConvection1.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[271] /* enclosedConvection1.d variable */;
  tmp1 = data->simulationInfo->realParameter[43];
  tmp2 = data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */;
  data->localData[0]->realVars[265] /* enclosedConvection1.Gr variable */ = (20.601) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"enclosedConvection1.mu ^ 2.0",equationIndexes))));
  TRACE_POP
}
/*
 equation index: 536
 type: SIMPLE_ASSIGN
 enclosedConvection1._Ra = enclosedConvection1.Pr * enclosedConvection1.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */ = (data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */) * (data->localData[0]->realVars[265] /* enclosedConvection1.Gr variable */);
  TRACE_POP
}
/*
 equation index: 537
 type: SIMPLE_ASSIGN
 enclosedConvection1._A1 = enclosedConvection1.Pr * enclosedConvection1.Ra / (0.2 + enclosedConvection1.Pr)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */ = (data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */) * (DIVISION_SIM(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */,0.2 + data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,"0.2 + enclosedConvection1.Pr",equationIndexes));
  TRACE_POP
}
/*
 equation index: 538
 type: SIMPLE_ASSIGN
 enclosedConvection1._Nu = if 2.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 10.0 and enclosedConvection1.Pr < 100000.0 and 1000.0 < enclosedConvection1.Ra and enclosedConvection1.Ra < 10000000000.0 then (-0.055) * enclosedConvection1.A1 ^ 0.28 * enclosedConvection1.H / enclosedConvection1.L else if 1.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 2.0 and 0.001 < enclosedConvection1.Pr and enclosedConvection1.Pr < 100000.0 and enclosedConvection1.A1 > 100.0 then 0.18 * enclosedConvection1.A1 ^ 0.29 else 1.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  tmp0 = Less(2.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  tmp1 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),10.0);
  tmp2 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
  tmp3 = Less(1000.0,data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */);
  tmp4 = Less(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */,10000000000.0);
  tmp26 = (modelica_boolean)((((tmp0 && tmp1) && tmp2) && tmp3) && tmp4);
  if(tmp26)
  {
    tmp5 = data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */;
    tmp6 = 0.28;
    if(tmp5 < 0.0 && tmp6 != 0.0)
    {
      tmp8 = modf(tmp6, &tmp9);
      
      if(tmp8 > 0.5)
      {
        tmp8 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp8 < -0.5)
      {
        tmp8 += 1.0;
        tmp9 -= 1.0;
      }
      
      if(fabs(tmp8) < 1e-10)
        tmp7 = pow(tmp5, tmp9);
      else
      {
        tmp11 = modf(1.0/tmp6, &tmp10);
        if(tmp11 > 0.5)
        {
          tmp11 -= 1.0;
          tmp10 += 1.0;
        }
        else if(tmp11 < -0.5)
        {
          tmp11 += 1.0;
          tmp10 -= 1.0;
        }
        if(fabs(tmp11) < 1e-10 && ((unsigned long)tmp10 & 1))
        {
          tmp7 = -pow(-tmp5, tmp8)*pow(tmp5, tmp9);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
        }
      }
    }
    else
    {
      tmp7 = pow(tmp5, tmp6);
    }
    if(isnan(tmp7) || isinf(tmp7))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
    }
    tmp27 = (-0.055) * ((tmp7) * (DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes)));
  }
  else
  {
    tmp12 = Less(1.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
    tmp13 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),2.0);
    tmp14 = Less(0.001,data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */);
    tmp15 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
    tmp16 = Greater(data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */,100.0);
    tmp24 = (modelica_boolean)((((tmp12 && tmp13) && tmp14) && tmp15) && tmp16);
    if(tmp24)
    {
      tmp17 = data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */;
      tmp18 = 0.29;
      if(tmp17 < 0.0 && tmp18 != 0.0)
      {
        tmp20 = modf(tmp18, &tmp21);
        
        if(tmp20 > 0.5)
        {
          tmp20 -= 1.0;
          tmp21 += 1.0;
        }
        else if(tmp20 < -0.5)
        {
          tmp20 += 1.0;
          tmp21 -= 1.0;
        }
        
        if(fabs(tmp20) < 1e-10)
          tmp19 = pow(tmp17, tmp21);
        else
        {
          tmp23 = modf(1.0/tmp18, &tmp22);
          if(tmp23 > 0.5)
          {
            tmp23 -= 1.0;
            tmp22 += 1.0;
          }
          else if(tmp23 < -0.5)
          {
            tmp23 += 1.0;
            tmp22 -= 1.0;
          }
          if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
          {
            tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
          }
        }
      }
      else
      {
        tmp19 = pow(tmp17, tmp18);
      }
      if(isnan(tmp19) || isinf(tmp19))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
      tmp25 = (0.18) * (tmp19);
    }
    else
    {
      tmp25 = 1.0;
    }
    tmp27 = tmp25;
  }
  data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */ = tmp27;
  TRACE_POP
}
/*
 equation index: 539
 type: SIMPLE_ASSIGN
 enclosedConvection1._h = if 2.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 10.0 and enclosedConvection1.Pr < 100000.0 and 1000.0 < enclosedConvection1.Ra and enclosedConvection1.Ra < 10000000000.0 then enclosedConvection1.k * enclosedConvection1.Nu / enclosedConvection1.L else if 1.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 2.0 and 0.001 < enclosedConvection1.Pr and enclosedConvection1.Pr < 100000.0 and enclosedConvection1.A1 > 100.0 then enclosedConvection1.k * enclosedConvection1.Nu / enclosedConvection1.L else 1000.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  tmp0 = Less(2.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  tmp1 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),10.0);
  tmp2 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
  tmp3 = Less(1000.0,data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */);
  tmp4 = Less(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */,10000000000.0);
  tmp10 = (modelica_boolean)((((tmp0 && tmp1) && tmp2) && tmp3) && tmp4);
  if(tmp10)
  {
    tmp11 = (data->localData[0]->realVars[274] /* enclosedConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */,data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  }
  else
  {
    tmp5 = Less(1.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
    tmp6 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),2.0);
    tmp7 = Less(0.001,data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */);
    tmp8 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
    tmp9 = Greater(data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */,100.0);
    tmp11 = (((((tmp5 && tmp6) && tmp7) && tmp8) && tmp9)?(data->localData[0]->realVars[274] /* enclosedConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */,data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes)):1000.0);
  }
  data->localData[0]->realVars[273] /* enclosedConvection1.h variable */ = tmp11;
  TRACE_POP
}
/*
 equation index: 540
 type: SIMPLE_ASSIGN
 enclosedConvection1._Gc = enclosedConvection1.area * enclosedConvection1.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->localData[0]->realVars[264] /* enclosedConvection1.Gc variable */ = (data->simulationInfo->realParameter[44]) * (data->localData[0]->realVars[273] /* enclosedConvection1.h variable */);
  TRACE_POP
}

void residualFunc542(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,542};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[269] /* enclosedConvection1.T variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_525(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_526(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_527(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_528(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_529(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_530(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_531(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_532(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_533(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_534(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_535(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_536(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_537(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_538(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_539(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_540(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[264] /* enclosedConvection1.Gc variable */) * (data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */) - data->localData[0]->realVars[344] /* thermalConductor1.Q_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS542(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS542(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for enclosedConvection1.T */
  sysData->nominal[i] = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS542(sysData);
}

void getIterationVarsNLS542(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[269] /* enclosedConvection1.T variable */;
}


/* inner equations */

/*
 equation index: 490
 type: SIMPLE_ASSIGN
 naturalConvection1._k = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.thermalConductivity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.ThermodynamicState(101325.0, naturalConvection1.T), 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->localData[0]->realVars[297] /* naturalConvection1.k variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_thermalConductivity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[292] /* naturalConvection1.T variable */), ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 491
 type: SIMPLE_ASSIGN
 naturalConvection1._Cp = smooth(0, if noEvent(naturalConvection1.T < 1000) then 287.0512249529787 * naturalConvection1.T ^ (-2.0) * (10099.5016 + naturalConvection1.T * (-196.827561 + naturalConvection1.T * (5.00915511 + naturalConvection1.T * (-0.00576101373 + naturalConvection1.T * (1.06685993e-005 + naturalConvection1.T * (-7.94029797e-009 + 2.18523191e-012 * naturalConvection1.T)))))) else 287.0512249529787 * naturalConvection1.T ^ (-2.0) * (241521.443 + naturalConvection1.T * (-1257.8746 + naturalConvection1.T * (5.14455867 + naturalConvection1.T * (-0.000213854179 + naturalConvection1.T * (7.06522784e-008 + naturalConvection1.T * (-1.07148349e-011 + 6.57780015e-016 * naturalConvection1.T)))))))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[292] /* naturalConvection1.T variable */,((modelica_integer) 1000));
  data->localData[0]->realVars[285] /* naturalConvection1.Cp variable */ = (tmp0?(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[292] /* naturalConvection1.T variable */, -2)) * (10099.5016 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-196.827561 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (5.00915511 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-0.00576101373 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (1.06685993e-005 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-7.94029797e-009 + (2.18523191e-012) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */)))))))):(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[292] /* naturalConvection1.T variable */, -2)) * (241521.443 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-1257.8746 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (5.14455867 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-0.000213854179 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (7.06522784e-008 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-1.07148349e-011 + (6.57780015e-016) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */)))))))));
  TRACE_POP
}
/*
 equation index: 492
 type: SIMPLE_ASSIGN
 naturalConvection1._mu = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.dynamicViscosity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.ThermodynamicState(101325.0, naturalConvection1.T))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->localData[0]->realVars[298] /* naturalConvection1.mu variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_dynamicViscosity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[292] /* naturalConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 493
 type: SIMPLE_ASSIGN
 naturalConvection1._Pr = naturalConvection1.mu * naturalConvection1.Cp / naturalConvection1.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */ = (data->localData[0]->realVars[298] /* naturalConvection1.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[285] /* naturalConvection1.Cp variable */,data->localData[0]->realVars[297] /* naturalConvection1.k variable */,"naturalConvection1.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 494
 type: SIMPLE_ASSIGN
 naturalConvection1._d = 352.9857781188631 / naturalConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  data->localData[0]->realVars[294] /* naturalConvection1.d variable */ = DIVISION_SIM(352.9857781188631,data->localData[0]->realVars[292] /* naturalConvection1.T variable */,"naturalConvection1.T",equationIndexes);
  TRACE_POP
}
/*
 equation index: 495
 type: SIMPLE_ASSIGN
 naturalConvection1._beta = 352.9857781188631 / (naturalConvection1.T ^ 2.0 * naturalConvection1.d)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[292] /* naturalConvection1.T variable */;
  data->localData[0]->realVars[293] /* naturalConvection1.beta variable */ = DIVISION_SIM(352.9857781188631,((tmp0 * tmp0)) * (data->localData[0]->realVars[294] /* naturalConvection1.d variable */),"naturalConvection1.T ^ 2.0 * naturalConvection1.d",equationIndexes);
  TRACE_POP
}
/*
 equation index: 496
 type: SIMPLE_ASSIGN
 naturalConvection1._A2 = (1.0 + 0.0625 * (0.492 / naturalConvection1.Pr) ^ 9.0) ^ 0.2962962962962963
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = 1.0 + (0.0625) * (real_int_pow(threadData, DIVISION_SIM(0.492,data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */,"naturalConvection1.Pr",equationIndexes), 9));
  tmp1 = 0.2962962962962963;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[283] /* naturalConvection1.A2 variable */ = tmp2;
  TRACE_POP
}
/*
 equation index: 497
 type: SIMPLE_ASSIGN
 naturalConvection1._solid._T = (-fixedTemperature2.T) - (-2.0) * naturalConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ = (-data->simulationInfo->realParameter[45]) - ((-2.0) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 498
 type: SIMPLE_ASSIGN
 naturalConvection21._T = 0.5 * (naturalConvection1.solid.T + fixedTemperature2.T)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->localData[0]->realVars[312] /* naturalConvection21.T variable */ = (0.5) * (data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ + data->simulationInfo->realParameter[45]);
  TRACE_POP
}
/*
 equation index: 499
 type: SIMPLE_ASSIGN
 naturalConvection21._k = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.thermalConductivity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.ThermodynamicState(101325.0, naturalConvection21.T), 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->localData[0]->realVars[317] /* naturalConvection21.k variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_thermalConductivity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[312] /* naturalConvection21.T variable */), ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 500
 type: SIMPLE_ASSIGN
 naturalConvection21._Cp = smooth(0, if noEvent(naturalConvection21.T < 1000) then 287.0512249529787 * naturalConvection21.T ^ (-2.0) * (10099.5016 + naturalConvection21.T * (-196.827561 + naturalConvection21.T * (5.00915511 + naturalConvection21.T * (-0.00576101373 + naturalConvection21.T * (1.06685993e-005 + naturalConvection21.T * (-7.94029797e-009 + 2.18523191e-012 * naturalConvection21.T)))))) else 287.0512249529787 * naturalConvection21.T ^ (-2.0) * (241521.443 + naturalConvection21.T * (-1257.8746 + naturalConvection21.T * (5.14455867 + naturalConvection21.T * (-0.000213854179 + naturalConvection21.T * (7.06522784e-008 + naturalConvection21.T * (-1.07148349e-011 + 6.57780015e-016 * naturalConvection21.T)))))))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[312] /* naturalConvection21.T variable */,((modelica_integer) 1000));
  data->localData[0]->realVars[305] /* naturalConvection21.Cp variable */ = (tmp0?(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[312] /* naturalConvection21.T variable */, -2)) * (10099.5016 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-196.827561 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (5.00915511 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-0.00576101373 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (1.06685993e-005 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-7.94029797e-009 + (2.18523191e-012) * (data->localData[0]->realVars[312] /* naturalConvection21.T variable */)))))))):(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[312] /* naturalConvection21.T variable */, -2)) * (241521.443 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-1257.8746 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (5.14455867 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-0.000213854179 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (7.06522784e-008 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-1.07148349e-011 + (6.57780015e-016) * (data->localData[0]->realVars[312] /* naturalConvection21.T variable */)))))))));
  TRACE_POP
}
/*
 equation index: 501
 type: SIMPLE_ASSIGN
 naturalConvection21._mu = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.dynamicViscosity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.ThermodynamicState(101325.0, naturalConvection21.T))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->localData[0]->realVars[318] /* naturalConvection21.mu variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_dynamicViscosity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[312] /* naturalConvection21.T variable */));
  TRACE_POP
}
/*
 equation index: 502
 type: SIMPLE_ASSIGN
 naturalConvection21._Pr = naturalConvection21.mu * naturalConvection21.Cp / naturalConvection21.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->localData[0]->realVars[309] /* naturalConvection21.Pr variable */ = (data->localData[0]->realVars[318] /* naturalConvection21.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[305] /* naturalConvection21.Cp variable */,data->localData[0]->realVars[317] /* naturalConvection21.k variable */,"naturalConvection21.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 503
 type: SIMPLE_ASSIGN
 naturalConvection21._d = 352.9857781188631 / naturalConvection21.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->localData[0]->realVars[314] /* naturalConvection21.d variable */ = DIVISION_SIM(352.9857781188631,data->localData[0]->realVars[312] /* naturalConvection21.T variable */,"naturalConvection21.T",equationIndexes);
  TRACE_POP
}
/*
 equation index: 504
 type: SIMPLE_ASSIGN
 naturalConvection21._beta = 352.9857781188631 / (naturalConvection21.T ^ 2.0 * naturalConvection21.d)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[312] /* naturalConvection21.T variable */;
  data->localData[0]->realVars[313] /* naturalConvection21.beta variable */ = DIVISION_SIM(352.9857781188631,((tmp0 * tmp0)) * (data->localData[0]->realVars[314] /* naturalConvection21.d variable */),"naturalConvection21.T ^ 2.0 * naturalConvection21.d",equationIndexes);
  TRACE_POP
}
/*
 equation index: 505
 type: SIMPLE_ASSIGN
 thermalConductor2._dT = naturalConvection1.solid.T - heatCapacitor1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->localData[0]->realVars[347] /* thermalConductor2.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */;
  TRACE_POP
}
/*
 equation index: 506
 type: SIMPLE_ASSIGN
 thermalConductor2._Q_flow = thermalConductor2.G * thermalConductor2.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->localData[0]->realVars[346] /* thermalConductor2.Q_flow variable */ = (data->simulationInfo->realParameter[90]) * (data->localData[0]->realVars[347] /* thermalConductor2.dT variable */);
  TRACE_POP
}
/*
 equation index: 507
 type: SIMPLE_ASSIGN
 naturalConvection1._dT = naturalConvection1.solid.T - fixedTemperature2.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->localData[0]->realVars[295] /* naturalConvection1.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->simulationInfo->realParameter[45];
  TRACE_POP
}
/*
 equation index: 508
 type: SIMPLE_ASSIGN
 naturalConvection1._Gr = 9.810000000000001 * naturalConvection1.d ^ 2.0 * naturalConvection1.beta * naturalConvection1.dT * naturalConvection1.L ^ 3.0 / naturalConvection1.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[294] /* naturalConvection1.d variable */;
  tmp1 = data->simulationInfo->realParameter[51];
  tmp2 = data->localData[0]->realVars[298] /* naturalConvection1.mu variable */;
  data->localData[0]->realVars[287] /* naturalConvection1.Gr variable */ = (9.810000000000001) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[293] /* naturalConvection1.beta variable */) * ((data->localData[0]->realVars[295] /* naturalConvection1.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"naturalConvection1.mu ^ 2.0",equationIndexes)))));
  TRACE_POP
}
/*
 equation index: 509
 type: SIMPLE_ASSIGN
 naturalConvection1._Ra = naturalConvection1.Pr * naturalConvection1.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->localData[0]->realVars[291] /* naturalConvection1.Ra variable */ = (data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */) * (data->localData[0]->realVars[287] /* naturalConvection1.Gr variable */);
  TRACE_POP
}
/*
 equation index: 510
 type: SIMPLE_ASSIGN
 naturalConvection1._A1 = 0.387 * naturalConvection1.Ra ^ 0.1666666666666667
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[291] /* naturalConvection1.Ra variable */;
  tmp1 = 0.1666666666666667;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[282] /* naturalConvection1.A1 variable */ = (0.387) * (tmp2);
  TRACE_POP
}
/*
 equation index: 511
 type: SIMPLE_ASSIGN
 naturalConvection1._Nu = (0.825 + naturalConvection1.A1 / naturalConvection1.A2) ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  modelica_real tmp0;
  tmp0 = 0.825 + DIVISION_SIM(data->localData[0]->realVars[282] /* naturalConvection1.A1 variable */,data->localData[0]->realVars[283] /* naturalConvection1.A2 variable */,"naturalConvection1.A2",equationIndexes);
  data->localData[0]->realVars[288] /* naturalConvection1.Nu variable */ = (tmp0 * tmp0);
  TRACE_POP
}
/*
 equation index: 512
 type: SIMPLE_ASSIGN
 naturalConvection1._h = naturalConvection1.k * naturalConvection1.Nu / naturalConvection1.L
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->localData[0]->realVars[296] /* naturalConvection1.h variable */ = (data->localData[0]->realVars[297] /* naturalConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[288] /* naturalConvection1.Nu variable */,data->simulationInfo->realParameter[51],"naturalConvection1.L",equationIndexes));
  TRACE_POP
}
/*
 equation index: 513
 type: SIMPLE_ASSIGN
 naturalConvection1._Gc = naturalConvection1.area * naturalConvection1.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->localData[0]->realVars[286] /* naturalConvection1.Gc variable */ = (data->simulationInfo->realParameter[52]) * (data->localData[0]->realVars[296] /* naturalConvection1.h variable */);
  TRACE_POP
}
/*
 equation index: 514
 type: SIMPLE_ASSIGN
 naturalConvection1._Q_flow = naturalConvection1.Gc * naturalConvection1.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->localData[0]->realVars[290] /* naturalConvection1.Q_flow variable */ = (data->localData[0]->realVars[286] /* naturalConvection1.Gc variable */) * (data->localData[0]->realVars[295] /* naturalConvection1.dT variable */);
  TRACE_POP
}
/*
 equation index: 515
 type: SIMPLE_ASSIGN
 naturalConvection21._Q_flow = (-naturalConvection1.Q_flow) - thermalConductor2.Q_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->localData[0]->realVars[310] /* naturalConvection21.Q_flow variable */ = (-data->localData[0]->realVars[290] /* naturalConvection1.Q_flow variable */) - data->localData[0]->realVars[346] /* thermalConductor2.Q_flow variable */;
  TRACE_POP
}
/*
 equation index: 516
 type: SIMPLE_ASSIGN
 naturalConvection21._dT = naturalConvection1.solid.T - fixedTemperature2.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->localData[0]->realVars[315] /* naturalConvection21.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->simulationInfo->realParameter[45];
  TRACE_POP
}
/*
 equation index: 517
 type: SIMPLE_ASSIGN
 naturalConvection21._Gr = 9.810000000000001 * naturalConvection21.d ^ 2.0 * naturalConvection21.beta * naturalConvection21.dT * naturalConvection21.L ^ 3.0 / naturalConvection21.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[314] /* naturalConvection21.d variable */;
  tmp1 = data->simulationInfo->realParameter[53];
  tmp2 = data->localData[0]->realVars[318] /* naturalConvection21.mu variable */;
  data->localData[0]->realVars[307] /* naturalConvection21.Gr variable */ = (9.810000000000001) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[313] /* naturalConvection21.beta variable */) * ((data->localData[0]->realVars[315] /* naturalConvection21.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"naturalConvection21.mu ^ 2.0",equationIndexes)))));
  TRACE_POP
}
/*
 equation index: 518
 type: SIMPLE_ASSIGN
 naturalConvection21._Ra = naturalConvection21.Pr * naturalConvection21.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */ = (data->localData[0]->realVars[309] /* naturalConvection21.Pr variable */) * (data->localData[0]->realVars[307] /* naturalConvection21.Gr variable */);
  TRACE_POP
}
/*
 equation index: 519
 type: SIMPLE_ASSIGN
 naturalConvection21._Nu = 0.27 * naturalConvection21.Ra ^ 0.25
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */;
  tmp1 = 0.25;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[308] /* naturalConvection21.Nu variable */ = (0.27) * (tmp2);
  TRACE_POP
}
/*
 equation index: 520
 type: SIMPLE_ASSIGN
 naturalConvection21._h = if naturalConvection21.Ra > 100000.0 then naturalConvection21.k * naturalConvection21.Nu / naturalConvection21.L else 5.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */,100000.0);
  data->localData[0]->realVars[316] /* naturalConvection21.h variable */ = (tmp0?(data->localData[0]->realVars[317] /* naturalConvection21.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[308] /* naturalConvection21.Nu variable */,data->simulationInfo->realParameter[53],"naturalConvection21.L",equationIndexes)):5.0);
  TRACE_POP
}
/*
 equation index: 521
 type: SIMPLE_ASSIGN
 naturalConvection21._Gc = naturalConvection21.area * naturalConvection21.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->localData[0]->realVars[306] /* naturalConvection21.Gc variable */ = (data->simulationInfo->realParameter[54]) * (data->localData[0]->realVars[316] /* naturalConvection21.h variable */);
  TRACE_POP
}

void residualFunc523(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,523};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[292] /* naturalConvection1.T variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_490(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_491(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_492(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_493(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_494(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_495(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_496(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_497(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_498(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_499(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_500(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_501(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_502(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_503(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_504(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_505(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_506(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_507(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_508(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_509(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_510(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_511(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_512(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_513(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_514(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_515(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_516(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_517(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_518(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_519(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_520(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_521(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[306] /* naturalConvection21.Gc variable */) * (data->localData[0]->realVars[315] /* naturalConvection21.dT variable */) - data->localData[0]->realVars[310] /* naturalConvection21.Q_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS523(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS523(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for naturalConvection1.T */
  sysData->nominal[i] = data->modelData->realVarsData[292].attribute /* naturalConvection1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[292].attribute /* naturalConvection1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[292].attribute /* naturalConvection1.T */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS523(sysData);
}

void getIterationVarsNLS523(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[292] /* naturalConvection1.T variable */;
}


/* inner equations */

/*
 equation index: 181
 type: SIMPLE_ASSIGN
 der(cup._V) = (-cup.Wb_flow) / cup.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->localData[0]->realVars[15] /* der(cup.V) DUMMY_DER */ = DIVISION_SIM((-data->localData[0]->realVars[240] /* cup.Wb_flow variable */),data->simulationInfo->realParameter[31],"cup.p_ambient",equationIndexes);
  TRACE_POP
}
/*
 equation index: 182
 type: SIMPLE_ASSIGN
 der(cup._U) = cup.Hb_flow + cup.heatTransfer.Q_flows[1] + cup.Wb_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->localData[0]->realVars[14] /* der(cup.U) DUMMY_DER */ = data->localData[0]->realVars[237] /* cup.Hb_flow variable */ + data->localData[0]->realVars[241] /* cup.heatTransfer.Q_flows[1] variable */ + data->localData[0]->realVars[240] /* cup.Wb_flow variable */;
  TRACE_POP
}
/*
 equation index: 183
 type: SIMPLE_ASSIGN
 der(cup._heatTransfer._states[1]._d) = Modelica.Media.Water.IF97_Utilities.rho_ph_der(cup.p_ambient, cup.medium.h, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.p_ambient, cup.medium.h, cup.heatTransfer.states[1].phase, 0), 0.0, $DER.cup.medium.h)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */ = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[31], data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0)), 0.0, data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */);
  TRACE_POP
}
/*
 equation index: 184
 type: SIMPLE_ASSIGN
 der(cup._medium._u) = $DER.cup.medium.h + cup.p_ambient * $DER.cup.heatTransfer.states[1].d / cup.heatTransfer.states[1].d ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */;
  data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */ = data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */ + (data->simulationInfo->realParameter[31]) * (DIVISION_SIM(data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */,(tmp0 * tmp0),"cup.heatTransfer.states[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}

void residualFunc187(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,187};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[240] /* cup.Wb_flow variable */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_181(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_182(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_183(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_184(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[17] /* der(cup.m) DUMMY_DER */) * (data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */) + (data->localData[0]->realVars[245] /* cup.m DUMMY_STATE */) * (data->localData[0]->realVars[18] /* der(cup.medium.u) DUMMY_DER */) - data->localData[0]->realVars[14] /* der(cup.U) DUMMY_DER */;

  res[1] = (data->localData[0]->realVars[15] /* der(cup.V) DUMMY_DER */) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */) + (data->localData[0]->realVars[239] /* cup.V DUMMY_STATE */) * (data->localData[0]->realVars[16] /* der(cup.heatTransfer.states[1].d) DUMMY_DER */) - data->localData[0]->realVars[17] /* der(cup.m) DUMMY_DER */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS187(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS187(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for der(cup.medium.h) */
  sysData->nominal[i] = data->modelData->realVarsData[8].attribute /* der(cup.medium.h) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[8].attribute /* der(cup.medium.h) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[8].attribute /* der(cup.medium.h) */.max;
  /* static nls data for cup.Wb_flow */
  sysData->nominal[i] = data->modelData->realVarsData[240].attribute /* cup.Wb_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[240].attribute /* cup.Wb_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[240].attribute /* cup.Wb_flow */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS187(sysData);
}

void getIterationVarsNLS187(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[8] /* der(cup.medium.h) STATE_DER */;
  array[1] = data->localData[0]->realVars[240] /* cup.Wb_flow variable */;
}


/* inner equations */

/*
 equation index: 168
 type: SIMPLE_ASSIGN
 der(yakan._V) = (-yakan.Wb_flow) / yakan.p_ambient
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->localData[0]->realVars[20] /* der(yakan.V) DUMMY_DER */ = DIVISION_SIM((-data->localData[0]->realVars[365] /* yakan.Wb_flow variable */),data->simulationInfo->realParameter[143],"yakan.p_ambient",equationIndexes);
  TRACE_POP
}
/*
 equation index: 169
 type: SIMPLE_ASSIGN
 der(yakan._U) = yakan.Hb_flow + yakan.heatTransfer.Q_flows[1] + yakan.Wb_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->localData[0]->realVars[19] /* der(yakan.U) DUMMY_DER */ = data->localData[0]->realVars[362] /* yakan.Hb_flow variable */ + data->localData[0]->realVars[366] /* yakan.heatTransfer.Q_flows[1] variable */ + data->localData[0]->realVars[365] /* yakan.Wb_flow variable */;
  TRACE_POP
}
/*
 equation index: 170
 type: SIMPLE_ASSIGN
 der(yakan._heatTransfer._states[1]._d) = Modelica.Media.Water.IF97_Utilities.rho_ph_der(yakan.p_ambient, yakan.medium.h, Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(yakan.p_ambient, yakan.medium.h, yakan.heatTransfer.states[1].phase, 0), 0.0, $DER.yakan.medium.h)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */ = omc_Modelica_Media_Water_IF97__Utilities_rho__ph__der(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->simulationInfo->realParameter[143], data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, (modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */, ((modelica_integer) 0)), 0.0, data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */);
  TRACE_POP
}
/*
 equation index: 171
 type: SIMPLE_ASSIGN
 der(yakan._medium._u) = $DER.yakan.medium.h + yakan.p_ambient * $DER.yakan.heatTransfer.states[1].d / yakan.heatTransfer.states[1].d ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */;
  data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */ = data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */ + (data->simulationInfo->realParameter[143]) * (DIVISION_SIM(data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */,(tmp0 * tmp0),"yakan.heatTransfer.states[1].d ^ 2.0",equationIndexes));
  TRACE_POP
}

void residualFunc174(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,174};
  int i;
  /* iteration variables */
  for (i=0; i<2; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<2; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */ = xloc[0];
  data->localData[0]->realVars[365] /* yakan.Wb_flow variable */ = xloc[1];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_168(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_169(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_170(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_171(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[371] /* yakan.mb_flow variable */) * (data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */) + (data->localData[0]->realVars[370] /* yakan.m DUMMY_STATE */) * (data->localData[0]->realVars[23] /* der(yakan.medium.u) DUMMY_DER */) - data->localData[0]->realVars[19] /* der(yakan.U) DUMMY_DER */;

  res[1] = (data->localData[0]->realVars[20] /* der(yakan.V) DUMMY_DER */) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */) + (data->localData[0]->realVars[364] /* yakan.V DUMMY_STATE */) * (data->localData[0]->realVars[21] /* der(yakan.heatTransfer.states[1].d) DUMMY_DER */) - data->localData[0]->realVars[371] /* yakan.mb_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS174(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+2] = {0,2,2};
  const int rowIndex[4] = {0,1,0,1};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(4*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 4;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(2*sizeof(int));
  inSysData->sparsePattern.maxColors = 2;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 4*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[1] = 1;
  inSysData->sparsePattern.colorCols[0] = 2;
}
void initializeStaticDataNLS174(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for der(yakan.medium.h) */
  sysData->nominal[i] = data->modelData->realVarsData[13].attribute /* der(yakan.medium.h) */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[13].attribute /* der(yakan.medium.h) */.min;
  sysData->max[i++]   = data->modelData->realVarsData[13].attribute /* der(yakan.medium.h) */.max;
  /* static nls data for yakan.Wb_flow */
  sysData->nominal[i] = data->modelData->realVarsData[365].attribute /* yakan.Wb_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[365].attribute /* yakan.Wb_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[365].attribute /* yakan.Wb_flow */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS174(sysData);
}

void getIterationVarsNLS174(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[13] /* der(yakan.medium.h) STATE_DER */;
  array[1] = data->localData[0]->realVars[365] /* yakan.Wb_flow variable */;
}


/* inner equations */

/*
 equation index: 136
 type: SIMPLE_ASSIGN
 pipe._flowModel._rhos[2] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, cup.medium.h, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
 equation index: 137
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[2]._T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, cup.medium.h, 0, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
/*
 equation index: 138
 type: SIMPLE_ASSIGN
 pipe._flowModel._mus[2] = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(pipe.flowModel.rhos[2], pipe.flowModel.states[2].T, pipe.flowModel.states[2].p, 0)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */, data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, ((modelica_integer) 0));
  TRACE_POP
}
/*
 equation index: 139
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_a._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[2].p, pipe.port_b.h_outflow, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
 equation index: 140
 type: SIMPLE_ASSIGN
 pipe._flowModel._states[1]._T = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[1].p, yakan.medium.h, 0, 0).T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._T;
  TRACE_POP
}
/*
 equation index: 141
 type: SIMPLE_ASSIGN
 pipe._flowModel._rhos[1] = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(pipe.flowModel.states[1].p, yakan.medium.h, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
 equation index: 142
 type: SIMPLE_ASSIGN
 pipe._flowModel._mus[1] = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(pipe.flowModel.rhos[1], pipe.flowModel.states[1].T, pipe.flowModel.states[1].p, 0)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */, data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */, data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, ((modelica_integer) 0));
  TRACE_POP
}
/*
 equation index: 143
 type: SIMPLE_ASSIGN
 pipe._flowModel._Fs_p[1] = pipe.crossArea * (pipe.flowModel.states[2].p - pipe.flowModel.states[1].p) * pipe.flowModel.nParallel
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->localData[0]->realVars[321] /* pipe.flowModel.Fs_p[1] variable */ = (data->simulationInfo->realParameter[56]) * ((data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ - data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */) * (data->simulationInfo->realParameter[66]));
  TRACE_POP
}
/*
 equation index: 144
 type: SIMPLE_ASSIGN
 pipe._flowModel._dps_fg[1] = (-2.0) * pipe.flowModel.Fs_p[1] / (pipe.flowModel.nParallel * 2.0 * pipe.crossArea)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */ = DIVISION_SIM((-2.0) * (data->localData[0]->realVars[321] /* pipe.flowModel.Fs_p[1] variable */),(data->simulationInfo->realParameter[66]) * ((2.0) * (data->simulationInfo->realParameter[56])),"pipe.flowModel.nParallel * 2.0 * pipe.crossArea",equationIndexes);
  TRACE_POP
}
/*
 equation index: 145
 type: SIMPLE_ASSIGN
 yakan._mb_flow = -homotopy(Modelica.Fluid.Pipes.StaticPipe$pipe.FlowModel$pipe$flowModel.WallFriction.massFlowRate_dp_staticHead(pipe.flowModel.dps_fg[1], pipe.flowModel.rhos[1], pipe.flowModel.rhos[2], pipe.flowModel.mus[1], pipe.flowModel.mus[2], pipe.length, pipe.flowModel.diameters[1], pipe.height_ab * pipe.flowModel.g, pipe.crossArea, pipe.roughness, pipe.flowModel.dp_small, pipe.flowModel.Re_turbulent) * pipe.flowModel.nParallel, (pipe.flowModel.dps_fg[1] - pipe.height_ab * pipe.flowModel.g * pipe.flowModel.rho_nominal) * pipe.flowModel.m_flow_nominal / pipe.flowModel.dp_nominal)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->localData[0]->realVars[371] /* yakan.mb_flow variable */ = (-homotopy((omc_Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_massFlowRate__dp__staticHead(threadData, data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */, data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */, data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */, data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */, data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */, data->simulationInfo->realParameter[71], data->localData[0]->realVars[324] /* pipe.flowModel.diameters[1] variable */, (data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[61]), data->simulationInfo->realParameter[56], data->simulationInfo->realParameter[77], data->simulationInfo->realParameter[60], data->simulationInfo->realParameter[58])) * (data->simulationInfo->realParameter[66]), (data->localData[0]->realVars[328] /* pipe.flowModel.dps_fg[1] variable */ - (((data->simulationInfo->realParameter[70]) * (data->simulationInfo->realParameter[61])) * (data->simulationInfo->realParameter[69]))) * (DIVISION_SIM(data->simulationInfo->realParameter[62],data->simulationInfo->realParameter[59],"pipe.flowModel.dp_nominal",equationIndexes))));
  TRACE_POP
}
/*
 equation index: 146
 type: SIMPLE_ASSIGN
 valveIncompressible1._state_b._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(cup.ports[1].p, cup.medium.h, 0, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, data->localData[0]->realVars[256] /* cup.ports[1].p variable */, data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, ((modelica_integer) 0), ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
 equation index: 147
 type: SIMPLE_ASSIGN
 valveIncompressible1._dp = pipe.flowModel.states[2].p - cup.ports[1].p
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */ = data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ - data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  TRACE_POP
}
/*
 equation index: 148
 type: SIMPLE_ASSIGN
 cup._inFlow[1] = not cup.regularFlow[1] and (cup.s[1] > 0.0 or cup.portsData[1].height >= cup.fluidLevel_max)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater(data->localData[0]->realVars[260] /* cup.s[1] variable */,0.0);
  tmp1 = GreaterEq(data->simulationInfo->realParameter[34],data->simulationInfo->realParameter[22]);
  data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */ = ((!data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */) && (tmp0 || tmp1));
  TRACE_POP
}
/*
 equation index: 149
 type: SIMPLE_ASSIGN
 yakan._inFlow[1] = not yakan.regularFlow[1] and (yakan.s[1] > 0.0 or yakan.portsData[1].height >= yakan.fluidLevel_max)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  tmp0 = Greater(data->localData[0]->realVars[385] /* yakan.s[1] variable */,0.0);
  tmp1 = GreaterEq(data->simulationInfo->realParameter[146],data->simulationInfo->realParameter[134]);
  data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */ = ((!data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */) && (tmp0 || tmp1));
  TRACE_POP
}

void residualFunc155(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,155};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  /* iteration variables */
  for (i=0; i<5; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<5; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[385] /* yakan.s[1] variable */ = xloc[0];
  data->localData[0]->realVars[260] /* cup.s[1] variable */ = xloc[1];
  data->localData[0]->realVars[256] /* cup.ports[1].p variable */ = xloc[2];
  data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ = xloc[3];
  data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */ = xloc[4];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_136(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_137(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_138(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_139(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_140(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_141(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_142(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_143(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_144(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_145(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_146(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_147(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_148(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_149(data, threadData);
  /* body */
  tmp2 = (modelica_boolean)data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */;
  if(tmp2)
  {
    tmp0 = DIVISION_SIM(data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */,data->simulationInfo->realParameter[149],"yakan.vesselArea",equationIndexes);
    tmp1 = DIVISION_SIM(data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */,data->simulationInfo->realParameter[149],"yakan.vesselArea",equationIndexes);
    tmp3 = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - homotopy(data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */ + (0.5) * ((real_int_pow(threadData, data->localData[0]->realVars[379] /* yakan.portAreas[1] variable */, -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, data->localData[0]->realVars[371] /* yakan.mb_flow variable */, data->simulationInfo->realParameter[142], (-1.0 + data->simulationInfo->realParameter[147] + (tmp0 * tmp0)) * (DIVISION_SIM(data->localData[0]->realVars[384] /* yakan.ports_penetration[1] variable */,data->localData[0]->realVars[380] /* yakan.portInDensities[1] variable */,"yakan.portInDensities[1]",equationIndexes)), DIVISION_SIM(1.0 + data->simulationInfo->realParameter[148] - ((tmp1 * tmp1)),(data->localData[0]->realVars[384] /* yakan.ports_penetration[1] variable */) * (data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */),"yakan.ports_penetration[1] * yakan.heatTransfer.states[1].d",equationIndexes), 0, 1.0))), data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */);
  }
  else
  {
    tmp3 = (data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */:data->localData[0]->realVars[371] /* yakan.mb_flow variable */);
  }
  res[0] = tmp3;

  res[1] = (data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */?data->localData[0]->realVars[385] /* yakan.s[1] variable */ - (data->localData[0]->realVars[5] /* yakan.level STATE(1) */ - data->simulationInfo->realParameter[146]):(data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?data->localData[0]->realVars[385] /* yakan.s[1] variable */ - data->localData[0]->realVars[371] /* yakan.mb_flow variable */:data->localData[0]->realVars[385] /* yakan.s[1] variable */ - ((9.869232667160129e-006) * ((data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */ - data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */) * (data->simulationInfo->realParameter[146] - data->localData[0]->realVars[5] /* yakan.level STATE(1) */)))));

  tmp6 = (modelica_boolean)data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */;
  if(tmp6)
  {
    tmp4 = DIVISION_SIM(data->localData[0]->realVars[253] /* cup.portAreas[1] variable */,data->simulationInfo->realParameter[37],"cup.vesselArea",equationIndexes);
    tmp5 = DIVISION_SIM(data->localData[0]->realVars[253] /* cup.portAreas[1] variable */,data->simulationInfo->realParameter[37],"cup.vesselArea",equationIndexes);
    tmp7 = data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - homotopy(data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */ + (0.5) * ((real_int_pow(threadData, data->localData[0]->realVars[253] /* cup.portAreas[1] variable */, -2)) * (omc_Modelica_Fluid_Utilities_regSquare2(threadData, (-data->localData[0]->realVars[371] /* yakan.mb_flow variable */), data->simulationInfo->realParameter[30], (-1.0 + data->simulationInfo->realParameter[35] + (tmp4 * tmp4)) * (DIVISION_SIM(data->localData[0]->realVars[259] /* cup.ports_penetration[1] variable */,data->localData[0]->realVars[254] /* cup.portInDensities[1] variable */,"cup.portInDensities[1]",equationIndexes)), DIVISION_SIM(1.0 + data->simulationInfo->realParameter[36] - ((tmp5 * tmp5)),(data->localData[0]->realVars[259] /* cup.ports_penetration[1] variable */) * (data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */),"cup.ports_penetration[1] * cup.heatTransfer.states[1].d",equationIndexes), 0, 1.0))), data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */);
  }
  else
  {
    tmp7 = (data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */:(-data->localData[0]->realVars[371] /* yakan.mb_flow variable */));
  }
  res[2] = tmp7;

  res[3] = (data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */?data->localData[0]->realVars[260] /* cup.s[1] variable */ - (data->localData[0]->realVars[0] /* cup.level STATE(1) */ - data->simulationInfo->realParameter[34]):(data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?data->localData[0]->realVars[260] /* cup.s[1] variable */ + data->localData[0]->realVars[371] /* yakan.mb_flow variable */:data->localData[0]->realVars[260] /* cup.s[1] variable */ - ((9.869232667160129e-006) * ((data->localData[0]->realVars[256] /* cup.ports[1].p variable */ - data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */) * (data->simulationInfo->realParameter[34] - data->localData[0]->realVars[0] /* cup.level STATE(1) */)))));

  res[4] = homotopy((data->localData[0]->realVars[357] /* valveIncompressible1.relativeFlowCoefficient variable */) * ((data->simulationInfo->realParameter[104]) * (omc_Modelica_Fluid_Utilities_regRoot2(threadData, data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */, data->simulationInfo->realParameter[108], data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */, data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */, 0, 1.0))), (data->localData[0]->realVars[357] /* valveIncompressible1.relativeFlowCoefficient variable */) * ((data->simulationInfo->realParameter[123]) * (DIVISION_SIM(data->localData[0]->realVars[351] /* valveIncompressible1.dp variable */,data->simulationInfo->realParameter[107],"valveIncompressible1.dp_nominal",equationIndexes)))) + data->localData[0]->realVars[371] /* yakan.mb_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS155(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+5] = {0,2,2,3,5,5};
  const int rowIndex[17] = {0,1,2,3,2,3,4,0,1,2,3,4,0,1,2,3,4};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(17*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 17;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  inSysData->sparsePattern.maxColors = 4;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 17*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[4] = 1;
  inSysData->sparsePattern.colorCols[3] = 2;
  inSysData->sparsePattern.colorCols[2] = 3;
  inSysData->sparsePattern.colorCols[0] = 4;
  inSysData->sparsePattern.colorCols[1] = 4;
}
void initializeStaticDataNLS155(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for yakan.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[385].attribute /* yakan.s[1] */.max;
  /* static nls data for cup.s[1] */
  sysData->nominal[i] = data->modelData->realVarsData[260].attribute /* cup.s[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[260].attribute /* cup.s[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[260].attribute /* cup.s[1] */.max;
  /* static nls data for cup.ports[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[256].attribute /* cup.ports[1].p */.max;
  /* static nls data for pipe.flowModel.states[1].p */
  sysData->nominal[i] = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[337].attribute /* pipe.flowModel.states[1].p */.max;
  /* static nls data for pipe.flowModel.states[2].p */
  sysData->nominal[i] = data->modelData->realVarsData[338].attribute /* pipe.flowModel.states[2].p */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[338].attribute /* pipe.flowModel.states[2].p */.min;
  sysData->max[i++]   = data->modelData->realVarsData[338].attribute /* pipe.flowModel.states[2].p */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS155(sysData);
}

void getIterationVarsNLS155(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[385] /* yakan.s[1] variable */;
  array[1] = data->localData[0]->realVars[260] /* cup.s[1] variable */;
  array[2] = data->localData[0]->realVars[256] /* cup.ports[1].p variable */;
  array[3] = data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */;
  array[4] = data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */;
}


/* inner equations */

/*
 equation index: 92
 type: SIMPLE_ASSIGN
 enclosedConvection1._d = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(101325.0, enclosedConvection1.T, 0).rho
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->localData[0]->realVars[271] /* enclosedConvection1.d variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, 101325.0, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, ((modelica_integer) 0))._rho;
  TRACE_POP
}
/*
 equation index: 93
 type: SIMPLE_ASSIGN
 enclosedConvection1._k = Modelica.Media.Water.IF97_Utilities.thermalConductivity(enclosedConvection1.d, enclosedConvection1.T, 101325.0, 1, true)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->localData[0]->realVars[274] /* enclosedConvection1.k variable */ = omc_Modelica_Media_Water_IF97__Utilities_thermalConductivity(threadData, data->localData[0]->realVars[271] /* enclosedConvection1.d variable */, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, 101325.0, ((modelica_integer) 1), 1);
  TRACE_POP
}
/*
 equation index: 94
 type: SIMPLE_ASSIGN
 enclosedConvection1._mu = Modelica.Media.Water.IF97_Utilities.dynamicViscosity(enclosedConvection1.d, enclosedConvection1.T, 101325.0, 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */ = omc_Modelica_Media_Water_IF97__Utilities_dynamicViscosity(threadData, data->localData[0]->realVars[271] /* enclosedConvection1.d variable */, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, 101325.0, ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 95
 type: SIMPLE_ASSIGN
 enclosedConvection1._state._h = Modelica.Media.Water.IF97_Utilities.waterBaseProp_pT(101325.0, enclosedConvection1.T, 0).h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT(threadData, 101325.0, data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, ((modelica_integer) 0))._h;
  TRACE_POP
}
/*
 equation index: 96
 type: SIMPLE_ASSIGN
 enclosedConvection1._Cp = Modelica.Media.Water.IF97_Utilities.waterBaseProp_ph(101325.0, enclosedConvection1.state.h, 0, 0).cp
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->localData[0]->realVars[263] /* enclosedConvection1.Cp variable */ = omc_Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph(threadData, 101325.0, data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */, ((modelica_integer) 0), ((modelica_integer) 0))._cp;
  TRACE_POP
}
/*
 equation index: 97
 type: SIMPLE_ASSIGN
 enclosedConvection1._Pr = enclosedConvection1.mu * enclosedConvection1.Cp / enclosedConvection1.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */ = (data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[263] /* enclosedConvection1.Cp variable */,data->localData[0]->realVars[274] /* enclosedConvection1.k variable */,"enclosedConvection1.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 98
 type: SIMPLE_ASSIGN
 enclosedConvection1._solid._T = (-cup.heatTransfer.Ts[1]) - (-2.0) * enclosedConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */ = (-data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */) - ((-2.0) * (data->localData[0]->realVars[269] /* enclosedConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 99
 type: SIMPLE_ASSIGN
 thermalConductor1._dT = heatCapacitor1.T - enclosedConvection1.solid.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->localData[0]->realVars[345] /* thermalConductor1.dT variable */ = data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */ - data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */;
  TRACE_POP
}
/*
 equation index: 100
 type: SIMPLE_ASSIGN
 thermalConductor1._Q_flow = thermalConductor1.G * thermalConductor1.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->localData[0]->realVars[344] /* thermalConductor1.Q_flow variable */ = (data->simulationInfo->realParameter[89]) * (data->localData[0]->realVars[345] /* thermalConductor1.dT variable */);
  TRACE_POP
}
/*
 equation index: 101
 type: SIMPLE_ASSIGN
 enclosedConvection1._dT = enclosedConvection1.solid.T - cup.heatTransfer.Ts[1]
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */ = data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */ - data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */;
  TRACE_POP
}
/*
 equation index: 102
 type: SIMPLE_ASSIGN
 enclosedConvection1._Gr = 20.601 * enclosedConvection1.d ^ 2.0 * enclosedConvection1.dT * enclosedConvection1.L ^ 3.0 / enclosedConvection1.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[271] /* enclosedConvection1.d variable */;
  tmp1 = data->simulationInfo->realParameter[43];
  tmp2 = data->localData[0]->realVars[275] /* enclosedConvection1.mu variable */;
  data->localData[0]->realVars[265] /* enclosedConvection1.Gr variable */ = (20.601) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"enclosedConvection1.mu ^ 2.0",equationIndexes))));
  TRACE_POP
}
/*
 equation index: 103
 type: SIMPLE_ASSIGN
 enclosedConvection1._Ra = enclosedConvection1.Pr * enclosedConvection1.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */ = (data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */) * (data->localData[0]->realVars[265] /* enclosedConvection1.Gr variable */);
  TRACE_POP
}
/*
 equation index: 104
 type: SIMPLE_ASSIGN
 enclosedConvection1._A1 = enclosedConvection1.Pr * enclosedConvection1.Ra / (0.2 + enclosedConvection1.Pr)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */ = (data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */) * (DIVISION_SIM(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */,0.2 + data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,"0.2 + enclosedConvection1.Pr",equationIndexes));
  TRACE_POP
}
/*
 equation index: 105
 type: SIMPLE_ASSIGN
 enclosedConvection1._Nu = if 2.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 10.0 and enclosedConvection1.Pr < 100000.0 and 1000.0 < enclosedConvection1.Ra and enclosedConvection1.Ra < 10000000000.0 then (-0.055) * enclosedConvection1.A1 ^ 0.28 * enclosedConvection1.H / enclosedConvection1.L else if 1.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 2.0 and 0.001 < enclosedConvection1.Pr and enclosedConvection1.Pr < 100000.0 and enclosedConvection1.A1 > 100.0 then 0.18 * enclosedConvection1.A1 ^ 0.29 else 1.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  modelica_boolean tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_boolean tmp24;
  modelica_real tmp25;
  modelica_boolean tmp26;
  modelica_real tmp27;
  tmp0 = Less(2.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  tmp1 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),10.0);
  tmp2 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
  tmp3 = Less(1000.0,data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */);
  tmp4 = Less(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */,10000000000.0);
  tmp26 = (modelica_boolean)((((tmp0 && tmp1) && tmp2) && tmp3) && tmp4);
  if(tmp26)
  {
    tmp5 = data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */;
    tmp6 = 0.28;
    if(tmp5 < 0.0 && tmp6 != 0.0)
    {
      tmp8 = modf(tmp6, &tmp9);
      
      if(tmp8 > 0.5)
      {
        tmp8 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp8 < -0.5)
      {
        tmp8 += 1.0;
        tmp9 -= 1.0;
      }
      
      if(fabs(tmp8) < 1e-10)
        tmp7 = pow(tmp5, tmp9);
      else
      {
        tmp11 = modf(1.0/tmp6, &tmp10);
        if(tmp11 > 0.5)
        {
          tmp11 -= 1.0;
          tmp10 += 1.0;
        }
        else if(tmp11 < -0.5)
        {
          tmp11 += 1.0;
          tmp10 -= 1.0;
        }
        if(fabs(tmp11) < 1e-10 && ((unsigned long)tmp10 & 1))
        {
          tmp7 = -pow(-tmp5, tmp8)*pow(tmp5, tmp9);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
        }
      }
    }
    else
    {
      tmp7 = pow(tmp5, tmp6);
    }
    if(isnan(tmp7) || isinf(tmp7))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp5, tmp6);
    }
    tmp27 = (-0.055) * ((tmp7) * (DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes)));
  }
  else
  {
    tmp12 = Less(1.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
    tmp13 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),2.0);
    tmp14 = Less(0.001,data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */);
    tmp15 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
    tmp16 = Greater(data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */,100.0);
    tmp24 = (modelica_boolean)((((tmp12 && tmp13) && tmp14) && tmp15) && tmp16);
    if(tmp24)
    {
      tmp17 = data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */;
      tmp18 = 0.29;
      if(tmp17 < 0.0 && tmp18 != 0.0)
      {
        tmp20 = modf(tmp18, &tmp21);
        
        if(tmp20 > 0.5)
        {
          tmp20 -= 1.0;
          tmp21 += 1.0;
        }
        else if(tmp20 < -0.5)
        {
          tmp20 += 1.0;
          tmp21 -= 1.0;
        }
        
        if(fabs(tmp20) < 1e-10)
          tmp19 = pow(tmp17, tmp21);
        else
        {
          tmp23 = modf(1.0/tmp18, &tmp22);
          if(tmp23 > 0.5)
          {
            tmp23 -= 1.0;
            tmp22 += 1.0;
          }
          else if(tmp23 < -0.5)
          {
            tmp23 += 1.0;
            tmp22 -= 1.0;
          }
          if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
          {
            tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
          }
          else
          {
            throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
          }
        }
      }
      else
      {
        tmp19 = pow(tmp17, tmp18);
      }
      if(isnan(tmp19) || isinf(tmp19))
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
      tmp25 = (0.18) * (tmp19);
    }
    else
    {
      tmp25 = 1.0;
    }
    tmp27 = tmp25;
  }
  data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */ = tmp27;
  TRACE_POP
}
/*
 equation index: 106
 type: SIMPLE_ASSIGN
 enclosedConvection1._h = if 2.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 10.0 and enclosedConvection1.Pr < 100000.0 and 1000.0 < enclosedConvection1.Ra and enclosedConvection1.Ra < 10000000000.0 then enclosedConvection1.k * enclosedConvection1.Nu / enclosedConvection1.L else if 1.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 2.0 and 0.001 < enclosedConvection1.Pr and enclosedConvection1.Pr < 100000.0 and enclosedConvection1.A1 > 100.0 then enclosedConvection1.k * enclosedConvection1.Nu / enclosedConvection1.L else 1000.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  tmp0 = Less(2.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  tmp1 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),10.0);
  tmp2 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
  tmp3 = Less(1000.0,data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */);
  tmp4 = Less(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */,10000000000.0);
  tmp10 = (modelica_boolean)((((tmp0 && tmp1) && tmp2) && tmp3) && tmp4);
  if(tmp10)
  {
    tmp11 = (data->localData[0]->realVars[274] /* enclosedConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */,data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
  }
  else
  {
    tmp5 = Less(1.0,DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes));
    tmp6 = Less(DIVISION_SIM(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes),2.0);
    tmp7 = Less(0.001,data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */);
    tmp8 = Less(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */,100000.0);
    tmp9 = Greater(data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */,100.0);
    tmp11 = (((((tmp5 && tmp6) && tmp7) && tmp8) && tmp9)?(data->localData[0]->realVars[274] /* enclosedConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[266] /* enclosedConvection1.Nu variable */,data->simulationInfo->realParameter[43],"enclosedConvection1.L",equationIndexes)):1000.0);
  }
  data->localData[0]->realVars[273] /* enclosedConvection1.h variable */ = tmp11;
  TRACE_POP
}
/*
 equation index: 107
 type: SIMPLE_ASSIGN
 enclosedConvection1._Gc = enclosedConvection1.area * enclosedConvection1.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[264] /* enclosedConvection1.Gc variable */ = (data->simulationInfo->realParameter[44]) * (data->localData[0]->realVars[273] /* enclosedConvection1.h variable */);
  TRACE_POP
}

void residualFunc109(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,109};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[269] /* enclosedConvection1.T variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_92(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_93(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_94(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_95(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_96(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_97(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_98(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_99(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_100(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_101(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_102(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_103(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_104(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_105(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_106(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_107(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[264] /* enclosedConvection1.Gc variable */) * (data->localData[0]->realVars[272] /* enclosedConvection1.dT variable */) - data->localData[0]->realVars[344] /* thermalConductor1.Q_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS109(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS109(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for enclosedConvection1.T */
  sysData->nominal[i] = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[269].attribute /* enclosedConvection1.T */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS109(sysData);
}

void getIterationVarsNLS109(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[269] /* enclosedConvection1.T variable */;
}


/* inner equations */

/*
 equation index: 57
 type: SIMPLE_ASSIGN
 naturalConvection1._k = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.thermalConductivity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.ThermodynamicState(101325.0, naturalConvection1.T), 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->localData[0]->realVars[297] /* naturalConvection1.k variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_thermalConductivity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[292] /* naturalConvection1.T variable */), ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 58
 type: SIMPLE_ASSIGN
 naturalConvection1._Cp = smooth(0, if noEvent(naturalConvection1.T < 1000) then 287.0512249529787 * naturalConvection1.T ^ (-2.0) * (10099.5016 + naturalConvection1.T * (-196.827561 + naturalConvection1.T * (5.00915511 + naturalConvection1.T * (-0.00576101373 + naturalConvection1.T * (1.06685993e-005 + naturalConvection1.T * (-7.94029797e-009 + 2.18523191e-012 * naturalConvection1.T)))))) else 287.0512249529787 * naturalConvection1.T ^ (-2.0) * (241521.443 + naturalConvection1.T * (-1257.8746 + naturalConvection1.T * (5.14455867 + naturalConvection1.T * (-0.000213854179 + naturalConvection1.T * (7.06522784e-008 + naturalConvection1.T * (-1.07148349e-011 + 6.57780015e-016 * naturalConvection1.T)))))))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[292] /* naturalConvection1.T variable */,((modelica_integer) 1000));
  data->localData[0]->realVars[285] /* naturalConvection1.Cp variable */ = (tmp0?(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[292] /* naturalConvection1.T variable */, -2)) * (10099.5016 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-196.827561 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (5.00915511 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-0.00576101373 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (1.06685993e-005 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-7.94029797e-009 + (2.18523191e-012) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */)))))))):(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[292] /* naturalConvection1.T variable */, -2)) * (241521.443 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-1257.8746 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (5.14455867 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-0.000213854179 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (7.06522784e-008 + (data->localData[0]->realVars[292] /* naturalConvection1.T variable */) * (-1.07148349e-011 + (6.57780015e-016) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */)))))))));
  TRACE_POP
}
/*
 equation index: 59
 type: SIMPLE_ASSIGN
 naturalConvection1._mu = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.dynamicViscosity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection1.medium.ThermodynamicState(101325.0, naturalConvection1.T))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->localData[0]->realVars[298] /* naturalConvection1.mu variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_dynamicViscosity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[292] /* naturalConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 60
 type: SIMPLE_ASSIGN
 naturalConvection1._Pr = naturalConvection1.mu * naturalConvection1.Cp / naturalConvection1.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */ = (data->localData[0]->realVars[298] /* naturalConvection1.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[285] /* naturalConvection1.Cp variable */,data->localData[0]->realVars[297] /* naturalConvection1.k variable */,"naturalConvection1.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 61
 type: SIMPLE_ASSIGN
 naturalConvection1._d = 352.9857781188631 / naturalConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->localData[0]->realVars[294] /* naturalConvection1.d variable */ = DIVISION_SIM(352.9857781188631,data->localData[0]->realVars[292] /* naturalConvection1.T variable */,"naturalConvection1.T",equationIndexes);
  TRACE_POP
}
/*
 equation index: 62
 type: SIMPLE_ASSIGN
 naturalConvection1._beta = 352.9857781188631 / (naturalConvection1.T ^ 2.0 * naturalConvection1.d)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[292] /* naturalConvection1.T variable */;
  data->localData[0]->realVars[293] /* naturalConvection1.beta variable */ = DIVISION_SIM(352.9857781188631,((tmp0 * tmp0)) * (data->localData[0]->realVars[294] /* naturalConvection1.d variable */),"naturalConvection1.T ^ 2.0 * naturalConvection1.d",equationIndexes);
  TRACE_POP
}
/*
 equation index: 63
 type: SIMPLE_ASSIGN
 naturalConvection1._A2 = (1.0 + 0.0625 * (0.492 / naturalConvection1.Pr) ^ 9.0) ^ 0.2962962962962963
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = 1.0 + (0.0625) * (real_int_pow(threadData, DIVISION_SIM(0.492,data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */,"naturalConvection1.Pr",equationIndexes), 9));
  tmp1 = 0.2962962962962963;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[283] /* naturalConvection1.A2 variable */ = tmp2;
  TRACE_POP
}
/*
 equation index: 64
 type: SIMPLE_ASSIGN
 naturalConvection1._solid._T = (-fixedTemperature2.T) - (-2.0) * naturalConvection1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ = (-data->simulationInfo->realParameter[45]) - ((-2.0) * (data->localData[0]->realVars[292] /* naturalConvection1.T variable */));
  TRACE_POP
}
/*
 equation index: 65
 type: SIMPLE_ASSIGN
 naturalConvection21._T = 0.5 * (naturalConvection1.solid.T + fixedTemperature2.T)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[312] /* naturalConvection21.T variable */ = (0.5) * (data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ + data->simulationInfo->realParameter[45]);
  TRACE_POP
}
/*
 equation index: 66
 type: SIMPLE_ASSIGN
 naturalConvection21._k = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.thermalConductivity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.ThermodynamicState(101325.0, naturalConvection21.T), 1)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->localData[0]->realVars[317] /* naturalConvection21.k variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_thermalConductivity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[312] /* naturalConvection21.T variable */), ((modelica_integer) 1));
  TRACE_POP
}
/*
 equation index: 67
 type: SIMPLE_ASSIGN
 naturalConvection21._Cp = smooth(0, if noEvent(naturalConvection21.T < 1000) then 287.0512249529787 * naturalConvection21.T ^ (-2.0) * (10099.5016 + naturalConvection21.T * (-196.827561 + naturalConvection21.T * (5.00915511 + naturalConvection21.T * (-0.00576101373 + naturalConvection21.T * (1.06685993e-005 + naturalConvection21.T * (-7.94029797e-009 + 2.18523191e-012 * naturalConvection21.T)))))) else 287.0512249529787 * naturalConvection21.T ^ (-2.0) * (241521.443 + naturalConvection21.T * (-1257.8746 + naturalConvection21.T * (5.14455867 + naturalConvection21.T * (-0.000213854179 + naturalConvection21.T * (7.06522784e-008 + naturalConvection21.T * (-1.07148349e-011 + 6.57780015e-016 * naturalConvection21.T)))))))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[312] /* naturalConvection21.T variable */,((modelica_integer) 1000));
  data->localData[0]->realVars[305] /* naturalConvection21.Cp variable */ = (tmp0?(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[312] /* naturalConvection21.T variable */, -2)) * (10099.5016 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-196.827561 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (5.00915511 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-0.00576101373 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (1.06685993e-005 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-7.94029797e-009 + (2.18523191e-012) * (data->localData[0]->realVars[312] /* naturalConvection21.T variable */)))))))):(287.0512249529787) * ((real_int_pow(threadData, data->localData[0]->realVars[312] /* naturalConvection21.T variable */, -2)) * (241521.443 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-1257.8746 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (5.14455867 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-0.000213854179 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (7.06522784e-008 + (data->localData[0]->realVars[312] /* naturalConvection21.T variable */) * (-1.07148349e-011 + (6.57780015e-016) * (data->localData[0]->realVars[312] /* naturalConvection21.T variable */)))))))));
  TRACE_POP
}
/*
 equation index: 68
 type: SIMPLE_ASSIGN
 naturalConvection21._mu = CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.dynamicViscosity(CoffeeTemperature.UnitTest.NaturalConvection2$naturalConvection21.medium.ThermodynamicState(101325.0, naturalConvection21.T))
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->localData[0]->realVars[318] /* naturalConvection21.mu variable */ = omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_dynamicViscosity(threadData, omc_CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_ThermodynamicState(threadData, 101325.0, data->localData[0]->realVars[312] /* naturalConvection21.T variable */));
  TRACE_POP
}
/*
 equation index: 69
 type: SIMPLE_ASSIGN
 naturalConvection21._Pr = naturalConvection21.mu * naturalConvection21.Cp / naturalConvection21.k
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->localData[0]->realVars[309] /* naturalConvection21.Pr variable */ = (data->localData[0]->realVars[318] /* naturalConvection21.mu variable */) * (DIVISION_SIM(data->localData[0]->realVars[305] /* naturalConvection21.Cp variable */,data->localData[0]->realVars[317] /* naturalConvection21.k variable */,"naturalConvection21.k",equationIndexes));
  TRACE_POP
}
/*
 equation index: 70
 type: SIMPLE_ASSIGN
 naturalConvection21._d = 352.9857781188631 / naturalConvection21.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[314] /* naturalConvection21.d variable */ = DIVISION_SIM(352.9857781188631,data->localData[0]->realVars[312] /* naturalConvection21.T variable */,"naturalConvection21.T",equationIndexes);
  TRACE_POP
}
/*
 equation index: 71
 type: SIMPLE_ASSIGN
 naturalConvection21._beta = 352.9857781188631 / (naturalConvection21.T ^ 2.0 * naturalConvection21.d)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  modelica_real tmp0;
  tmp0 = data->localData[0]->realVars[312] /* naturalConvection21.T variable */;
  data->localData[0]->realVars[313] /* naturalConvection21.beta variable */ = DIVISION_SIM(352.9857781188631,((tmp0 * tmp0)) * (data->localData[0]->realVars[314] /* naturalConvection21.d variable */),"naturalConvection21.T ^ 2.0 * naturalConvection21.d",equationIndexes);
  TRACE_POP
}
/*
 equation index: 72
 type: SIMPLE_ASSIGN
 thermalConductor2._dT = naturalConvection1.solid.T - heatCapacitor1.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->localData[0]->realVars[347] /* thermalConductor2.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */;
  TRACE_POP
}
/*
 equation index: 73
 type: SIMPLE_ASSIGN
 thermalConductor2._Q_flow = thermalConductor2.G * thermalConductor2.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[346] /* thermalConductor2.Q_flow variable */ = (data->simulationInfo->realParameter[90]) * (data->localData[0]->realVars[347] /* thermalConductor2.dT variable */);
  TRACE_POP
}
/*
 equation index: 74
 type: SIMPLE_ASSIGN
 naturalConvection1._dT = naturalConvection1.solid.T - fixedTemperature2.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[295] /* naturalConvection1.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->simulationInfo->realParameter[45];
  TRACE_POP
}
/*
 equation index: 75
 type: SIMPLE_ASSIGN
 naturalConvection1._Gr = 9.810000000000001 * naturalConvection1.d ^ 2.0 * naturalConvection1.beta * naturalConvection1.dT * naturalConvection1.L ^ 3.0 / naturalConvection1.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[294] /* naturalConvection1.d variable */;
  tmp1 = data->simulationInfo->realParameter[51];
  tmp2 = data->localData[0]->realVars[298] /* naturalConvection1.mu variable */;
  data->localData[0]->realVars[287] /* naturalConvection1.Gr variable */ = (9.810000000000001) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[293] /* naturalConvection1.beta variable */) * ((data->localData[0]->realVars[295] /* naturalConvection1.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"naturalConvection1.mu ^ 2.0",equationIndexes)))));
  TRACE_POP
}
/*
 equation index: 76
 type: SIMPLE_ASSIGN
 naturalConvection1._Ra = naturalConvection1.Pr * naturalConvection1.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->localData[0]->realVars[291] /* naturalConvection1.Ra variable */ = (data->localData[0]->realVars[289] /* naturalConvection1.Pr variable */) * (data->localData[0]->realVars[287] /* naturalConvection1.Gr variable */);
  TRACE_POP
}
/*
 equation index: 77
 type: SIMPLE_ASSIGN
 naturalConvection1._A1 = 0.387 * naturalConvection1.Ra ^ 0.1666666666666667
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[291] /* naturalConvection1.Ra variable */;
  tmp1 = 0.1666666666666667;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[282] /* naturalConvection1.A1 variable */ = (0.387) * (tmp2);
  TRACE_POP
}
/*
 equation index: 78
 type: SIMPLE_ASSIGN
 naturalConvection1._Nu = (0.825 + naturalConvection1.A1 / naturalConvection1.A2) ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  modelica_real tmp0;
  tmp0 = 0.825 + DIVISION_SIM(data->localData[0]->realVars[282] /* naturalConvection1.A1 variable */,data->localData[0]->realVars[283] /* naturalConvection1.A2 variable */,"naturalConvection1.A2",equationIndexes);
  data->localData[0]->realVars[288] /* naturalConvection1.Nu variable */ = (tmp0 * tmp0);
  TRACE_POP
}
/*
 equation index: 79
 type: SIMPLE_ASSIGN
 naturalConvection1._h = naturalConvection1.k * naturalConvection1.Nu / naturalConvection1.L
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->localData[0]->realVars[296] /* naturalConvection1.h variable */ = (data->localData[0]->realVars[297] /* naturalConvection1.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[288] /* naturalConvection1.Nu variable */,data->simulationInfo->realParameter[51],"naturalConvection1.L",equationIndexes));
  TRACE_POP
}
/*
 equation index: 80
 type: SIMPLE_ASSIGN
 naturalConvection1._Gc = naturalConvection1.area * naturalConvection1.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->localData[0]->realVars[286] /* naturalConvection1.Gc variable */ = (data->simulationInfo->realParameter[52]) * (data->localData[0]->realVars[296] /* naturalConvection1.h variable */);
  TRACE_POP
}
/*
 equation index: 81
 type: SIMPLE_ASSIGN
 naturalConvection1._Q_flow = naturalConvection1.Gc * naturalConvection1.dT
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->localData[0]->realVars[290] /* naturalConvection1.Q_flow variable */ = (data->localData[0]->realVars[286] /* naturalConvection1.Gc variable */) * (data->localData[0]->realVars[295] /* naturalConvection1.dT variable */);
  TRACE_POP
}
/*
 equation index: 82
 type: SIMPLE_ASSIGN
 naturalConvection21._Q_flow = (-naturalConvection1.Q_flow) - thermalConductor2.Q_flow
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->localData[0]->realVars[310] /* naturalConvection21.Q_flow variable */ = (-data->localData[0]->realVars[290] /* naturalConvection1.Q_flow variable */) - data->localData[0]->realVars[346] /* thermalConductor2.Q_flow variable */;
  TRACE_POP
}
/*
 equation index: 83
 type: SIMPLE_ASSIGN
 naturalConvection21._dT = naturalConvection1.solid.T - fixedTemperature2.T
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->localData[0]->realVars[315] /* naturalConvection21.dT variable */ = data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */ - data->simulationInfo->realParameter[45];
  TRACE_POP
}
/*
 equation index: 84
 type: SIMPLE_ASSIGN
 naturalConvection21._Gr = 9.810000000000001 * naturalConvection21.d ^ 2.0 * naturalConvection21.beta * naturalConvection21.dT * naturalConvection21.L ^ 3.0 / naturalConvection21.mu ^ 2.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[314] /* naturalConvection21.d variable */;
  tmp1 = data->simulationInfo->realParameter[53];
  tmp2 = data->localData[0]->realVars[318] /* naturalConvection21.mu variable */;
  data->localData[0]->realVars[307] /* naturalConvection21.Gr variable */ = (9.810000000000001) * (((tmp0 * tmp0)) * ((data->localData[0]->realVars[313] /* naturalConvection21.beta variable */) * ((data->localData[0]->realVars[315] /* naturalConvection21.dT variable */) * (DIVISION_SIM((tmp1 * tmp1 * tmp1),(tmp2 * tmp2),"naturalConvection21.mu ^ 2.0",equationIndexes)))));
  TRACE_POP
}
/*
 equation index: 85
 type: SIMPLE_ASSIGN
 naturalConvection21._Ra = naturalConvection21.Pr * naturalConvection21.Gr
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */ = (data->localData[0]->realVars[309] /* naturalConvection21.Pr variable */) * (data->localData[0]->realVars[307] /* naturalConvection21.Gr variable */);
  TRACE_POP
}
/*
 equation index: 86
 type: SIMPLE_ASSIGN
 naturalConvection21._Nu = 0.27 * naturalConvection21.Ra ^ 0.25
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */;
  tmp1 = 0.25;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->localData[0]->realVars[308] /* naturalConvection21.Nu variable */ = (0.27) * (tmp2);
  TRACE_POP
}
/*
 equation index: 87
 type: SIMPLE_ASSIGN
 naturalConvection21._h = if naturalConvection21.Ra > 100000.0 then naturalConvection21.k * naturalConvection21.Nu / naturalConvection21.L else 5.0
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  modelica_boolean tmp0;
  tmp0 = Greater(data->localData[0]->realVars[311] /* naturalConvection21.Ra variable */,100000.0);
  data->localData[0]->realVars[316] /* naturalConvection21.h variable */ = (tmp0?(data->localData[0]->realVars[317] /* naturalConvection21.k variable */) * (DIVISION_SIM(data->localData[0]->realVars[308] /* naturalConvection21.Nu variable */,data->simulationInfo->realParameter[53],"naturalConvection21.L",equationIndexes)):5.0);
  TRACE_POP
}
/*
 equation index: 88
 type: SIMPLE_ASSIGN
 naturalConvection21._Gc = naturalConvection21.area * naturalConvection21.h
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->localData[0]->realVars[306] /* naturalConvection21.Gc variable */ = (data->simulationInfo->realParameter[54]) * (data->localData[0]->realVars[316] /* naturalConvection21.h variable */);
  TRACE_POP
}

void residualFunc90(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,90};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[292] /* naturalConvection1.T variable */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_57(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_58(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_59(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_60(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_61(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_62(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_63(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_64(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_65(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_66(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_67(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_68(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_69(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_70(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_71(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_72(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_73(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_74(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_75(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_76(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_77(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_78(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_79(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_80(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_81(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_82(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_83(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_84(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_85(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_86(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_87(data, threadData);

  /* local constraints */
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_88(data, threadData);
  /* body */
  res[0] = (data->localData[0]->realVars[306] /* naturalConvection21.Gc variable */) * (data->localData[0]->realVars[315] /* naturalConvection21.dT variable */) - data->localData[0]->realVars[310] /* naturalConvection21.Q_flow variable */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS90(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern.leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  inSysData->sparsePattern.index = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.numberOfNoneZeros = 1;
  inSysData->sparsePattern.colorCols = (unsigned int*) malloc(1*sizeof(int));
  inSysData->sparsePattern.maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern.leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    inSysData->sparsePattern.leadindex[i] += inSysData->sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern.index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern.colorCols[0] = 1;
}
void initializeStaticDataNLS90(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for naturalConvection1.T */
  sysData->nominal[i] = data->modelData->realVarsData[292].attribute /* naturalConvection1.T */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[292].attribute /* naturalConvection1.T */.min;
  sysData->max[i++]   = data->modelData->realVarsData[292].attribute /* naturalConvection1.T */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS90(sysData);
}

void getIterationVarsNLS90(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[292] /* naturalConvection1.T variable */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void CoffeeTemperature_Test_CoffeeTest10_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[14].equationIndex = 824;
  nonLinearSystemData[14].size = 2;
  nonLinearSystemData[14].homotopySupport = 0;
  nonLinearSystemData[14].mixedSystem = 0;
  nonLinearSystemData[14].residualFunc = residualFunc824;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS824;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS824;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  
  nonLinearSystemData[13].equationIndex = 802;
  nonLinearSystemData[13].size = 2;
  nonLinearSystemData[13].homotopySupport = 0;
  nonLinearSystemData[13].mixedSystem = 0;
  nonLinearSystemData[13].residualFunc = residualFunc802;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = NULL;
  nonLinearSystemData[13].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[13].jacobianIndex = -1;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS802;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS802;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  
  nonLinearSystemData[12].equationIndex = 787;
  nonLinearSystemData[12].size = 5;
  nonLinearSystemData[12].homotopySupport = 0;
  nonLinearSystemData[12].mixedSystem = 1;
  nonLinearSystemData[12].residualFunc = residualFunc787;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS787;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS787;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  
  nonLinearSystemData[11].equationIndex = 713;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0;
  nonLinearSystemData[11].mixedSystem = 1;
  nonLinearSystemData[11].residualFunc = residualFunc713;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS713;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS713;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  
  nonLinearSystemData[10].equationIndex = 674;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 0;
  nonLinearSystemData[10].mixedSystem = 1;
  nonLinearSystemData[10].residualFunc = residualFunc674;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS674;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS674;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  
  nonLinearSystemData[9].equationIndex = 622;
  nonLinearSystemData[9].size = 2;
  nonLinearSystemData[9].homotopySupport = 0;
  nonLinearSystemData[9].mixedSystem = 0;
  nonLinearSystemData[9].residualFunc = residualFunc622;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS622;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS622;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  
  nonLinearSystemData[8].equationIndex = 606;
  nonLinearSystemData[8].size = 2;
  nonLinearSystemData[8].homotopySupport = 0;
  nonLinearSystemData[8].mixedSystem = 0;
  nonLinearSystemData[8].residualFunc = residualFunc606;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS606;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS606;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  
  nonLinearSystemData[7].equationIndex = 589;
  nonLinearSystemData[7].size = 5;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 1;
  nonLinearSystemData[7].residualFunc = residualFunc589;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = CoffeeTemperature_Test_CoffeeTest10_functionJacNLSJac7_column;
  nonLinearSystemData[7].initialAnalyticalJacobian = CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianNLSJac7;
  nonLinearSystemData[7].jacobianIndex = 0 /*jacInx*/;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS589;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS589;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 542;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 1;
  nonLinearSystemData[6].residualFunc = residualFunc542;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS542;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS542;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 523;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 1;
  nonLinearSystemData[5].residualFunc = residualFunc523;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS523;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS523;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 187;
  nonLinearSystemData[4].size = 2;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc187;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS187;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS187;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 174;
  nonLinearSystemData[3].size = 2;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc174;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS174;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS174;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 155;
  nonLinearSystemData[2].size = 5;
  nonLinearSystemData[2].homotopySupport = 1;
  nonLinearSystemData[2].mixedSystem = 1;
  nonLinearSystemData[2].residualFunc = residualFunc155;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS155;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS155;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 109;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 1;
  nonLinearSystemData[1].residualFunc = residualFunc109;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS109;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS109;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 90;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 1;
  nonLinearSystemData[0].residualFunc = residualFunc90;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS90;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS90;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

