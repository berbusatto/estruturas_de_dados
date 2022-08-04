#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float salario, totalSalario, mediaSalario;
	int i;
	
	for (i = 0; i < 30; i++){
		printf("Salario do funcionario: \n");
		scanf("%f", &salario);
		totalSalario += salario;		
	}
	mediaSalario = totalSalario / (i -1);
	printf("A média salarial é de R$%.2f. \n", mediaSalario);
	system("pause");
	return 0;
}
