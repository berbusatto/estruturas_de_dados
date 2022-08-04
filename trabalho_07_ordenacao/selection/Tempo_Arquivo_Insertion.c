#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define LINHAS 500000                 // Quantidade de linhas no arquivo

void Quick(long int *vetor, int inicio, int fim);

int main() {
   
   char url[]="Arquivo_500000_desord.txt";      // Localiza��o do Arquivo que estou lendo as informa��es
   FILE *arq;                           // Vari�el que representa o arquivo
   
   clock_t tempo_inicio_carga;      // Armazena o tempo inicial da carga
   clock_t tempo_inicio_busca;      // Armazena o tempo inicial da busca   
   double tempo_em_segundos;        // Tempo de execu��o do programa
   
   long int i;
   long int inf[LINHAS];

   setlocale(LC_ALL, "Portuguese");  

// -----------------------------------------------------  
// Carga dos dados do arquivo no vetor inf
// -----------------------------------------------------

   tempo_inicio_carga = clock();  // Inicializa o tempo de carga do arquivo
   
   arq = fopen(url, "r");     // Comando de abertura do arquivo para LEITURA
   
   
   if(arq == NULL) {   // Verifica se foi poss�vel encontrar / abrir o arquivo
      printf("Erro, nao foi possivel abrir o arquivo\n");
   }
   else {
      i = 0;
      while( (fscanf(arq,"%d \n", &inf[i]))!=EOF ) {   // La�o para a leitura das informa��es do arquivo
         i++; 
      }
   }
       
   fclose(arq);  // Fecha o arquivo
   
     
   
   tempo_em_segundos = (clock() - tempo_inicio_carga) / (double)CLOCKS_PER_SEC;  
   printf("Tempo de carga do arquivo em mem�ria: %f\n", tempo_em_segundos);

   getch();   // aguarda o usu[ario digitar qualquer tecla para continuar



   tempo_inicio_busca = clock();  // Inicializa o tempo do algoritmo de ordenacao           
// -----------------------------------------------------
// SEU C�DIGO AQUI - INICIO
// -----------------------------------------------------

	int j = 0, min, auxSwap;
  
  	for (i = 0; i < (LINHAS - 1); i++) {
    	min = i;
    	
    	for (j = i+1; j < LINHAS; j++) {
    		if (inf[j] < inf[min]) {
   				min = j;
    		}
    	}
    
    	if (min != i) {
      		auxSwap = inf[i];
      		inf[i] = inf[min];
      		inf[min] = auxSwap;
    	}
    	
    //	printf("%d - %d\n", i, min); // coloquei pra ver se estava passando pelos la�os
  	}
            
// -----------------------------------------------------
// SEU C�DIGO AQUI - FINAL
// -----------------------------------------------------
   
   tempo_em_segundos = (clock() - tempo_inicio_busca) / (double)CLOCKS_PER_SEC;  
   printf("Tempo de execu��o: %f\n", tempo_em_segundos);
   
   
   getch();
   
             
   

   system("pause");
   return 0;
}


