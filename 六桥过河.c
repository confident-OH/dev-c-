#include<stdio.h>
void cross(int *a, int n);
void sort(int *a, int n);
void print(int *a, int n, int time);
int main (void)
{
	int num, i;
	scanf("%d", &num);
	int a[num], *p=a;
	for(i=0;i<num;i++)
		scanf("%d", p+i);
	sort(p, num);
	cross(p, num);
	return 0;
}
void sort (int *a, int n)
{
	int i, j, k, item;
	for(i=n/2; i>0; i/=2){
		for(j=i; j<n; j++){
			item=a[j];
			for(k=j-i; k>=0&&item<a[k]; k-=i)
				a[k+i]=a[k];
			a[k+i]=item;
		}
	}
}
void cross(int *a, int n)
{
	int i, time=0;
	if(n==1){
		printf("%d\n", a[0]); 
		return;
		} 
	if(n==2){ 
		printf("%d\n", a[1]); 
		return;
		} 
	if(n%2==0){
		for(i=n-1;i>1;i-=2){
			time+=a[i]+a[0]+2*a[1];
		}
		time+=a[1];
		print(a, n, time);
	}
	else{
		for(i=n-1;i>2;i-=2)
			time+=a[i]+a[0]+2*a[1];
		time+=a[0]+a[1]+a[2];
		print(a, n, time);
	}
}
void print(int *a, int n, int time)
{
	int i;
	printf("%d\n", time);
	if(n%2==0){
		for(i=n-1;i>1;i-=2){
			printf("%d %d\n", a[0], a[1]);
			printf("%d\n", a[0]);
			printf("%d %d\n", a[i-1], a[i]);
			printf("%d\n", a[1]);
		}
		printf("%d %d\n", a[0], a[1]);
	}
	else{
		for(i=n-1;i>2;i-=2){
			printf("%d %d\n", a[0], a[1]);
			printf("%d\n", a[0]);
			printf("%d %d\n", a[i-1], a[i]);
			printf("%d\n", a[1]);
		}
		printf("%d %d\n", a[0], a[1]);
		printf("%d\n", a[0]);
		printf("%d %d\n", a[0], a[2]);
	}
}
