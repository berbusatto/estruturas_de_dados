#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa paga R$10.00 por hora normal trabalhada e R$ 15.00 por hora extra.
Escreva um programa que leia o total de horas normais e o total de horas extras trabalhadas
por um empregado em um ano e calcule o salário anual deste trabalhador
*/

int main(){
	int horas_normais, horas_extras;
	float salario_mensal, salario_anual;
	
	printf("Digite quantas horas normais foram trabalhadas: ");
	scanf("%d", &horas_normais);
	printf("Digite quantas horas extras foram trabalhadas: ");
	scanf("%d", &horas_extras);
	
	salario_mensal = (horas_normais * 10) + (horas_extras * 15);
	salario_anual = salario_mensal * 12;
	printf("O salario anual eh de R$%.2f\n", salario_anual);
	
	system("pause");
	return 0;
	
}
