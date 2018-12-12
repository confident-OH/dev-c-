#include<stdio.h>
int main (void)
{
	int i,n;
	char ch_lower,ch_upper;
	
	printf("Enter the number of your word and your word:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		scanf ("%c",&ch_lower);
		if (ch_lower>='a'&&ch_lower<='z')
		  ch_upper=ch_lower-'a'+'A';
		printf("%c->%c->%d\n",ch_lower,ch_upper,ch_upper%10);
	}
	return 0;
 } 
