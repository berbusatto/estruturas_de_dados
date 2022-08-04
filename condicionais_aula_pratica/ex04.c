#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Faça um programa em C que leia o tempo que uma pessoa é cliente de uma loja de departamentos e
o valor gasto na compra. Informe um desconto de 10 % caso a pessoa seja cliente a mais de 5 anos e o
valor da compra seja superior a R$ 1.000,00. Se a compra for superior a R$ 5000 e cliente a mais de
5 anos, o desconto deve ser de 20 %.
*/

int main(){
	int tempoCliente;
	float valorCompra;

	setlocale(LC_ALL, ""); 	
	
	printf("Digite o tempo de cadastro do cliente: \n");
	scanf("%d", &tempoCliente);
	
	printf("Digite o valor da compra: \n");
	scanf("%f", &valorCompra);
	
	if (tempoCliente >= 5.0){
		if (valorCompra >= 1000.00 && valorCompra < 5000.00){
			valorCompra = valorCompra - (valorCompra * 0.10);			
		} else {
			if (valorCompra >= 5000.00){
				valorCompra = valorCompra - (valorCompra * 0.20);
			}
		}
	}
	printf("O valor final da compra é R$%.2f.\n", valorCompra);			
			
	system("pause");
	return 0;	
	}
