#include<stdio.h>
int p(int x);
int main(void)
{
	printf("%d\n",p(6));
	printf("%d\n",p(6));
	return 0;
}
int p(int x)
{
	static a=0;
	a++;
	return (a*x);
}
