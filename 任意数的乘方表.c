#include <stdio.h>
#include <math.h>
int main (void)
{
	int n,i,c;
	double power;
	printf("Enter µ×Êýc=\n");
	scanf("%d",&c);
	printf("Enter n=\n");
	scanf("%d",&n); 
	
	for (i=0;i<=n;i++)
	{power=pow(c,i);
	printf ("pow(%d,%d)=%.0f\n",c,i,power);
	}
	
	return 0;
}
