#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Faça um programa em C que leia a idade de uma pessoa e exiba uma mensagem dizendo se ela está
	compreendida entre 18 e 65 anos
*/

int main(){
	int idade;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	
	if (idade >=18 && idade <= 65) printf("Está entre 18 e 65 anos\n");
		
	system("pause");
	return 0;	
}
