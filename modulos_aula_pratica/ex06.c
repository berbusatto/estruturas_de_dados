#include <stdio.h>
#include <stdlib.h>

/*
H� problemas em haver uma res no main e outra res na fun��o multi ? Por que ?
O c�digo funciona por�m chamar duas vari�veis com o mesmo nome pode tornar o c�digo confuso.
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
