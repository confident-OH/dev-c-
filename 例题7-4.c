 #include <stdio.h>
 int main (void)
 {
 	int i,n,min,index,exchang;
 	
 	printf("Input n:");
 	scanf("%d",&n);
 	int a[n];
 	for (i=0;i<=n;i++){
 		scanf("%d",&a[i]);
	 }
	 min=a[0];
	 index=1;
	 for (i=0;i<=n;i++){
	 	if(min>=a[i])
	 	min=a[i],index=i+1;
	 	
	 }
	 printf("min is=%d\n",min);
	 printf("sub is=%d\n",index);
	 exchang=a[index];
	 a[index]=a[0];
	 a[0]=exchang;
	 for (i=0;i<=n;i++){
	 	printf("%d\t",a[i]);
	 }
	 
	 return 0;
  } 
