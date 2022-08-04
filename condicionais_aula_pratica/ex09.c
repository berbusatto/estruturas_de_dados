#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
O cardápio da lanchonete Burgão é o seguinte:
Código Especificação Preço
100 Cachorro quente 1.20
101 Bauru Simples 1.30
102 Bauru com ovo 1.50
103 Hambúrguer 1.70
201 Refrigerante 1.20
202 Suco 1.50
203 Água Mineral 0.70
Escreva um programa em C que leia o código de um sanduíche e de uma bebida, e imprima o valor a
ser pago pelo cliente. Assuma entradas corretas.
Se o código informado for incorreto, emitir mensagem ”Código de Desconto incorreto”
*/


int main(){
	setlocale(LC_ALL, "");
	
	int codigoLanche, codigoBebida;
	float valorPedido = 0.0;
	
	printf("Digite o código do lanche: ");
	scanf("%d", &codigoLanche);
	
	printf("Digite o código da bebida: ");
	scanf("%d", &codigoBebida);
	
	switch(codigoLanche){
		case (100):
			printf("Cachorro quente: R$1.20\n");
			valorPedido += 1.20;
			break;
		
		case (101):
			printf("Bauru simples: R$1.30\n");
			valorPedido += 1.30;
			break;
		
		case (102):
			printf("Bauru com ovo: R$1.50\n");
			valorPedido += 1.50;
			break;
		
		case (103):
			printf("Hamburguer: R$1.70\n");
			valorPedido += 1.70;
			break;		
		default:
		printf("Codigo incorreto.\n");	
		
	}
	
	switch(codigoBebida){
		
		case (201):
			printf("Refrigerante: R$1.20\n");
			valorPedido += 1.20;
			break;
		
		case (202):
			printf("Suco: R$1.50\n");
			valorPedido += 1.50;
			break;
		
		case (203):
			printf("Água mineral: R$0.70\n");
			valorPedido += 0.70;
			break;	
		
		default:
		printf("Codigo incorreto.\n");		
		
	}
	printf("O valor do pedido é de R$%.2f \n", valorPedido);
	
	system("pause");
	return 0;
}	

