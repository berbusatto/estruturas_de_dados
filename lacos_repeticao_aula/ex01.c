#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa em C que mostre na tela o n�mero 1 at� o n�mero informado pelo cliente.
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
