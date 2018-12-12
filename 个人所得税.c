#include<stdio.h>
int main(void)
{
	int h;
	double x=0,n;
	scanf("%lf",&n);
	while(n!=0){
		if(n>5000){
			h=n-5000;			
			x+=h*0.25;
			n-=h;
		}
		if(n>4000){
			h=(n-4000);
			x+=h*0.2;
			n-=h;
		}
		if(n>3000){
			h=n-3000;
			x+=h*0.15;
			n-=h;
		}
		if(n>2000){
			h=n-2000;
			x+=h*0.1;
			n-=h;
		}
		if(n>1000){
			h=n-1000;
			x+=h*0.05;
			n-=h;
		}
		if(n<=1000)
			printf("%.6f\n",x);
			x=0;
			scanf("%lf",&n);		
	} 
	return 0;
}
