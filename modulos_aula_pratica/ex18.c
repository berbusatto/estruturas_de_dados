#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
O programa abaixo lê um número inteiro na função main e passa esse número por parâmetro (Referência)
para a função imprime() que mostra esse número da tela e depois zera esse número.
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
