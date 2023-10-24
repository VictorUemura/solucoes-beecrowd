#include<stdio.h>

char alternativa(int vet[]){
	char opcao;
	int i = 5, cont = 0;
	while(i--){
		if(vet[i] <= 127)
			cont++;
	}
	if(cont != 1)
		return '*';
	if(vet[0] <= 127)
		return 'A';
	if(vet[1] <= 127)
		return 'B';
	if(vet[2] <= 127)
		return 'C';
	if(vet[3] <= 127)
		return 'D';
	if(vet[4] <= 127)
		return 'E';
}

int main(void){
	int vet[5], quant;
	char opcao;
	scanf("%d", &quant);
	while(quant){
		while(quant){
			for(int i = 0; i < 5; i++)
				scanf("%d", &vet[i]);
			opcao = alternativa(vet);
			printf("%c\n", opcao);
			quant--;
		}
		scanf("%d", &quant);
	}
	return 0;
}
