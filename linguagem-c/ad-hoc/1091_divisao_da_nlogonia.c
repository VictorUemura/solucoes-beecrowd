#include<stdio.h>

int main(void){
	int k, n, m, x, y;
	scanf("%d", &k);
	while(k){
		scanf("%d%d", &n, &m);
		while(k){
			scanf("%d%d", &x, &y);
			if(x == n || y == m)
				printf("divisa\n");
			else if(x > n){
				if(y > m)
					printf("NE\n");
				else
					printf("SE\n");
			}
			else
				if(y > m)
					printf("NO\n");
				else
					printf("SO\n");
			k--;
		}
		scanf("%d", &k);
	}
	return 0;
}
