#include<stdio.h>
int main (void)
{
    int n,i;
    scanf("%d",&n);
    char a[n];
    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++){
        if((a[i]<=57&&a[i]>=48)||(a[i]<='F'&&a[i]>='A')||(a[i]<=102&&a[i]>=97)){
          if(a[i]=='0')
            printf("%d\n",0);
            if(a[i]=='1')
            printf("%d\n",1);
            if(a[i]=='2')
            printf("%d\n",2);
            if(a[i]=='3')
            printf("%d\n",3);
            if(a[i]=='4')
            printf("%d\n",4);
            if(a[i]=='5')
            printf("%d\n",5);
            if(a[i]=='6')
            printf("%d\n",6);
            if(a[i]=='7')
            printf("%d\n",7);
            if(a[i]=='8')
            printf("%d\n",8);
            if(a[i]=='9')
            printf("%d\n",9);
            
          if(a[i]=='a')
            printf("%d\n",10);
           if(a[i]=='b')
            printf("%d\n",11);
             if(a[i]=='c')
            printf("%d\n",12);
             if(a[i]=='d')
            printf("%d\n",13);
             if(a[i]=='e')
            printf("%d\n",14);
             if(a[i]=='f')
            printf("%d\n",15);
             if(a[i]=='A')
            printf("%d\n",10);
              if(a[i]=='B')
            printf("%d\n",11);
             if(a[i]=='C')
            printf("%d\n",12);
             if(a[i]=='D')
            printf("%d\n",13);
             if(a[i]=='E')
            printf("%d\n",14);
             if(a[i]=='F')
            printf("%d\n",15);
        }

        else
            printf("%d\n",a[i]);
    }
    return 0;
}

