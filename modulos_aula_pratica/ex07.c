#include <stdio.h>
#include <stdlib.h>

/*
Implemente o algoritmo abaixo que cria um módulo (função) que calcula o produto de 9 % de 5000.0,
retornando um tipo float
*/

float calculaProduto();

int main(){
	
	printf("%.2f\n", calculaProduto());
	system("pause");
	return 0;
	}
	
float calculaProduto(){
	return 5000.0 * 9 /100;
}
