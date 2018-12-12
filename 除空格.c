#include<stdio.h>
int main(void)
{
  int n,i,j;
  scanf("%d",&n);
  getchar();
  char a[n][1000];
  for(i=0;i<n;i++){
	  for(j=0;j<1000;j++){
		a[i][j]=getchar();
		if(a[i][j]==32){
			if(a[i][j-1]==32)
				j-=1;
		}	
		if(a[i][j]=='\n')
			break;		
	  }
  }
  for(i=0;i<n;i++){
	  for(j=0;j<1000;j++){
		  if(a[i][j]!='\n')
			printf("%c",a[i][j]);
		else{
			printf("\n");
			break;
		}  
	  }
  }
  return 0;
	  
}
