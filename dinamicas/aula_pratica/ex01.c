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
	
	strcpy(p->nome, "Alex");
	p->codigo = 1201;
	p->idade = 19;
	p->prox = NULL; 
	
	printf("\n-----------------------------\n");
	
	printf("%s, do código %d, tem %d anos.", p->nome, p->codigo, p->idade);
}




