#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
A partir do saldo banc�rio inicial, um cliente teve d�bitos de cr�ditos ao longo do m�s. Fa�a um
algoritmo para ler o saldo inicial, o total de d�bitos e o total de cr�ditos, e depois escrever o saldo final
do cliente atrav�s da mensagem �Saldo Positivo em R$ xxxx� ou �Saldo negativo em R$ xxxx� ou
�Saldo zero�

*/


int main(){
	float saldo, debitos, creditos;
	
	setlocale(LC_ALL, "");
	
	printf("Digite o saldo inicial: \n");
	scanf("%f", &saldo);
		
	printf("Digite os d�bitos: \n"); 
	scanf("%f", &debitos);
	
	printf("Digite os creditos: \n");
	scanf("%f", &creditos);
	
	// ENTENDI D�BITO COMO SA�DAS E CR�DITO COMO ENTRADAS DE DINHEIRO
	// DE OUTRA FORMA A UNICA DIFEREN�A NO C�DIGO SERIA SUBTRAIR OS CREDITOS
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
	

