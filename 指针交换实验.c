#include<stdio.h>
void swap(char *a,char *b);
int main(void)
{
	char  s[]="i am a student";
	char *pstart = s;
	char *pend=s;
	while(*pend!='\0')
	{
		pend++;
	}
	pend--;
	swap(pstart,pend);
	printf("c=%s\n",s);
	return 0;
}
void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}
