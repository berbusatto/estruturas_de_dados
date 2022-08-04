#include <stdio.h>
#include <string.h>
#define TAM 20
struct ficha_candidato {
int codigo;
float salario;
char mail [50];
};
void main () {
	struct ficha_candidato candidato[TAM];
	int i;
	for (i = 0; i < TAM; i++) {
	fflush(stdin);
	printf("\nInforme o codigo do candidato: ");
	scanf(XXXXXX);
	fflush(stdin);
	printf("\nInforme o salario: ");
	scanf(XXXXXX);
	fflush(stdin);
	printf("\nInforme o Mail: ");
	gets(XXXXXX);
	}
	printf("************************************************************\n");
	printf("************************************************************\n");
	for (i = 0; i < TAM; i++) {
	printf("\nCandidato %d ", i + 1);
	printf("\n%d", candidato[i].codigo);
	printf("\n%.2f", candidato[i].salario);
	printf("\n%s", candidato[i].mail);
	}
	system("pause");
	return 0;
}
