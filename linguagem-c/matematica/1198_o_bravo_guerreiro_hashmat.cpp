#include<stdio.h>
int main(void){
	// Em c99 existe um temanho de variavel int com 64 bits:
	long long int x, y, resul;
	while(scanf("%lld%lld", &x, &y) != EOF){
		resul = x - y;
		if(resul < 0)
			resul = -resul;
		printf("%lld\n", resul);
	}
	return 0;
}
