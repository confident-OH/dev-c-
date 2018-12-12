#include<stdio.h>
float average(float a[ ][11],int n,int number);
int main(void)
{
    int n,i,number,m,j;
    scanf("%d",&n);
   float a[n][11];
    for (i=0;i<n;i++){
        for (m=0;m<11;m++){
            scanf("%f",&a[i][m]);
        }
        for (j=0;j<11;j++){
            if(a[i][j]>10000||a[i][j]<-10000)
                break;
        }
    }

    for(j=0;j<n;j++){
        number=0;
        if (a[j][0]==0){
            for (i=1;i<11;i++){
                if(a[j][i]<=0){
					a[j][i]=0;
					continue;
                }
                else
                	number+=1;
            }
            if(number==0)
                break;
            printf("In \"continue\" way,numbers=%d,average=%f\n",number,average(a,j,number));
        }
        else {
            for (i=1;i<11;i++){
                if(a[j][i]>0){
                    number+=1;
                }
                else
                	a[j][i]=0;
            }
            if(number==0)
                break;
            printf("In \"no continue\" way,numbers=%d,average=%f\n",number,average(a,j,number));
        }
    }

    return 0;
}
float average(float a[ ][11],int n,int number)
{
    int i;
    float average=0;
    for(i=1;i<11;i++){
        average+=a[n][i];
    }
    average=average/number;
    return average;
}

