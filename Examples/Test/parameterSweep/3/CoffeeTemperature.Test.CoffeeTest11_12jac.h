/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define CoffeeTemperature_Test_CoffeeTest11_INDEX_JAC_NLSJac7 0
  int CoffeeTemperature_Test_CoffeeTest11_functionJacNLSJac7_column(void* data, threadData_t *threadData);
  int CoffeeTemperature_Test_CoffeeTest11_initialAnalyticJacobianNLSJac7(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* NLSJac7 */
/* array $Pyakan$Ps$PSeedNLSJac7 */
#define _$Pyakan$Ps$PSeedNLSJac7(i) data->simulationInfo->analyticJacobians[0].seedVars[0]
#define $Pyakan$Ps$PSeedNLSJac7 _$Pyakan$Ps$PSeedNLSJac7(0)
/* $Pyakan$Ps$PSeedNLSJac7$lB1$rB */
#define _$Pyakan$Ps$PSeedNLSJac7$lB1$rB(i) data->simulationInfo->analyticJacobians[0].seedVars[0]
#define $Pyakan$Ps$PSeedNLSJac7$lB1$rB _$Pyakan$Ps$PSeedNLSJac7$lB1$rB(0)

/* array $Pcup$Ps$PSeedNLSJac7 */
#define _$Pcup$Ps$PSeedNLSJac7(i) data->simulationInfo->analyticJacobians[0].seedVars[1]
#define $Pcup$Ps$PSeedNLSJac7 _$Pcup$Ps$PSeedNLSJac7(0)
/* $Pcup$Ps$PSeedNLSJac7$lB1$rB */
#define _$Pcup$Ps$PSeedNLSJac7$lB1$rB(i) data->simulationInfo->analyticJacobians[0].seedVars[1]
#define $Pcup$Ps$PSeedNLSJac7$lB1$rB _$Pcup$Ps$PSeedNLSJac7$lB1$rB(0)

/* array $Pcup$Pports$Pp$PSeedNLSJac7 */
#define _$Pcup$Pports$Pp$PSeedNLSJac7(i) data->simulationInfo->analyticJacobians[0].seedVars[2]
#define $Pcup$Pports$Pp$PSeedNLSJac7 _$Pcup$Pports$Pp$PSeedNLSJac7(0)
/* $Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7 */
#define _$Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7(i) data->simulationInfo->analyticJacobians[0].seedVars[2]
#define $Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7 _$Pcup$Pports$lB1$rB$Pp$PSeedNLSJac7(0)

/* array $Ppipe$PflowModel$Pstates$Pp$PSeedNLSJac7 */
#define _$Ppipe$PflowModel$Pstates$Pp$PSeedNLSJac7(i) data->simulationInfo->analyticJacobians[0].seedVars[3]
#define $Ppipe$PflowModel$Pstates$Pp$PSeedNLSJac7 _$Ppipe$PflowModel$Pstates$Pp$PSeedNLSJac7(0)
/* $Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7 */
#define _$Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7(i) data->simulationInfo->analyticJacobians[0].seedVars[3]
#define $Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7 _$Ppipe$PflowModel$Pstates$lB1$rB$Pp$PSeedNLSJac7(0)

/* array $Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7 */
#define _$Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7(i) data->simulationInfo->analyticJacobians[0].seedVars[4]
#define $Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7 _$Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7(0)
/* $Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7$lB1$rB */
#define _$Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7$lB1$rB(i) data->simulationInfo->analyticJacobians[0].seedVars[4]
#define $Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7$lB1$rB _$Ppipe$PflowModel$Pdps_fg$PSeedNLSJac7$lB1$rB(0)
/* array $Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].tmpVars[5]
#define $Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7 _$Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7(0)
/* $Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB */
#define _$Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB(i) data->simulationInfo->analyticJacobians[0].tmpVars[5]
#define $Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB _$Pyakan$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB(0)

/* array $Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].tmpVars[4]
#define $Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7 _$Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7(0)
/* $Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB */
#define _$Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB(i) data->simulationInfo->analyticJacobians[0].tmpVars[4]
#define $Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB _$Pcup$PinFlow$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB(0)

/* $PvalveIncompressible1$Pdp$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$PvalveIncompressible1$Pdp$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].tmpVars[3]
#define $PvalveIncompressible1$Pdp$P$pDERNLSJac7$PdummyVarNLSJac7 _$PvalveIncompressible1$Pdp$P$pDERNLSJac7$PdummyVarNLSJac7(0)

/* $Ppipe$PflowModel$Pstates$P2$Pp$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$Ppipe$PflowModel$Pstates$P2$Pp$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].tmpVars[2]
#define $Ppipe$PflowModel$Pstates$P2$Pp$P$pDERNLSJac7$PdummyVarNLSJac7 _$Ppipe$PflowModel$Pstates$P2$Pp$P$pDERNLSJac7$PdummyVarNLSJac7(0)

/* array $Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].tmpVars[1]
#define $Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7 _$Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7(0)
/* $Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB */
#define _$Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB(i) data->simulationInfo->analyticJacobians[0].tmpVars[1]
#define $Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB _$Ppipe$PflowModel$PFs_p$P$pDERNLSJac7$PdummyVarNLSJac7$lB1$rB(0)

/* $Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].tmpVars[0]
#define $Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7 _$Pyakan$Pmb_flow$P$pDERNLSJac7$PdummyVarNLSJac7(0)

/* $P$res5$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$P$res5$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].resultVars[4]
#define $P$res5$P$pDERNLSJac7$PdummyVarNLSJac7 _$P$res5$P$pDERNLSJac7$PdummyVarNLSJac7(0)

/* $P$res4$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$P$res4$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].resultVars[3]
#define $P$res4$P$pDERNLSJac7$PdummyVarNLSJac7 _$P$res4$P$pDERNLSJac7$PdummyVarNLSJac7(0)

/* $P$res3$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$P$res3$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].resultVars[2]
#define $P$res3$P$pDERNLSJac7$PdummyVarNLSJac7 _$P$res3$P$pDERNLSJac7$PdummyVarNLSJac7(0)

/* $P$res2$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$P$res2$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].resultVars[1]
#define $P$res2$P$pDERNLSJac7$PdummyVarNLSJac7 _$P$res2$P$pDERNLSJac7$PdummyVarNLSJac7(0)

/* $P$res1$P$pDERNLSJac7$PdummyVarNLSJac7 */
#define _$P$res1$P$pDERNLSJac7$PdummyVarNLSJac7(i) data->simulationInfo->analyticJacobians[0].resultVars[0]
#define $P$res1$P$pDERNLSJac7$PdummyVarNLSJac7 _$P$res1$P$pDERNLSJac7$PdummyVarNLSJac7(0)

#if defined(__cplusplus)
extern "C" {
#endif
  #define CoffeeTemperature_Test_CoffeeTest11_INDEX_JAC_D 1
  int CoffeeTemperature_Test_CoffeeTest11_functionJacD_column(void* data, threadData_t *threadData);
  int CoffeeTemperature_Test_CoffeeTest11_initialAnalyticJacobianD(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* D */

#if defined(__cplusplus)
extern "C" {
#endif
  #define CoffeeTemperature_Test_CoffeeTest11_INDEX_JAC_C 2
  int CoffeeTemperature_Test_CoffeeTest11_functionJacC_column(void* data, threadData_t *threadData);
  int CoffeeTemperature_Test_CoffeeTest11_initialAnalyticJacobianC(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* C */

#if defined(__cplusplus)
extern "C" {
#endif
  #define CoffeeTemperature_Test_CoffeeTest11_INDEX_JAC_B 3
  int CoffeeTemperature_Test_CoffeeTest11_functionJacB_column(void* data, threadData_t *threadData);
  int CoffeeTemperature_Test_CoffeeTest11_initialAnalyticJacobianB(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* B */

#if defined(__cplusplus)
extern "C" {
#endif
  #define CoffeeTemperature_Test_CoffeeTest11_INDEX_JAC_A 4
  int CoffeeTemperature_Test_CoffeeTest11_functionJacA_column(void* data, threadData_t *threadData);
  int CoffeeTemperature_Test_CoffeeTest11_initialAnalyticJacobianA(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* A */
/* $Pcup$Plevel$PSeedA */
#define _$Pcup$Plevel$PSeedA(i) data->simulationInfo->analyticJacobians[4].seedVars[0]
#define $Pcup$Plevel$PSeedA _$Pcup$Plevel$PSeedA(0)

/* $Pcup$Pmedium$Ph$PSeedA */
#define _$Pcup$Pmedium$Ph$PSeedA(i) data->simulationInfo->analyticJacobians[4].seedVars[1]
#define $Pcup$Pmedium$Ph$PSeedA _$Pcup$Pmedium$Ph$PSeedA(0)

/* $PheatCapacitor1$PT$PSeedA */
#define _$PheatCapacitor1$PT$PSeedA(i) data->simulationInfo->analyticJacobians[4].seedVars[2]
#define $PheatCapacitor1$PT$PSeedA _$PheatCapacitor1$PT$PSeedA(0)

/* array $PvalveIncompressible1$Pfilter$Px$PSeedA */
#define _$PvalveIncompressible1$Pfilter$Px$PSeedA(i) data->simulationInfo->analyticJacobians[4].seedVars[3]
#define $PvalveIncompressible1$Pfilter$Px$PSeedA _$PvalveIncompressible1$Pfilter$Px$PSeedA(0)
/* $PvalveIncompressible1$Pfilter$Px$PSeedA$lB1$rB */
#define _$PvalveIncompressible1$Pfilter$Px$PSeedA$lB1$rB(i) data->simulationInfo->analyticJacobians[4].seedVars[3]
#define $PvalveIncompressible1$Pfilter$Px$PSeedA$lB1$rB _$PvalveIncompressible1$Pfilter$Px$PSeedA$lB1$rB(0)

/* $PvalveIncompressible1$Pfilter$Px$PSeedA$lB2$rB */
#define _$PvalveIncompressible1$Pfilter$Px$PSeedA$lB2$rB(i) data->simulationInfo->analyticJacobians[4].seedVars[4]
#define $PvalveIncompressible1$Pfilter$Px$PSeedA$lB2$rB _$PvalveIncompressible1$Pfilter$Px$PSeedA$lB2$rB(0)

/* $Pyakan$Plevel$PSeedA */
#define _$Pyakan$Plevel$PSeedA(i) data->simulationInfo->analyticJacobians[4].seedVars[5]
#define $Pyakan$Plevel$PSeedA _$Pyakan$Plevel$PSeedA(0)

/* $Pyakan$Pmedium$Ph$PSeedA */
#define _$Pyakan$Pmedium$Ph$PSeedA(i) data->simulationInfo->analyticJacobians[4].seedVars[6]
#define $Pyakan$Pmedium$Ph$PSeedA _$Pyakan$Pmedium$Ph$PSeedA(0)


