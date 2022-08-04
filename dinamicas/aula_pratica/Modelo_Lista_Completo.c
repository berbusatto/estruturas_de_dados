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


// Imprime o conteúdo dos Nós da Lista
// Lista todos os Nós da Lista
// Recebe como parâmetro a Lista (endereço de memória no primeiro No da lis
// a ser percorrida
void mostra (struct NO *l);


// Inserção no início
// Função que insere um Nó no Inicio da Lista
// recebe dois parâmetros: 1) a lista (endereço de memória no primeiro No d
//                         2) o valor inteiro a ser inserido
// Retorna a lista atualizada, ou seja, o nomo endereço da lista (endereço
struct NO* insere_ini (struct NO *l, int p_codigo);



int main() {
    
   struct NO *aluno;
    
   int op;        // Opção do parâmetro
   int codigo;   
  
  
   aluno = NULL;
  
   printf("----------------------------------\n");
   printf("1 - Inserir Final\n");
   printf("2 - Inserir Inicio\n");   
   printf("3 - Listar \n");      
   printf("5 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("Informe uma opção para Fila: ");
   scanf("%d", &op);
   
  
   while (op != 5) {

      switch (op) {
      
         case 1:
  
            printf("Informe o código a ser incluido na Lista: ");
            scanf("%d", &codigo);
            
            aluno = insere_fim(aluno, codigo);
            break;
         
         case 2:
  
            printf("Informe o código a ser incluido na Lista: ");
            scanf("%d", &codigo);
            
            aluno = insere_ini(aluno, codigo);
            break;



         case 3:
            mostra(aluno);
            break;


         default:
            printf("INVALIDO \n");

       }

     printf("----------------------------------\n");
     printf("1 - Inserir Final\n");
     printf("2 - Inserir Inicio\n");        
     printf("3 - Mostra Lista \n");      
     printf("5 - Sair \n");         
     printf("----------------------------------\n");   
     printf("Informe uma opção para Fila: ");
     scanf("%d", &op);
     
   }
   
   system("pause");   
    
}


struct NO* insere_fim (struct NO *l, int p_codigo) {

   struct NO* tmp;
   struct NO* novo;


   novo = (struct NO*) malloc(sizeof(struct NO));

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

void mostra (struct NO *l) {

   struct NO* tmp; /* Variavel auxliar para percorrer a lista */

   printf("\n * \n");
   for(tmp = l; tmp!= NULL; tmp = tmp->prox) {
      printf("Info = %d\n", tmp->codigo);
   }
   printf("\n * \n");
}


struct NO* insere_ini (struct NO* l, int p_codigo) {

   struct NO* novo;
   
   novo = (struct NO*) malloc(sizeof(struct NO));

   novo->codigo = p_codigo;
   novo->prox = l;
   return novo;
}
