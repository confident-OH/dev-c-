#include<stdio.h>
int main(void)
{
	int amount,price=0;
	printf("请输入金额（元）");
	scanf("%d",&amount);
	printf("请输入价格：");
	scanf("%d",&price);
	
	int change=amount-price;
	printf("找您%d元\n",change);
	
	return 0;
	
 } 
