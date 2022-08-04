/*
Faça um programa em C que armazena 10
números inteiros em um vetor. Posteriormente,
dado um número informado pelo usuário,
indique se o número está ou não no vetor.
*/

#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 10

int main(){
	setlocale(LC_ALL, "");
	
	int vetor[TAM_VETOR], i = 0, numAlvo, baixo = 0, alto = TAM_VETOR -1, medio, bingo = 0;
	
	for(i= 0; i< TAM_VETOR; i++){
		printf("Digite um número: \n");
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite o número desejado: \n");
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
	
	printf(bingo ? "Achou!\n" : "Não achou!\n");	
	
	system("pause");
	return 0;
}
