#include<stdio.h>
#include<stdlib.h>

struct lista{
	int num;
	struct lista *ptr;
};

struct lista *crialista(int number){
	struct lista *listar, *cabeca;
	int i = 1;
	listar = (struct lista *) malloc(sizeof(struct lista));
	cabeca = listar;
	while(i <= number){
		listar->num = i++;
		listar->ptr = (struct lista *) malloc(sizeof(struct lista));
		if(i <= number)
			listar = listar->ptr;
	}
	listar->ptr = cabeca;
	return cabeca;
}

struct lista *removee(int passo, struct lista *ptr){
	int i;
	struct lista *tira;
	while(ptr->num != ptr->ptr->num){
		i = 1;
		while(i < passo - 1){
			ptr = ptr->ptr;
			i++;
		}
		tira = ptr->ptr;
		ptr->ptr = tira->ptr;
		free(tira);
		ptr = ptr->ptr;
	}
	return ptr;
}

int main(){
	struct lista *ptr;
	int num, quant, n, m, i = 1;
	scanf("%d", &quant);
	while(quant--){
		scanf("%d", &n);
		scanf("%d", &m);
		ptr = crialista(n);
		ptr = removee(m, ptr);
		printf("Case %d: %d\n", i++, ptr->num);
		free(ptr);
	}
	return 0;
}
