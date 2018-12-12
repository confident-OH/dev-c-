#include<stdio.h>
void swap(int *a,int *b);
int main(void)
{
	int a,b;
	int *p=&a,*q=&b;
	scanf("%d %d",&a,&b);
	swap(p,q);
	printf("%d %d",a,b);
	return 0;
}
void swap(int *a,int *b){
	int item;
	item=*a;
	*a=*b;
	*b=item;
}
