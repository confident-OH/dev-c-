#include<stdio.h>
int main (void)
{
	int i,index,k,n;
	
	printf ("Input n:");
	scanf("%d",&n);
	
	int a[n];
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for (k=0;k<n;k++){
		index=a[k];
		for(i=k;i<n;i++){
			if(index>a[i]){
			index=a[i];
		    a[i]=a[k];
			a[k]=index;
			}
		}
		
	}
	
	for (i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	return 0;
 } 
