#include<stdio.h>
int rand(int i);
int main(void)
{
	int z,i,j,n,sum,item;
	scanf("%d",&z);
	int a[z][2];
	for(i=0;i<z;i++)
	scanf("%d %d",&a[i][0],&a[i][1]);
	for(i=0;i<z;i++){
		sum=rand(a[i][0])+rand(a[i][1]);
		item=sum;
		if(sum==7||sum==11){
		printf("success!\n");
		continue;
	}
		else {
		if(sum==3||sum==2||sum==12){
			printf("fail!\n");
			continue;
		}
		else{
			while(sum!=7){
			a[i][0]++;
			a[i][1]++;
			sum=rand(a[i][0])+rand(a[i][1]);
			if(sum==item){
				printf("success!\n");
				break;
			}
			else
				sum=rand(a[i][0])+rand(a[i][1]);
			if(sum==7){
				printf("fail!\n");
				break;
			}	
		}
		}
	}
	} 
	return 0;
}
int rand(int i)
{
	int t=0;
	while(i!=0){
	t+=i%10;
	i/=10;
}
	return (t%6)+1;
}
 
