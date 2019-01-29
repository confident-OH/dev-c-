#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m, n, i, j, k, mark = 0, item = 0;
	char **p;
	scanf("%d %d", &n, &m);
	p = (char**)malloc(n*sizeof(char*));
	for(i = 0; i < n; i++){
		p[i] = (char*)malloc(m*sizeof(char));
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &p[i][j]);
		}
	}
	for(i = 0; i < n; i++){
		for(j = 1; j < n - i; j++){
			mark = 0;
			for(k = 0; k < m; k++){
				if (p[i][k] == p[i + j][k]){
					mark = 1;
					break;
				}
			}
			if(mark == 0){
				item++;
			}
		}
	}
	printf("%d", item);
	return 0;
 } 
