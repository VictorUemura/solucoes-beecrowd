#include<stdio.h>
#include<math.h>

int fatorial(int i){
	int num;
	if(i == 0)
		return 1;
	num = fatorial(i - 1) * i;
	return num;
}

int main(void){
	int num, i, cont, fat, resto, valor;
	scanf("%d", &num);
	while(num){
		cont = 0;
		valor = 0;
		i = num;
		while(i){
			cont++;
			i /= 10;
		}
		while(num){
			fat = pow(10 ,cont - 1);
			fat = num / fat;
			valor += fat * fatorial(cont);
			fat = pow(10, cont - 1);
			num = num % fat;
			cont--;
		}
		printf("%d\n", valor);
		scanf("%d", &num);
	}
	return 0;
}
