#include <stdio.h>
#include <stdlib.h>

/*
O programa abaixo � composto por dois m�dulos: o principal e a fun��o soma(), que retorna a soma de
dois valores. Implemente-o

 Qual o resultado ? Por que ? O que deve ser feito para corrigi-lo ?
 Da erro, pois as vari�veis est�o locais.
 
*/


int soma();

int main(){
	int num1, num2, res;
	
	printf("SOMA ------- \n");
	
	printf("Insira um numero: ");
	scanf("%d", &num1);
	
	printf("Insira um outro numero: ");
	scanf("%d", &num2);
	
	res = soma();
	printf("%d", res);

	printf("%d", valor);
	system("pause");
	return 0;
	}

int soma(){
	int valor;
	valor = num1 + num2;
	return valor;
}
