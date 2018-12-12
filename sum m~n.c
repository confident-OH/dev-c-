#include <stdio.h>
#include <math.h>
int sum (int n);
int main (void)
{
	int n,a,m;
	
	printf ("Input n:");
	scanf ("%d",&n);
	a=sum(n);
	printf ("sum=%d",a);
	
	return 0;
}
int sum(int n)
{
	int i,item,m;
	item=0;
	printf("Imput m:"); 
	scanf("%d",&m);
	for (i=m;i<=n;i++){
		item=i+item;
	}
	
	return item;
}
