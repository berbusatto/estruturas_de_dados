#include <stdio.h>
#include <stdlib.h> // Para usar malloc()

main (void) {
	int *p;
	int i; // contadora
	int qtd_jogadores;
	
	printf("Quantos jogadores deseja inserir? \n");
	scanf("%d", &qtd_jogadores);
	
	p = (int *)malloc(qtd_jogadores * sizeof(int)); // Aloca 10 números inteiros p pode agora ser
	
	// tratado como um vetor com a posições
	for (i=0; i < qtd_jogadores ; i++) { /* p pode ser tratado como um vetor com a posições */
		printf("Informe a idade: ");
		scanf("%d", &p[i]);
	}
	
	printf("\n***********************************************\n");

	for (i=0; i < qtd_jogadores ; i++) { /* p pode ser tratado como um vetor com a posicoes */
		printf("Idade lida: %d \n", p[i]);
	}
	
	free(p);
	system("pause");
	return 0;
}
