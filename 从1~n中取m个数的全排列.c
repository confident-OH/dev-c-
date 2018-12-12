#include<stdio.h>
void PrintPerm(int *a,int n,int m,int cur);
int main(void)
{
	int a[100];
	int n,m;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter m:\n");
	scanf("%d",&m);
	PrintPerm(a,n,m,0);
	return 0;
 } 
 void PrintPerm(int *a,int n,int m,int cur)
 {
 	int i,j;
 	if(cur==m){
 		for(i=0;i<m;i++)
 		printf("%d",a[i]);
 		printf("\n");
	 }
	 else{
	 	for(i=1;i<=n;i++){
	 		int ok=1;
	 		for(j=1;j<cur&&ok;j++)
	 		if(a[j]==i)
	 		ok=0;
	 		if(ok)
	 		{
	 			a[cur]=i;
	 			PrintPerm(a,n,m,cur+1);
			 }
		 }
	 }
 }
