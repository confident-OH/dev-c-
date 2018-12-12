#include<stdio.h>
double fact(int n);
int main (void)
{
	double sum;
	int i;
	sum=0;
	for (i=1;i<=100;i++){
		sum=sum+fact(i);	
	}
	printf ("1!+2!+...+100!=%f\n",sum);
	
	return 0;
}
double fact(int n)
{
	int i;
	double result;
	result=1;
	for(i=1;i<=n;i++){
		result=result*i;
	}
	return result;
	
}
 
