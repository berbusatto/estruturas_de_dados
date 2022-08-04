/*
O programa abaixo cadastra um número de funcionários informado pelo cliente. Esse cadastro é
composto pelas seguintes informações: cód (inteiro), nome e salário. Após cadastrar os funcionários
e mostrai-los na tela, a memória alocada para esse cadastro é devolvida para o Sistema Operacional

*/

#include <stdio.h>
#include <stdlib.h> /* Para usar malloc() */
struct funcionario {
	int cod;
	char nome[30];
	float salario;
}
;
main (void) {
	struct funcionario *p;
	int q_func;
	int i; // contadora
	
	fflush(stdin);
	printf("Qual a quantidade de funcionários ?");
	scanf("%d", &q_func);
	
	p = (struct funcionario *)malloc(q_func*sizeof(struct funcionario));
	
	for (i=0; i < q_func ; i++) { /* p pode ser tratado como um vetor com a posicoes */
		fflush(stdin);
		printf("\nInforme o codigo do funcionario: ");
		scanf("%d", &p[i].cod);
		fflush(stdin);
		printf("\nInforme o nome do funcionario: ");
		gets(p[i].nome);
		fflush(stdin);
		printf("\nInforme o salario do funcionario: ");
		scanf("%f", &p[i].salario);
	}
	
	printf("\n***********************************************\n");
	printf(" FUNCIONARIOS CADASTRADOS \n");
	printf("***********************************************\n");
		
	for (i=0; i < q_func ; i++) { /* p pode ser tratado como um vetor com a posicoes */
		printf("Codigo lido: %d \n", p[i].cod);
		printf("Nome lido: %s \n", p[i].nome);
		printf("Nome lido: %f \n", p[i].salario);
	}
	
	free(p);
	getchar();
	return 0;
}
