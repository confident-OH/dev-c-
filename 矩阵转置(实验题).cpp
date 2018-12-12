#include<stdio.h>
int main(void)
{
	int a[3][4],b[4][3];
	int i,j;
	int *p[2];
	p[0]=&a[0][0];
	p[1]=&b[0][0]; 
	for (i=0;i<3;i++){
		for(j=0;j<4;j++)
			scanf("%d",(p[0]++));
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			b[j][i]=a[i][j];
		}
	}
	p[0]=&a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++)
			printf("%5d",(*p[0]++));
		printf("\n");
	}
	printf("\n");
	for(i=0;i<4;i++){
		for(j=0;j<3;j++)
			printf("%5d",(*p[1]++));
		printf("\n");
	}
	return 0;
}
