#include<stdio.h> 
int main (void)
{
	int i,w,sum=0;
	
	scanf ("%d",&w);
	for (i=1;i<=w; i++)
	  if(i%2==0) sum=sum+i;
	  printf("%d",sum);
	  
	  return 0;
}

