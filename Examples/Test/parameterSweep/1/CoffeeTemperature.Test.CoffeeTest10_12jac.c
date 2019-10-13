/* Jacobians 5 */
#include "CoffeeTemperature.Test.CoffeeTest10_model.h"
#include "CoffeeTemperature.Test.CoffeeTest10_12jac.h"
OMC_DISABLE_OPT
int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianNLSJac7(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_NLSJac7;
  const int colPtrIndex[1+5] = {0,2,2,3,3,5};
  const int rowIndex[15] = {0,1,2,3,2,3,4,0,1,4,0,1,2,3,4};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 5;
  data->simulationInfo->analyticJacobians[index].sizeRows = 5;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 11;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(5,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(11,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((5+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(15*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 15;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(5*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 4;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (5+1)*sizeof(int));
  
  for(i=2;i<5+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 15*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[4] = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[3] = 2;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[2] = 3;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 4;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[1] = 4;
  TRACE_POP
  return 0;
}
int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianD(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianC(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianB(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianA(void* inData, threadData_t *threadData)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  int index = CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_A;
  const int colPtrIndex[1+7] = {0,4,5,3,2,5,4,4};
  const int rowIndex[27] = {0,1,5,6,0,1,2,5,6,0,1,2,3,4,0,1,4,5,6,0,1,5,6,0,1,5,6};
  int i = 0;
  
  data->simulationInfo->analyticJacobians[index].sizeCols = 7;
  data->simulationInfo->analyticJacobians[index].sizeRows = 7;
  data->simulationInfo->analyticJacobians[index].sizeTmpVars = 0;
  data->simulationInfo->analyticJacobians[index].seedVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].resultVars = (modelica_real*) calloc(7,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex = (unsigned int*) malloc((7+1)*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.index = (unsigned int*) malloc(27*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.numberOfNoneZeros = 27;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols = (unsigned int*) malloc(7*sizeof(int));
  data->simulationInfo->analyticJacobians[index].sparsePattern.maxColors = 6;
  data->simulationInfo->analyticJacobians[index].jacobian = NULL;
  
  /* write lead index of compressed sparse column */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex, colPtrIndex, (7+1)*sizeof(int));
  
  for(i=2;i<7+1;++i)
    data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i] += data->simulationInfo->analyticJacobians[index].sparsePattern.leadindex[i-1];
  
  /* call sparse index */
  memcpy(data->simulationInfo->analyticJacobians[index].sparsePattern.index, rowIndex, 27*sizeof(int));
  
  /* write color array */
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[4] = 1;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[5] = 2;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[6] = 3;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[2] = 4;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[0] = 5;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[1] = 6;
  data->simulationInfo->analyticJacobians[index].sparsePattern.colorCols[3] = 6;
  TRACE_POP
  return 0;
}


/*
 equation index: 580
 type: SIMPLE_ASSIGN
 yakan._mb_flow._$pDERNLSJac7._dummyVarNLSJac7 = (-pipe.flowModel.dps_fg.SeedNLSJac7[1]) * pipe.flowModel.m_flow_nominal / pipe.flowModel.dp_nominal
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,580};
  $Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7 = ((-$Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7$lB1$rB)) * (DIVISION_SIM(data->simulationInfo->realParameter[62],data->simulationInfo->realParameter[59],"pipe.flowModel.dp_nominal",equationIndexes));
  TRACE_POP
}

/*
 equation index: 581
 type: SIMPLE_ASSIGN
 pipe._flowModel._Fs_p._$pDERNLSJac7._dummyVarNLSJac7[1] = (-pipe.flowModel.dps_fg.SeedNLSJac7[1]) / ((pipe.crossArea * pipe.flowModel.nParallel) ^ (-2.0) * pipe.crossArea * pipe.flowModel.nParallel)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,581};
  $Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB = DIVISION_SIM((-$Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7$lB1$rB),((real_int_pow(threadData, (data->simulationInfo->realParameter[56]) * (data->simulationInfo->realParameter[66]), -2)) * (data->simulationInfo->realParameter[56])) * (data->simulationInfo->realParameter[66]),"(pipe.crossArea * pipe.flowModel.nParallel) ^ (-2.0) * pipe.crossArea * pipe.flowModel.nParallel",equationIndexes);
  TRACE_POP
}

/*
 equation index: 582
 type: SIMPLE_ASSIGN
 pipe._flowModel._states._2._p._$pDERNLSJac7._dummyVarNLSJac7 = (pipe.flowModel.Fs_p.$pDERNLSJac7.dummyVarNLSJac7[1] - (-pipe.flowModel.states[1].p.SeedNLSJac7) * pipe.flowModel.nParallel * pipe.crossArea) / (pipe.crossArea * pipe.flowModel.nParallel)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,582};
  $Ppipe$PflowModel$Pstates$P2$Pp$P$pDERNLSJac7$PdummyVarNLSJac7 = DIVISION_SIM($Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB - ((((-$Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7)) * (data->simulationInfo->realParameter[66])) * (data->simulationInfo->realParameter[56])),(data->simulationInfo->realParameter[56]) * (data->simulationInfo->realParameter[66]),"pipe.crossArea * pipe.flowModel.nParallel",equationIndexes);
  TRACE_POP
}

/*
 equation index: 583
 type: SIMPLE_ASSIGN
 valveIncompressible1._dp._$pDERNLSJac7._dummyVarNLSJac7 = pipe.flowModel.states.2.p.$pDERNLSJac7.dummyVarNLSJac7 - cup.ports[1].p.SeedNLSJac7
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,583};
  $PvalveIncompressible1$Pdp$P$pDERNLSJac7$PdummyVarNLSJac7 = $Ppipe$PflowModel$Pstates$P2$Pp$P$pDERNLSJac7$PdummyVarNLSJac7 - $Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7;
  TRACE_POP
}

/*
 equation index: 584
 type: SIMPLE_ASSIGN
 $res1._$pDERNLSJac7._dummyVarNLSJac7 = if yakan.regularFlow[1] then pipe.flowModel.states[1].p.SeedNLSJac7 else if yakan.inFlow[1] then pipe.flowModel.states[1].p.SeedNLSJac7 else yakan.mb_flow.$pDERNLSJac7.dummyVarNLSJac7
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,584};
  $P$res1$P$pDERNLSJac7$PdummyVarNLSJac7 = (data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */?$Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7:(data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?$Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7:$Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7));
  TRACE_POP
}

/*
 equation index: 585
 type: SIMPLE_ASSIGN
 $res2._$pDERNLSJac7._dummyVarNLSJac7 = if yakan.regularFlow[1] then yakan.s.SeedNLSJac7[1] else if yakan.inFlow[1] then yakan.s.SeedNLSJac7[1] - yakan.mb_flow.$pDERNLSJac7.dummyVarNLSJac7 else yakan.s.SeedNLSJac7[1] - 9.869232667160129e-006 * pipe.flowModel.states[1].p.SeedNLSJac7 * (yakan.portsData[1].height - yakan.level)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,585};
  $P$res2$P$pDERNLSJac7$PdummyVarNLSJac7 = (data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */?$Pyakan$Ps$PSeedNLSJac7$lB1$rB:(data->localData[0]->booleanVars[8] /* yakan.inFlow[1] DISCRETE */?$Pyakan$Ps$PSeedNLSJac7$lB1$rB - $Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7:$Pyakan$Ps$PSeedNLSJac7$lB1$rB - ((9.869232667160129e-006) * (($Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7) * (data->simulationInfo->realParameter[146] - data->localData[0]->realVars[5] /* yakan.level STATE(1) */)))));
  TRACE_POP
}

/*
 equation index: 586
 type: SIMPLE_ASSIGN
 $res3._$pDERNLSJac7._dummyVarNLSJac7 = if cup.regularFlow[1] then cup.ports[1].p.SeedNLSJac7 else if cup.inFlow[1] then cup.ports[1].p.SeedNLSJac7 else -yakan.mb_flow.$pDERNLSJac7.dummyVarNLSJac7
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,586};
  $P$res3$P$pDERNLSJac7$PdummyVarNLSJac7 = (data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */?$Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7:(data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?$Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7:(-$Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7)));
  TRACE_POP
}

/*
 equation index: 587
 type: SIMPLE_ASSIGN
 $res4._$pDERNLSJac7._dummyVarNLSJac7 = if cup.regularFlow[1] then cup.s.SeedNLSJac7[1] else if cup.inFlow[1] then cup.s.SeedNLSJac7[1] + yakan.mb_flow.$pDERNLSJac7.dummyVarNLSJac7 else cup.s.SeedNLSJac7[1] - 9.869232667160129e-006 * cup.ports[1].p.SeedNLSJac7 * (cup.portsData[1].height - cup.level)
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,587};
  $P$res4$P$pDERNLSJac7$PdummyVarNLSJac7 = (data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */?$Pcup$Ps$PSeedNLSJac7$lB1$rB:(data->localData[0]->booleanVars[6] /* cup.inFlow[1] DISCRETE */?$Pcup$Ps$PSeedNLSJac7$lB1$rB + $Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7:$Pcup$Ps$PSeedNLSJac7$lB1$rB - ((9.869232667160129e-006) * (($Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7) * (data->simulationInfo->realParameter[34] - data->localData[0]->realVars[0] /* cup.level STATE(1) */)))));
  TRACE_POP
}

/*
 equation index: 588
 type: SIMPLE_ASSIGN
 $res5._$pDERNLSJac7._dummyVarNLSJac7 = valveIncompressible1.relativeFlowCoefficient * valveIncompressible1.m_flow_nominal * valveIncompressible1.dp.$pDERNLSJac7.dummyVarNLSJac7 / valveIncompressible1.dp_nominal + yakan.mb_flow.$pDERNLSJac7.dummyVarNLSJac7
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,588};
  $P$res5$P$pDERNLSJac7$PdummyVarNLSJac7 = (data->localData[0]->realVars[357] /* valveIncompressible1.relativeFlowCoefficient variable */) * ((data->simulationInfo->realParameter[123]) * (DIVISION_SIM($PvalveIncompressible1$Pdp$P$pDERNLSJac7$PdummyVarNLSJac7,data->simulationInfo->realParameter[107],"valveIncompressible1.dp_nominal",equationIndexes))) + $Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7;
  TRACE_POP
}
int CoffeeTemperature_Test_CoffeeTest10_functionJacNLSJac7_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_NLSJac7;
  CoffeeTemperature_Test_CoffeeTest10_eqFunction_580(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_581(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_582(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_583(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_584(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_585(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_586(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_587(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_588(data, threadData);
  
  TRACE_POP
  return 0;
}
int CoffeeTemperature_Test_CoffeeTest10_functionJacD_column(void* data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int CoffeeTemperature_Test_CoffeeTest10_functionJacC_column(void* data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int CoffeeTemperature_Test_CoffeeTest10_functionJacB_column(void* data, threadData_t *threadData)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int CoffeeTemperature_Test_CoffeeTest10_functionJacA_column(void* inData, threadData_t *threadData)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = CoffeeTemperature_Test_CoffeeTest10_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


