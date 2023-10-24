#include<stdio.h>

int sum = 0, quant = 0;
int fibonacci(int tam){
	int i;
	if(tam == 0){
		quant++;
		return 0;
	}
	if(tam == 1){
		sum++;
		quant++;
		return 1;
	}
	fibonacci(tam - 1);
	fibonacci(tam - 2);
	quant++;
	return 0;
}

int main(){
	int x, rep;
	scanf("%d", &rep);
	while(rep--){
		scanf("%d", &x);
		sum = 0;
		quant = 0;
		fibonacci(x);
		printf("fib(%d) = %d calls = %d\n", x, --quant, sum);
	}
	return 0;
}
