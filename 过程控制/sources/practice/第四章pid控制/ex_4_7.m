%ex4_7
clc
Gp = tf(1,conv([1,1],conv([2,1],[5,1])));
Kc = 2;
Ti = [5,6,8,11,15,20];
t = 0:0.01:100;
for i = 1:length(Ti)
    Gc = tf([Kc,Kc/Ti(i)],[1,0]);
    Gb = feedback(Gc*Gp,1);
    step(Gb,t);
    hold on;
end
figure(1)
legend('Ti=5','Ti=6','Ti=8','Ti=11','Ti=15','Ti=20');
figure(2)
plot(out.SD(:,1),out.SD(:,2),out.SD(:,1),out.SD(:,3),out.SD(:,1),out.SD(:,4),[0,100],[1,1],'-.')
legend('原始系统','带饱和环节的系统','加入抗饱和措施后的系统');
figure(3)
plot(out.SD1(:,1),out.SD1(:,2),out.SD2(:,1),out.SD2(:,2),out.SD3(:,1),out.SD3(:,2))
legend('原始积分环节输出','带饱和环节时的积分环节输出','加入抗饱和措施后的积分环节输出');
