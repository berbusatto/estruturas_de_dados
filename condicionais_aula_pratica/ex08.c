#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
O Rock In Rio 2013 ser� realizado em 13, 14, 15, 19, 20, 21 e 22 de Setembro. Os ingressos j�
est�o a venda e devem seguir as seguintes regras em rela��o � idade e sexo. Somente podem comprar
ingressos e assistir aos shows:
? Pessoas do Sexo Masculino e acima de 16 anos
? Pessoas do Sexo Feminino e acima de 18 anos

Desenvolva um programa em C que leia o sexo (�M� � masculino e �F� � Feminino) e a idade de um
comprador e informe se o ingresso pode ou n�o ser vendido

*/


int main(){
	int idade;
	char sexo;	
	setlocale(LC_ALL, "");
	printf("Sexo: \n");
	scanf("%c", &sexo);
	
	printf("Idade: \n");
	scanf("%d", &idade);	
	
	if (idade < 16){
		printf("N�o pode comprar ingresso");
	} else if (sexo == 'M'){
		printf("Pode comprar ingresso");
		} else if(sexo =='F' && idade >= 18){
			printf("Pode comprar ingresso");
		} else{
			printf("N�o pode comprar ingresso");
		}
		
	system("pause");
	return 0;
}	

	

