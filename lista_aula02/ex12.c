#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa em para ler o salário de um funcionário e aumentá-lo em 15%. Após
o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e
o salário final
*/

int main(){
	float salario_inicial, salario_aumento, salario_final;
	
	printf("Digite o salario: ");
	scanf("%f", &salario_inicial);
	
	salario_aumento = salario_inicial + (salario_inicial * 0.15);
	salario_final = salario_aumento - (salario_aumento * 0.08);
	
	printf("Salario inicial: R$%.2f\n", salario_inicial);
	
	printf("Salario com aumento: R$%.2f\n", salario_aumento);
	
	printf("Salario com desconto: R$%.2f\n", salario_final);
	
}
