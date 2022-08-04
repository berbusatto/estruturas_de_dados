#include <stdio.h>
#include <stdlib.h>

/*
	Leia o salário de uma pessoa e indique se ele é maior que R$ 5000.
*/

int main(){
	float salario;
	
	printf("Digite um salario\n");
	scanf("%f", &salario);
	
	if (salario >= 5000){
		printf("Salario maior que R$5000");
	} else {
		printf("Salario menor que R$5000");
	}
	system("pause");
	return 0;
	
}
