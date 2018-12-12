#include<stdio.h>
int main(void)
{
	int n,h;
	scanf("%d",&n);
	while(n!=0){
		while(n!=0){
			h=n%10;
			printf("%d",h);
			n=n/10;
		}
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}
