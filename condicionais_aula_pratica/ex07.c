#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
A partir do saldo bancário inicial, um cliente teve débitos de créditos ao longo do mês. Faça um
algoritmo para ler o saldo inicial, o total de débitos e o total de créditos, e depois escrever o saldo final
do cliente através da mensagem “Saldo Positivo em R$ xxxx” ou “Saldo negativo em R$ xxxx” ou
“Saldo zero”

*/


int main(){
	float saldo, debitos, creditos;
	
	setlocale(LC_ALL, "");
	
	printf("Digite o saldo inicial: \n");
	scanf("%f", &saldo);
		
	printf("Digite os débitos: \n"); 
	scanf("%f", &debitos);
	
	printf("Digite os creditos: \n");
	scanf("%f", &creditos);
	
	// ENTENDI DÉBITO COMO SAÍDAS E CRÉDITO COMO ENTRADAS DE DINHEIRO
	// DE OUTRA FORMA A UNICA DIFERENÇA NO CÓDIGO SERIA SUBTRAIR OS CREDITOS
	saldo = saldo - debitos + creditos;
	
	if (saldo == 0){
		printf("Saldo Zero\n");
	}	else {
			if (saldo > 0){
				printf("Saldo positivo em R$%.2f", saldo);
			} else {
				printf("Saldo negativo em R$%.2f", saldo);
			}
		}
}	
	

