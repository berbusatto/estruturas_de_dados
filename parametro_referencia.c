#include <stdio.h>

/*
Crie um programa que leia um valor inteiro
informados pelo cliente. Passe esse valor por
refer�ncia para a fun��o imprime() que mostra
esse n�mero na tela e depois zera esse valor.
*/

void imprime(int *end_num); // endereco de num
int main(){
	int num;
	scanf("%d", &num);
	
	imprime(&num);
	
	imprime(&num);
	system("pause");
	return 0;	
}

void imprime(int *end_num){
	printf("\n%d\n", *end_num);
	*end_num = 0;
	
}
