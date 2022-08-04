#include <stdio.h>

/*
 R$20,00 por hora normal trabalhada, e R$25,00 por hora extra.
 leia a quantidade de horas normais e horas trabalhadas
 Calcule e mostre na tela o salário bruto e o salário líquido
 
 1) Transforme o cálculo do Salário Bruto em uma função chamada Sal_Bruto. As horas trabalhadas (extras
e normais) são recebidas via parâmetro.
2) Transforme o cálculo do Salário Líquido em uma função chamada Sal_Liquido que recebe como
parâmetro o calario bruto
3)Para a impressão na tela do salário bruto e do salário liquido na tela, crie uma função denominada
Mostra
 

*/

double salBruto(int p_horas, int p_extras);
double salLiquido(double p_salBruto);
void mostra(double p_salLiquido);

int main(){
	int horas, extras;
	printf("Digite as horas trabalhadas: \n");
	scanf("%d", &horas);
	
	printf("Digite as horas extras trabalhadas: \n");
	scanf("%d", &extras);
	
	mostra(salLiquido(salBruto(horas, extras)));	
}

double salBruto(int p_horas, int p_extras){
	return (p_horas * 20.00) + (p_extras * 25.00);
}

double salLiquido(double p_salBruto){
	return p_salBruto - (p_salBruto * 0.1);
}

void mostra(double p_salLiquido){
	printf("%.2f", p_salLiquido);
}

	
