#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Crie um programa em C que leia um número. Se este número for par, imprima a mensagem “Este é
um número par”. Caso seja ímpar, escreva a mensagem “Este é um número ímpar”
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

