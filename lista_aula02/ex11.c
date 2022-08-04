#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia duas informações: o valor que um cliente possui para
abastecer o carro e o valor do litro da gasolina. O algoritmo deve informar quantos litros ele
irá abastecer
*/

int main(){
	float valor_litro, qtd_litros, valor_pago;
	
	printf("Qual eh o valor do litro? \n");
	scanf("%f", &valor_litro);
	
	printf("Qual eh o valor pago? \n");
	scanf("%f", &valor_pago);
	
	qtd_litros = valor_pago / valor_litro;
	
	printf("A quantidade abastecida foi de %.3f litros\n", qtd_litros);
	
	system("pause");
	return 0;
		
}
