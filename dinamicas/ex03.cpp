#include <stdio.h>
#include <stdlib.h> // Para usar malloc()
#include <locale.h>

main (void) {
	
	float *p;
	int i; // contadora
	int qtd_jogadores;
	
	setlocale(LC_ALL, "");
	
	printf("Quantos jogadores deseja inserir? \n");
	scanf("%d", &qtd_jogadores);
	
	p = (float *)malloc(qtd_jogadores * sizeof(float)); // Aloca 10 n�meros inteiros p pode agora ser
	
	// tratado como um vetor com a posi��es
	for (i=0; i < qtd_jogadores ; i++) { /* p pode ser tratado como um vetor com a posi��es */
		printf("Informe o sal�rio: ");
		scanf("%f", &p[i]);
	}
	
	printf("\n***********************************************\n");

	for (i=0; i < qtd_jogadores ; i++) { /* p pode ser tratado como um vetor com a posicoes */
		printf("Sal�rio lido: %.2f \n", p[i]);
	}
	
	free(p);
	system("pause");
	return 0;
}
