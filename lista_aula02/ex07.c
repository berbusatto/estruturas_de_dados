#include <stdio.h>
#include <stdlib.h>

/*
C�lculo de um sal�rio l�quido de um professor. Ser�o fornecidos o valor da hora aula,
numero de aulas dadas e o % de desconto do INSS
*/

int main(){
	float valor_aula, qtd_aula, desconto, salario_bruto, salario_final;
	
	printf("Quanto custa o valor da hora aula do professor? ");
	scanf("%f", &valor_aula);
	
	printf("Quantas aulas o professor tem por semana? ");
	scanf("%f", &qtd_aula);
	
	printf("Quanto eh o desconto do INSS? ");
	scanf("%f", &desconto);	
	
	// as horas s�o semanais, ent�o multipliquei por 4 pra virar m�s
	salario_bruto = valor_aula * (qtd_aula * 4); 
	desconto = desconto / 100;
	salario_final = salario_bruto - (salario_bruto * desconto);
	
	printf("O salario final eh %.2f\n", salario_final);

	system("pause");
	return 0;
}

