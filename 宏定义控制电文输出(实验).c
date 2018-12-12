#include<stdio.h>
#define CHANGE 1
int main(void)
{
	int j,k;
	char a[1000];
		fgets(a,1000,stdin);
		#if (CHANGE==1) 
		{
			j=0;
			while(a[j]!='\0')
				j++;
			for(k=0;k<j;k++){
				if(a[k]>='a'&&a[k]<='z')
				a[k]+=('A'-'a');
				else
					if(a[k]>='A'&&a[k]<='Z')
						a[k]+=('a'-'A');
			}
		}
		#endif
		#if (CHANGE==0)
		#endif	
		printf("%s",a);	
	return 0;
	
}
