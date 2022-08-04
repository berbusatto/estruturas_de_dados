#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//  Fun��o que retorna 1 em caso de Pilha Cheia e 0 em caso de inclus�o Ok                  
int inclui(int *p_ultimo, int p_Pilha[10], int p_valor);  // p_ultimo - par�metro que define a posi��o do �ltima elemento da Pilha (primeira vaga)
// esse valor � passado por refer�ncia pois o mesmo � alterado com a inclu�o de um elemento            

// p_Pilha   - Pilha na qual o conte�do (p_valor) ser� inclu�do

// esse valor � passado por refer�ncia pois o mesmo � alterado              

// p_valor  - valor a ser inserido na Pilha 


// Fun��o que mostra os elementos da Pilha 
void mostra(int p_ultimo, int p_Pilha[10]);              
// p_ultimo - par�metro que define a �ltima posi��o elemento da Pilha (primeira vaga)


//  Fun��o que retorna o Primeiro elemento da Pilha, caso exista OU - caso a lista esteja VAZIA                  
int exclui(int *p_ultimo, int p_Pilha[10]);              
// p_ultimo - par�metro que define a �ltima posi��o elemento da Pilha (primeira vaga)
// esse valor � passado por refer�ncia pois o mesmo � alterado com a retirada do elemento               
// p_Pilha   - Pilha na qual o conte�do (p_valor) ser� inclu�do



int main() {

   int Pilha[10];
   int op;        // Op��o do par�metro
   int valor;     // Valor a ser inclu�do / retirado da Pilha. Se valor = -1, significa Pilha vazia   
   int ultimo;   // Vari�vel que define a �ltima posi��o da Pilha (primeira vaga)   
   int res;      // Recebe o retorno do resultado das fun��es inclui
                 // fun��o inclui 1 - Pilha Cheia    0 - Inclus�o OK
  
   setlocale(LC_ALL,"");
  
   printf("----------------------------------\n");
   printf("1 - Incluir\n");
   printf("2 - Retirar\n");   
   printf("3 - Listar \n");      
   printf("4 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("Informe uma op��o para Pilha: ");
   scanf("%d", &op);
   
   ultimo = 0;   // Pilha VAZIA   
   
   while (op != 4) {
         
      switch (op) {
      
         case 1:  // Inclui
  
            printf("Informe o valor a ser incluido na Pilha: ");
            scanf("%d", &valor);
            
            res = inclui(&ultimo, Pilha, valor);
            
            if (res == 1) {  // Se retornar 1, Pilha Cheia
               printf("Pilha CHEIA");
            }
            else { 
               printf("\nValor %d incluido na Pilha \n", valor);
            }
            break;
         
         case 2: // Exclui
            valor = exclui(&ultimo, Pilha);
            if (valor == -1){                // Se retornar -1, Pilha Vazia
               printf("Lista Vazia");
            }
            else{
               printf ("O elemento retirado da Pilha foi o %d\n", valor);
            }                          
            break;

         case 3:  // Mostra
            mostra(ultimo, Pilha);
            break;

         default:
            printf("INVALIDO \n");

     }

      printf("\n\n----------------------------------\n");
      printf("1 - Incluir\n");
      printf("2 - Retirar\n");   
      printf("3 - Listar \n");      
      printf("4 - Sair \n");         
      printf("----------------------------------\n");   
   
      printf("Informe uma op��o para Pilha: ");
      scanf("%d", &op);

         
   }
   
   system("pause");
   
   return 0;
}

int inclui(int *p_ultimo, int p_Pilha[10], int p_valor){   
   
  
    if (*p_ultimo == 10) {
       return 1;
    }
    else {
       p_Pilha[*p_ultimo] = p_valor;
       *p_ultimo = *p_ultimo + 1;
       return 0;
    }

}


void mostra(int p_ultimo, int p_Pilha[10]){
   
   int i;
   
   for(i = 0; i < p_ultimo; i++){
      printf("|  %d  ", p_Pilha[i]);
   } 

} 


int exclui(int *p_ultimo, int p_Pilha[10]){   

   int valor_retorno;
    
   if (*p_ultimo == 0){
     return -1;
   }
   else{
      valor_retorno = p_Pilha[*p_ultimo - 1];
      *p_ultimo = *p_ultimo - 1;
   }
   
   return valor_retorno;

}
