#include <stdio.h>
#include <stdlib.h>

/*
Calcular a quantidade dinheiro gasta por um fumante. Dados: o número de anos que ele
fuma, o nº de cigarros fumados por dia e o preço de uma carteira com 20 cigarros.
Considere um ano com 365 dias
*/

int main(){
	int anos_fumando, cigarros_diarios, dias_fumando;
	float preco_carteira, cigarro_unidade, total_gasto;
	
	printf("Quantos anos fumando? ");
	scanf("%d", &anos_fumando);
	printf("Quantos cigarros por dia? ");
	scanf("%d", &cigarros_diarios);
	printf("Quanto custa a carteira? ");
	scanf("%f", &preco_carteira);
	
	cigarro_unidade = preco_carteira / 20;
	dias_fumando = anos_fumando * 365; 
	total_gasto = dias_fumando * (cigarros_diarios * cigarro_unidade);
	
	printf("O total gasto com cigarros foi de R$%.2f", total_gasto);
	
	
	
	
}
