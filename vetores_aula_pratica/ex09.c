#include <stdio.h>
#include <stdlib.h>

/*
O exemplo, mostrado a seguir, calcula o produto escalar de dois vetores inteiros
*/

// constante que posteriormente estabelecerá o tamanho do vetor

#define DIM 5

int main(){
	int vetor1[DIM], vetor2[DIM];
	int i, produto = 0;
	
	
	printf("Entre com um vetor de %d elementos\n", DIM);
		
	for (i = 0; i < DIM; i++){
		printf("Elemento %d: ", i);
		scanf("%d", &vetor1[i]);	
	}
	
	printf("Entre com um vetor de %d elementos\n", DIM);
			
	for (i = 0; i < DIM; i++){
		printf("Elemento %d: ", i);
		scanf("%d", &vetor2[i]);
	}
	
	for (i = 0; i < DIM; i++){
		produto = produto + vetor1[i] * vetor2[i];
	}
	
	printf("O produto vale %d\n", produto);
		
	system("pause");
	return 0;
	
}
