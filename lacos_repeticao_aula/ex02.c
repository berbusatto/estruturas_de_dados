#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que leia a idade de 25 crianças de uma escola primária e informe qual a
média de idade dessas crianças.
*/


int main(){
	int idade, soma, media, i;
	setlocale(LC_ALL, "");
	for (i=0; i<25; i++){
		printf("Digite a idade da criança: ");
		scanf("%d", &idade);	
		soma += idade;		
	}
	media = soma / i;
	printf("%d\n", media);
	
	system("pause");
	return 0;
	
}


