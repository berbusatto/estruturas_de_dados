#include <stdio.h>
#include <stdlib.h>

/*
Informar um preço de um produto e calcular novo preço com desconto de 9%
*/

int main(){
	float valor_produto, valor_final;
	
	printf("Digite o preco do produto: \n");
	scanf("%f", &valor_produto);
	valor_final = valor_produto - (valor_produto * 0.09);
	
	printf("O valor com desconto eh de: %.2f\n", valor_final);	
		
	system("pause");
	return 0;
}

