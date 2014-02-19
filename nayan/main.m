x0=input('enter starting point');
eps=input('enter level of accuracy');
N=input('enter number of iterations');
[a,b]=gss(x0,eps,N);
disp(['x_opt = (' , num2str(a) ,',', num2str(b),')']);