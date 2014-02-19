function [a , b] = bound( x0 , dx)
%BOUND Summary of this function goes here
%   Detailed explanation goes here

k=0;
%deciding the sign of delta according to given conditions
if(fun(x0-abs(dx))>=fun(x0) && fun(x0)>=fun(x0+abs(dx)))
    dx = abs(dx);% move towards right
elseif(fun(x0-abs(dx))<=fun(x0) && fun(x0)<=fun(x0+abs(dx)))
        dx = -abs(dx);%move towards left
end;
x1=x0+dx;%setting new point x1 at dx distance 
dx=2*dx;%incrementing dx to 2 times
x2=x1+dx;%setting new point x2 at dx distance
%as long as function value is decreasing we continue taking new points
%after doubling dx
while(fun(x2)<=fun(x1))
    dx=2*dx;
    x1=x2;
    x2=x2+dx;
end;
%final interval is from x1 to x2
x1=x1-dx/2;
x2=x2;
%store intervals in a and b
a=x1;
b=x2;
end

