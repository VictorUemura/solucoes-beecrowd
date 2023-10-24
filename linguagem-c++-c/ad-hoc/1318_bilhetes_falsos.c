#include<stdio.h>
#include<stdlib.h>

int search(int vet[], int num, int tam){
	int i = 0, num1 = 0;
	while(i < tam){
		if(vet[i] == num)
			num1++;
		i++;
	}
	if(num1 == 1)
		return 1;
	return 0;
}

int main(){
	int n, m, x, cont;
	int *vet;
	scanf("%d%d", &n, &m);
	while(n){
		vet = (int *) malloc(sizeof(int) * m);
		x = 0;
		cont = 0;
		while(x < m){
			scanf("%d", &vet[x]);
			cont += search(vet, vet[x], x);
			x++;
		}
		printf("%d\n", cont);
		free(vet);
		vet = NULL;
		scanf("%d%d", &n, &m);
	}
	return 0;
}
