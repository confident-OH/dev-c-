/**********************************
姓名：曾洋卿
编程设计题（1） 
功能： 计算工资税金
	   税金标准：
	    x ＜ 1000 元，不收取税金；
		1000 ≤ x ＜ 2000，收取 5%的税金；
		2000 ≤ x ＜ 3000，收取 10%的税金；
		3000 ≤ x ＜ 4000，收取 15%的税金；
		4000 ≤ x ＜ 5000，收取 20%的税金；
		x＞5000，收取 25%的税金
		(switch语句实现) 
**********************************/ 
#include<stdio.h>
int main(void)
{
	int n=0;  //输入的工资值 
	double x=0;  //输出的税金值 
	scanf("%d", &n);
	while(n!=0){  ////输入0结束循环  
		x=0;
		switch(n/1000){
			case 0: printf("%f", x); break;
			case 1: x = (n-1000)*0.05; printf("%f\n", x); break;
			case 2: x = (n-2000)*0.1 + 50; printf("%f\n", x); break;
			case 3: x = (n-3000)*0.15 + 150; printf("%f\n", x); break;
			case 4: x = (n-4000)*0.2 + 300; printf("%f\n", x); break;
			default : x = (n-5000)*0.25 + 500; printf("%f\n", x); break;
		}
		scanf("%d", &n);
	}
	return 0; 
}
