#include <stdio.h>
#include <stdlib.h>

/*
Altere o programa anterior (ex04) declarando uma vari�vel denominada res, local na fun��o multi. Fa�a res receber
10 * 9 e posteriormente retorne res
*/

int calculaProduto();

int main(){
	
	printf("%d\n",calculaProduto());
	
	system("pause");
	return 0;
	}
	
int calculaProduto(){
	int res = 10*9;
	return res;
}
