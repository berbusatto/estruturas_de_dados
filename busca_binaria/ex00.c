/*
Fa�a um programa em C que armazena 10
n�meros inteiros em um vetor. Posteriormente,
dado um n�mero informado pelo usu�rio,
indique se o n�mero est� ou n�o no vetor.
*/

#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 10

int main(){
	setlocale(LC_ALL, "");
	
	int vetor[TAM_VETOR], i = 0, numAlvo, baixo = 0, alto = TAM_VETOR -1, medio, bingo = 0;
	
	for(i= 0; i< TAM_VETOR; i++){
		printf("Digite um n�mero: \n");
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite o n�mero desejado: \n");
	scanf("%d", &numAlvo);
	
	while (baixo <= alto && bingo == 0){	
		medio = (baixo + alto) / 2;
		
		if (numAlvo < vetor[medio]){
			alto = medio -1;
		} else if (numAlvo > vetor[medio]){
			baixo = medio + 1;
		}
		if (vetor[medio] == numAlvo){
			bingo = 1;
			break;
		}
		if (vetor[baixo] > vetor[alto]){
			break;
		}
	}
	
	printf(bingo ? "Achou!\n" : "N�o achou!\n");	
	
	system("pause");
	return 0;
}
