#include<stdio.h>
#define a(x,n) (x)>>=(n)
int main(void)
{
	int x=8, n=1;
	a(x,n);
	printf("%d", x);
	return 0;
 } 
