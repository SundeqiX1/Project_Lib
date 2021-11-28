function [sys,x0,str,ts] = fcn_1(t,x,u,flag)
switch flag
case 0
    [sys,x0,str,ts]=mdlInitializeSizes;
case 3
    sys=mdlOutputs(t,x,u);
case {2,4,9}
    sys=[];
otherwise
    error(['Unhandled flag = ',num2str(flag)]);
end
function [sys,x0,str,ts]=mdlInitializeSizes
sizes = simsizes;
sizes.NumContStates  = 0;
sizes.NumDiscStates  = 0;
sizes.NumOutputs     = 6;
sizes.NumInputs      = 64;
sizes.DirFeedthrough = 1;
sizes.NumSampleTimes = 0;
sys = simsizes(sizes);
x0  = [];
str = [];
ts  = [];
function sys=mdlOutputs(t1,x,u)  
%shll

%阶数
k=1;m=2;e_sh=0;n_1=1;s_sh=0;x_sh=0;
while k<=8
    sh(k)=u(m)*2^(8-k);
    e_sh = e_sh+sh(k);
    k = k+1;
    m = m+1;
end

%尾数
while m<=32
    sh(k) = u(m)*2^(-n_1);
    x_sh= sh(k)+ x_sh;
    k = k+1;
    n_1 = n_1+1;
        m =m+1;
end
%符号位
s_sh = (-1)^(u(1));






%ljll
i =1;j=34;e_lj =0;n=1;x_lj=0;s_lj=0;
%阶数
while i<=8
    lj(i)=u(j)*2^(8-i);
    e_lj = e_lj+lj(i);
    i = i+1;
    j = j+1;
end

%尾数
while j<=64
    lj(i) = u(j)*2^(-n);
    x_lj= lj(i)+ x_lj;
    j = j+1;
    n = n+1;
end
%符号位
s_lj = (-1)^(u(33));

%累计
sys(1)=e_lj;
sys(2)=x_lj;
sys(3)=s_lj;
%瞬时
sys(4)=e_sh ;
sys(5)=x_sh;
sys(6)=s_sh;



