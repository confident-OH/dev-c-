#include<stdio.h>
double fact (int n);
int main (void)
{
	int i,n,m;
	double C;
	printf("CΪ��n������ѡm�����������"); 
	printf ("Enter n,m:\n");
	scanf("%d %d",&n,&m);
	C=fact(n)/(fact(m)*fact(n-m));
	printf("C=%f\n",C);
	return 0;
}
double fact (int n)
{
	int i;
	double product=1;
	for (i=1;i<=n;i++){
		product=product*i;
	}
	return product;
	} 
