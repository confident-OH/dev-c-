#include<stdio.h>
int main (void)
{
	int a, b, n;
	printf("Please input a, b: ");
	scanf("%d %d", &a, &b);
	if(a<b){
		a = a + b;
		b = a - b;
		a = a - b;
	}
	while(n = a%b){
		a = b;
		b = n;
	}
	printf("最大公约数为：%d\n", b);
	return 0;
 } 
