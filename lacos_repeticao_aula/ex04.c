#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa em C com la�o infinito. Utilize o comando for que leia um n�mero inteiro. Quando
o n�mero lido for 0 (zero) saia do la�o e indique a quantidade de n�meros informados pelo usu�rio
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
