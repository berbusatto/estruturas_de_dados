#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
O programa abaixo é composto por dois módulos: o principal e a função quadrado(), que retorna o
quadrado de um número inteiro. A troca de informações entre o módulo principal e a função soma é realizada
via parâmetros. Implemente-o.
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
	return x * x;
}
