#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
O cardápio de uma lanchonete é o seguinte:

Especificação Código Preço
Cachorro quente 100 R$ 1,20
Bauru simples 101 R$ 1,30
Bauru com ovo 102 R$ 1,50
Hambúrguer 103 R$ 1,30
Cheeseburguer 104 R$ 1,30
Refrigerante 105 R$ 1,00

Escrever um algoritmo que leia o 
código do item pedido, a 
quantidade e
calcule o valor a ser pago por aquele lanche. 

Considere que a cada execução somente será calculado um item. O programa irá ler os
pedidos enquanto o código do produto não for 999. Quando o cliente informar 999, o algoritmo deve
informar a 

quantidade de pedidos realizada, a 
quantidade de itens vendido, o valor total arrecadado e o
valor médio dos pedidos realizados.
*/


int main(){
	int codigo, qtdProdutos, qtdItens = 0;
	float valorTotal = 0, valorMedio, valorProduto; 
	setlocale(LC_ALL, "");

	do{
		printf("Digite o código do produto: ");
		scanf("%d", &codigo);
		
		if(codigo != 999){		
			printf("Digite a quantidade: ");
			scanf("%d", &qtdItens);
	}
			
		switch(codigo){
			case 100:
				valorProduto = 1.20; 
				valorTotal = valorProduto * qtdItens;
				qtdProdutos++;
			break;
			case 101:
				valorProduto = 1.30;
				valorTotal = valorProduto * qtdItens;
				qtdProdutos++;
			break;	
			
		
		}
	} while (codigo != 999);
	printf("Quantidade de produtos: %d\n", qtdItens);
	printf("Valor total: %.2f\n", valorTotal);
		
	
	system("pause");
	return 0;
	
}
