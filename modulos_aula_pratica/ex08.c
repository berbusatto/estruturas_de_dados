#include <stdio.h>
#include <stdlib.h>

/*
Altere o programa acima declarando uma variável denomina res, local na função multi. Faça res receber
5000.0 * 9 / 100 e posteriormente retorne res
*/

float calculaProduto();

int main(){
	
	printf("%.2f\n", calculaProduto());
	system("pause");
	return 0;
	}
	
float calculaProduto(){
	float res = 5000.0 * 9 /100;
	return res;
}
