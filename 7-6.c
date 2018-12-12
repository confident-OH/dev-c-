#include<stdio.h>
int main (void)
{
	int n,i,sum,k,number;
	
	printf("Enter the sum of performer:");
	scanf("%d",&n);
	int count [n+1];
	printf("Input the sum of voter\n");
	scanf("%d",&sum);
	
	for(i=1;i<=n;i++)
	count [i]=0;
	for (i=1;i<=sum;i++){
		printf("Enter the number you suport:");
		scanf("%d",&number);
		if(0<number&&number<=n)
		count [number]++;
		else
		printf("invalid %d\n",number),sum++;
    }
    printf("\n");
    printf("result:\n");
	for (i=1;i<=8;i++)
	    printf("%d\t%d\n",i,count[i]);
	
	return 0;
 } 
