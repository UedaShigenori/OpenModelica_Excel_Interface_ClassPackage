/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "CoffeeTemperature.Test.CoffeeTest11_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void CoffeeTemperature_Test_CoffeeTest11_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *CoffeeTemperature_Test_CoffeeTest11_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pre(combiTimeTable1.nextTimeEvent)",
  "time >= pre(timeTable1.nextEvent)",
  "yakan.level >= yakan.portsData[1].height",
  "yakan.medium.h < $cse6.h or yakan.medium.h > $cse7.h or yakan.p_ambient > 22064000.0",
  "cup.level >= cup.portsData[1].height",
  "cup.medium.h < $cse1.h or cup.medium.h > $cse2.h or cup.p_ambient > 22064000.0",
  "2.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 10.0 and enclosedConvection1.Pr < 100000.0 and 1000.0 < enclosedConvection1.Ra and enclosedConvection1.Ra < 10000000000.0",
  "1.0 < enclosedConvection1.H / enclosedConvection1.L and enclosedConvection1.H / enclosedConvection1.L < 2.0 and 0.001 < enclosedConvection1.Pr and enclosedConvection1.Pr < 100000.0 and enclosedConvection1.A1 > 100.0",
  "enclosedConvection1.Pr < 100000.0",
  "1000.0 < enclosedConvection1.Ra",
  "enclosedConvection1.Ra < 10000000000.0",
  "0.001 < enclosedConvection1.Pr",
  "enclosedConvection1.A1 > 100.0",
  "not cup.regularFlow[1] and (cup.s[1] > 0.0 or cup.portsData[1].height >= cup.fluidLevel_max)",
  "not yakan.regularFlow[1] and (yakan.s[1] > 0.0 or yakan.portsData[1].height >= yakan.fluidLevel_max)"};
  static const int occurEqs0[] = {1,742};
  static const int occurEqs1[] = {1,737};
  static const int occurEqs2[] = {1,730};
  static const int occurEqs3[] = {1,719};
  static const int occurEqs4[] = {1,679};
  static const int occurEqs5[] = {1,650};
  static const int occurEqs6[] = {1,-1};
  static const int occurEqs7[] = {1,-1};
  static const int occurEqs8[] = {1,-1};
  static const int occurEqs9[] = {1,-1};
  static const int occurEqs10[] = {1,-1};
  static const int occurEqs11[] = {1,-1};
  static const int occurEqs12[] = {1,-1};
  static const int occurEqs13[] = {1,-1};
  static const int occurEqs14[] = {1,-1};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13,occurEqs14};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_650(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_651(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_652(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_653(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_654(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_674(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_676(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_677(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_679(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_715(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_716(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_717(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_718(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_719(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_720(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_721(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_722(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_723(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_724(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_725(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_727(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_728(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_730(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_731(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_732(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_733(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_734(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_735(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_737(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_738(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_739(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_740(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_741(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_748(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_749(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_751(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_752(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_754(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_755(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_756(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_757(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_758(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_759(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_760(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_761(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_762(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_763(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_789(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_792(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_793(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_794(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_795(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_796(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_803(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_804(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_817(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_818(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_819(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_826(DATA* data, threadData_t *threadData);
extern void CoffeeTemperature_Test_CoffeeTest11_eqFunction_827(DATA* data, threadData_t *threadData);

int CoffeeTemperature_Test_CoffeeTest11_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_650(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_651(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_652(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_653(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_654(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_674(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_676(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_677(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_679(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_715(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_716(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_717(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_718(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_719(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_720(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_721(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_722(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_723(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_724(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_725(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_727(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_728(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_730(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_731(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_732(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_733(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_734(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_735(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_737(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_738(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_739(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_740(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_741(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_748(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_749(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_751(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_752(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_754(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_755(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_756(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_757(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_758(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_759(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_760(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_761(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_762(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_763(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_789(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_792(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_793(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_794(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_795(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_796(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_803(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_804(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_817(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_818(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_819(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_826(data, threadData);

  CoffeeTemperature_Test_CoffeeTest11_eqFunction_827(data, threadData);
  
  TRACE_POP
  return 0;
}

int CoffeeTemperature_Test_CoffeeTest11_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp397;
  modelica_boolean tmp398;
  modelica_boolean tmp399;
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  modelica_boolean tmp402;
  modelica_boolean tmp403;
  modelica_boolean tmp404;
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  modelica_boolean tmp407;
  modelica_boolean tmp408;
  modelica_boolean tmp409;
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  modelica_boolean tmp412;
  modelica_boolean tmp413;
  modelica_boolean tmp414;
  modelica_boolean tmp415;
  modelica_boolean tmp416;
  modelica_boolean tmp417;
  modelica_boolean tmp418;
  modelica_boolean tmp419;
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  modelica_boolean tmp422;
  modelica_boolean tmp423;
  modelica_boolean tmp424;
  modelica_boolean tmp425;
  
  data->simulationInfo->callStatistics.functionZeroCrossings++;
  
  tmp397 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realVarsPre[387] /* combiTimeTable1.nextTimeEvent DISCRETE */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp397) ? 1 : -1;
  tmp398 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */, data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp398) ? 1 : -1;
  tmp399 = GreaterEqZC(data->localData[0]->realVars[5] /* yakan.level STATE(1) */, data->simulationInfo->realParameter[146], data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp399) ? 1 : -1;
  tmp400 = LessZC(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, data->localData[0]->realVars[199] /* $cse6.h variable */, data->simulationInfo->storedRelations[3]);
  tmp401 = GreaterZC(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, data->localData[0]->realVars[211] /* $cse7.h variable */, data->simulationInfo->storedRelations[4]);
  tmp402 = Greater(data->simulationInfo->realParameter[143],22064000.0);
  gout[3] = (((tmp400 || tmp401) || tmp402)) ? 1 : -1;
  tmp403 = GreaterEqZC(data->localData[0]->realVars[0] /* cup.level STATE(1) */, data->simulationInfo->realParameter[34], data->simulationInfo->storedRelations[5]);
  gout[4] = (tmp403) ? 1 : -1;
  tmp404 = LessZC(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, data->localData[0]->realVars[30] /* $cse1.h variable */, data->simulationInfo->storedRelations[6]);
  tmp405 = GreaterZC(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, data->localData[0]->realVars[130] /* $cse2.h variable */, data->simulationInfo->storedRelations[7]);
  tmp406 = Greater(data->simulationInfo->realParameter[31],22064000.0);
  gout[5] = (((tmp404 || tmp405) || tmp406)) ? 1 : -1;
  tmp407 = Less(2.0,DIVISION(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L"));
  tmp408 = Less(DIVISION(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L"),10.0);
  tmp409 = LessZC(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, data->simulationInfo->storedRelations[8]);
  tmp410 = LessZC(1000.0, data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, data->simulationInfo->storedRelations[9]);
  tmp411 = LessZC(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, 10000000000.0, data->simulationInfo->storedRelations[10]);
  gout[6] = (((((tmp407 && tmp408) && tmp409) && tmp410) && tmp411)) ? 1 : -1;
  tmp412 = Less(1.0,DIVISION(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L"));
  tmp413 = Less(DIVISION(data->simulationInfo->realParameter[42],data->simulationInfo->realParameter[43],"enclosedConvection1.L"),2.0);
  tmp414 = LessZC(0.001, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, data->simulationInfo->storedRelations[11]);
  tmp415 = LessZC(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, data->simulationInfo->storedRelations[8]);
  tmp416 = GreaterZC(data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */, 100.0, data->simulationInfo->storedRelations[12]);
  gout[7] = (((((tmp412 && tmp413) && tmp414) && tmp415) && tmp416)) ? 1 : -1;
  tmp417 = LessZC(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, data->simulationInfo->storedRelations[8]);
  gout[8] = (tmp417) ? 1 : -1;
  tmp418 = LessZC(1000.0, data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, data->simulationInfo->storedRelations[9]);
  gout[9] = (tmp418) ? 1 : -1;
  tmp419 = LessZC(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, 10000000000.0, data->simulationInfo->storedRelations[10]);
  gout[10] = (tmp419) ? 1 : -1;
  tmp420 = LessZC(0.001, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, data->simulationInfo->storedRelations[11]);
  gout[11] = (tmp420) ? 1 : -1;
  tmp421 = GreaterZC(data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */, 100.0, data->simulationInfo->storedRelations[12]);
  gout[12] = (tmp421) ? 1 : -1;
  tmp422 = GreaterZC(data->localData[0]->realVars[260] /* cup.s[1] variable */, 0.0, data->simulationInfo->storedRelations[13]);
  tmp423 = GreaterEq(data->simulationInfo->realParameter[34],data->simulationInfo->realParameter[22]);
  gout[13] = (((!data->localData[0]->booleanVars[7] /* cup.regularFlow[1] DISCRETE */) && (tmp422 || tmp423))) ? 1 : -1;
  tmp424 = GreaterZC(data->localData[0]->realVars[385] /* yakan.s[1] variable */, 0.0, data->simulationInfo->storedRelations[14]);
  tmp425 = GreaterEq(data->simulationInfo->realParameter[146],data->simulationInfo->realParameter[134]);
  gout[14] = (((!data->localData[0]->booleanVars[9] /* yakan.regularFlow[1] DISCRETE */) && (tmp424 || tmp425))) ? 1 : -1;
  
  TRACE_POP
  return 0;
}

const char *CoffeeTemperature_Test_CoffeeTest11_relationDescription(int i)
{
  const char *res[] = {"time >= pre(combiTimeTable1.nextTimeEvent)",
  "time >= pre(timeTable1.nextEvent)",
  "yakan.level >= yakan.portsData[1].height",
  "yakan.medium.h < $cse6.h",
  "yakan.medium.h > $cse7.h",
  "cup.level >= cup.portsData[1].height",
  "cup.medium.h < $cse1.h",
  "cup.medium.h > $cse2.h",
  "enclosedConvection1.Pr < 100000.0",
  "1000.0 < enclosedConvection1.Ra",
  "enclosedConvection1.Ra < 10000000000.0",
  "0.001 < enclosedConvection1.Pr",
  "enclosedConvection1.A1 > 100.0",
  "cup.s[1] > 0.0",
  "yakan.s[1] > 0.0"};
  return res[i];
}

int CoffeeTemperature_Test_CoffeeTest11_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp426;
  modelica_boolean tmp427;
  modelica_boolean tmp428;
  modelica_boolean tmp429;
  modelica_boolean tmp430;
  modelica_boolean tmp431;
  modelica_boolean tmp432;
  modelica_boolean tmp433;
  modelica_boolean tmp434;
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  modelica_boolean tmp437;
  modelica_boolean tmp438;
  modelica_boolean tmp439;
  modelica_boolean tmp440;
  
  if(evalforZeroCross) {
    tmp426 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realVarsPre[387] /* combiTimeTable1.nextTimeEvent DISCRETE */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp426;
    tmp427 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */, data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp427;
    tmp428 = GreaterEqZC(data->localData[0]->realVars[5] /* yakan.level STATE(1) */, data->simulationInfo->realParameter[146], data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp428;
    tmp429 = LessZC(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, data->localData[0]->realVars[199] /* $cse6.h variable */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp429;
    tmp430 = GreaterZC(data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */, data->localData[0]->realVars[211] /* $cse7.h variable */, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp430;
    tmp431 = GreaterEqZC(data->localData[0]->realVars[0] /* cup.level STATE(1) */, data->simulationInfo->realParameter[34], data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp431;
    tmp432 = LessZC(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, data->localData[0]->realVars[30] /* $cse1.h variable */, data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp432;
    tmp433 = GreaterZC(data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */, data->localData[0]->realVars[130] /* $cse2.h variable */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp433;
    tmp434 = LessZC(data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, 100000.0, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp434;
    tmp435 = LessZC(1000.0, data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp435;
    tmp436 = LessZC(data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */, 10000000000.0, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp436;
    tmp437 = LessZC(0.001, data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp437;
    tmp438 = GreaterZC(data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */, 100.0, data->simulationInfo->storedRelations[12]);
    data->simulationInfo->relations[12] = tmp438;
    tmp439 = GreaterZC(data->localData[0]->realVars[260] /* cup.s[1] variable */, 0.0, data->simulationInfo->storedRelations[13]);
    data->simulationInfo->relations[13] = tmp439;
    tmp440 = GreaterZC(data->localData[0]->realVars[385] /* yakan.s[1] variable */, 0.0, data->simulationInfo->storedRelations[14]);
    data->simulationInfo->relations[14] = tmp440;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realVarsPre[387] /* combiTimeTable1.nextTimeEvent DISCRETE */);
    data->simulationInfo->relations[1] = (data->localData[0]->timeValue >= data->simulationInfo->realVarsPre[391] /* timeTable1.nextEvent DISCRETE */);
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[5] /* yakan.level STATE(1) */ >= data->simulationInfo->realParameter[146]);
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */ < data->localData[0]->realVars[199] /* $cse6.h variable */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[6] /* yakan.medium.h STATE(1) */ > data->localData[0]->realVars[211] /* $cse7.h variable */);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[0] /* cup.level STATE(1) */ >= data->simulationInfo->realParameter[34]);
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */ < data->localData[0]->realVars[30] /* $cse1.h variable */);
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[1] /* cup.medium.h STATE(1) */ > data->localData[0]->realVars[130] /* $cse2.h variable */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */ < 100000.0);
    data->simulationInfo->relations[9] = (1000.0 < data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[268] /* enclosedConvection1.Ra variable */ < 10000000000.0);
    data->simulationInfo->relations[11] = (0.001 < data->localData[0]->realVars[267] /* enclosedConvection1.Pr variable */);
    data->simulationInfo->relations[12] = (data->localData[0]->realVars[262] /* enclosedConvection1.A1 variable */ > 100.0);
    data->simulationInfo->relations[13] = (data->localData[0]->realVars[260] /* cup.s[1] variable */ > 0.0);
    data->simulationInfo->relations[14] = (data->localData[0]->realVars[385] /* yakan.s[1] variable */ > 0.0);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

