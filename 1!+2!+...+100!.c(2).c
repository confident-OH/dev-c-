#include<stdio.h>
int main (void)
{
	int i,n;
	double sum,item;
	for (i=1;i<=100;i++){
		item=1;
		for(n=1;n<=i;n++){
			item=item*n;
		}
		sum=sum+item;
	}
	printf("1!+2!+...+100!=%f\n",sum);
	return 0;
}
