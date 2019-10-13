/* Linearization */
#include "hel_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

const char *hel_linear_model_frame()
{
  return "model linear_hel\n  parameter Integer n = 1; // states\n  parameter Integer k = 0; // top-level inputs\n  parameter Integer l = 0; // top-level outputs\n"
  "  parameter Real x0[1] = {%s};\n"
  "  parameter Real u0[0] = {%s};\n"
  "  parameter Real A[1,1] = [%s];\n"
  "  parameter Real B[1,0] = zeros(1,0);%s\n"
  "  parameter Real C[0,1] = zeros(0,1);%s\n"
  "  parameter Real D[0,0] = zeros(0,0);%s\n"
  "  Real x[1](start=x0);\n"
  "  input Real u[0];\n"
  "  output Real y[0];\n"
  "\n  Real 'x_x' = x[1];\n\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\nend linear_hel;\n";
}
const char *hel_linear_model_datarecovery_frame()
{
  return "model linear_hel\n  parameter Integer n = 1; // states\n  parameter Integer k = 0; // top-level inputs\n  parameter Integer l = 0; // top-level outputs\n  parameter Integer nz = 0; // data recovery variables\n"
  "  parameter Real x0[1] = {%s};\n"
  "  parameter Real u0[0] = {%s};\n"
  "  parameter Real z0[0] = {%s};\n"
  "  parameter Real A[1,1] = [%s];\n"
  "  parameter Real B[1,0] = zeros(1,0);%s\n"
  "  parameter Real C[0,1] = zeros(0,1);%s\n"
  "  parameter Real D[0,0] = zeros(0,0);%s\n"
  "  parameter Real Cz[0,1] = zeros(0,1);%s\n"
  "  parameter Real Dz[0,0] = zeros(0,0);%s\n"
  "  Real x[1](start=x0);\n"
  "  input Real u[0];\n"
  "  output Real y[0];\n"
  "  output Real z[0];\n"
  "\nReal 'x_x' = x[1];\n\n"
  "equation\n  der(x) = A * x + B * u;\n  y = C * x + D * u;\n  z = Cz * x + Dz * u;\nend linear_hel;\n";
}
#if defined(__cplusplus)
}
#endif

