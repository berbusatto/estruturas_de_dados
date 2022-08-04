#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Calcule e imprima o valor em reais de cada kw, o valor em reais a ser pago e o novo
valor a ser pago por essa residência com um desconto de 10%.
Dado:
? 100 kilowatts custa 1/7 do salário mínimo.
? quantidade de kw gasto por residência.
? O valor do salário mínimo 1212.00
*/

int main(){
		float valor_kw, valor_pago, valor_desconto, consumo, salario_min = 1212.00;
		valor_kw = (salario_min / 7) /100; // divide por 100 pois estava multiplicando os kw por 100.
		
		printf("Digite a quantidade de KW gastos pela residencia ");
		scanf("%f", &consumo);
		
		valor_pago = consumo * valor_kw;
		valor_desconto = valor_pago - (valor_pago * 0.10); //10% de desconto
				
		printf("Cada KW custa R$%.2f\n", valor_kw);
		printf("O valor total eh R$%.2f\n", valor_pago);
		printf("Com desconto, o valor a ser pago eh R$%.2f\n", valor_desconto);
		
		system("pause");
		return 0;	
}
