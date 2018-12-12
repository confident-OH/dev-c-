#include<stdio.h>
int main (void)
{
	int i,n;
	printf("Enter Max:");
	scanf("%d",&n); 
	int fib [n];	
    fib[0]=1;
    fib[1]=1;
	for (i=2;i<=n;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	for (i=0;i<=n;i++){
		printf ("%-15d",fib[i]);
		if ((i+1)%8==0)
		printf ("\n");
	}
	return 0;
}
