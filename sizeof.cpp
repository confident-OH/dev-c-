#include<stdio.h>
#include<string.h>
#define ra(array) (sizeof(array))
int main(void)
{
	char ch[100];
	int i;
	for(i=0; i<99; i++)
		ch[i]=i+1;
	ch[99]='\0';
	printf("%d\n", ra(ch));
	printf("%d\n", strlen(ch));
	return 0;
 } 
