#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que mostre na tela o número 1 até o número informado pelo cliente.
*/


int main(){
	int num, i;
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	for (i= 1; i <= num; i++){
		printf("%d\n", i);
		
	}
	system("pause");
	return 0;
	
}
