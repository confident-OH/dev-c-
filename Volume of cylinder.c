#include<stdio.h>
double cylinder(double x,double y);
int main (void)
{
	double height,radius,volume;
	
	printf ("Enter radius and height :");
	scanf("%lf %lf",&radius,&height);
	volume=cylinder(radius,height);
	printf ("Volume=%f",volume);
	
	return 0;
 } 
 double cylinder (double x,double y)
 {
 	double result;
 	
 	result=3.1415926*x*x*y;
 	
 	return result;
 }
