#include<stdio.h>
#include<stdlib.h>

typedef struct lista{
	int num;
	struct lista *prox;
}lista;

lista *rede;

void criaLista(int num){
	lista *novo, *fim;
	rede = (int *) malloc(sizeof(int));
	rede->prox = NULL;
	rede->num = num;
	fim = rede;
	while(--num > 1){
		novo = (lista *) malloc(sizeof(lista));
		novo->num = num;
		novo->prox = rede;
		rede = novo;
	}
	fim->prox = rede;
}

int retiraLista(int passo){
	int num, cont;
	lista *remove;
	while(rede->prox->num != rede->num){
		cont = 1;
		while(cont < passo - 1){
				rede = rede->prox;
				cont++;
			}
		remove = rede->prox;
		rede->prox = remove->prox;
		num = rede->num;
		rede = rede->prox;
		free(remove);
	} 
	return num;
}

int main(void){
	int N, cont, num;
	scanf("%d", &N);
	while(N){
		if(N == 13)
			printf("%d\n", 1);
		else{
			cont = 1;
			criaLista(N);
			num = retiraLista(cont);
			while(num != 13){
				cont++;
				criaLista(N);
				num = retiraLista(cont);
				free(rede);
				rede = NULL;
			}
			printf("%d\n", cont);
		}
		scanf("%d", &N);
	}
	free(rede);
	rede = NULL;
	return 0;
}
