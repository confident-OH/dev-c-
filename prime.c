#include<stdio.h>
int main(void)
{
	int num;
	scanf("%d",&num);
	int i;
	for(i=2;i<=num/2;i++){
		if(num%i==0){
		printf("1");
		return 0; 
		}
	}
		printf("0");
		return 0;
}
