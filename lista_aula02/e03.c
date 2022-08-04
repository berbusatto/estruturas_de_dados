#include <stdio.h>
#include <stdlib.h>

/*
Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%
*/

int main(){
	int valor;
	printf("Digite um numero ");
	scanf("%d", &valor);
	printf("%.2f", valor + (valor * 0.10));
}
