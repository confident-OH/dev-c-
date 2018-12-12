#include<stdio.h>
#include<math.h>
float cash;
void income (float number);
void expend (float number);
int main (void)
{
	int choice;
	float value;
	
	cash=0;
	printf("Enter operate choice(0--end,1--income,2--expend):");
	scanf ("%d",&choice);
	while (choice!=0){
		if (choice==1||choice==2){
		printf ("Enter cash value:");
		scanf ("%f",&value);
		if(choice==1)
		income (value);
		else
		expend(value);
		printf("current cash:%.2f\n",cash);
	}
	printf ("Enter operate choice (1--end,1--income,2--expend):");
	scanf ("%d",&choice);
}
	
	return 0;
}
void income (float number)
{
	cash=cash+number;
}
void expend (float number)
{
	cash=cash-number;
}
