// Faça um programa em C que declare duas variáveis do tipo inteiro num1 e num 2. Na declaração de
// num2, inicialize-a com 100.
// Depois de declara-las, mostre o conteúdo das duas na tela. O que aconteceu ?
// Faça o mesmo mas utilizando num1 e num 2 como float.


#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1, num2 = 100;
	printf("%f, %f\n", num1, num2);
	system("pause");
	return 0;
	
}

// Quando declarada como int o valor inicial é 1.
// Quando declarada como float o valor incial é 0.
