#include<stdio.h>
#include<math.h>
int prime(int num);
int main(void)
{
	int begin,end;
	int i=1,j,m,n,k;
	while(scanf("%d",&begin)!=EOF){
		scanf("%d",&end);
		printf("\n");
		printf("CASE:%d\n",i);
		printf("COLDBACH'S CONJECTURE:\n");
		printf("Every even number n>=4 among %d~%d is the sum of two primes:\n",begin,end);
		if(begin%2==0)
		j=begin;
		else
		j=begin+1;
		while(j<=end){
			for(m=2;m<=(j/2)+1;m++){
				if(prime(m))
				continue;
				for(n=2;n<=j;n++){
					if(prime(n))
					continue;
					if(j==n+m){
						printf("%d=%d+%d\n",j,m,n);
						break;
					}
				}
				if(j==n+m)
				break;
			}
			j+=2;
		}
		i++;
	}
	return 0; 
}
int prime(int num)
{
	int i;
	for(i=2;i<=sqrt(num)+1;i++){
		if(num%i==0)
		return 1;
	}
	return 0;
}
