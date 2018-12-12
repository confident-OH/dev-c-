#include<stdio.h>
int main(void)
{
	int n,i,j,mark;
	mark=1<<31;
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	char result[n][33];
	for(i=0;i<n;i++){
		for(j=0;j<sizeof(int)*8;j++){
				result[i][j]=(!(mark&num[i])?'0':'1');
				num[i]<<=1;
		}
		result[i][32]='\0';
		printf("%s\n",result[i]);
	}
	return 0;
}
