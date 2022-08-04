#include <stdio.h>
#include <stdlib.h>

/*
Altere o programa acima para que o valor informado pelo cliente seja lido em uma variável do tipo int e
posteriormente copiada para o vetor. Essa leitura e cópia deverá ocorrer 5 vezes, uma para cada posição do vetor.
*/

int main(){
	int num[5], entrada;
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 40;
	num[4] = 50;
	
	scanf("%d", &entrada);
	num[0] = entrada;
	scanf("%d", &entrada);
	num[1] = entrada;
	scanf("%d", &entrada);
	num[2] = entrada;
	scanf("%d", &entrada);
	num[3] = entrada;
	scanf("%d", &entrada);
	num[4] = entrada;
	
	printf("---------\n");
	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
	printf("%d\n", num[4]);
	
	system("pause");
	return 0;
	}
