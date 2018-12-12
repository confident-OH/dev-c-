#include<stdio.h>
#include<string.h>
int main(void)
{
	float weight,volume;
	int size,letters;
	printf("Hi, what's your first name?\n");
	char name[40];
	scanf("%s",&name);
	printf("Hi %s, what's your weight in pound?\n",name);
	scanf("%f",&weight);
	volume=weight/62.4;
	letters=strlen(name);
	size=sizeof(name);
	printf("Well, %s,your wolume is %2.2f cubic feet.\n",name,volume);
	printf("Also, your first name has %d letters.\n",letters);
	printf("And we have %d bytes to store it.\n",size);
	printf("按任意键退出"); 
	getch();
	return 0;
 } 
