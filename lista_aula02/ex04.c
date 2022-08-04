#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Ler um número inteiro e imprimir seu quadrado
*/

int main(){
	int numero, res;
	
	printf("Digite um numero ");
	scanf("%d", &numero);
	res = (int) (pow(numero,2));
	printf("%d", res);	
}
