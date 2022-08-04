#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um algoritmo que l� uma data informada pelo usu�rio (ano, m�s e dia) e informe qual o dia da
semana dessa data (Segunda, Ter�a, Quarta, Quinta, Sexta, S�bado ou Domingo). Para isso, siga as
etapas a seguir:

Passo 1) Calcule quantos anos se passaram desde 1900 at� o ano informado;

Passo 2) Calcule quantos dias �29 DE FEVEREIRO� existiram depois de 1900. Para isto, basta dividir por 4
o n�mero obtido na 1� etapa, sem considerar o resto da divis�o.

Passo 3) Pegue o seu dia informado

Passo 4) Obtenha o n�mero associado ao m�s informado, a partir da tabela:
Janeiro 0 Fevereiro 3 Mar�o 3
Abril 6 Maio 1 Junho 4
Julho 6 Agosto 2 Setembro 5
Outubro 0 Novembro 3 Dezembro 5

Passo 5) Some os n�meros obtidos nas quatro etapas anteriores e obtenha o resto da divis�o por 7.

Passo 6) Procure na tabela abaixo o n�mero obtido na etapa 5 e voc� ter� o dia da semana
informado pelo cliente.
0 Domingo 1 Segunda 2 Ter�a
3 Quarta 4 Quinta 5 Sexta
6 S�bado

*/
int main(){
	setlocale(LC_ALL, "");
	int dia, mes, ano, passaram, bissextos, codmes, res, diasemana;
	
	printf("Digite um dia: ");
	scanf("%d", &dia);
	
	printf("Digite um m�s: ");
	scanf("%d", &mes);
	
	printf("Digite um ano: ");
	scanf("%d", &ano);
	
	if (dia > 0 && dia < 32 && mes > 0 && mes < 13 && ano > 1900 && ano < 2023){
		passaram = ano - 1900;
		bissextos = passaram / 4;
		
		switch (mes){
			case 1:
				codmes = 0;
				break;
			case 2:
				codmes = 3;
				break;
			case 3:
				codmes = 3;
				break;
			case 4:
				codmes = 6;
				break;
			case 5:
				codmes = 1;
				break;
			case 6:
				codmes = 4;
				break;
			case 7: 
				codmes = 6;
				break;
			case 8:
				codmes = 2;
				break;
			case 9:
				codmes = 5;
				break;
			case 10:
				codmes= 0;
				break;
			case 11: 
				codmes = 3;
				break;
			case 12:
				codmes = 5;
				break;	
		}
		
		res = passaram + bissextos + dia + codmes;
		diasemana = res % 7;
		
		switch (diasemana){
			case 0:
				printf("Domingo");
				break;
			case 1:
				printf("Segunda");
				break;
			case 2:
				printf("Ter�a");
				break;
			case 3:
				printf("Quarta");
				break;
			case 4:
				printf("Quinta");
				break;
			case 5:
				printf("Sexta");
				break;
			case 6:
				printf("S�bado");
				break;				
		}	
	}
}
