#include <stdio.h>

/*
 R$20,00 por hora normal trabalhada, e R$25,00 por hora extra.
 leia a quantidade de horas normais e horas trabalhadas
 Calcule e mostre na tela o sal�rio bruto e o sal�rio l�quido
 
 1) Transforme o c�lculo do Sal�rio Bruto em uma fun��o chamada Sal_Bruto. As horas trabalhadas (extras
e normais) s�o recebidas via par�metro.
2) Transforme o c�lculo do Sal�rio L�quido em uma fun��o chamada Sal_Liquido que recebe como
par�metro o calario bruto
3)Para a impress�o na tela do sal�rio bruto e do sal�rio liquido na tela, crie uma fun��o denominada
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

	
