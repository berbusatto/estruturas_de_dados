
// Escreva um programa em C que leia e mostre sua idade e altura conforme mensagem abaixo:
// “Tenho 32 anos e 1.75 de altura

#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	float altura;
	
	printf("Digite a sua idade: \n");
	scanf("%d", &idade);
	
	printf("Digite a sua altura: \n");
	scanf("%f", &altura);
	
	printf("Tenho %d anos e %.2f de altura. \n", idade, altura);
	system("pause");
	return 0;
}
