#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define LINHAS 500000                 // Quantidade de linhas no arquivo

void Quick(long int *vetor, int inicio, int fim);

int main() {
   
   char url[]="Arquivo_500000_desord.txt";      // Localização do Arquivo que estou lendo as informações
   FILE *arq;                           // Variváel que representa o arquivo
   
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

   getch();   // aguarda o usuario digitar qualquer tecla para continuar



   tempo_inicio_busca = clock();  // Inicializa o tempo do algoritmo de ordenacao           
// -----------------------------------------------------
// SEU CÓDIGO AQUI - INICIO
// -----------------------------------------------------
	
	int j, auxSwap, trocaBool = 0;
	while(trocaBool == 0){
		for (j = 0; j < LINHAS -1; j++){
			if (inf[j] > inf[j+1]){
				auxSwap = inf[j];
				inf[j] = inf[j+1];
				inf[j+1] = auxSwap;
				printf("\n%d", j); // coloquei pra ver se estava passando pelos laços
			} else{
				trocaBool = 1;
			}
		}
	}
	
            

// -----------------------------------------------------
// SEU CÓDIGO AQUI - FINAL
// -----------------------------------------------------
   
   tempo_em_segundos = (clock() - tempo_inicio_busca) / (double)CLOCKS_PER_SEC;  
   printf("Tempo de execução: %f\n", tempo_em_segundos);
   
   
   getch();
   
   for (i = 0; i < LINHAS; i++) {   
      printf("%d \n", inf[i]);

   }            
   

   system("pause");
   return 0;
}


