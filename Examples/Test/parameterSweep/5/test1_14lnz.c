/* Linearization */
#include "test1_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

const char *test1_linear_model_frame()
{
  return "model linear_test1\n  parameter Integer n = 0; // states\n  parameter Integer k = 0; // top-level inputs\n  parameter Integer l = 0; // top-level outputs\n"
  "  parameter Real x0[0] = {%s};\n"
  "  parameter Real u0[0] = {%s};\n"
  "  parameter Real A[0,0] = zeros(0,0);%s\n"
  "  parameter Real B[0,0] = zeros(0,0);%s\n"
  "  parameter Real C[0,0] = zeros(0,0);%s\n"
  "  parameter Real D[0,0] = zeros(0,0);%s\n"
  "  Real x[0];\n"
  "  input Real u[0];\n"
  "  output Real y[0];\n"
  "\n  \n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_test1;\n";
}
const char *test1_linear_model_datarecovery_frame()
{
  return "model linear_test1\n  parameter Integer n = 0; // states\n  parameter Integer k = 0; // top-level inputs\n  parameter Integer l = 0; // top-level outputs\n  parameter Integer nz = 3; // data recovery variables\n"
  "  parameter Real x0[0] = {%s};\n"
  "  parameter Real u0[0] = {%s};\n"
  "  parameter Real z0[3] = {%s};\n"
  "  parameter Real A[0,0] = zeros(0,0);%s\n"
  "  parameter Real B[0,0] = zeros(0,0);%s\n"
  "  parameter Real C[0,0] = zeros(0,0);%s\n"
  "  parameter Real D[0,0] = zeros(0,0);%s\n"
  "  parameter Real Cz[3,0] = zeros(3,0);%s\n"
  "  parameter Real Dz[3,0] = zeros(3,0);%s\n"
  "  Real x[0];\n"
  "  input Real u[0];\n"
  "  output Real y[0];\n"
  "  output Real z[3];\n"
  "\nReal 'z_c' = z[1];\nReal 'z_d' = z[2];\nReal 'z_e' = z[3];\n\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_test1;\n";
}
#if defined(__cplusplus)
}
#endif

