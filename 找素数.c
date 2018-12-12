#include<stdio.h>
#include<math.h>
int prime(int m);
int main (void)
{
	int count,m,n;
	printf("Max:");
	scanf("%d",&n);
	count=0;
	for (m=2;m<=n;m++){
		if (prime(m)!=0){
		printf("%6d",m);
		count++;
		if (count%10==0)
		printf("\n");
		
		}
		
	}
	printf("\n");
	return 0;
}
int prime(int m)
{
	int i,n;
	if (m==1)return 0;
	n=sqrt(m);
	for (i=2;i<=n;i++)
	if(m%2==0){return 0;
	}
	return 1;
}
