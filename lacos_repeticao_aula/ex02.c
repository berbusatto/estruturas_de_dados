#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa em C que leia a idade de 25 crian�as de uma escola prim�ria e informe qual a
m�dia de idade dessas crian�as.
*/


int main(){
	int idade, soma, media, i;
	setlocale(LC_ALL, "");
	for (i=0; i<25; i++){
		printf("Digite a idade da crian�a: ");
		scanf("%d", &idade);	
		soma += idade;		
	}
	media = soma / i;
	printf("%d\n", media);
	
	system("pause");
	return 0;
	
}


