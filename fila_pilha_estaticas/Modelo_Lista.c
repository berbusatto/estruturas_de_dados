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


int main() {
    
   struct NO *aluno;
    
   int op;        // Op��o do par�metro
   int codigo;   
  
  
   aluno = NULL;
  
   printf("----------------------------------\n");
   printf("1 - Inserir Final\n");
   printf("3 - Listar \n");      
   printf("5 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("Informe uma op��o para Fila: ");
   scanf("%d", &op);
   
  
   while (op != 4) {

      switch (op) {
      
         case 1:
  
            printf("Informe o c�digo a ser incluido na Lista: ");
            scanf("%d", &codigo);
            
            aluno = insere_fim(aluno, codigo);
            break;
         

         case 3:
            printf("Listar");
            break;


         default:
            printf("INVALIDO \n");

       }

     printf("----------------------------------\n");
     printf("1 - Inserir Final\n");
     printf("3 - Listar \n");      
     printf("5 - Sair \n");         
     printf("----------------------------------\n");   
     printf("Informe uma op��o para Fila: ");
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

      // La�o que percorre a lista at� encontrar o �ltimo elemento
      for(tmp = l; tmp->prox != NULL; tmp = tmp->prox){
      }
      tmp->prox = novo;

   }

   return l;
}
