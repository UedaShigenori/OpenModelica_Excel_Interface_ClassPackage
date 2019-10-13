model hel
  parameter Real a=-1;
  parameter Real b=-1;
  Real x(start=1);
equation
  der(x)=a*x;
end hel;

