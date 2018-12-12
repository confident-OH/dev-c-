#include <stdio.h>
int main(void)
{
	int i,n=0,S,item;
	printf("Please Enter S:");
	scanf("%d",&S);
	do{
		n++;
		item=1;
		for(i=1;i<=n;i++)
			item*=i;

	}
	while(item<S);
	printf("满足n!>=S的最小整数：n=%d",n);
	return 0;
}
