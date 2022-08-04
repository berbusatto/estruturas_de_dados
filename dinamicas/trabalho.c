#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct NO {
   int codigo;
   struct NO *prox;
};

struct NO* insere_fim (struct NO *l, int p_codigo);
struct NO* insere_ini(struct NO* l, int p_codigo);
void mostra(struct NO *l);

struct NO* retira_ini(struct NO*l); //////////////////////////////////////// FAZER

// Retira do inicio
// Função que retira o primeiro elemento da lista e mostra na tela o elemento retirado.
// Caso a lista seja Vazia, mostra a mensagem Lista Vazia
// Retorna o ponteiro para o primeiro nó da lista


int main() {
	setlocale(LC_ALL, "");
	struct NO *aluno;
	
	int op;        // Opção do parâmetro
	int codigo;   
	
	aluno = NULL;
	
	printf("----------------------------------\n");
	printf("1 - Inserir no final\n");
	printf("2 - Inserir no começo\n");
	printf("3 - Listar \n");      
	printf("5 - Sair \n");         
	printf("----------------------------------\n");   
	
	printf("Informe uma opção: ");
	scanf("%d", &op);
		
	while (op != 4) {
		switch (op) {
	  
	    case 1:
	
	        printf("Informe o código a ser incluido no final da Lista: ");
	        scanf("%d", &codigo);
	        
	        aluno = insere_fim(aluno, codigo);
	    break;
	        
	    case 2:
	    	printf("Informe o código a ser incluido no começo da Lista: ");
	        scanf("%d", &codigo);
	        aluno = insere_ini(aluno, codigo);
	        break;
	
	    case 3:
	        mostra(aluno);
	        break;
	    
	    case 5:
	    	exit(0);
	
	
	    default:
	        printf("INVALIDO \n");
	
	   }
	
	printf("----------------------------------\n");
	printf("1 - Inserir no final\n");
	printf("2 - Inserir no começo\n");
	printf("3 - Listar \n");      
	printf("5 - Sair \n");         
	printf("----------------------------------\n");   
	printf("Informe uma opção: ");
	scanf("%d", &op);
	}	
	
	system("pause");   
	return 0;
}
	
	
struct NO* insere_fim(struct NO *l, int p_codigo) {
	
	struct NO* tmp;
	struct NO* novo;		
	novo = (struct NO*)malloc(sizeof(struct NO));
	
	novo->codigo= p_codigo;
	novo->prox = NULL;
	
	if (l == NULL) { 
	  l = novo;
	}
	else {
	  // Laço que percorre a lista até encontrar o último elemento
	  for(tmp = l; tmp->prox != NULL; tmp = tmp->prox){
	  }
	  tmp->prox = novo;
	}
	return l;
}

struct NO* insere_ini(struct NO* l, int p_codigo){
	
	struct NO* novo;
	novo = (struct NO*)malloc(sizeof(struct NO));
	
	novo->codigo = p_codigo;
	novo->prox = l;
	return novo;	
}

void mostra(struct NO *l){
	struct NO* temp;
	for(temp = l; temp != NULL; temp = temp->prox){
		printf("Código: %d\n", temp->codigo);
	}
}
