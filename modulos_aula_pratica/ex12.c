#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
O programa abaixo � composto por dois m�dulos: o principal e a fun��o quadrado(), que retorna o
quadrado de um n�mero inteiro. A troca de informa��es entre o m�dulo principal e a fun��o soma � realizada
via par�metros. Implemente-o.
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
