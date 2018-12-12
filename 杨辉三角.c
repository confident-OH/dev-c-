#include<stdio.h>
int oh(int i,int j);
void yang(int n);
int main(void)
{
	int n[100];
	int i=0;
	scanf("%d",&n[0]);
	while(n[i]!=0){
		i++;
		scanf("%d",&n[i]);
	}
	i=0;
	while(n[i]!=0){
		yang(n[i]);
		i++;
	}
	return 0;
}
int oh(int i,int j)
{
	double h=1;
	if(i==0&&j==0)
		return 1;
	else
	{
		while(j!=0){
			h=h*(i-j+1)/j;
			j--;
		}
		return h;
	}
}
void yang(int n)
{
	int i,j,k; 
	for(i=0;i<n;i++){
		for(k=0;k<2*(n-i)-2;k++)
			printf(" ");
		for(j=0;j<i+1;j++){
			if(j==i){
				printf("%4d",oh(i,j));
				printf("\n");
				break;
			}
			if(oh(i,j)<10)
				printf("%4d",oh(i,j));
			if(oh(i,j)>=10&&oh(i,j)<100)
				printf("%4d",oh(i,j));
			if(oh(i,j)>=100)
				printf("%4d",oh(i,j));	
		}
	}
	printf("\n");
}

 
