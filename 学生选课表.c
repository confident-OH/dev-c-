#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
typedef struct teachers{
	char name[20];
	struct teachers* next;
}teachers;
typedef struct classes{
	char name[15];
	teachers *ctot[3];
	struct classes *next;
}classes;
typedef struct students{
	char name[20];
	char num[10];
	classes* stoc[10];
	struct students *next;
}students;
void tprint (teachers* head);
void cprint (classes* head);
void sprint (students* head);
void sinput (students** head, int n);
void tinput (teachers** head, int n);
void cinput (classes** head, int n);
void c_and_t (classes *chead, teachers *thead);
void s_and_c (students *shead, classes *chead);
 
int main(void)
{
	teachers* thead;
	classes* chead;
	students* shead;
	int n[3], i;
	printf("Please input the number of teachers: ");
	scanf("%d", &n[0]);
	printf("Please input the number of classes: ");
	scanf("%d", &n[1]);
	printf("Please input the number of students: ");
	scanf("%d", &n[2]);
	tinput(&thead, n[0]);
	cinput(&chead, n[1]);
	c_and_t(chead, thead); 
	sinput(&shead, n[2]);
	s_and_c(shead, chead);
	tprint(thead);
	cprint(chead);
	sprint(shead);
	return 0;
}

void tinput (teachers** head, int n){
	int i;
	if(n==0)
		return;
	teachers *first, *corrent;
	printf("Please input teachers' name: ");
	first = (teachers*)malloc(sizeof(teachers));
	scanf("%s", first->name);
	corrent = first;
	for(i=1; i<n; i++){
		corrent->next = (teachers*)malloc(sizeof(teachers));
		corrent = corrent->next;
		scanf("%s", corrent->name);
		corrent->next = NULL;
	}
	*head = first;
}

void cinput (classes** head, int n){
	int i;
	if(n==0)
		return;
	classes *first, *corrent;
	printf("Please input classes' name: ");
	first = (classes*)malloc(sizeof(classes));
	scanf("%s", first->name);
	corrent = first;
	for(i=1; i<n; i++){
		corrent->next = (classes*)malloc(sizeof(classes));
		corrent = corrent->next;
		scanf("%s", corrent->name);
		corrent->next = NULL;
	}
	*head = first;
}

void sinput (students** head, int n){
	int i;
	if(n==0)
		return;
	students *first, *corrent;
	printf("Please input students' name and number: ");
	first = (students*)malloc(sizeof(students));
	scanf("%s", first->name);
	scanf("%s", first->num);
	corrent = first;
	for(i=1; i<n; i++){
		corrent->next = (students*)malloc(sizeof(students));
		corrent = corrent->next; 
		scanf("%s", corrent->name);
		scanf("%s", corrent->num);
		corrent->next = NULL;
	}
	*head = first;
}

void tprint(teachers *head){
	while(head!=NULL){
		printf("%s\t", head->name);
		head = head->next;
	}
	printf("\n");
}

void cprint(classes *head){
	while(head!=NULL){
		printf("%s: %s\t%s\t%s", head->name, head->ctot[0], head->ctot[1], head->ctot[2]);
		head = head->next;
		printf("\n");
	}
	printf("\n");
}

void sprint(students *head){
	int i;
	while(head!=NULL){
		printf("%s %s: ", head->name, head->num);
		for(i=0;i<10;i++)
			printf("%-10s", head->stoc[i]);
		head = head->next;
	}
	printf("\n");
}

void c_and_t (classes *chead, teachers *thead){
	int i;
	char ch[3][20];
	classes *ccorrent=chead;
	teachers *tcorrent=thead;
	printf("Please input teachers' names connected to classes:\n");
	while(ccorrent!=NULL){
		printf("%s: ", ccorrent->name);
		for(i=0; i<3; i++){
			scanf("%s", ch[i]);
			while(tcorrent!=NULL){
				if(!strcmp(tcorrent->name, ch[i])){
					ccorrent->ctot[i] = tcorrent;
					break;
				}
				tcorrent = tcorrent->next;
			}
		}
		ccorrent = ccorrent->next;
	}
}

void s_and_c(students *shead, classes *chead)
{
	int i;
	char ch[10][20];
	students *scorrent = shead;
	classes *ccorrent = chead;
	printf("Pleas input classes' names connected to students:\n");
	while(scorrent!=NULL){
		printf("%s: ", scorrent->name);
		for(i = 0; i < 3; i++){
			scanf("%s", ch[i]);
			while(ccorrent!=NULL){
				if(!strcmp(ccorrent->name, ch[i])){
					scorrent->stoc[i] = ccorrent;
					break;
				}
				ccorrent = ccorrent->next;
			}
		}
		scorrent = scorrent->next;
	} 
}











