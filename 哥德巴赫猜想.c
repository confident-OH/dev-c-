#include<stdio.h>
int main(void)
{
    int n,i,d,b,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);//数据输入完成

    int x,y,s[100];
    for(s[0]=s[1]=0,x=2;x<100;x++)
        s[x]=x;
    for(x=2;x<50;x++){
    if(a[x]){
        for(y=2*x;y<100;y=y+x){
            s[y]=0;
        }
    }
    }
    for(i=0;i<n;i++){
        for(x=2;x<100;x++){
            for(y=1;y<100;y++){
                if(a[i]==s[x]+s[y]){
                    printf("%d=%d+%d\n",a[i],s[x],s[y]);
                    break;
                }
                if(a[i]==s[x]+s[y])
                break;
            }
            if(a[i]==s[x]+s[y])
            break;
        }
    }
    return 0;

}

