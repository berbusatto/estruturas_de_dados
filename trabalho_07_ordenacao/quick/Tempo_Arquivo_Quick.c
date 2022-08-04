#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#define LINHAS 500000                 // Quantidade de linhas no arquivo

void Quick(long int vetor[LINHAS], long int inicio, long int fim);

int main() {
   
   char url[]="Arquivo_500000_decres.txt";      // Localização do Arquivo que estou lendo as informações
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

	Quick(inf, 0, LINHAS-1);



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

void Quick(long int vetor[LINHAS], long int inicio, long int fim){
   
   long int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (long int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   

}

