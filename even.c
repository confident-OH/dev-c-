#include <stdio.h>
int even(int x);
int main(void)
{
	int number;
	
	printf ("Enter a number:");
	scanf ("%d",&number);
	even(number);
	
	return 0;
}
int number(int x)
{
	if(x%2==0)
	return 1;
	else 
	    return 0;
}
