#include<stdio.h>
int main(void)
{
	printf("请输入排序的数的个数：");
	int n,i,j,max,min,item=0;
	scanf ("%d",&n);
	int a[n];
	for (i=0;i<n;i++){
		a[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
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
			item=a[min];
			a[min]=a[i];
			a[i]=item;
			item=a[max];
			a[max]=a[n-i-1];
			a[n-1-i]=item;
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
			item=a[min];
			a[min]=a[i];
			a[i]=item;
			item=a[max];
			a[max]=a[n-i-1];
			a[n-1-i]=item;
		}
	}

	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	getchar();
	getchar();

	return 0;
}


