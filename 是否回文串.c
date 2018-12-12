#include<stdio.h>
int hui(char *a,int n,int i);
int main(void)
{
	int n,i,len=0,m;
	char a[1000];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		len=0;
		fgets(a,1000,stdin);
		while(a[len]!='\0')
		len++;
		len--;
		a[len]='\0';
		m=hui(a,len,0);
		if(m)
			printf("Yes!\n");
		else
			printf("No!\n");
		
	}
	return 0;
}
int hui(char *a,int n,int i)
{
	if(a[i]=='\0')
	return 1;	
	if(a[i]==a[n-i-1]){
		return (hui(a,n,++i));
	}  
	
	if(a[i]!=a[n-i-1])
	return 0;
}
