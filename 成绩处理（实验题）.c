#include<stdio.h>
#include<string.h>
void range(int *score,char (*name)[50],int n);
void search(int *goal,int *score,char (*name)[50],int num,int n);
int main(void)
{
	int n,i,num;
	scanf("%d",&n);
	int score[n];
	char name[n][50];
	char (*names)[50]=name;
	for(i=0;i<n;i++)
	{
		scanf("%s",names+i);
		scanf("%d",&score[i]);
	}
	range(score,names,n);
	for(i=0;i<n;i++)
		printf("%-20s %d\n",names++,score[i]);
	printf("\n");
	scanf("%d",&num);
	int goal[num];
	for(i=0;i<num;i++)
		scanf("%d",&goal[i]);
	names=name;
	search(goal,score,names,num,n);
	
	return 0;
 } 
 void range(int *score,char (* name)[50],int n)
 {
 	int i,j,item;
 	char ch[50];
 	for(i=0;i<n;i++){
 		for(j=0;j<n-i-1;j++){
 			if(score[j]<score[j+1]){
 				item=score[j];
 				score[j]=score[j+1];
 				score[j+1]=item;
 				strcpy(ch,name[j]);
 				strcpy(name[j],name[j+1]);
 				strcpy(name[j+1],ch);
			 }
		 }
	 }
 }
 void search(int *goal,int *score,char (*name)[50],int num,int n)
 {
 	int i=0;
 	for(i=0;i<num;i++){
 		int front=0,last=n-1,mid;
 		while(front<=last){
 			mid=(front+last)/2;
 			if(goal[i]==score[mid]){
 				printf("%-20s %d\n",name+mid,score[mid]);
 				break;
 			}
 			else 
				if(goal[i]>score[mid])
 					last=mid-1;
 				else 
 					front=mid+1;
		 }
		 if(goal[i]!=score[mid]){
			printf("Not found!\n");
		 }
	 }
 }   
