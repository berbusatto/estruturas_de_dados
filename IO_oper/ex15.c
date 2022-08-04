
//Altere o programa anterior para que a constante seja declarada utilizando comando const e que essa
//constante seja uma variável local à função main().

#include <stdio.h>
#include <stdlib.h>

int main(){
	const float PI = 3.1415;
	float raio, area;
	printf("Digite o raio da circunferencia: \n");
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	printf("A area do circulo eh: %.2f\n", area);

	system("pause");
	return 0;
}
