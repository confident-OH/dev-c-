#include<stdio.h>
void print(int *n,int a,int b);
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
	print(p[0],3,4);
	printf("\n");
	print(p[1],4,3);
	return 0;
}
void print(int *n,int a,int b)
{
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%5d",(*n++));
		}
		printf("\n");
	}
}
