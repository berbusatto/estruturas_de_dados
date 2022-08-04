#include <stdio.h>
#include <stdlib.h>

int main(){
	int dia, mes, ano, passaram, bissextos, codmes, res, diasemana;
	
	printf("Digite um dia: ");
	scanf("%d", &dia);
	
	printf("Digite um mês: ");
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
				break
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
		
		
		
	
	
	}
	
	
	
}
