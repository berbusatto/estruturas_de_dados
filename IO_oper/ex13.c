// Fa�a um programa em C que declare duas vari�veis do tipo inteiro num1 e num 2. Na declara��o de
// num2, inicialize-a com 100.
// Depois de declara-las, mostre o conte�do das duas na tela. O que aconteceu ?
// Fa�a o mesmo mas utilizando num1 e num 2 como float.


#include <stdio.h>
#include <stdlib.h>

int main(){
	float num1, num2 = 100;
	printf("%f, %f\n", num1, num2);
	system("pause");
	return 0;
	
}

// Quando declarada como int o valor inicial � 1.
// Quando declarada como float o valor incial � 0.
