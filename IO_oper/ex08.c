
//Crie um programa am C que leia a idade de um aluno informada pelo usuário e posteriormente
//mostre essa idade na tela conforme abaixo:
//A idade informada é 29 anos.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	printf("A idade informada eh %d anos\n", idade);
	system("pause");
	return 0;
}
