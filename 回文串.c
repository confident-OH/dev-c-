#include<stdio.h>
int hui(char *a,int i);
int main(void)
{
	char a[50];
	gets(a);
	if(hui(a,0))
		printf("yes");
	else 
		printf("no");
	return 0;
}
int hui(char *a,int i)
{
	int num=0;
	while(a[++num]) ;
	if(i>=num)
		return 1;
	if(a[i]!=a[num-i-1])
		return 0;
	else
		return (hui(a,i+1));
}
