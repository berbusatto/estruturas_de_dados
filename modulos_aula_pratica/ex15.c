#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Altere o programa acima invocando a função quad dentro do printf
*/


int quad (int x);

int main(){
	
	int num, quadrado;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	printf("O quadrado de %d eh %d\n", num, quad(num));
	
	system("pause");
	return 0;
}

int quad (int x){
	int quadrado = x * x;
	return quadrado;
}
