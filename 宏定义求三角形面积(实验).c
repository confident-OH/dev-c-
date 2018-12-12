#include<stdio.h>
#include<math.h>
#define s(a,b,c) ((a+b+c)/2.0)
#define area(s,a,b,c) (sqrt(s*(s-a)*(s-b)*(s-c)))
int main(void)
{
	double a,b,c;
	double s1,area1;
	while(scanf("%lf",&a)!=EOF){
		scanf("%lf %lf",&b,&c);
		printf("%.0lf ",s(a,b,c));
		printf("%lf\n",area(s(a,b,c),a,b,c));
	}
	return 0;
}

