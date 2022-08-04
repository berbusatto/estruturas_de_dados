#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define LINHAS 500000                 // Quantidade de linhas no arquivo

void Quick(long int *vetor, int inicio, int fim);

int main() {
   
   char url[]="Arquivo_500000_desord.txt";      // Localização do Arquivo que estou lendo as informações
   FILE *arq;                           // Variáel que representa o arquivo
   
   clock_t tempo_inicio_carga;      // Armazena o tempo inicial da carga
   clock_t tempo_inicio_busca;      // Armazena o tempo inicial da busca   
   double tempo_em_segundos;        // Tempo de execução do programa
   
   long int i;
   long int inf[LINHAS];

   setlocale(LC_ALL, "Portuguese");  

// -----------------------------------------------------  
// Carga dos dados do arquivo no vetor inf
// -----------------------------------------------------

   tempo_inicio_carga = clock();  // Inicializa o tempo de carga do arquivo
   
   arq = fopen(url, "r");     // Comando de abertura do arquivo para LEITURA
   
   
   if(arq == NULL) {   // Verifica se foi possível encontrar / abrir o arquivo
      printf("Erro, nao foi possivel abrir o arquivo\n");
   }
   else {
      i = 0;
      while( (fscanf(arq,"%d \n", &inf[i]))!=EOF ) {   // Laço para a leitura das informações do arquivo
         i++; 
      }
   }
       
   fclose(arq);  // Fecha o arquivo
   
     
   
   tempo_em_segundos = (clock() - tempo_inicio_carga) / (double)CLOCKS_PER_SEC;  
   printf("Tempo de carga do arquivo em memória: %f\n", tempo_em_segundos);

   getch();   // aguarda o usu[ario digitar qualquer tecla para continuar



   tempo_inicio_busca = clock();  // Inicializa o tempo do algoritmo de ordenacao           
// -----------------------------------------------------
// SEU CÓDIGO AQUI - INICIO
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
    	
    //	printf("%d - %d\n", i, min); // coloquei pra ver se estava passando pelos laços
  	}
            
// -----------------------------------------------------
// SEU CÓDIGO AQUI - FINAL
// -----------------------------------------------------
   
   tempo_em_segundos = (clock() - tempo_inicio_busca) / (double)CLOCKS_PER_SEC;  
   printf("Tempo de execução: %f\n", tempo_em_segundos);
   
   
   getch();
   
             
   

   system("pause");
   return 0;
}


