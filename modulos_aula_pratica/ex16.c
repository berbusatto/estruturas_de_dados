#include <stdio.h>
#include <stdlib.h>

int soma(int num1, int num2);

int main (){
	int num1, num2;
	float res;
	char op;
	printf("\n Informe a operacao desejada: \n");
	printf("+ - / * \n");
	printf("# para SAIR \n");
	scanf("%c", &op);
	while (op != '#'){
		printf("Informe o primeiro numero: ");
		fflush(stdin);
		scanf("%d", &num1);
		printf("Informe o segundo numero: ");
		fflush(stdin);
		scanf("%d", &num2);
		
		if (op == '+'){
			res = soma(num1, num2);
		} else{
			if (op == '-'){
				res = subtrai(num1, num2);
			} else{
				if (op == '*'){
						res = multiplica(num1, num2);
				}else{
					res = divide(num1, num2);
					}
				}
			}	
			printf("%.2f \n", res);
			printf("\n\n Informe a operacao desejada: \n");
			printf("+ - / * \n");
			printf("# para SAIR \n");
			fflush(stdin);
			scanf("%c", &op);
		}
		return 0;
	}
	
int soma(int pnum1, int pnum2){
	return pnum1 + pnum2;	
}

int subtrai(int pnum1, int pnum2){
	return pnum1 - pnum2;
}

int multiplica(int pnum1, int pnum2){
	return pnum1 * pnum2;
}

int divide(int pnum1, int pnum2){
	if (pnum2 != 0){
		return pnum1 / pnum2;
	} else {
		return 0;
		// NAO FUNCIONOU
	}
}
