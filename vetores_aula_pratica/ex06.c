#include <stdio.h>
#include <stdlib.h>

/*
Fa�a um programa em C que realiza a leitura de 50 n�meros reais e armazene esses numeros em um vetor.
Posteriormente, mostre a soma de todos os n�meros do vetor
*/
int main(){
	int num[50], entrada, i, soma = 0;
	
	for (i = 0; i<50; i++){
		scanf("%d", &num[i]);
		soma += num[i];
	}
	
	printf("%d\n", soma);
	
	system("pause");
	return 0;
	}
