#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

//  Fun��o que retorna 1 em caso de Fila Cheia e 0 em caso de inclus�o Ok                  
int inclui(int *p_ultimo, int p_Fila[10], int p_valor);  // p_ultimo - par�metro que define a posi��o do �ltima elemento da Fila (primeira vaga)
                                                         //            esse valor � passado por refer�ncia pois o mesmo � alterado com a inclu�o de um elemento            

                                                         // p_Fila   - Fila na qual o conte�do (p_valor) ser� inclu�do
                                                         //            esse valor � passado por refer�ncia pois o mesmo � alterado              

                                                         // p_valor  - valor a ser inserido na fila 


// Fun��o que mostra os elementos da Fila 
void mostra(int p_ultimo, int p_Fila[10]);              // p_ultimo - par�metro que define a �ltima posi��o elemento da Fila (primeira vaga)


//  Fun��o que retorna o Primeiro elemento da Fila, caso exista OU - caso a lista esteja VAZIA                  
int exclui(int *p_ultimo, int p_Fila[10]);              // p_ultimo - par�metro que define a �ltima posi��o elemento da Fila (primeira vaga)
                                                        //            esse valor � passado por refer�ncia pois o mesmo � alterado com a retirada do elemento               

                                                        // p_Fila   - Fila na qual o conte�do (p_valor) ser� inclu�do



int main() {

   int Fila[10];
   int op;        // Op��o do par�metro
   int valor;     // Valor a ser inclu�do / retirado da Fila. Se valor = -1, significa fila vazia   
   int ultimo;   // Vari�vel que define a �ltima posi��o da Fila (primeira vaga)   
   int res;      // Recebe o retorno do resultado das fun��es inclui
                 // fun��o inclui 1 - Fila Cheia    0 - Inclus�o OK
  
   setlocale(LC_ALL,"");
  
   printf("----------------------------------\n");
   printf("1 - Incluir\n");
   printf("2 - Retirar\n");   
   printf("3 - Listar \n");      
   printf("4 - Sair \n");         
   printf("----------------------------------\n");   
   
   printf("Informe uma op��o para Fila: ");
   scanf("%d", &op);
   
   ultimo = 0;   // Fila VAZIA   
   
   while (op != 4) {
         
      switch (op) {
      
         case 1:  // Inclui
  
            printf("Informe o valor a ser incluido na fila: ");
            scanf("%d", &valor);
            
            res = inclui(&ultimo, Fila, valor);
            
            if (res == 1) {  // Se retornar 1, Fila Cheia
               printf("Fila CHEIA");
            }
            else { 
               printf("Valor %d incluido na Fila \n", valor);
            }
            break;
         
         case 2: // Exclui
            valor = exclui(&ultimo, Fila);
            if (valor == -1){                // Se retornar -1, Fila Vazia
               printf("Lista Vazia");
            }
            else{
               printf ("\nO elemento retirado da Fila foi o %d\n", valor);
            }                          
            break;

         case 3:  // Mostra
            mostra(ultimo, Fila);
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
   
      printf("Informe uma op��o para Fila: ");
      scanf("%d", &op);

         
   }
   
   system("pause");
   
   return 0;
}

int inclui(int *p_ultimo, int p_Fila[10], int p_valor){   
	
	if (*p_ultimo == 10) {
       return 1;
    }
    else {
       p_Fila[*p_ultimo] = p_valor;
       *p_ultimo = *p_ultimo + 1;
       printf("\n Inclui o numero %d na Fila ", p_valor);
       return 0;
    }
}


void mostra(int p_ultimo, int p_Fila[10]){
	int i;
	printf("\n Mostra o cote�do da Fila\n");
	for (i = 0; i < p_ultimo; i++){
		printf("| %d ", p_Fila[i]);	
	}
   

} 


int exclui(int *p_ultimo, int p_Fila[10]){   
	int valor_retorno, i;
   
   	if (*p_ultimo == -1) {
       return -1;
    }
   	else {
		valor_retorno = p_Fila[0];   
		for(i = 0; i < *p_ultimo; i++){		    
			p_Fila[i] = p_Fila[i+1];
		}
		*p_ultimo = *p_ultimo - 1;
		
    	return valor_retorno;
    }   

}
   
