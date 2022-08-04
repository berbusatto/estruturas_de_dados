#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <string.h>

float numero = 2.11;
char nome = "Bernardo";


int main(){
	int idade = 31;
	printf("A idade eh %d\b", idade);
	
	printf("\nO numero eh %.2f\n", numero);
	system("pause");
	return 0;
}
