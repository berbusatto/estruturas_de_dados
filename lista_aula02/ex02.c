#include <stdio.h>
#include <stdlib.h>

/* 
Ler um número inteiro e imprimir seu sucessor e seu antecessor
*/

int main() {
	
	int numero, post, prev;
	
	printf("Digite um numero \n");
	scanf("%d", &numero);
	
	post = numero + 1;
	prev = numero -1;
	
	printf("Sucessor %d\nAntecessor %d\n", post, prev);	
	system("pause");
	return 0;
}

