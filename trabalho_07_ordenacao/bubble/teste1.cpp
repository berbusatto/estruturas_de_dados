#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void printVet(int numbs[]);
void bubbleSort(int numbs[]);

int main(){
	int numbs[TAM], i;
	
	
	setlocale(LC_ALL, "");
	
	printf("Preencha %d números de forma desordenada.\n", TAM);
	
	for (i = 0; i < TAM; i++){
		scanf("%d", &numbs[i]);	
	}
	
	printVet(numbs);
	bubbleSort(numbs);
	
	
}


// MÉTODOS

void printVet(int numbs[]){
	int i = 0;
	printf("Dados do vetor: ");
	for (i = 0; i < TAM; i++){
		printf("\n%d", numbs[i]);	
	}
}

void bubbleSort(int numbs[]){
	int i, j, auxSwap;
	for(i = 1; i < TAM; i++){
		for (j = 0; j < TAM -1; j++){
			if (numbs[j] > numbs[j+1]){
				
				auxSwap = numbs[j];
				numbs[j] = numbs[j+1];
				numbs[j+1] = auxSwap;
			}
		}
	}
	printf("\nDepois do bubbleSort: \n");
	printVet(numbs);
}
