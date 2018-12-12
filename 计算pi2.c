#include<stdio.h>
int main(void)
{
	int i=1;
	double item=0,pi;
	while(i<=1e5&&i>=-1e5){
		item=item+1.0/i;
		if(i>0)
		i+=2;
		else
		i-=2;
		i=i*(-1);
	}
	pi=item*4;
	printf("%lf",pi);
	return 0;
}
