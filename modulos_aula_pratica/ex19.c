#include <stdio.h>
#include <stdlib.h>

/*
O programa abaixo lê dois valores informados pelo cliente. Esse programa mostra na tela o produto e a
soma desses dois números. Esse produto e soma são realizados em uma única função.
*/


void somaprod(int p_a, int p_b, int *p, int *q);

int main(){	
	int n1, n2, soma, prod;
	
	scanf("%d %d", &n1, &n2);

	somaprod(n1, n2, &soma, &prod);
	
	printf("Soma: %d - Produto: %d\n", soma, prod);

	system("pause");
	return 0;
}

void somaprod(int p_n1, int p_n2, int *p, int *q){
	*p = p_n1 + p_n2;
	*q = p_n1 * p_n2;
}
