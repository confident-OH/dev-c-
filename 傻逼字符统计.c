#include<stdio.h>
int main(void)
{
	int a[37];
	int i;
	for (i=0;i<37;i++)
		a[i]=0;
	char c;
	while((c=getchar())!=EOF){
		if((c<='9'&&c>='0')||(c<='z'&&c>='A')){
			if(c<='9'&&c>='0'){
				i=(int)(c-'0');
				a[i]+=1;
			}

			if(c<='z'&&c>='a')
				a[c-'a'+10]+=1;
			if(c<='Z'&&c>='A')
				a[c-'A'+10]+=1;
		}
		else
			a[36]+=1;
	}
	printf("0:%d 1:%d 2:%d 3:%d 4:%d 5:%d 6:%d 7:%d\
 8:%d 9:%d\na:%d b:%d c:%d d:%d e:%d f:%d g:%d\
 h:%d i:%d j:%d k:%d l:%d m:%d n:%d o:%d p:%d q:%d\
 r:%d s:%d t:%d u:%d v:%d w:%d x:%d y:%d z:%d\nother:%d\n",a[0],a[1],
	 a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9],a[10],a[11],a[12],a[13],
	 a[14],a[15],a[16],a[17],a[18],a[19],a[20],a[21],a[22],a[23],a[24],a[25]
	 ,a[26],a[27],a[28],a[29],a[30],a[31],a[32],a[33],a[34],a[35],a[36]);
	 return 0;
}
