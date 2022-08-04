#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//  Função que retorna 1 em caso de Pilha Cheia e 0 em caso de inclusão Ok                  
int inclui(int *p_ultimo, int p_Pilha[10], int p_valor);  // p_ultimo - parâmetro que define a posição do última elemento da Pilha (primeira vaga)
// esse valor é passado por referência pois o mesmo é alterado com a incluão de um elemento            

// p_Pilha   - Pilha na qual o conteúdo (p_valor) será incluído

// esse valor é passado por referência pois o mesmo é alterado              

// p_valor  - valor a ser inserido na Pilha 


// Função que mostra os elementos da Pilha 
void mostra(int p_ultimo, int p_Pilha[10]);              
// p_ultimo - parâmetro que define a última posição elemento da Pilha (primeira vaga)


//  Função que retorna o Primeiro elemento da Pilha, caso exista OU - caso a lista esteja VAZIA                  
int exclui(int *p_ultimo, int p_Pilha[10]);              
// p_ultimo - parâmetro que define a última posição elemento da Pilha (primeira vaga)
// esse valor é passado por referência pois o mesmo é alterado com a retirada do elemento               
// p_Pilha   - Pilha na qual o conteúdo (p_valor) será incluído



int main() {

   int Pilha[10];
   int op;        // Opção do parâmetro
   int valor;     // Valor a ser incluído / retirado da Pilha. Se valor = -1, significa Pilha vazia   
   int ultimo;   // Variável que define a última posição da Pilha (primeira vaga)   
   int res;      // Recebe o retorno do resultado das funções inclui
                 // função inclui 1 - Pilha Cheia    0 - Inclusão OK
  
   setlocale(LC_ALL,"");
  
   printf("----------------------------------\n");
   printf("1 - Incluir\n");
   printf("2 - Retirar\n");   
   printf("3 - Listar \n");      
   printf("4 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("Informe uma opção para Pilha: ");
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
   
      printf("Informe uma opção para Pilha: ");
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
