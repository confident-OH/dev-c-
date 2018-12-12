#include<stdio.h>
int main(void)
{
	double x1=-0.14,x2=-0.16;
	while(x1-x2>1e-6||x2-x1>1e-6){
		x1=x2;
		x2=x1-((3*x1*x1*x1-4*x1*x1-5*x1+13)/(9*x1*x1-8*x1-5));
	}
	printf("%f\n",x2);
	return 0;
 } 
