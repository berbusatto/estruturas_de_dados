#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Crie um programa em C que leia um n�mero. Se este n�mero for par, imprima a mensagem �Este �
um n�mero par�. Caso seja �mpar, escreva a mensagem �Este � um n�mero �mpar�
*/

int main(){
	int numero;
	setlocale(LC_ALL, "Portuguese");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) return printf("par\n"); 
	else printf("impar\n");
		
	system("pause");
	return 0;	
}

