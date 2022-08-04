#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

struct NO {
   int codigo;
   struct NO *prox;
};

// Inser��o no fim
// Fun��o que insere um N� no Final da Lista
// Recebe dois par�metros: 1) a lista (endere�o de mem�ria no primeiro No d
//                         2) o valor inteiro a ser inserido
// Retorna a lista atualizada, ou seja, o nomo endere�o da lista (endere�o
struct NO* insere_fim (struct NO *l, int p_codigo);
struct NO* insere_ini(struct NO* l, int p_codigo);
void mostra(struct NO *l);


int main() {
	setlocale(LC_ALL, "");
	struct NO *aluno;
	
	int op;        // Op��o do par�metro
	int codigo;   
	
	aluno = NULL;
	
	printf("----------------------------------\n");
	printf("1 - Inserir no final\n");
	printf("2 - Inserir no come�o\n");
	printf("3 - Listar \n");      
	printf("5 - Sair \n");         
	printf("----------------------------------\n");   
	
	printf("Informe uma op��o: ");
	scanf("%d", &op);
	
	
	while (op != 4) {
	
	  switch (op) {
	  
	     case 1:
	
	        printf("Informe o c�digo a ser incluido no final da Lista: ");
	        scanf("%d", &codigo);
	        
	        aluno = insere_fim(aluno, codigo);
	        break;
	        
	    case 2:
	    	printf("Informe o c�digo a ser incluido no come�o da Lista: ");
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
	 printf("2 - Inserir no come�o\n");
	 printf("3 - Listar \n");      
	 printf("5 - Sair \n");         
	 printf("----------------------------------\n");   
	 printf("Informe uma op��o: ");
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
	  // La�o que percorre a lista at� encontrar o �ltimo elemento
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
		printf("C�digo: %d\n", temp->codigo);
	}
}
