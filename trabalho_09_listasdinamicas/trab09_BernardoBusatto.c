#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct NO {
   int codigo;
   struct NO *prox;
};

// Inserção no fim
// Função que insere um Nó no Final da Lista
// Recebe dois parâmetros: 1) a lista (endereço de memória no primeiro No d
//                         2) o valor inteiro a ser inserido
// Retorna a lista atualizada, ou seja, o nomo endereço da lista (endereço
struct NO* insere_fim (struct NO *l, int p_codigo);

struct NO* insere_ini(struct NO* l, int p_codigo);

void mostra(struct NO *l);

// Retira do inicio
// Função que retira o primeiro elemento da lista e mostra na tela o elemento retirado.
// Caso a lista seja Vazia, mostra a mensagem Lista Vazia
// Retorna o ponteiro para o primeiro nó da lista
struct NO* retira_ini (struct NO *l);


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
	printf("4 - Retira do começo: \n"); 
	printf("5 - Sair \n");         
	printf("----------------------------------\n");   
	
	printf("Informe uma opção: ");
	scanf("%d", &op);
	
	
	while (op != 5) {
	
	  switch (op) {
	  
	     case 1:
	
	        printf("Informe o código a ser incluido no final da Lista: \n");
	        scanf("%d", &codigo);
	        
	        aluno = insere_fim(aluno, codigo);
	        break;
	        
	    case 2:
	    	printf("Informe o código a ser incluido no começo da Lista: \n");
	        scanf("%d", &codigo);
	        aluno = insere_ini(aluno, codigo);
	        break;
	
	     case 3:
	        mostra(aluno);
	        break;
	    
	    case 4:
	    	printf("Retirando o primeiro item.\n");
	    	aluno = retira_ini(aluno);
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
	 printf("4 - Retira do começo: \n"); 
	 printf("5 - Sair \n");         
	 printf("----------------------------------\n");   
	 printf("Informe uma opção: ");
	 scanf("%d", &op);
	 
	}
	
	system("pause");   
	
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
	if(l != NULL){
		struct NO* temp;
		for(temp = l; temp != NULL; temp = temp->prox){
			printf("Código: %d\n", temp->codigo);
		}
	} else{
		printf("Lista Vazia.\n");
	}
	
}

struct NO* retira_ini (struct NO *l){
	if(l != NULL){
		l = l->prox;
		return l;
	}
	if (l == NULL){
		printf("Lista Vazia.\n");
	} 
	
}
