//Altere o programa anterior para que a constante seja declarada utilizando comando const e que essa
//constante seja uma vari�vel global � fun��o main().

#include <stdio.h>
#include <stdlib.h>

const float PI = 3.1415;


int main(){
	
	float raio, area;
	printf("Digite o raio da circunferencia: \n");
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	printf("A area do circulo eh: %.2f\n", area);

	system("pause");
	return 0;
}
