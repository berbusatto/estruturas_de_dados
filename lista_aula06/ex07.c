#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que armazene 30 valores reais em um vetor. Depois, modifique o
vetor de modo que os valores das posições ímpares sejam aumentados em 5%, e os das posições
pares sejam aumentados em 2%. Imprima o vetor resultante.
*/

#define valoresTamanho 3

int main(){
	
	float valores[valoresTamanho];
	int i = 0;
	
	for(i = 0; i < valoresTamanho; i++){
		printf("Digite um valor: \n");
		scanf("%f", &valores[i]);
		if(i % 2 == 0){
			valores[i] = valores[i] + (valores[i] * 0.02);
		} else{
			valores[i] = valores[i] + (valores[i] * 0.05);;
		}
	}
	for (i = 0; i < valoresTamanho; i++){
	printf("%.2f\n", valores[i]);
	
	}
	
	
	system("pause");
	return 0;
}
