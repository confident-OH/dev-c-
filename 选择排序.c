#include<stdio.h>
int main(void)
{
	int i,j,n,k,item;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		k=0;
		for(j=0;j<n-i-1;j++){
			if(a[k]<a[j+1])
			k=j+1;
		}
		item=a[j];
		a[j]=a[k];
		a[k]=item;
	}
	for(i=0;i<n-1;i++)
	printf("%d ",a[i]);
	printf("%d\n",a[n-1]);//I don't know if the '\n' is needed.
	return 0;
 } 
