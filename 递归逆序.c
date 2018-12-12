#include<stdio.h>
void string(char *a,int i);
int main(void)
{
	char a[1000];
	gets(a);
	string(a,0);
	return 0;
}
void string (char *a,int i)
{
	if(a[i]!='\0'){
		i++;
	string(a,i); 
	}

			printf("%c",a[i-1]);
	
	
}
