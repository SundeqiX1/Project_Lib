clear
clc
t=0:0.001:15;
V=zeros(1,length(t));
S=zeros(1,length(t));
a=zeros(1,length(t));

Smax=100;
xsj=0;      %0ÐýËÉ£¬1Ðý½ô
if xsj==0
    T1=4;      %ÐýËÉ
    T2=6;      %ÐýËÉ
    T3=10;      %ÐýËÉ
else
    T1=3;      %Ðý½ô
    T2=9;      %Ðý½ô
    T3=12;      %Ðý½ô
end

    
Vmax=2*Smax/(T3+T2-T1);

t1=0:0.001:T1;
t2=0:0.001:T2;
t3=0:0.001:T3;


for i=1:length(t1)
   V(i)=(Vmax/2)*sin(t(i)*pi/T1-pi/2)+Vmax/2;
   a(i)=pi/T1*(Vmax/2)*cos(t(i)*pi/T1-pi/2);
   S(i)=-(T1/pi)*(Vmax/2)*cos(pi*t(i)/T1-pi/2)+Vmax*t(i)/2;
end
for i=length(t1)+1:length(t2)
   V(i)=Vmax;
   a(i)=0;
   S(i)=Vmax*T1/2 ...,
        +Vmax*(t(i)-T1);
end
for i=length(t2)+1:length(t3)
   V(i)=(Vmax/2)*sin((pi/(T3-T2))*(t(i)+(T3-T2))+(pi/2)*((T2+T3)/(T2-T3)))+Vmax/2;
   a(i)=(pi/(T3-T2))*(Vmax/2)*cos((pi/(T3-T2))*(t(i)+(T3-T2))+(pi/2)*((T2+T3)/(T2-T3)));
   S(i)=Vmax*T1/2 ...,
        +Vmax*(T2-T1) ...,
        -((T3-T2)/pi)*(Vmax/2)*cos((pi/(T3-T2))*(t(i)+(T3-T2))+(pi/2)*((T2+T3)/(T2-T3))) ...,
        +((T3-T2)/pi)*(Vmax/2)*cos((pi/(T3-T2))*(T2+(T3-T2))+(pi/2)*((T2+T3)/(T2-T3))) ...,
        +(Vmax/2)*(t(i)-T2);
end
for i=length(t3)+1:length(t)
   V(i)=0;
   a(i)=0;
   S(i)=Smax;
end
figure
subplot(4,1,1);
plot(t,V,'k');
grid on
subplot(4,1,2);
plot(t,S,'r');
grid on
subplot(4,1,3);
plot(t,a,'c');
grid on
subplot(4,1,4);
plot(S,V,'b');
grid on