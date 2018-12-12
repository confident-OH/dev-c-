#include<stdio.h>
int main(void)
{
	int i=0;
	char name[100];
	gets(name);
	while(name[i]!='\n')
	printf("%s",name[i]);
	return 0;
}
