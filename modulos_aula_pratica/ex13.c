#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Altere o programa acima declarando uma vari�vel denomina quadrado, local na fun��o quad. Fa�a
quadrado receber x * x e posteriormente retorne quadrado.
*/


int quad (int x);

int main(){
	
	int num, quadrado;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	quadrado = quad(num);
	printf("O quadrado de %d eh %d\n", num, quadrado);
	
	system("pause");
	return 0;
}

int quad (int x){
	int quadrado = x * x;
	return quadrado;
}
