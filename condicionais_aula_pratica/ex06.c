#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa em C que leia uma letra e imprima a mensagem �� uma vogal� se condizente.
Assuma que as letras sempre ser�o mai�sculas
*/

int main(){
	char letra;
		
	setlocale(LC_ALL, "");
	
	printf("Digite uma letra. \n");
	scanf("%c", &letra);
	
	if (toupper(letra) == 'A' 
	|| toupper(letra) == 'E' 
	|| toupper(letra) == 'I' 
	|| toupper(letra) == 'O' 
	|| toupper(letra) == 'U'){
		printf("%c � vogal.\n " ,letra);
	}
}
