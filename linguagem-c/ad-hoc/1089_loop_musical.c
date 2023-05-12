#include<stdio.h>

int main(void){
	int amostras[10001];
	int N, picos, anterior, proximo;
	
	scanf("%d", &N);
	while(N){
		
		for(int i = 0; i < N; i++){
			scanf("%d", &amostras[i]);
		}
		
		picos = 0;
		
		for(int i = 0; i < N; i++){
			anterior = amostras[((i - 1) + N) % N];
			proximo = amostras[(i + 1) % N];
			
			if((anterior < amostras[i] && proximo < amostras[i]) || (anterior > amostras[i] && proximo > amostras[i]))
				picos++;
		}
		
		printf("%d\n", picos);
		scanf("%d", &N);
	}
	
	
	
	return 0;
}
