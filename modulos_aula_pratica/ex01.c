#include <stdio.h>
#include <stdlib.h>

/*
1) Implemente o algoritmo abaixo que cria um módulo (procedimento) que imprime uma mensagem na tela.
O que acontece se eu tirar a linha
void hello();

*/

void hello();
	

int main(){
	hello();
	system("pause");
	return 0;
	}

void hello(){
	printf("Ola Mundo\n");
}
