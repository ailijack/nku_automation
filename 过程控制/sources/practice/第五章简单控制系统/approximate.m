function [K,T,tao] = approximate(Go,tao0)
% 输入传递函数，输出近似后的一阶惯性加延迟系统的T和τ
% 教材47页

t=0:0.1:50;
[y,~]=step(Go,t);
K=y(length(y))/1;
y=y/y(length(y));
[~,n1]=min(abs(y-0.39));t1=t(n1);
[~,n2]=min(abs(y-0.63));t2=t(n2);
T=2*(t2-t1);
tao=2*t1-t2+tao0;

end

