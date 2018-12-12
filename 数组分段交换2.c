#include<stdio.h>
#include<assert.h>
void change(int *a,int k,int n);
int main(void)
{
	int k,n,i;
	while((scanf("%d",&n))!=EOF){
		int a[n];
		scanf("%d",&k);
		assert(n<=60&&k<n&&k>0);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		change(a,k,n);
		for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
		printf("%d\n",a[n-1]);	
	
}
	return 0;
}
void change(int *a,int k,int n)
{
	int i,item=0,j;
	for(i=k;i>0;i--){
		for(j=i-1;j<n-k+i-1;j++){
			item=a[j];
			a[j]=a[j+1];
			a[j+1]=item;
		}
	}
	
}

