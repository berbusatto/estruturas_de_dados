#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int vetor[10], i, numeroAlvo;
	int bingo = 0;
	
	printf("Digite 10 n�meros:\n");
	for(i = 0; i<10; i++){
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite o n�mero desejado: ");
	scanf("%d", &numeroAlvo);
	
	for(i = 0; i<10; i++){
		if (numeroAlvo == vetor[i]){
			bingo = 1;
			break;
		}
	}
	
	(bingo ? printf("O n�mero est� no vetor.") : printf("O n�mero n�o est� no vetor."));

}

