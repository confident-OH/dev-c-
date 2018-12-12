#include<stdio.h>
void sum(int *result,int *a,int n);
int main(void)
{
	int n,i;
	scanf("%d",&n);
	int a[n],result=0;
	printf("%d",&a[3]-&a[0]);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sum(&result,a,n);
	printf("%d",result); 
	return 0;
 } 
 void sum(int *result,int *a,int n){
 	int i=0;
	 while(i<n){
	 *result+=*(a+i);
	 i++;
    }
}
