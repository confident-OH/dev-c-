#include<stdio.h>
#define swap(x,y) (y=x+y,x=y-x,y-=x);
int main(void)
{
	int i=1;
	int change[2];
	while(scanf("%d",&change[0])!=EOF){
		scanf("%d",&change[1]);
		printf("Case %d:\n",i);
		printf("Before Swap:a=%d b=%d\n",change[0],change[1]);
		swap(change[0],change[1])
		printf("After Swap:a=%d b=%d\n",change[0],change[1]);
		printf("\n");
		i++;
	}
	return 0;
}
