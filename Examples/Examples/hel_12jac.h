/* Jacobians */
static const REAL_ATTRIBUTE dummyREAL_ATTRIBUTE = omc_dummyRealAttribute;
/* Jacobian Variables */
#if defined(__cplusplus)
extern "C" {
#endif
  #define hel_INDEX_JAC_D 0
  int hel_functionJacD_column(void* data, threadData_t *threadData);
  int hel_initialAnalyticJacobianD(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* D */

#if defined(__cplusplus)
extern "C" {
#endif
  #define hel_INDEX_JAC_C 1
  int hel_functionJacC_column(void* data, threadData_t *threadData);
  int hel_initialAnalyticJacobianC(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* C */

#if defined(__cplusplus)
extern "C" {
#endif
  #define hel_INDEX_JAC_B 2
  int hel_functionJacB_column(void* data, threadData_t *threadData);
  int hel_initialAnalyticJacobianB(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* B */

#if defined(__cplusplus)
extern "C" {
#endif
  #define hel_INDEX_JAC_A 3
  int hel_functionJacA_column(void* data, threadData_t *threadData);
  int hel_initialAnalyticJacobianA(void* data, threadData_t *threadData);
#if defined(__cplusplus)
}
#endif
/* A */
/* $Px$PSeedA */
#define _$Px$PSeedA(i) data->simulationInfo->analyticJacobians[3].seedVars[0]
#define $Px$PSeedA _$Px$PSeedA(0)


