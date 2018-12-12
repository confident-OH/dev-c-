#include<stdio.h>
long long int num;
int bao(int k,int i);
int main(void)
{
	extern long long int num;
	while(scanf("%lld",&num)!=EOF)
	{
		int i=1;
		printf("Hailstone generated by %lld:\n",num);
		printf("%lld ",num);
		while(num!=1)
		i=bao(num,i);
		printf("\n");
		printf("Number of hailstone generated:%d\n",i);
		printf("\n");
	 } 
	 return 0;
}
int bao(int k,int i)
{
	extern long long int num;
	if(k%2==0){
		num=num/2;
		printf("%lld ",num);
		i++;
	}
	else
	{
		num=num*3+1;
		printf("%lld ",num);
		i++;
	}
	return i;
}
