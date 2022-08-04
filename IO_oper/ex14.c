//Faça um algoritmo que calcule a área de um círculo com base em um raio fornecido pelo cliente.
//Crie uma constante chamada PI com valor 3.1415

#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

int main(){
	
	float raio, area;
	printf("Digite o raio da circunferencia: \n");
	scanf("%f", &raio);
	
	area = PI * (raio * raio);
	printf("A area do circulo eh: %.2f\n", area);

	system("pause");
	return 0;
}
