#include <stdio.h>
#include <stdlib.h>

/*
Altere o programa anterior (ex03) para que a função multi() seja chamada dentro do comando printf
*/

int calculaProduto();

int main(){
	
	int res;
	
	
	printf("%d\n",calculaProduto());
	
	system("pause");
	return 0;
	}
	
int calculaProduto(){
	return 10 * 9;
}
