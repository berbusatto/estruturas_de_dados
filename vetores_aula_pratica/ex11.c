#include <stdio.h>
#include <stdlib.h>

/*
Dado um vetor com 20 posições que armazena a matrícula de alunos na disciplina de Algoritmos e um
segundo vetor com 30 posições que armazena a matrícula de alunos da disciplina de Banco de Dados. Informe
quais são os alunos (número da matrícula) matriculados nas duas disciplinas. Quantos são esses alunos ?
*/


int main(){
	int banco_dados[30], algoritmos[20];
	
	for (i = 0; i < 30; i++){
		scanf("%d", &banco_dados[i]);
	}
	
	for (i = 0; i < 20; i++){
		scanf("%d", &algoritmos[i]);
	}
	
	for (i = 0; i < 30; i++){
		for (i = 0; i < 20; i++){
			// COMPARAR OS INDICES
		}
	}
		
	system("pause");
	return 0;
	
}
