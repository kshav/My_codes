function [a,b] = gss(x0,eps,N)
%
% Performs golden section search on the function f.
% Assumptions: f is continuous on [a,b]; and
% f has only one minimum in [a,b].
% No more than N function evaluations are done.
% When b-a < eps, the iteration stops.
dx=0.001;
[a,b]=bound(x0,dx);
c = (-1+sqrt(5))/2;
x1 = c*a + (1-c)*b;
fx1=fun(x1);
x2 = (1-c)*a + c*b;
fx2=fun(x2);
for i = 1:N-2
if (fx1 < fx2)
b = x2;
x2 = x1;
fx2 = fx1;
x1 = c*a + (1-c)*b;
fx1=fun(x1);
else
a = x1;
x1 = x2;
fx1 = fx2;
x2 = (1-c)*a + c*b;
fx2=fun(x2);
end;
if (abs(b-a) < (eps*10))
return;
end;
end;
