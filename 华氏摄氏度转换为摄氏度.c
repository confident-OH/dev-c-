#include<stdio.h>
int main(void)
{
	int celsius, fahr,n;
	
	scanf ("%d",&n) ;
	fahr=n;
	celsius=5*(fahr-32)/9;
	printf ("fachr=%d,celsius=%d\n",fahr,celsius);
	
	return 0;
}
