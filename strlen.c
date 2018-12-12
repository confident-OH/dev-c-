#include<stdio.h>
int strlens(void);
int main(void)
{
	int n,i,len;
	scanf("%d",&n);
	getchar();
	int a[n];
	for(i=0;i<n;i++){
		a[i]=strlens();
	}
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	return 0;
}
int strlens(void)
{
	int i=0;
	while(getchar()!='\n'){
		i++;	
	}
	return i;
}
