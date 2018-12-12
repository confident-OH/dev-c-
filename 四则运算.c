#include<stdio.h>
int main(void)
{
	double a,b,c;
	char x;
	printf("Input an expression");
	scanf("%lf%c%lf",&a,&x,&b);
	switch(x){
		case '+':
			printf("=%lf\n",a+b );
			break;
		case'-':
		 printf("=%lf\n",a-b);
		 break;
		 case'*':
		 	printf("=%lf\n",a*b);
		 	break;
		case'/':
			printf("=%lf\n",a/b);
			break;
		default:
			printf("unknown\n");
			
	}
	return 0;
}
