/* Simulation code for CoffeeTemperature.Test.CoffeeTest10 generated by the OpenModelica Compiler v1.13.0-dev-862-gceb595ee2 (64-bit). */
#if !defined(CoffeeTemperature_Test_CoffeeTest10__MODEL_H)
#define CoffeeTemperature_Test_CoffeeTest10__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "CoffeeTemperature.Test.CoffeeTest10_functions.h"

#define CoffeeTemperature_UnitTest_EnclosedConvection$enclosedConvection1_medium_FluidConstants_index 0
#define CoffeeTemperature_UnitTest_EnclosedConvection$enclosedConvection1_medium_ThermodynamicState_index 1
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_FluidConstants_index 2
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_ThermodynamicState_index 3
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_dynamicViscosity_index 4
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection1_medium_thermalConductivity_index 5
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_FluidConstants_index 6
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_ThermodynamicState_index 7
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_dynamicViscosity_index 8
#define CoffeeTemperature_UnitTest_NaturalConvection2$naturalConvection21_medium_thermalConductivity_index 9
#define Modelica_Blocks_Continuous_Internal_Filter_Utilities_toHighestPowerOne_index 10
#define Modelica_Blocks_Continuous_Internal_Filter_base_CriticalDamping_index 11
#define Modelica_Blocks_Continuous_Internal_Filter_coefficients_lowPass_index 12
#define Modelica_Blocks_Continuous_Internal_Filter_roots_lowPass_index 13
#define Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getNextTimeEvent_index 14
#define Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableTimeTmax_index 15
#define Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableTimeTmin_index 16
#define Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_getTableValue_index 17
#define Modelica_Blocks_Sources_CombiTimeTable$combiTimeTable1_readTableData_index 18
#define Modelica_Blocks_Sources_TimeTable$timeTable1_getInterpolationCoefficients_index 19
#define Modelica_Blocks_Types_ExternalCombiTimeTable_constructor_index 20
#define Modelica_Blocks_Types_ExternalCombiTimeTable_destructor_index 21
#define Modelica_Fluid_Interfaces_FluidPort__a$pipe$port__a_Medium_FluidConstants_index 22
#define Modelica_Fluid_Interfaces_FluidPort__a$pipe$port__a_Medium_ThermodynamicState_index 23
#define Modelica_Fluid_Interfaces_FluidPort__a$valveIncompressible1$port__a_Medium_FluidConstants_index 24
#define Modelica_Fluid_Interfaces_FluidPort__a$valveIncompressible1$port__a_Medium_ThermodynamicState_index 25
#define Modelica_Fluid_Interfaces_FluidPort__b$pipe$port__b_Medium_FluidConstants_index 26
#define Modelica_Fluid_Interfaces_FluidPort__b$pipe$port__b_Medium_ThermodynamicState_index 27
#define Modelica_Fluid_Interfaces_FluidPort__b$valveIncompressible1$port__b_Medium_FluidConstants_index 28
#define Modelica_Fluid_Interfaces_FluidPort__b$valveIncompressible1$port__b_Medium_ThermodynamicState_index 29
#define Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_FluidConstants_index 30
#define Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_Medium_ThermodynamicState_index 31
#define Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_massFlowRate__dp__staticHead_index 32
#define Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow_index 33
#define Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric_index 34
#define Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_Internal_m__flow__of__dp__fric_interpolateInRegion2__withDerivative_index 35
#define Modelica_Fluid_Pipes_StaticPipe$pipe_FlowModel$pipe$flowModel_WallFriction_pressureLoss__m__flow_interpolateInRegion2_index 36
#define Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_FluidConstants_index 37
#define Modelica_Fluid_Pipes_StaticPipe$pipe_Medium_ThermodynamicState_index 38
#define Modelica_Fluid_Utilities_cubicHermite__withDerivative_index 39
#define Modelica_Fluid_Utilities_evaluatePoly3__derivativeAtZero_index 40
#define Modelica_Fluid_Utilities_regFun3_index 41
#define Modelica_Fluid_Utilities_regRoot_index 42
#define Modelica_Fluid_Utilities_regRoot2_index 43
#define Modelica_Fluid_Utilities_regSquare2_index 44
#define Modelica_Fluid_Utilities_regStep_index 45
#define Modelica_Fluid_Utilities_regRoot2_regRoot2__utility_index 46
#define Modelica_Fluid_Utilities_regSquare2_regSquare2__utility_index 47
#define Modelica_Fluid_Valves_ValveIncompressible$valveIncompressible1_valveCharacteristic_index 48
#define Modelica_Fluid_Valves_ValveIncompressible$valveIncompressible1_Medium_FluidConstants_index 49
#define Modelica_Fluid_Valves_ValveIncompressible$valveIncompressible1_Medium_ThermodynamicState_index 50
#define Modelica_Fluid_Vessels_BaseClasses_VesselPortsData_index 51
#define Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$cup$ports_Medium_FluidConstants_index 52
#define Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$cup$ports_Medium_ThermodynamicState_index 53
#define Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$yakan$ports_Medium_FluidConstants_index 54
#define Modelica_Fluid_Vessels_BaseClasses_VesselFluidPorts__b$yakan$ports_Medium_ThermodynamicState_index 55
#define Modelica_Fluid_Vessels_OpenTank$cup_HeatTransfer$cup$heatTransfer_Medium_FluidConstants_index 56
#define Modelica_Fluid_Vessels_OpenTank$cup_HeatTransfer$cup$heatTransfer_Medium_ThermodynamicState_index 57
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_FluidConstants_index 58
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_SaturationProperties_index 59
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_ThermodynamicState_index 60
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_density__pT_index 61
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_setState__pTX_index 62
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_specificEnthalpy_index 63
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_specificEnthalpy__pT_index 64
#define Modelica_Fluid_Vessels_OpenTank$cup_Medium_specificEnthalpy__pTX_index 65
#define Modelica_Fluid_Vessels_OpenTank$yakan_HeatTransfer$yakan$heatTransfer_Medium_FluidConstants_index 66
#define Modelica_Fluid_Vessels_OpenTank$yakan_HeatTransfer$yakan$heatTransfer_Medium_ThermodynamicState_index 67
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_FluidConstants_index 68
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_SaturationProperties_index 69
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_ThermodynamicState_index 70
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_density__pT_index 71
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_setState__pTX_index 72
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_specificEnthalpy_index 73
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_specificEnthalpy__pT_index 74
#define Modelica_Fluid_Vessels_OpenTank$yakan_Medium_specificEnthalpy__pTX_index 75
#define Modelica_Media_Common_GibbsDerivs_index 76
#define Modelica_Media_Common_HelmholtzDerivs_index 77
#define Modelica_Media_Common_Helmholtz__pT_index 78
#define Modelica_Media_Common_Helmholtz__ph_index 79
#define Modelica_Media_Common_IF97BaseTwoPhase_index 80
#define Modelica_Media_Common_IF97PhaseBoundaryProperties_index 81
#define Modelica_Media_Common_NewtonDerivatives__pT_index 82
#define Modelica_Media_Common_NewtonDerivatives__ph_index 83
#define Modelica_Media_Common_PhaseBoundaryProperties_index 84
#define Modelica_Media_Common_cv2Phase_index 85
#define Modelica_Media_Common_gibbsToBoundaryProps_index 86
#define Modelica_Media_Common_helmholtzToBoundaryProps_index 87
#define Modelica_Media_IdealGases_Common_DataRecord_index 88
#define Modelica_Media_IdealGases_Common_DataRecord$Air_index 89
#define Modelica_Media_IdealGases_Common_DataRecord$Ar_index 90
#define Modelica_Media_IdealGases_Common_DataRecord$C2H2__vinylidene_index 91
#define Modelica_Media_IdealGases_Common_DataRecord$C2H4_index 92
#define Modelica_Media_IdealGases_Common_DataRecord$C2H5OH_index 93
#define Modelica_Media_IdealGases_Common_DataRecord$C2H6_index 94
#define Modelica_Media_IdealGases_Common_DataRecord$C3H6__propylene_index 95
#define Modelica_Media_IdealGases_Common_DataRecord$C3H8_index 96
#define Modelica_Media_IdealGases_Common_DataRecord$C4H10__n__butane_index 97
#define Modelica_Media_IdealGases_Common_DataRecord$C4H8__1__butene_index 98
#define Modelica_Media_IdealGases_Common_DataRecord$C5H10__1__pentene_index 99
#define Modelica_Media_IdealGases_Common_DataRecord$C5H12__n__pentane_index 100
#define Modelica_Media_IdealGases_Common_DataRecord$C6H12__1__hexene_index 101
#define Modelica_Media_IdealGases_Common_DataRecord$C6H14__n__hexane_index 102
#define Modelica_Media_IdealGases_Common_DataRecord$C6H6_index 103
#define Modelica_Media_IdealGases_Common_DataRecord$C7H14__1__heptene_index 104
#define Modelica_Media_IdealGases_Common_DataRecord$C7H16__n__heptane_index 105
#define Modelica_Media_IdealGases_Common_DataRecord$C8H10__ethylbenz_index 106
#define Modelica_Media_IdealGases_Common_DataRecord$C8H18__n__octane_index 107
#define Modelica_Media_IdealGases_Common_DataRecord$CH3OH_index 108
#define Modelica_Media_IdealGases_Common_DataRecord$CH4_index 109
#define Modelica_Media_IdealGases_Common_DataRecord$CL2_index 110
#define Modelica_Media_IdealGases_Common_DataRecord$CO_index 111
#define Modelica_Media_IdealGases_Common_DataRecord$CO2_index 112
#define Modelica_Media_IdealGases_Common_DataRecord$F2_index 113
#define Modelica_Media_IdealGases_Common_DataRecord$H2_index 114
#define Modelica_Media_IdealGases_Common_DataRecord$H2O_index 115
#define Modelica_Media_IdealGases_Common_DataRecord$He_index 116
#define Modelica_Media_IdealGases_Common_DataRecord$N2_index 117
#define Modelica_Media_IdealGases_Common_DataRecord$N2O_index 118
#define Modelica_Media_IdealGases_Common_DataRecord$NH3_index 119
#define Modelica_Media_IdealGases_Common_DataRecord$NO_index 120
#define Modelica_Media_IdealGases_Common_DataRecord$NO2_index 121
#define Modelica_Media_IdealGases_Common_DataRecord$Ne_index 122
#define Modelica_Media_IdealGases_Common_DataRecord$O2_index 123
#define Modelica_Media_IdealGases_Common_DataRecord$SO2_index 124
#define Modelica_Media_IdealGases_Common_DataRecord$SO3_index 125
#define Modelica_Media_Incompressible_TableBased_ThermodynamicState_index 126
#define Modelica_Media_Incompressible_TableBased_Polynomials__Temp_evaluate_index 127
#define Modelica_Media_Incompressible_TableBased_Polynomials__Temp_evaluateWithRange_index 128
#define Modelica_Media_Incompressible_TableBased_Polynomials__Temp_evaluate__der_index 129
#define Modelica_Media_Interfaces_Types_IdealGas_FluidConstants_index 130
#define Modelica_Media_Interfaces_Types_IdealGas_FluidConstants$N2_index 131
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants_index 132
#define Modelica_Media_Interfaces_Types_TwoPhase_FluidConstants$waterConstants_index 133
#define Modelica_Media_Water_IF97__Utilities_dynamicViscosity_index 134
#define Modelica_Media_Water_IF97__Utilities_h__pT_index 135
#define Modelica_Media_Water_IF97__Utilities_h__props__pT_index 136
#define Modelica_Media_Water_IF97__Utilities_hl__p_index 137
#define Modelica_Media_Water_IF97__Utilities_hv__p_index 138
#define Modelica_Media_Water_IF97__Utilities_rho__pT_index 139
#define Modelica_Media_Water_IF97__Utilities_rho__ph__der_index 140
#define Modelica_Media_Water_IF97__Utilities_rho__props__pT_index 141
#define Modelica_Media_Water_IF97__Utilities_rhol__T_index 142
#define Modelica_Media_Water_IF97__Utilities_rhov__T_index 143
#define Modelica_Media_Water_IF97__Utilities_thermalConductivity_index 144
#define Modelica_Media_Water_IF97__Utilities_waterBaseProp__pT_index 145
#define Modelica_Media_Water_IF97__Utilities_waterBaseProp__ph_index 146
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3a__ph_index 147
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_T3b__ph_index 148
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_dptofT_index 149
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_f3_index 150
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g1_index 151
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g2_index 152
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_g5_index 153
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_h3ab__p_index 154
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_psat_index 155
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph1_index 156
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tph2_index 157
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_tsat_index 158
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3a__ph_index 159
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Basic_v3b__ph_index 160
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp13_index 161
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofp23_index 162
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dofpt3_index 163
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_dtofph3_index 164
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_fixdT_index 165
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Inverses_tofph5_index 166
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT1_index 167
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Isentropic_hofpT2_index 168
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boilingcurve__p_index 169
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofT_index 170
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_boundary23ofp_index 171
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d1n_index 172
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_d2n_index 173
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_dewcurve__p_index 174
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p_index 175
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hl__p__R4b_index 176
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp1_index 177
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp2_index 178
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hlowerofp5_index 179
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp1_index 180
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp2_index 181
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hupperofp5_index 182
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p_index 183
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hv__p__R4b_index 184
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_hvl__p_index 185
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__pT_index 186
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_region__ph_index 187
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__T_index 188
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhol__p__R4b_index 189
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__T_index 190
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Regions_rhov__p__R4b_index 191
#define Modelica_Media_Water_IF97__Utilities_BaseIF97_Transport_visc__dTp_index 192
#define Modelica_SIunits_Conversions_to__degC_index 193
#define Modelica_Utilities_Strings_isEmpty_index 194
#define Modelica_Utilities_Strings_length_index 195
#define Modelica_Utilities_Strings_Advanced_skipWhiteSpace_index 196

extern void CoffeeTemperature_Test_CoffeeTest10_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
extern void CoffeeTemperature_Test_CoffeeTest10_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void CoffeeTemperature_Test_CoffeeTest10_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int CoffeeTemperature_Test_CoffeeTest10_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_checkForAsserts(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int CoffeeTemperature_Test_CoffeeTest10_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* CoffeeTemperature_Test_CoffeeTest10_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* CoffeeTemperature_Test_CoffeeTest10_relationDescription(int i);
extern void CoffeeTemperature_Test_CoffeeTest10_function_initSample(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianG(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianA(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianB(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianC(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_initialAnalyticJacobianD(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionJacG_column(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionJacA_column(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionJacB_column(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionJacC_column(void* data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_functionJacD_column(void* data, threadData_t *threadData);
extern const char* CoffeeTemperature_Test_CoffeeTest10_linear_model_frame(void);
extern const char* CoffeeTemperature_Test_CoffeeTest10_linear_model_datarecovery_frame(void);
extern int CoffeeTemperature_Test_CoffeeTest10_mayer(DATA* data, modelica_real** res, short *);
extern int CoffeeTemperature_Test_CoffeeTest10_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int CoffeeTemperature_Test_CoffeeTest10_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int CoffeeTemperature_Test_CoffeeTest10_setInputData(DATA *data, const modelica_boolean file);
extern int CoffeeTemperature_Test_CoffeeTest10_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void CoffeeTemperature_Test_CoffeeTest10_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest10_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int CoffeeTemperature_Test_CoffeeTest10_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void CoffeeTemperature_Test_CoffeeTest10_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void CoffeeTemperature_Test_CoffeeTest10_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int CoffeeTemperature_Test_CoffeeTest10_inputNames(DATA* data, char ** names);
extern int CoffeeTemperature_Test_CoffeeTest10_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int CoffeeTemperature_Test_CoffeeTest10_functionLocalKnownVars(DATA*, threadData_t*);
extern int CoffeeTemperature_Test_CoffeeTest10_symbolicInlineSystem(DATA*, threadData_t*);

#include "CoffeeTemperature.Test.CoffeeTest10_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(CoffeeTemperature_Test_CoffeeTest10__MODEL_H) */

