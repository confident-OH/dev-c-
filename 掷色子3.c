#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randd(void);
int main(void)
{
	char ch;
	int i,j,item,lun=2;
	printf("规则：按回车键掷色子，每轮两次，取两次的和，如果第一轮的和为7或11，胜利，若为2，3或12，失败！\
若两者都不是，把第一轮的和记下开始新轮，如果某一轮的和与第一轮相同就胜利，若某一轮和为7，失败！祝君好运！\n");
OH: 
	printf("第1轮："); 
	getchar();
	i=randd();
	printf("点数a为%-4d",i);
	getchar();
	j=randd();
	printf("点数b为%-4d\n",j);
	if(i+j==7||i+j==11){
		printf("Win!\n");
		printf("是否继续：(Y/N)");
B:		
		ch=getchar();
		if(ch=='Y'||ch=='y')
		goto OH;
		else {
		if(ch=='N'||ch=='n'){
		getch(); 
		return 0;
}
else{
	printf("Please input Y(y) or N(n)");
	goto B;
}}
	}
	else{
		if(i+j==2||i+j==3||i+j==12){
			printf("Fail!\n");
			printf("是否继续：(Y/N)");
C:		
		ch=getchar();
		if(ch=='Y'||ch=='y')
		goto OH;
		else {
		if(ch=='N'||ch=='n'){
		getch(); 
		return 0;
}
else{
	printf("Please input Y(y) or N(n)");
	goto C;
}}
		}
		else{
			item=i+j;
		}
	}
	do{
		printf("第%d轮:\n你还有机会！加油！\n",lun); 
		getchar();
		i=randd();
		printf("点数a为%-4d",i);
		getchar();
		j=randd();
		printf("点数b为%-4d\n",j);
		lun++;
	}while(!(i+j==item||i+j==7));
	if(i+j==item)
		printf("Win!\n");
	else
		printf("Fail!\n");
		printf("是否继续：(Y/N)");
A:		
		ch=getchar();
		if(ch=='Y'||ch=='y')
		goto OH;
		else {
		if(ch=='N'||ch=='n'){
		getch(); 
		return 0;
}
else{
	printf("Please input Y(y) or N(n)");
	goto A;
}}
}
int randd(void)
{
	static int i=1;
	srand(time(NULL)+i);
	i++;
	return (rand()%6+1);
}
