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
	
	p = (float *)malloc(qtd_jogadores * sizeof(float)); // Aloca 10 números inteiros p pode agora ser
	
	// tratado como um vetor com a posições
	for (i=0; i < qtd_jogadores ; i++) { /* p pode ser tratado como um vetor com a posições */
		printf("Informe o salário: ");
		scanf("%f", &p[i]);
	}
	
	printf("\n***********************************************\n");

	for (i=0; i < qtd_jogadores ; i++) { /* p pode ser tratado como um vetor com a posicoes */
		printf("Salário lido: %.2f \n", p[i]);
	}
	
	free(p);
	system("pause");
	return 0;
}
