#include<stdio.h>
int qiu(int num,int k);
int main(void)
{
	int k,i;
	unsigned int num;
	while(scanf("%u",&num)!=EOF){
		scanf("%d",&k);
		printf("%d\n",qiu(num,k));
		
	}
	return 0;
}
int qiu(int num,int k)
{
	int i;
	for(i=0;i<k-1;i++){
	
			num/=10;
			if(num==0)
			return -1;
		}
	return num%10;
}
