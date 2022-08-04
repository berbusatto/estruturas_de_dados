#include <stdio.h>
#include <stdlib.h>

/*
Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
Formula: F = (9*C+160)/5
*/

int main(){
	float celcius, fahrenheit;
	
	printf("Digite uma temperatura em celcius \n");
	scanf("%f", &celcius);
	
	fahrenheit = (9 * celcius + 160) /5;
	printf("A temperatura em fahrenheit eh %.1f ", fahrenheit);
	
}


