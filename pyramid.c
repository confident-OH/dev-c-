#include<stdio.h>
void pyramid (int n);
int main (void)
{
	int n;
	printf ("Input your number:");
	scanf ("%d",&n);
	pyramid(n);
	return 0;
}
void pyramid(int n)
{
	int i,j;
	
	for (i=1;i<=n;i++){
		for(j=1;j<=n-i;j++)
		printf (" ");
		for (j=1;j<=i;j++)
		printf ("%2.1d",i);
		putchar('\n');
	}
}
