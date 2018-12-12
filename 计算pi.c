#include<stdio.h>
#include<math.h>
int main(void)
{
	int denominator,flag;
	double item,pi;
	
	flag=1;
	denominator=1;
	item=1.0;
	pi=0;
	
	while (fabs (item)>=1e-5){
		item=flag*1.0/denominator;
		pi=pi+item;
		flag=-flag;
		denominator=denominator+2; 
	}
	pi=pi*4;
	printf("pi=%lf\n",pi);
	
	return 0;
}
