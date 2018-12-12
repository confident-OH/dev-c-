#include<stdio.h>
int main(void)
{
	int x,y,i=1;
	scanf("%d %d",&x,&y);
	if(x<y){
		i=x;
		x=y;
		y=i	; 
	}
	int m=x,n=y;
	while(i!=0){
		i=x%y;
		x=y;
		y=i;
	}
	printf("%d\t",x);
	printf("%d\t",m*n/x);
	return 0;
}
