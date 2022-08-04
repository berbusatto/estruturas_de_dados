#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C com laço infinito. Utilize o comando for que leia um número inteiro. Quando
o número lido for 0 (zero) saia do laço e indique a quantidade de números informados pelo usuário
*/


int main(){
	int num, cont = 0;
	setlocale(LC_ALL, "");

	do{
		cont++;
		printf("Digite um numero: ");
		scanf("%d", &num);		
	} while (num != 0);
	
	printf("%d\n", cont);	
	
	system("pause");
	return 0;
	
}
