#include<stdio.h>
#include<time.h>
int fibonacci(int n);
int main(void)
{
	clock_t start,finish;
	double time;
	start=clock();
	printf("%d\n",fibonacci(35));
	finish=clock();
	time = (double)(finish-start) / CLOCKS_PER_SEC; 
	printf("cost %f seconds\n",time);
	start=clock();
	printf("%d\n",fibonacci(40));
	finish=clock();
	time = (double)(finish-start) / CLOCKS_PER_SEC; 
	printf("cost %f seconds\n",time);	
	start=clock();
	printf("%d\n",fibonacci(45));
	finish=clock();
	time = (double)(finish-start) / CLOCKS_PER_SEC; 
	printf("cost %f seconds\n",time);
	return 0;	
}
int fibonacci(int n)
{
	if(n==1||n==2)
		return 1;
	else
		return (fibonacci(n-1)+fibonacci(n-2));
}
