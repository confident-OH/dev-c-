#include<stdio.h>
#define swap(x,y,t) (t=x,x=y,y=t);
int main(void)
{
	int n,i,t;
	scanf("%d",&n);
	int change[2];
	for(i=0;i<n;i++){
		scanf("%d %d",&change[0],&change[1]);
		swap(change[0],change[1],t)
		printf("%d %d\n",change[0],change[1]);
	}
	return 0;
}
