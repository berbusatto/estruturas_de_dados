#include <stdio.h>
#include <stdlib.h>

/*
Implemente o algoritmo abaixo que cria um módulo (função) que calcula o produto de 10 por 9,
retornando um tipo int.
O que acontece se a linha
res = multi();
for alterada para
multi(); ?
*/

int calculaProduto();

int main(){
	
	int res;
	res = calculaProduto();
	
	printf("%d\n",res);
	
	system("pause");
	return 0;
	}
	
int calculaProduto(){
	return 10 * 9;
}
