#include<stdio.h>
#include<math.h>
int mdc(int num1, int num2){
	int i;
	while(num2 != 0){
		i = num1 % num2;
		num1 = num2;
		num2 = i;
	}
	return num1;
}

int main(void){
	int num1, num2, num3, num4, quant;
	char desc, op;
	scanf("%d", &quant);
	while(quant--){
		scanf("%d %c %d %c %d %c %d", &num1, &desc, &num2, &op, &num3, &desc, &num4);
		switch(op){
			case '*':
				num1 = num1 * num3;
				num2 = num2 * num4;
				break;
			case '/':
				num1 = num1 * num4;
				num2 = num2 * num3;
				break;
			case '+':
				num1 = (num1 * num4 + num3 * num2);
				num2 = (num2 * num4);
				break;
			case '-':
				num1 = (num1 * num4 - num3 * num2);
				num2 = (num2 * num4);
				break;
		}
		num3 = mdc(num1, num2);
		if(num1 < 0 || num2 < 0)
			printf("-%d/%d = ", abs(num1), abs(num2));
		else
			printf("%d/%d = ", abs(num1), abs(num2));
		num1 = num1 / num3;
		num2 = num2 / num3;
		
		if(num1 < 0 || num2 < 0)
			printf("-%d/%d\n", abs(num1), abs(num2));
		else
			printf("%d/%d\n", abs(num1), abs(num2));
	}
	return 0;
}
