#include<stdio.h>
#include<string.h>

int main(void){
	int cont, i = 0;
	char string[9], string1[9];
	scanf("%d", &cont);
	while(i < cont){
		fflush(stdin);
		scanf("%s%s", &string, &string1);
		
		printf("Caso #%d: ", ++i);
		
		if(strcmp("pedra", string) == 0)
			if(strcmp("papel",string1) == 0 || strcmp("Spock",string1) == 0)
				printf("Raj trapaceou!\n");
			else if(strcmp("lagarto", string1) == 0 || strcmp("tesoura", string1) == 0)
				printf("Bazinga!\n");
			else
				printf("De novo!\n");
		
		else if(strcmp("papel", string) == 0)
			if(strcmp("pedra", string1) == 0 || strcmp("Spock", string1) == 0)
				printf("Bazinga!\n");
			else if(strcmp("tesoura", string1) == 0 || strcmp("lagarto", string1) == 0)
				printf("Raj trapaceou!\n");
			else
				printf("De novo!\n");
		
		else if(strcmp("tesoura", string) == 0)
			if(strcmp("papel", string1) == 0 || strcmp("lagarto", string1) == 0)
				printf("Bazinga!\n");
			else if(strcmp("Spock", string1) == 0 || strcmp("pedra", string1) == 0)
				printf("Raj trapaceou!\n");
			else
				printf("De novo!\n");
		
		else if(strcmp("lagarto", string) == 0)
			if(strcmp("Spock", string1) == 0 || strcmp("papel", string1) == 0)
				printf("Bazinga!\n");
			else if(strcmp("pedra", string1) == 0 || strcmp("tesoura", string1) == 0)
				printf("Raj trapaceou!\n");
			else
				printf("De novo!\n");
				
		else
			if(strcmp("tesoura", string1) == 0 || strcmp("pedra", string1) == 0)
				printf("Bazinga!\n");
			else if(strcmp("lagarto", string1) == 0 || strcmp("papel", string1) == 0)
				printf("Raj trapaceou!\n");
			else
				printf("De novo!\n");
	}
}
