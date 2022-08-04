#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Tendo como dados de entrada a altura e o sexo (M e F) de uma pessoa, construa um programa em C que
calcule seu peso ideal, utilizando as seguintes fórmulas:
• Para homens: (72.7 * h) – 58;
• Para mulheres: (62.1 * h) – 44.7;
Faça esse programa criando as funções ideal_homem e ideal_mulher, para o cálculo do peso ideal para cada
sexo, onde o valor da altura é passado como parâmetro
*/

float ideal_homem(float altura);
float ideal_mulher(float altura);

int main(){
	float altura, peso_ideal;
	char sexo;
	setlocale(LC_ALL, "");
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
		
	// pra limpar o buffer do enter (\n) que o scan do char pega
	fflush(stdin);	
	
	printf("Digite o sexo: ");
	scanf("%c", &sexo);
	
	// brincando com operador ternário
	peso_ideal = (sexo == 'm') ? ideal_homem(altura) : ideal_mulher(altura);
	
	/*
	if(sexo == 'm'){
		peso_ideal = ideal_homem(altura);
	} else{
		peso_ideal = ideal_mulher(altura);
	}
	*/
	
	printf("\nO peso ideal é %.1f quilos\n", peso_ideal);	
	system("pause");
	return 0;		
}

float ideal_homem(float altura){
	return (72.7 * altura) - 58;
}

float ideal_mulher(float altura){
	return (62.1 * altura) - 44.7;
}
	
	
		
		
		

