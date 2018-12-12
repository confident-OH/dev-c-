#include<stdio.h>
#include<limits.h>
int main (void)
{
    int n,num,i,result=0;
    int a[sizeof(int)];
    printf("Please Enter The number:");
    scanf("%d",&num);
    n=sizeof(int)*CHAR_BIT;
    int mark=~(~0<<CHAR_BIT);
    for(i=0;i<sizeof(int);i++){
        a[i]=num&mark;
        mark<<=CHAR_BIT;
    }
    for(i=0;i<sizeof(int)-1;i++)
        a[i]<<=CHAR_BIT;
    a[sizeof(int)-1]>>=(CHAR_BIT*(sizeof(int)-1));
    for(i=0;i<sizeof(int);i++)
        result=result|a[i];
    printf("%d",result);

    return 0;
}
