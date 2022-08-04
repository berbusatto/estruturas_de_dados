#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct NO {
	int codigo;
	char nome[40];
	int idade;
	struct NO *prox;
};


main(void){
	setlocale(LC_ALL, "");
	struct NO *p;
	
	p = (struct NO *)malloc(sizeof(struct NO));
	
	struct NO *outro_aluno = p;
	
	printf("Digite o nome: ");
	gets(p->nome);
	
	printf("Digite o código: ");
	scanf("%d", &p->codigo);
	
	printf("Digite a idade: ");
	scanf("%d", &p->idade);	

	p->prox = NULL; 
	
	outro_aluno->idade=99;
	
	strcpy(outro_aluno->nome, "Anaximandro");
	
	printf("\n-----------------------------\n");
	
	printf("%s, do código %d, tem %d anos.", p->nome, p->codigo, p->idade);
}




