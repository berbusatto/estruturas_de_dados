
//Crie um programa em C que leia o código de um competidor, sua idade, peso e altura e
//posteriormente mostre essas informações na tela.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int cod_competidor, idade;
	float peso, altura;
	
	printf("Digite o codigo do competidor: \n");
	scanf("%d", &cod_competidor);
	
	printf("\nDigite a idade do competidor: \n");
	scanf("%d", &idade);
	
	printf("\nDigite o peso do competidor: \n");
	scanf("%f", &peso);
	
	printf("\nDigite a altura do competidor: \n");
	scanf("%f", &altura);
	
	printf("%d %d %.1f %.2f", cod_competidor, idade, peso, altura);
		
}
