#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
No Brasil existe o CPF (Cadastro de Pessoas F�sicas) que serve para identificar cada indiv�duo no
pa�s. O n�mero do CPF � composto de 11 d�gitos, sendo os dois �ltimos os d�gitos de verifica��o.
Fa�a um algoritmo que leia cada um dos 11 d�gitos de um CPF, onde cada d�gito � armazenado em
uma vari�vel diferente. Depois, seguindo a f�rmula abaixo que valida o CPF, informar se o CPF �
V�lido ou Inv�lido.
*/


int main(){
	setlocale(LC_ALL, "");
	
	int soma, valor, resultado, primdigito, segdigito, somab, valorb, resultadob ;
	int cpf[11];
	int index;

	printf("Digite o seu cpf: ");
	for (index = 0; index < 11; index++){
		scanf("%d", &cpf[index]);	
	}


	soma = (cpf[0] * 10) + (cpf[1] * 9) + (cpf[2] * 8) + (cpf[3] * 7) + (cpf[4] * 6) + 
	(cpf[5] * 5) + (cpf[6] * 4) + (cpf[7] * 3) + (cpf[8] * 2);

	valor = (soma / 11) * 11;

	resultado = soma - valor;

// PRIMEIRO D�GITO VERIFICADOR
	if(resultado == 0 || resultado == 1){
		primdigito = 0;
	} else{
		primdigito = 11 - resultado;
	}

	somab = (cpf[0] * 11) + (cpf[1] * 10) + (cpf[2] * 9) + (cpf[3] * 8) + (cpf[4] * 7) + 
	(cpf[5] * 6) + (cpf[6] * 5) + (cpf[7] * 4) + (cpf[8] * 3) + (primdigito * 2);

	valorb = (somab / 11) * 11;
	resultadob = somab - valorb;

// SEGUNDO D�GITO VERIFICADOR
	if(resultadob == 0 || resultadob == 1){
		segdigito = 0;
	}else{
		segdigito = 11 - resultadob;
	}


// VALIDANDO O CPF 
	if(primdigito == cpf[9] && segdigito == cpf[10]){
		printf("CPF v�lido");
	} else{
		printf("CPF inv�lido");
	}

}
