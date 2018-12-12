#include<stdio.h>
int even(int n);
int main (void)
{
	int n;
	printf ("Input n:");
	scanf ("%d",&n);
	if (even(n)==1)
		printf ("odd\n");
	else 
	    printf ("even\n");
	    
	return 0;    
}
int even(int n)
{
	if(n%2==0)
	return 0;
	else 
	return 1;
}

