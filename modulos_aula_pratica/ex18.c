#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
O programa abaixo l� um n�mero inteiro na fun��o main e passa esse n�mero por par�metro (Refer�ncia)
para a fun��o imprime() que mostra esse n�mero da tela e depois zera esse n�mero.
*/

void imprime(int *p_numero_int);

int main(){
	int numero_int;
	
	scanf("%d", &numero_int);
	imprime(&numero_int);
	
	printf("Numero inteiro: %d \n", numero_int);
	
	system("pause");
	return 0;
	
}

void imprime(int *p_numero_int){
	printf("%d\n", *p_numero_int);
	*p_numero_int = 0;
}
