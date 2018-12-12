#include<stdio.h>
int middle (int a,int b,int c);
int main(void)
{
    int a[1000],b[1000],c[1000];
    int i,x,y;
    char z;
    for(i=0;;i++){

        scanf("%d",a[i]);
         scanf("%d",b[i]);
          scanf("%d",c[i]);
          if(getchar()==EOF){
            x=i;
            break;}
            for(i=0;i<=x;i++){
                y=middle(a[i],b[i],c[i]);
                printf("%c:%d\n",z,y);
    }
    return 0;

}
int middle(int a,int b,int c){
    int x;
    if(a>b){
        if(a<=c){
         
            x=a;}
        else
            if(c>b){
              
                x=c;}
            else{
               
                x=b;}

    }
    else
        if(a>=c){
          

            x=a;}
        else
            if(b>c){
              
                x=c;}
            else{
              
               x=b;}

    return x;
}


