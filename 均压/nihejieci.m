load('cccc.mat');
load('t.mat');
x=t(1:6000)*2;
y1=cccc(1:6000);
for i=1:20

    yy1=polyfit(x,y1,i);

    Y1=polyval(yy1,x);%计算拟合函数在x处的值。

    if sum((Y1-y1).^2)<0.00001

      

        c=i;  

        break;

    end

end
subplot(1,2,1),plot(x,Y1);

y2=cccc(12001:18000);
for i=1:20

    yy2=polyfit(x,y2,i);

    Y2=polyval(yy2,x);%计算拟合函数在x处的值。

    if sum((Y2-y2).^2)<0.00001

      

        c=i;  

        break;

    end

end
subplot(1,2,2),plot(x,Y2);