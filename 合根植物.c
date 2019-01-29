#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int m, n, sum, i, j = 1, item1, item2, result = 0, k, iter1, iter2;
	scanf("%d %d", &m, &n);
	scanf("%d", &sum);
	int a[m][n], *p = a[0];
	for(i = 0; i < n*m; i++){
		*(p + i) = 0;
	}
	for(i = 0; i < sum; i++){
		scanf("%d %d", &item1, &item2);
		item1--;
		item2--;
		if(a[item1/n][item1%n] == 0&&a[item2/n][item2%n] == 0){
			a[item1/n][item1%n] = j;
			a[item2/n][item2%n] = j;
			j++;
			result++;
		}
		if(a[item1/n][item1%n] != 0&&a[item2/n][item2%n] != 0&&a[item1/n][item1%n] != a[item2/n][item2%n]){
			result--;
			p = a[0];
			iter1 = a[item1/n][item1%n];
			iter2 = a[item2/n][item2%n];
			for(k = 0; k < n*m; k++){
				if(*(p + k) == iter1){
					*(p + k) = iter2;
				}
			}
		}
		if(a[item1/n][item1%n] != 0&&a[item2/n][item2%n] == 0){
			a[item2/n][item2%n] = a[item1/n][item1%n];
		}
		if(a[item1/n][item1%n] == 0&&a[item2/n][item2%n] != 0){
			a[item1/n][item1%n] = a[item2/n][item2%n];
		}
	}
	p = a[0];
	for(i = 0; i < n*m; i++){
		if(*(p + i) == 0){
			result++;
		}
	}
	printf("%d", result); 
	return 0;
}
