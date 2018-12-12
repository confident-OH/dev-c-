#include<stdio.h>
void swap(int a[ ],int v,int x);
int main(void)
{
	printf("请输入排序的数的个数：");
	int n,i,j,max,min=0;
	scanf ("%d",&n); 
	int a[n];
	for (i=0;i<n;i++)
		a[i]=0;
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	if(n%2==0){
		for (i=0;i<n/2;i++){
			max=i;
			min=i;
			for(j=i;j<n-i;j++){
				if(a[max]<a[j]){
					max=j;
				}
				if(a[min]>a[j])
					min=j;	
			}
			swap(a,min,i);
			swap(a,max,n-1-i);
		}
	}
	if(n%2!=0){
		for (i=0;i<(n-1)/2;i++){
			max=i;
			min=i;
			for(j=i;j<n-i;j++){
				if(a[max]<a[j]){
					max=j;
				}
				if(a[min]>a[j])
					min=j;	
			}
			swap(a,min,i);
			swap(a,max,n-1-i);
	}
}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}
void swap(int a[],int s,int x)
{
	int item=0;
	item=a[s];
	a[s]=a[x];
	a[x]=item;
	
}
