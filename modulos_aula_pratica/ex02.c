#include <stdio.h>
#include <stdlib.h>

/*
02) Implemente o modulo by (procedimento) que imprime a mensagem �Encerrando meu programa em C�
Chame esse procedimento ap�s a chamada do m�todo hello().
*/

void hello();
void bye();
	

int main(){
	hello();
	bye();
	
	system("pause");
	return 0;
	}

void hello(){
	printf("Ola Mundo\n");
}
void bye(){
	printf("Tchau Mundo\n");
}
