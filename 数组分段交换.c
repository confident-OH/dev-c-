#include<stdio.h>
void change(int *a,int k,int n);
int main(void)
{
	int k,n,i;
	while((scanf("%d",&n))!=EOF){
		int a[n];
		scanf("%d",&k);
		if(k>0&&k<n&&n<=60){
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		change(a,k,n);
		for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
		printf("%d\n",a[n-1]);	
	}
}
	return 0;
}
void change(int *a,int k,int n)
{
	int i,item=0;
	while(n>=k){
		n-=k;
		for(i=k;i>0;i--){
			item=a[i-1];
			a[i-1]=a[i+n-1];
			a[i+n-1]=item;
		}
	}
	
}

