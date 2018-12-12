#include<stdio.h>
void range(char (*square)[9], int count, char num);
void ccopy(char (*square)[9], char (*copy)[9]);
int test(char (*square)[9], int x, int y, char num);
void pf(char *p);
int main(void)
{
	char square[9][9], a;
	char *p=&square[0][0];
	int i,count=0,item=0,can[9];
	for(i=0;i<81;i++)
		*(p+i)='\0';
	printf("请输入数独题目:（空位'.'代替且数字之间不要有空格）示例：\n");
	printf("53..7....\n");
	printf("6..195...\n");
	printf(".98....6.\n");
	printf("8...6...3\n");
	printf("4..8.3..1\n");
	printf("7...2...6\n");
	printf(".6....28.\n");
	printf("...419..5\n");
	printf("....8..79\n\n");
	for(i=0;i<81;i++){
		scanf("%c",p+i);
		if((i+1)%9==0)
			a=getchar();
		}
	range(square,-1,'0'); 
	getch();
	return 0;
}
void range(char (*square)[9], int count, char num)
{
	int i,x,y;
	char copy[9][9];
	char *b = copy[0];
	ccopy(square, copy);
	if(count>=0) *(b+count) = num;
	do{
		count++;
		if(count==81){
			pf(copy[0]);
			return; 
		}
	}while(*(b+count)!='.');
	x=count/9+1;
	y=count%9+1;
	for(i=1;i<=9;i++){
		if(test(copy, x, y, (char)(i+'0'))){
			range(copy, count, (char)(i+'0'));
		}
	}
 } 
void pf(char *p){
	static count=1;
	printf("答案%d:\n",count);
	int i;
	for(i=0;i<81;i++){
		printf("%4c",*(p+i));
		if((i+1)%9==0)
			printf("\n");
	}
	count++;	
}
int test(char (*copy)[9], int x, int y, char num)
{
	int i,j;
	char *a = (char*)copy;
	for(i=1;i<=9;i++){
		for(j=1;j<=9;j++){
			if(!(i==x&&j==y)&&((i == x)||(y == j)||(((i-1)/3==(x-1)/3)&&((j-1)/3==(y-1)/3)))){
				if(*a==num)
					return 0;
			}
			a++;
		}
	}
	return 1;
}
void ccopy(char (*square)[9], char (*copy)[9])
{
	char *a = square[0], *b = copy[0];
	int i;
	for(i=0;i<81;i++){
		*b = *a;
		b++;
		a++;
	}
}
