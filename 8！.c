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
	printf("����n!>=S����С������n=%d",n);
	return 0;
}
