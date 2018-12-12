#include<stdio.h>
int strlens(void);
int main(void)
{
	int n,i,len;
	scanf("%d",&n);
	getchar();
	char a[n][1000];
	for(i=0;i<n;i++){
		a[i][1000]=gets();
	}
	for(i=0;i<n;i++){
		len=strlens();
		printf("%d\n",len);
	}
	return 0;
}
int strlens(void)
{
	int i;
	while(getchar()!='\n'){
		i++;	
	}
	return i;
}
