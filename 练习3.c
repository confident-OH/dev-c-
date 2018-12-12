#include<stdio.h>
int main(void)
{
	int i,n,flag,denominator;
	double item,sum;
		printf("Enter n=\n");
		scanf("%d",&n);
		flag=1;
		denominator=1;
		sum=0;

	for (i=1;i<=n;i++)
	{
		item=(flag*1.0/denominator);
		sum=sum+item;
		denominator=denominator+2;
		flag=-flag;
		 
	}
	printf("sum=%f\n",sum);
	
	return 0;
}
