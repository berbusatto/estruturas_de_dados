#include <stdio.h>
#include <stdlib.h>

/*
Há problemas em haver uma res no main e outra res na função multi ? Por que ?
O código funciona porém chamar duas variáveis com o mesmo nome pode tornar o código confuso.
*/

int calculaProduto();

int main(){
	
	int res;	
	
	printf("%d\n",calculaProduto());
	
	system("pause");
	return 0;
	}
	
int calculaProduto(){
	int res = 10*9;
	return res;
}
