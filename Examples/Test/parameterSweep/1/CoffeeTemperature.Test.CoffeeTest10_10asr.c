/* Asserts */
#include "CoffeeTemperature.Test.CoffeeTest10_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
 equation index: 1118
 type: ALGORITHM
 
   assert(cup.medium.h >= -10000000000.0 and cup.medium.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= cup.medium.h <= 10000000000.0, has value: " + String(cup.medium.h, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1118};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,99,"Variable violating min/max constraint: -10000000000.0 <= cup.medium.h <= 10000000000.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */,-10000000000.0);
    tmp1 = LessEq(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */,10000000000.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4480,7,4480,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.medium.h >= -10000000000.0 and cup.medium.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1119
 type: ALGORITHM
 
   assert(cup.medium.u >= -100000000.0 and cup.medium.u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= cup.medium.u <= 100000000.0, has value: " + String(cup.medium.u, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1119};
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  static const MMC_DEFSTRINGLIT(tmp7,95,"Variable violating min/max constraint: -100000000.0 <= cup.medium.u <= 100000000.0, has value: ");
  modelica_string tmp8;
  static int tmp9 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp9)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */,-100000000.0);
    tmp6 = LessEq(data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */,100000000.0);
    if(!(tmp5 && tmp6))
    {
      tmp8 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[252] /* cup.medium.u DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp7),tmp8);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4485,7,4485,68,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.medium.u >= -100000000.0 and cup.medium.u <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp9 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1120
 type: ALGORITHM
 
   assert(cup.m >= 0.0, "Variable violating min constraint: 0.0 <= cup.m, has value: " + String(cup.m, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1120};
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,60,"Variable violating min constraint: 0.0 <= cup.m, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp10 = GreaterEq(data->localData[0]->realVars[245] /* cup.m DUMMY_STATE */,0.0);
    if(!tmp10)
    {
      tmp12 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[245] /* cup.m DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",580,7,580,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.m >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1121
 type: ALGORITHM
 
   assert(cup.ports[1].p >= 611.657 and cup.ports[1].p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= cup.ports[1].p <= 100000000.0, has value: " + String(cup.ports[1].p, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1121};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,92,"Variable violating min/max constraint: 611.657 <= cup.ports[1].p <= 100000000.0, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp14 = GreaterEq(data->localData[0]->realVars[256] /* cup.ports[1].p variable */,611.657);
    tmp15 = LessEq(data->localData[0]->realVars[256] /* cup.ports[1].p variable */,100000000.0);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[256] /* cup.ports[1].p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.ports[1].p >= 611.657 and cup.ports[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp18 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1122
 type: ALGORITHM
 
   assert(cup.ports_H_flow[1] >= -100000000.0 and cup.ports_H_flow[1] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= cup.ports_H_flow[1] <= 100000000.0, has value: " + String(cup.ports_H_flow[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1122};
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,102,"Variable violating min/max constraint: -100000000.0 <= cup.ports_H_flow[1] <= 100000000.0, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp19 = GreaterEq(data->localData[0]->realVars[258] /* cup.ports_H_flow[1] variable */,-100000000.0);
    tmp20 = LessEq(data->localData[0]->realVars[258] /* cup.ports_H_flow[1] variable */,100000000.0);
    if(!(tmp19 && tmp20))
    {
      tmp22 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[258] /* cup.ports_H_flow[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",220,9,220,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.ports_H_flow[1] >= -100000000.0 and cup.ports_H_flow[1] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1123
 type: ALGORITHM
 
   assert(cup.heatTransfer.states[1].phase >= 0 and cup.heatTransfer.states[1].phase <= 2, "Variable violating min/max constraint: 0 <= cup.heatTransfer.states[1].phase <= 2, has value: " + String(cup.heatTransfer.states[1].phase, "d"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1123};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,94,"Variable violating min/max constraint: 0 <= cup.heatTransfer.states[1].phase <= 2, has value: ");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp28)
  {
    tmp24 = GreaterEq((modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */,((modelica_integer) 0));
    tmp25 = LessEq((modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */,((modelica_integer) 2));
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_integer_to_modelica_string_format((modelica_integer)data->localData[0]->integerVars[22] /* cup.heatTransfer.states[1].phase DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",5801,7,5802,101,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.heatTransfer.states[1].phase >= 0 and cup.heatTransfer.states[1].phase <= 2", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp28 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1124
 type: ALGORITHM
 
   assert(cup.heatTransfer.states[1].d >= 0.0 and cup.heatTransfer.states[1].d <= 100000.0, "Variable violating min/max constraint: 0.0 <= cup.heatTransfer.states[1].d <= 100000.0, has value: " + String(cup.heatTransfer.states[1].d, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1124};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,99,"Variable violating min/max constraint: 0.0 <= cup.heatTransfer.states[1].d <= 100000.0, has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp29 = GreaterEq(data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */,0.0);
    tmp30 = LessEq(data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */,100000.0);
    if(!(tmp29 && tmp30))
    {
      tmp32 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[243] /* cup.heatTransfer.states[1].d DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.heatTransfer.states[1].d >= 0.0 and cup.heatTransfer.states[1].d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1125
 type: ALGORITHM
 
   assert(cup.heatTransfer.Ts[1] >= 273.15 and cup.heatTransfer.Ts[1] <= 2273.15, "Variable violating min/max constraint: 273.15 <= cup.heatTransfer.Ts[1] <= 2273.15, has value: " + String(cup.heatTransfer.Ts[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1125};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,95,"Variable violating min/max constraint: 273.15 <= cup.heatTransfer.Ts[1] <= 2273.15, has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp34 = GreaterEq(data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */,273.15);
    tmp35 = LessEq(data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */,2273.15);
    if(!(tmp34 && tmp35))
    {
      tmp37 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[242] /* cup.heatTransfer.Ts[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",497,5,498,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.heatTransfer.Ts[1] >= 273.15 and cup.heatTransfer.Ts[1] <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1126
 type: ALGORITHM
 
   assert(cup.portInDensities[1] >= 0.0 and cup.portInDensities[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= cup.portInDensities[1] <= 100000.0, has value: " + String(cup.portInDensities[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1126};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,93,"Variable violating min/max constraint: 0.0 <= cup.portInDensities[1] <= 100000.0, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp39 = GreaterEq(data->localData[0]->realVars[254] /* cup.portInDensities[1] variable */,0.0);
    tmp40 = LessEq(data->localData[0]->realVars[254] /* cup.portInDensities[1] variable */,100000.0);
    if(!(tmp39 && tmp40))
    {
      tmp42 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[254] /* cup.portInDensities[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",251,9,252,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.portInDensities[1] >= 0.0 and cup.portInDensities[1] <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1127
 type: ALGORITHM
 
   assert(cup.vessel_ps_static[1] >= 611.657 and cup.vessel_ps_static[1] <= 100000000.0, "Variable violating min/max constraint: 611.657 <= cup.vessel_ps_static[1] <= 100000000.0, has value: " + String(cup.vessel_ps_static[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1127};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,101,"Variable violating min/max constraint: 611.657 <= cup.vessel_ps_static[1] <= 100000000.0, has value: ");
  modelica_string tmp47;
  static int tmp48 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp48)
  {
    tmp44 = GreaterEq(data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */,611.657);
    tmp45 = LessEq(data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */,100000000.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[261] /* cup.vessel_ps_static[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",266,9,267,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.vessel_ps_static[1] >= 611.657 and cup.vessel_ps_static[1] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp48 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1128
 type: ALGORITHM
 
   assert(cup.level >= 0.0, "Variable violating min constraint: 0.0 <= cup.level, has value: " + String(cup.level, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1128};
  modelica_boolean tmp49;
  static const MMC_DEFSTRINGLIT(tmp50,64,"Variable violating min constraint: 0.0 <= cup.level, has value: ");
  modelica_string tmp51;
  static int tmp52 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp52)
  {
    tmp49 = GreaterEq(data->localData[0]->realVars[0] /* cup.level STATE(1) */,0.0);
    if(!tmp49)
    {
      tmp51 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[0] /* cup.level STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp50),tmp51);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",53,3,54,29,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncup.level >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp52 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1129
 type: ALGORITHM
 
   assert(heatCapacitor1.T >= 0.0, "Variable violating min constraint: 0.0 <= heatCapacitor1.T, has value: " + String(heatCapacitor1.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1129};
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,71,"Variable violating min constraint: 0.0 <= heatCapacitor1.T, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp53 = GreaterEq(data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */,0.0);
    if(!tmp53)
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[2] /* heatCapacitor1.T STATE(1,heatCapacitor1.der_T) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Thermal/HeatTransfer.mo",281,7,282,33,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nheatCapacitor1.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1130
 type: ALGORITHM
 
   assert(yakan.medium.h >= -10000000000.0 and yakan.medium.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= yakan.medium.h <= 10000000000.0, has value: " + String(yakan.medium.h, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1130};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,101,"Variable violating min/max constraint: -10000000000.0 <= yakan.medium.h <= 10000000000.0, has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp57 = GreaterEq(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */,-10000000000.0);
    tmp58 = LessEq(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */,10000000000.0);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4480,7,4480,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.medium.h >= -10000000000.0 and yakan.medium.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1131
 type: ALGORITHM
 
   assert(yakan.medium.u >= -100000000.0 and yakan.medium.u <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= yakan.medium.u <= 100000000.0, has value: " + String(yakan.medium.u, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1131};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,97,"Variable violating min/max constraint: -100000000.0 <= yakan.medium.u <= 100000000.0, has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */,-100000000.0);
    tmp63 = LessEq(data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */,100000000.0);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[378] /* yakan.medium.u DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4485,7,4485,68,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.medium.u >= -100000000.0 and yakan.medium.u <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1132
 type: ALGORITHM
 
   assert(yakan.m >= 0.0, "Variable violating min constraint: 0.0 <= yakan.m, has value: " + String(yakan.m, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1132};
  modelica_boolean tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,62,"Variable violating min constraint: 0.0 <= yakan.m, has value: ");
  modelica_string tmp69;
  static int tmp70 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp70)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[370] /* yakan.m DUMMY_STATE */,0.0);
    if(!tmp67)
    {
      tmp69 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[370] /* yakan.m DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp68),tmp69);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",580,7,580,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.m >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp70 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1133
 type: ALGORITHM
 
   assert(yakan.mb_flow >= -100000.0 and yakan.mb_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= yakan.mb_flow <= 100000.0, has value: " + String(yakan.mb_flow, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1133};
  modelica_boolean tmp71;
  modelica_boolean tmp72;
  static const MMC_DEFSTRINGLIT(tmp73,90,"Variable violating min/max constraint: -100000.0 <= yakan.mb_flow <= 100000.0, has value: ");
  modelica_string tmp74;
  static int tmp75 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp75)
  {
    tmp71 = GreaterEq(data->localData[0]->realVars[371] /* yakan.mb_flow variable */,-100000.0);
    tmp72 = LessEq(data->localData[0]->realVars[371] /* yakan.mb_flow variable */,100000.0);
    if(!(tmp71 && tmp72))
    {
      tmp74 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[371] /* yakan.mb_flow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp73),tmp74);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",588,7,588,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.mb_flow >= -100000.0 and yakan.mb_flow <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp75 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1134
 type: ALGORITHM
 
   assert(yakan.ports_H_flow[1] >= -100000000.0 and yakan.ports_H_flow[1] <= 100000000.0, "Variable violating min/max constraint: -100000000.0 <= yakan.ports_H_flow[1] <= 100000000.0, has value: " + String(yakan.ports_H_flow[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1134};
  modelica_boolean tmp76;
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,104,"Variable violating min/max constraint: -100000000.0 <= yakan.ports_H_flow[1] <= 100000000.0, has value: ");
  modelica_string tmp79;
  static int tmp80 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp80)
  {
    tmp76 = GreaterEq(data->localData[0]->realVars[383] /* yakan.ports_H_flow[1] variable */,-100000000.0);
    tmp77 = LessEq(data->localData[0]->realVars[383] /* yakan.ports_H_flow[1] variable */,100000000.0);
    if(!(tmp76 && tmp77))
    {
      tmp79 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[383] /* yakan.ports_H_flow[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp78),tmp79);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",220,9,220,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.ports_H_flow[1] >= -100000000.0 and yakan.ports_H_flow[1] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp80 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1135
 type: ALGORITHM
 
   assert(yakan.heatTransfer.states[1].phase >= 0 and yakan.heatTransfer.states[1].phase <= 2, "Variable violating min/max constraint: 0 <= yakan.heatTransfer.states[1].phase <= 2, has value: " + String(yakan.heatTransfer.states[1].phase, "d"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1135};
  modelica_boolean tmp81;
  modelica_boolean tmp82;
  static const MMC_DEFSTRINGLIT(tmp83,96,"Variable violating min/max constraint: 0 <= yakan.heatTransfer.states[1].phase <= 2, has value: ");
  modelica_string tmp84;
  static int tmp85 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp85)
  {
    tmp81 = GreaterEq((modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */,((modelica_integer) 0));
    tmp82 = LessEq((modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */,((modelica_integer) 2));
    if(!(tmp81 && tmp82))
    {
      tmp84 = modelica_integer_to_modelica_string_format((modelica_integer)data->localData[0]->integerVars[29] /* yakan.heatTransfer.states[1].phase DISCRETE */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp83),tmp84);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/package.mo",5801,7,5802,101,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.heatTransfer.states[1].phase >= 0 and yakan.heatTransfer.states[1].phase <= 2", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp85 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1136
 type: ALGORITHM
 
   assert(yakan.heatTransfer.states[1].d >= 0.0 and yakan.heatTransfer.states[1].d <= 100000.0, "Variable violating min/max constraint: 0.0 <= yakan.heatTransfer.states[1].d <= 100000.0, has value: " + String(yakan.heatTransfer.states[1].d, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1136};
  modelica_boolean tmp86;
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,101,"Variable violating min/max constraint: 0.0 <= yakan.heatTransfer.states[1].d <= 100000.0, has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp86 = GreaterEq(data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */,0.0);
    tmp87 = LessEq(data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */,100000.0);
    if(!(tmp86 && tmp87))
    {
      tmp89 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[368] /* yakan.heatTransfer.states[1].d DUMMY_STATE */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.heatTransfer.states[1].d >= 0.0 and yakan.heatTransfer.states[1].d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1137
 type: ALGORITHM
 
   assert(yakan.heatTransfer.Ts[1] >= 273.15 and yakan.heatTransfer.Ts[1] <= 2273.15, "Variable violating min/max constraint: 273.15 <= yakan.heatTransfer.Ts[1] <= 2273.15, has value: " + String(yakan.heatTransfer.Ts[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1137};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,97,"Variable violating min/max constraint: 273.15 <= yakan.heatTransfer.Ts[1] <= 2273.15, has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp91 = GreaterEq(data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */,273.15);
    tmp92 = LessEq(data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */,2273.15);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[367] /* yakan.heatTransfer.Ts[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",497,5,498,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.heatTransfer.Ts[1] >= 273.15 and yakan.heatTransfer.Ts[1] <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1138
 type: ALGORITHM
 
   assert(yakan.portInDensities[1] >= 0.0 and yakan.portInDensities[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= yakan.portInDensities[1] <= 100000.0, has value: " + String(yakan.portInDensities[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1138};
  modelica_boolean tmp96;
  modelica_boolean tmp97;
  static const MMC_DEFSTRINGLIT(tmp98,95,"Variable violating min/max constraint: 0.0 <= yakan.portInDensities[1] <= 100000.0, has value: ");
  modelica_string tmp99;
  static int tmp100 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp100)
  {
    tmp96 = GreaterEq(data->localData[0]->realVars[380] /* yakan.portInDensities[1] variable */,0.0);
    tmp97 = LessEq(data->localData[0]->realVars[380] /* yakan.portInDensities[1] variable */,100000.0);
    if(!(tmp96 && tmp97))
    {
      tmp99 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[380] /* yakan.portInDensities[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp98),tmp99);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",251,9,252,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.portInDensities[1] >= 0.0 and yakan.portInDensities[1] <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp100 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1139
 type: ALGORITHM
 
   assert(yakan.vessel_ps_static[1] >= 611.657 and yakan.vessel_ps_static[1] <= 100000000.0, "Variable violating min/max constraint: 611.657 <= yakan.vessel_ps_static[1] <= 100000000.0, has value: " + String(yakan.vessel_ps_static[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1139};
  modelica_boolean tmp101;
  modelica_boolean tmp102;
  static const MMC_DEFSTRINGLIT(tmp103,103,"Variable violating min/max constraint: 611.657 <= yakan.vessel_ps_static[1] <= 100000000.0, has value: ");
  modelica_string tmp104;
  static int tmp105 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp105)
  {
    tmp101 = GreaterEq(data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */,611.657);
    tmp102 = LessEq(data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */,100000000.0);
    if(!(tmp101 && tmp102))
    {
      tmp104 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[386] /* yakan.vessel_ps_static[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp103),tmp104);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",266,9,267,106,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.vessel_ps_static[1] >= 611.657 and yakan.vessel_ps_static[1] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp105 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1140
 type: ALGORITHM
 
   assert(yakan.level >= 0.0, "Variable violating min constraint: 0.0 <= yakan.level, has value: " + String(yakan.level, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1140};
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,66,"Variable violating min constraint: 0.0 <= yakan.level, has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
    tmp106 = GreaterEq(data->localData[0]->realVars[5] /* yakan.level STATE(1) */,0.0);
    if(!tmp106)
    {
      tmp108 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[5] /* yakan.level STATE(1) */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Vessels.mo",53,3,54,29,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nyakan.level >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1141
 type: ALGORITHM
 
   assert(pipe.port_a.h_outflow >= -10000000000.0 and pipe.port_a.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= pipe.port_a.h_outflow <= 10000000000.0, has value: " + String(pipe.port_a.h_outflow, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1141};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,108,"Variable violating min/max constraint: -10000000000.0 <= pipe.port_a.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp113;
  static int tmp114 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp114)
  {
    tmp110 = GreaterEq(data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */,-10000000000.0);
    tmp111 = LessEq(data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */,10000000000.0);
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[341] /* pipe.port_a.h_outflow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",16,5,17,84,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.port_a.h_outflow >= -10000000000.0 and pipe.port_a.h_outflow <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp114 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1142
 type: ALGORITHM
 
   assert(pipe.port_b.h_outflow >= -10000000000.0 and pipe.port_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= pipe.port_b.h_outflow <= 10000000000.0, has value: " + String(pipe.port_b.h_outflow, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1142};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,108,"Variable violating min/max constraint: -10000000000.0 <= pipe.port_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp118;
  static int tmp119 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp119)
  {
    tmp115 = GreaterEq(data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */,-10000000000.0);
    tmp116 = LessEq(data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */,10000000000.0);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[342] /* pipe.port_b.h_outflow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",16,5,17,84,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.port_b.h_outflow >= -10000000000.0 and pipe.port_b.h_outflow <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1143
 type: ALGORITHM
 
   assert(pipe.flowModel.states[1].T >= 273.15 and pipe.flowModel.states[1].T <= 2273.15, "Variable violating min/max constraint: 273.15 <= pipe.flowModel.states[1].T <= 2273.15, has value: " + String(pipe.flowModel.states[1].T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1143};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,99,"Variable violating min/max constraint: 273.15 <= pipe.flowModel.states[1].T <= 2273.15, has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp120 = GreaterEq(data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */,273.15);
    tmp121 = LessEq(data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */,2273.15);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[335] /* pipe.flowModel.states[1].T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.states[1].T >= 273.15 and pipe.flowModel.states[1].T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1144
 type: ALGORITHM
 
   assert(pipe.flowModel.states[1].p >= 611.657 and pipe.flowModel.states[1].p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= pipe.flowModel.states[1].p <= 100000000.0, has value: " + String(pipe.flowModel.states[1].p, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1144};
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,104,"Variable violating min/max constraint: 611.657 <= pipe.flowModel.states[1].p <= 100000000.0, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp125 = GreaterEq(data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */,611.657);
    tmp126 = LessEq(data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */,100000000.0);
    if(!(tmp125 && tmp126))
    {
      tmp128 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[337] /* pipe.flowModel.states[1].p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",146,5,146,34,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.states[1].p >= 611.657 and pipe.flowModel.states[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1145
 type: ALGORITHM
 
   assert(pipe.flowModel.states[2].T >= 273.15 and pipe.flowModel.states[2].T <= 2273.15, "Variable violating min/max constraint: 273.15 <= pipe.flowModel.states[2].T <= 2273.15, has value: " + String(pipe.flowModel.states[2].T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1145};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,99,"Variable violating min/max constraint: 273.15 <= pipe.flowModel.states[2].T <= 2273.15, has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp130 = GreaterEq(data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */,273.15);
    tmp131 = LessEq(data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */,2273.15);
    if(!(tmp130 && tmp131))
    {
      tmp133 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[336] /* pipe.flowModel.states[2].T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.states[2].T >= 273.15 and pipe.flowModel.states[2].T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1146
 type: ALGORITHM
 
   assert(pipe.flowModel.states[2].p >= 611.657 and pipe.flowModel.states[2].p <= 100000000.0, "Variable violating min/max constraint: 611.657 <= pipe.flowModel.states[2].p <= 100000000.0, has value: " + String(pipe.flowModel.states[2].p, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1146};
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,104,"Variable violating min/max constraint: 611.657 <= pipe.flowModel.states[2].p <= 100000000.0, has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp135 = GreaterEq(data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */,611.657);
    tmp136 = LessEq(data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */,100000000.0);
    if(!(tmp135 && tmp136))
    {
      tmp138 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[338] /* pipe.flowModel.states[2].p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",146,5,146,34,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.states[2].p >= 611.657 and pipe.flowModel.states[2].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1147
 type: ALGORITHM
 
   assert(pipe.flowModel.rhos[1] >= 0.0 and pipe.flowModel.rhos[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[1] <= 100000.0, has value: " + String(pipe.flowModel.rhos[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1147};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,93,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[1] <= 100000.0, has value: ");
  modelica_string tmp143;
  static int tmp144 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp144)
  {
    tmp140 = GreaterEq(data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */,0.0);
    tmp141 = LessEq(data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */,100000.0);
    if(!(tmp140 && tmp141))
    {
      tmp143 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[332] /* pipe.flowModel.rhos[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1001,13,1001,110,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.rhos[1] >= 0.0 and pipe.flowModel.rhos[1] <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp144 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1148
 type: ALGORITHM
 
   assert(pipe.flowModel.rhos[2] >= 0.0 and pipe.flowModel.rhos[2] <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[2] <= 100000.0, has value: " + String(pipe.flowModel.rhos[2], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1148};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,93,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos[2] <= 100000.0, has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp145 = GreaterEq(data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */,0.0);
    tmp146 = LessEq(data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */,100000.0);
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[333] /* pipe.flowModel.rhos[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1001,13,1001,110,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.rhos[2] >= 0.0 and pipe.flowModel.rhos[2] <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1149
 type: ALGORITHM
 
   assert(pipe.flowModel.rhos_act[1] >= 0.0 and pipe.flowModel.rhos_act[1] <= 100000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos_act[1] <= 100000.0, has value: " + String(pipe.flowModel.rhos_act[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1149};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,97,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.rhos_act[1] <= 100000.0, has value: ");
  modelica_string tmp153;
  static int tmp154 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp154)
  {
    tmp150 = GreaterEq(data->localData[0]->realVars[334] /* pipe.flowModel.rhos_act[1] variable */,0.0);
    tmp151 = LessEq(data->localData[0]->realVars[334] /* pipe.flowModel.rhos_act[1] variable */,100000.0);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[334] /* pipe.flowModel.rhos_act[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1002,13,1002,70,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.rhos_act[1] >= 0.0 and pipe.flowModel.rhos_act[1] <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp154 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1150
 type: ALGORITHM
 
   assert(pipe.flowModel.mus[1] >= 0.0 and pipe.flowModel.mus[1] <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.mus[1] <= 100000000.0, has value: " + String(pipe.flowModel.mus[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1150};
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,95,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.mus[1] <= 100000000.0, has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp155 = GreaterEq(data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */,0.0);
    tmp156 = LessEq(data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */,100000000.0);
    if(!(tmp155 && tmp156))
    {
      tmp158 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[329] /* pipe.flowModel.mus[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1004,13,1004,125,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.mus[1] >= 0.0 and pipe.flowModel.mus[1] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1151
 type: ALGORITHM
 
   assert(pipe.flowModel.mus[2] >= 0.0 and pipe.flowModel.mus[2] <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.mus[2] <= 100000000.0, has value: " + String(pipe.flowModel.mus[2], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1151};
  modelica_boolean tmp160;
  modelica_boolean tmp161;
  static const MMC_DEFSTRINGLIT(tmp162,95,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.mus[2] <= 100000000.0, has value: ");
  modelica_string tmp163;
  static int tmp164 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp164)
  {
    tmp160 = GreaterEq(data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */,0.0);
    tmp161 = LessEq(data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */,100000000.0);
    if(!(tmp160 && tmp161))
    {
      tmp163 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[330] /* pipe.flowModel.mus[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp162),tmp163);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1004,13,1004,125,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.mus[2] >= 0.0 and pipe.flowModel.mus[2] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp164 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1152
 type: ALGORITHM
 
   assert(pipe.flowModel.mus_act[1] >= 0.0 and pipe.flowModel.mus_act[1] <= 100000000.0, "Variable violating min/max constraint: 0.0 <= pipe.flowModel.mus_act[1] <= 100000000.0, has value: " + String(pipe.flowModel.mus_act[1], "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1152};
  modelica_boolean tmp165;
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,99,"Variable violating min/max constraint: 0.0 <= pipe.flowModel.mus_act[1] <= 100000000.0, has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp165 = GreaterEq(data->localData[0]->realVars[331] /* pipe.flowModel.mus_act[1] variable */,0.0);
    tmp166 = LessEq(data->localData[0]->realVars[331] /* pipe.flowModel.mus_act[1] variable */,100000000.0);
    if(!(tmp165 && tmp166))
    {
      tmp168 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[331] /* pipe.flowModel.mus_act[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Pipes.mo",1005,13,1005,80,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npipe.flowModel.mus_act[1] >= 0.0 and pipe.flowModel.mus_act[1] <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1153
 type: ALGORITHM
 
   assert(valveIncompressible1.state_a.d >= 0.0 and valveIncompressible1.state_a.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= valveIncompressible1.state_a.d <= 100000.0, has value: " + String(valveIncompressible1.state_a.d, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1153};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,101,"Variable violating min/max constraint: 0.0 <= valveIncompressible1.state_a.d <= 100000.0, has value: ");
  modelica_string tmp173;
  static int tmp174 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp174)
  {
    tmp170 = GreaterEq(data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */,0.0);
    tmp171 = LessEq(data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */,100000.0);
    if(!(tmp170 && tmp171))
    {
      tmp173 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[359] /* valveIncompressible1.state_a.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.state_a.d >= 0.0 and valveIncompressible1.state_a.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp174 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1154
 type: ALGORITHM
 
   assert(valveIncompressible1.state_a.T >= 273.15 and valveIncompressible1.state_a.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valveIncompressible1.state_a.T <= 2273.15, has value: " + String(valveIncompressible1.state_a.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1154};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,103,"Variable violating min/max constraint: 273.15 <= valveIncompressible1.state_a.T <= 2273.15, has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp175 = GreaterEq(data->localData[0]->realVars[358] /* valveIncompressible1.state_a.T variable */,273.15);
    tmp176 = LessEq(data->localData[0]->realVars[358] /* valveIncompressible1.state_a.T variable */,2273.15);
    if(!(tmp175 && tmp176))
    {
      tmp178 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[358] /* valveIncompressible1.state_a.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.state_a.T >= 273.15 and valveIncompressible1.state_a.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1155
 type: ALGORITHM
 
   assert(valveIncompressible1.state_b.d >= 0.0 and valveIncompressible1.state_b.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= valveIncompressible1.state_b.d <= 100000.0, has value: " + String(valveIncompressible1.state_b.d, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1155};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,101,"Variable violating min/max constraint: 0.0 <= valveIncompressible1.state_b.d <= 100000.0, has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp180 = GreaterEq(data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */,0.0);
    tmp181 = LessEq(data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */,100000.0);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[361] /* valveIncompressible1.state_b.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",144,5,144,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.state_b.d >= 0.0 and valveIncompressible1.state_b.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1156
 type: ALGORITHM
 
   assert(valveIncompressible1.state_b.T >= 273.15 and valveIncompressible1.state_b.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valveIncompressible1.state_b.T <= 2273.15, has value: " + String(valveIncompressible1.state_b.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1156};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,103,"Variable violating min/max constraint: 273.15 <= valveIncompressible1.state_b.T <= 2273.15, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp185 = GreaterEq(data->localData[0]->realVars[360] /* valveIncompressible1.state_b.T variable */,273.15);
    tmp186 = LessEq(data->localData[0]->realVars[360] /* valveIncompressible1.state_b.T variable */,2273.15);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[360] /* valveIncompressible1.state_b.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",145,5,145,32,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.state_b.T >= 273.15 and valveIncompressible1.state_b.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1157
 type: ALGORITHM
 
   assert(valveIncompressible1.port_a_T >= 273.15 and valveIncompressible1.port_a_T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valveIncompressible1.port_a_T <= 2273.15, has value: " + String(valveIncompressible1.port_a_T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1157};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,102,"Variable violating min/max constraint: 273.15 <= valveIncompressible1.port_a_T <= 2273.15, has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp190 = GreaterEq(data->localData[0]->realVars[355] /* valveIncompressible1.port_a_T variable */,273.15);
    tmp191 = LessEq(data->localData[0]->realVars[355] /* valveIncompressible1.port_a_T variable */,2273.15);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[355] /* valveIncompressible1.port_a_T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",340,3,345,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.port_a_T >= 273.15 and valveIncompressible1.port_a_T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1158
 type: ALGORITHM
 
   assert(valveIncompressible1.port_b_T >= 273.15 and valveIncompressible1.port_b_T <= 2273.15, "Variable violating min/max constraint: 273.15 <= valveIncompressible1.port_b_T <= 2273.15, has value: " + String(valveIncompressible1.port_b_T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1158};
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,102,"Variable violating min/max constraint: 273.15 <= valveIncompressible1.port_b_T <= 2273.15, has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp195 = GreaterEq(data->localData[0]->realVars[356] /* valveIncompressible1.port_b_T variable */,273.15);
    tmp196 = LessEq(data->localData[0]->realVars[356] /* valveIncompressible1.port_b_T variable */,2273.15);
    if(!(tmp195 && tmp196))
    {
      tmp198 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[356] /* valveIncompressible1.port_b_T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",346,3,351,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nvalveIncompressible1.port_b_T >= 273.15 and valveIncompressible1.port_b_T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1159
 type: ALGORITHM
 
   assert(timeTable1.y >= 0.0 and timeTable1.y <= 1.0, "Variable violating min/max constraint: 0.0 <= timeTable1.y <= 1.0, has value: " + String(timeTable1.y, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1159};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,78,"Variable violating min/max constraint: 0.0 <= timeTable1.y <= 1.0, has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp200 = GreaterEq(data->localData[0]->realVars[349] /* timeTable1.y variable */,0.0);
    tmp201 = LessEq(data->localData[0]->realVars[349] /* timeTable1.y variable */,1.0);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[349] /* timeTable1.y variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Blocks/Interfaces.mo",269,5,270,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ntimeTable1.y >= 0.0 and timeTable1.y <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1160
 type: ALGORITHM
 
   assert(naturalConvection1.T >= 200.0 and naturalConvection1.T <= 6000.0, "Variable violating min/max constraint: 200.0 <= naturalConvection1.T <= 6000.0, has value: " + String(naturalConvection1.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1160};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,91,"Variable violating min/max constraint: 200.0 <= naturalConvection1.T <= 6000.0, has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp205 = GreaterEq(data->localData[0]->realVars[292] /* naturalConvection1.T variable */,200.0);
    tmp206 = LessEq(data->localData[0]->realVars[292] /* naturalConvection1.T variable */,6000.0);
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[292] /* naturalConvection1.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1/CoffeeTemperature.mo",1466,7,1466,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nnaturalConvection1.T >= 200.0 and naturalConvection1.T <= 6000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1161
 type: ALGORITHM
 
   assert(naturalConvection1.solid.T >= 0.0, "Variable violating min constraint: 0.0 <= naturalConvection1.solid.T, has value: " + String(naturalConvection1.solid.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1161};
  modelica_boolean tmp210;
  static const MMC_DEFSTRINGLIT(tmp211,81,"Variable violating min constraint: 0.0 <= naturalConvection1.solid.T, has value: ");
  modelica_string tmp212;
  static int tmp213 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp213)
  {
    tmp210 = GreaterEq(data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */,0.0);
    if(!tmp210)
    {
      tmp212 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* naturalConvection1.solid.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp211),tmp212);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Thermal/HeatTransfer.mo",2777,7,2777,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nnaturalConvection1.solid.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp213 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1162
 type: ALGORITHM
 
   assert(naturalConvection21.T >= 200.0 and naturalConvection21.T <= 6000.0, "Variable violating min/max constraint: 200.0 <= naturalConvection21.T <= 6000.0, has value: " + String(naturalConvection21.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1162};
  modelica_boolean tmp214;
  modelica_boolean tmp215;
  static const MMC_DEFSTRINGLIT(tmp216,92,"Variable violating min/max constraint: 200.0 <= naturalConvection21.T <= 6000.0, has value: ");
  modelica_string tmp217;
  static int tmp218 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp218)
  {
    tmp214 = GreaterEq(data->localData[0]->realVars[312] /* naturalConvection21.T variable */,200.0);
    tmp215 = LessEq(data->localData[0]->realVars[312] /* naturalConvection21.T variable */,6000.0);
    if(!(tmp214 && tmp215))
    {
      tmp217 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[312] /* naturalConvection21.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp216),tmp217);
      {
        FILE_INFO info = {"C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1/CoffeeTemperature.mo",1466,7,1466,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nnaturalConvection21.T >= 200.0 and naturalConvection21.T <= 6000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp218 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1163
 type: ALGORITHM
 
   assert(enclosedConvection1.T >= 273.15 and enclosedConvection1.T <= 2273.15, "Variable violating min/max constraint: 273.15 <= enclosedConvection1.T <= 2273.15, has value: " + String(enclosedConvection1.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1163};
  modelica_boolean tmp219;
  modelica_boolean tmp220;
  static const MMC_DEFSTRINGLIT(tmp221,94,"Variable violating min/max constraint: 273.15 <= enclosedConvection1.T <= 2273.15, has value: ");
  modelica_string tmp222;
  static int tmp223 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp223)
  {
    tmp219 = GreaterEq(data->localData[0]->realVars[269] /* enclosedConvection1.T variable */,273.15);
    tmp220 = LessEq(data->localData[0]->realVars[269] /* enclosedConvection1.T variable */,2273.15);
    if(!(tmp219 && tmp220))
    {
      tmp222 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* enclosedConvection1.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp221),tmp222);
      {
        FILE_INFO info = {"C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1/CoffeeTemperature.mo",1605,7,1605,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nenclosedConvection1.T >= 273.15 and enclosedConvection1.T <= 2273.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp223 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1164
 type: ALGORITHM
 
   assert(enclosedConvection1.solid.T >= 0.0, "Variable violating min constraint: 0.0 <= enclosedConvection1.solid.T, has value: " + String(enclosedConvection1.solid.T, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  modelica_boolean tmp224;
  static const MMC_DEFSTRINGLIT(tmp225,82,"Variable violating min constraint: 0.0 <= enclosedConvection1.solid.T, has value: ");
  modelica_string tmp226;
  static int tmp227 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp227)
  {
    tmp224 = GreaterEq(data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */,0.0);
    if(!tmp224)
    {
      tmp226 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[276] /* enclosedConvection1.solid.T variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp225),tmp226);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Thermal/HeatTransfer.mo",2777,7,2777,56,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nenclosedConvection1.solid.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp227 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1165
 type: ALGORITHM
 
   assert(enclosedConvection1.state.h >= -10000000000.0 and enclosedConvection1.state.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= enclosedConvection1.state.h <= 10000000000.0, has value: " + String(enclosedConvection1.state.h, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  modelica_boolean tmp228;
  modelica_boolean tmp229;
  static const MMC_DEFSTRINGLIT(tmp230,114,"Variable violating min/max constraint: -10000000000.0 <= enclosedConvection1.state.h <= 10000000000.0, has value: ");
  modelica_string tmp231;
  static int tmp232 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp232)
  {
    tmp228 = GreaterEq(data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */,-10000000000.0);
    tmp229 = LessEq(data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */,10000000000.0);
    if(!(tmp228 && tmp229))
    {
      tmp231 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[277] /* enclosedConvection1.state.h variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp230),tmp231);
      {
        FILE_INFO info = {"C:/OpenModelica1.13.0-dev-64bit/lib/omlibrary/Modelica 3.2.2/Media/Water/package.mo",143,5,143,43,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nenclosedConvection1.state.h >= -10000000000.0 and enclosedConvection1.state.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp232 = 1;
    }
  }
  TRACE_POP
}

/*
 equation index: 1166
 type: ALGORITHM
 
   assert(enclosedConvection1.d >= 0.0 and enclosedConvection1.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= enclosedConvection1.d <= 100000.0, has value: " + String(enclosedConvection1.d, "g"));
 */
void CoffeeTemperature_Test_CoffeeTest10_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  modelica_boolean tmp233;
  modelica_boolean tmp234;
  static const MMC_DEFSTRINGLIT(tmp235,92,"Variable violating min/max constraint: 0.0 <= enclosedConvection1.d <= 100000.0, has value: ");
  modelica_string tmp236;
  static int tmp237 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp237)
  {
    tmp233 = GreaterEq(data->localData[0]->realVars[271] /* enclosedConvection1.d variable */,0.0);
    tmp234 = LessEq(data->localData[0]->realVars[271] /* enclosedConvection1.d variable */,100000.0);
    if(!(tmp233 && tmp234))
    {
      tmp236 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* enclosedConvection1.d variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp235),tmp236);
      {
        FILE_INFO info = {"C:/Work/CAE/Modelica/OpenModelica/OpenModelica_Excel_Interface_ClassPackage/Examples/Test/parameterSweep/1/CoffeeTemperature.mo",1624,7,1624,13,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nenclosedConvection1.d >= 0.0 and enclosedConvection1.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp237 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int CoffeeTemperature_Test_CoffeeTest10_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1118(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1119(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1120(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1121(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1122(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1123(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1124(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1125(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1126(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1127(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1128(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1129(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1130(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1131(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1132(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1133(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1134(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1135(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1136(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1137(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1138(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1139(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1140(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1141(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1142(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1143(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1144(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1145(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1146(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1147(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1148(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1149(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1150(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1151(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1152(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1153(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1154(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1155(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1156(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1157(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1158(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1159(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1160(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1161(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1162(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1163(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1164(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1165(data, threadData);

  CoffeeTemperature_Test_CoffeeTest10_eqFunction_1166(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

