#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

// FALTA MOSTRAR OS BRANCOS E NULOS

int main(){
		setlocale(LC_ALL, "Portuguese");
		char proximoVoto;
		int presidente[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		int governador[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
		int voto, i, maiorPres = 0, maiorGov = 0, maiorPresIndex = 0, maiorGovIndex = 0;	
		
		printf("Deseja votar?\n");
		scanf("%c", &proximoVoto);
		fflush(stdin);		
			
		while(tolower(proximoVoto) == 's'){
						
			printf("------------------------------------------\n");
			printf("Número dos candidatos à PRESIDENTE: \n");
			printf("Branco: 0\n");
			printf("Alvaro Dias (Podemos): 1\n");
			printf("Cabo Daciolo (Patriota): 2\n");
			printf("Ciro Gomes (PDT): 3\n");
			printf("Eymael(DC): 4\n");
			printf("Fernando Haddad (PT): 5\n");
			printf("Geraldo Alckmin (PSDB): 6\n");
			printf("Guilherme Boulos (PSol): 7\n");
			printf("Henrique Meirelles (MDB): 8\n");
			printf("Jair Bolsonaro (PSL): 9\n");
			printf("João Amoêdo (Novo): 10\n");
			printf("João Vicente Goulart (PPL): 11\n");
			printf("Marina Silva (Rede): 12\n");
			printf("Vera Lúcia (PSTU): 13\n");
			printf("NULO: 14\n");
			printf("------------------------------------------\n");
			
			printf("Digite o número do seu candidato:\n");
			scanf("%d", &voto);
			
			switch(voto){
				case 0:
					presidente[0]++;
					break;
				case 1:
					presidente[1]++;
					break;
				case 3:
					presidente[3]++;
					break;
				case 4:
					presidente[4]++;
					break;
				case 5:
					presidente[5]++;
					break;
				case 6:
					presidente[6]++;
					break;
				case 7:
					presidente[7]++;
					break;
				case 8:
					presidente[8]++;
					break;
				case 9:
					presidente[9]++;
					break;
				case 10:
					presidente[10]++;
					break;
				case 11:
					presidente[11]++;
					break;
				case 12:
					presidente[12]++;
					break;
				case 13:
					presidente[13]++;
					break;
				case 14:
					presidente[14]++;
					break;			
			}
			
			printf("VOTO COMPUTADO!\n");
			printf("---------------------------------------------------------------\n");
			printf("Números dos candidatos à GOVERNADOR: \n");
			printf("Branco: 0\n");
			printf("Cida Borghetti (Progressista): 1\n");
			printf("Doutor Rosinha (PT) : 2\n");
			printf("Geonísio Marinho (PRTB): 3\n");
			printf("João Arruda (MDB): 4\n");
			printf("Jorge Bernardi (Rede): 5\n");
			printf("Ogier Buchi (PSL) -: 6\n");
			printf("Priscila Ebara (PCO) : 7\n");
			printf("Professor Ivan Bernardo (PSTU): 8\n");
			printf("Professor Piva (PSOL): 9\n");
			printf("Ratinho Junior (PSD): 10\n");
			printf("NULO: 11\n");
			printf("---------------------------------------------------------------\n");
			
			printf("Digite o número do seu candidato:\n");
			scanf("%d", &voto);
			switch(voto){
				case 0:
					governador[0]++;
					break;
				case 1:
					governador[1]++;
					break;
				case 3:
					governador[3]++;
					break;
				case 4:
					governador[4]++;
					break;
				case 5:
					governador[5]++;
					break;
				case 6:
					governador[6]++;
					break;
				case 7:
					governador[7]++;
					break;
				case 8:
					governador[8]++;
					break;
				case 9:
					governador[9]++;
					break;
				case 10:
					governador[10]++;
					break;
				case 11:
					governador[11]++;
					break;
				case 12:
					governador[12]++;
					break;			
			}
			
		printf("VOTO COMPUTADO!\n");						
		printf("---------------------------------------------------------------\n");
		printf("Deseja votar?\n");
		scanf("%s", &proximoVoto);
		fflush(stdin);					
		}
	
		for(i = 0; i< 15; i++){
			printf("O candidato a presidente de número %d teve %d votos.\n", i, presidente[i]);	
			if (maiorPres < presidente[i]){
				maiorPres = presidente[i];
				maiorPresIndex = i;
			}		
		}	
	
		switch(maiorPresIndex){
			case 0:
				printf("----------------------------------------------------------\n");
				printf("A maior parte dos votos foi EM BRANCO, com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 1:
				printf("----------------------------------------------------------\n");
				printf("Alvaro Dias foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 2:
				printf("----------------------------------------------------------\n");
				printf("Cabo Daciolo foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 3:
				printf("----------------------------------------------------------\n");
				printf("Ciro Gomes foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 4:
				printf("----------------------------------------------------------\n");
				printf("Eymael foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 5:
				printf("----------------------------------------------------------\n");
				printf("Fernando Haddad foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 6:
				printf("----------------------------------------------------------\n");
				printf("Geraldo Alckmin foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 7:
				printf("----------------------------------------------------------\n");
				printf("Guilherme Boulos foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 8:
				printf("----------------------------------------------------------\n");
				printf("Henrique Meirelles foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 9:
				printf("----------------------------------------------------------\n");
				printf("Jair Bolsonaro foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 10:
				printf("----------------------------------------------------------\n");
				printf("João Amoêdo foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 11:
				printf("----------------------------------------------------------\n");
				printf("João Vicente Goulart foi eleito Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 12:
				printf("----------------------------------------------------------\n");
				printf("Marina Silva foi eleita Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 13:
				printf("----------------------------------------------------------\n");
				printf("Vera Lúcia foi eleita Presidente com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;
			case 14:
				printf("----------------------------------------------------------\n");
				printf("A maior parte dos votos foram NULOS, com um total de %d votos.\n", maiorPres);
				printf("----------------------------------------------------------\n");
				break;		
		}	
		
		for(i = 0; i< 12; i++){
			printf("O candidato a governador de número %d teve %d votos.\n", i, governador[i]);	
			if (maiorGov < governador[i]){
				maiorGov = governador[i];
				maiorGovIndex = i;
			}
		}
		
		switch(maiorGovIndex){
			case 0:
				printf("----------------------------------------------------------\n");
				printf("A maior parte dos votos foi EM BRANCO, com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 1:
				printf("----------------------------------------------------------\n");
				printf("Cida Borghetti foi eleita Governadora com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 2:
				printf("----------------------------------------------------------\n");
				printf("Doutor Rosinha foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 3:
				printf("----------------------------------------------------------\n");
				printf("Geonísio Marinho foi eleito Governador com um total de %d votos.\n\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 4:
				printf("----------------------------------------------------------\n");
				printf("João Arruda foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 5:
				printf("----------------------------------------------------------\n");
				printf("Jorge Bernardi foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 6:
				printf("----------------------------------------------------------\n");
				printf("Ogier Buchi foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 7:
				printf("----------------------------------------------------------\n");
				printf("Priscila Ebara foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 8:
				printf("----------------------------------------------------------\n");
				printf("Professor Ivan Bernardo foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 9:
				printf("----------------------------------------------------------\n");
				printf("Professor Piva foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 10:
				printf("----------------------------------------------------------\n");
				printf("Ratinho Junior foi eleito Governador com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
			case 11:
				printf("----------------------------------------------------------\n");
				printf("A maior parte dos votos foram NULOS, com um total de %d votos.\n", maiorGov);
				printf("----------------------------------------------------------\n");
				break;
		}
	return 0;
}

