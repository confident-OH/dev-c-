#include<stdio.h>
void mycpy(char *s,char *t,int n);
int main(void)
{
	int a,i,n;
	scanf("%d",&a);
	char t[1000],s[1000];
	for(i=0;i<a;i++){
		getchar();
		fgets(t,1000,stdin);
		scanf("%d",&n);
		mycpy(s,t,n);
	} 
	return 0;
 } 
 void mycpy(char *s,char *t,int n)
 {
 	int i;
 	for(i=0;i<n;i++){
 		s[i]=t[i];
	 }
	 s[i]='\0';
	 puts(s);
 }
