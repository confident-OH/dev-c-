#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randd(void);
int main(void)
{
	char ch;
	int i,j,item,lun=2;
	printf("���򣺰��س�����ɫ�ӣ�ÿ�����Σ�ȡ���εĺͣ������һ�ֵĺ�Ϊ7��11��ʤ������Ϊ2��3��12��ʧ�ܣ�\
�����߶����ǣ��ѵ�һ�ֵĺͼ��¿�ʼ���֣����ĳһ�ֵĺ����һ����ͬ��ʤ������ĳһ�ֺ�Ϊ7��ʧ�ܣ�ף�����ˣ�\n");
OH: 
	printf("��1�֣�"); 
	getchar();
	i=randd();
	printf("����aΪ%-4d",i);
	getchar();
	j=randd();
	printf("����bΪ%-4d\n",j);
	if(i+j==7||i+j==11){
		printf("Win!\n");
		printf("�Ƿ������(Y/N)");
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
			printf("�Ƿ������(Y/N)");
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
		printf("��%d��:\n�㻹�л��ᣡ���ͣ�\n",lun); 
		getchar();
		i=randd();
		printf("����aΪ%-4d",i);
		getchar();
		j=randd();
		printf("����bΪ%-4d\n",j);
		lun++;
	}while(!(i+j==item||i+j==7));
	if(i+j==item)
		printf("Win!\n");
	else
		printf("Fail!\n");
		printf("�Ƿ������(Y/N)");
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
