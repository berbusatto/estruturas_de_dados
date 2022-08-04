#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct NO {
   int codigo, anoNascimento;
   float salario;
   struct NO *prox;
};


int main() {
	setlocale(LC_ALL, "");
	
	struct NO *estagiario;
	estagiario = (struct NO *) malloc(sizeof(struct NO));
	
	
	
	printf("Digite o código do estagiário: ");
	scanf("%d", &estagiario->codigo);
	printf("Digite o salário do estagiário: ");
	scanf("%f", &estagiario->salario);
	printf("Digite o ano de nascimento do estagiário: ");
	scanf("%d", &estagiario->anoNascimento);
	
	estagiario->prox = NULL;
	
	struct NO *novoEstagiario;
	novoEstagiario = (struct NO *) malloc(sizeof(struct NO));
	
	printf("Digite o código do estagiário: ");
	scanf("%d", &novoEstagiario->codigo);
	printf("Digite o salário do estagiário: ");
	scanf("%f", &novoEstagiario->salario);
	printf("Digite o ano de nascimento do estagiário: ");
	scanf("%d", &novoEstagiario->anoNascimento);
	
	novoEstagiario->prox = NULL;
	
	estagiario->prox = novoEstagiario;
	
	
	
	
	system("pause");   
	return 0;
	}
