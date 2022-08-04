/*
Em um certo município, vários proprietários de imóveis estão em atraso com o pagamento
do IPTU. Faça um programa em C para ler os dados de 50 imóveis, considerando os dados do
imóvel: número de cadastro, valor do IPTU e quantidade de meses em atraso. Após a leitura de
todas as informações, o software deve listar os dados de todos os imóveis, mostrando:
• Numero do cadastro
• Valor do IPTU
• Quantidade de meses em atraso
• Valor da Multa (essa informação também deverá fazer parte da STRUCT)
A multa é de R$ 50,00 por mês de atraso.
*/

#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 50

struct atrasados{
	int numeroCadastro, mesesAtraso;
	float valorIptu, valorMulta, valorFinal; 	
	// não sabia se declarava valorFinal na struct ou no main, decidi por aqui
};

int main(){
	setlocale(LC_ALL, "");
	
	struct atrasados listaAtrasados[TAM_VETOR];
	int i;
		
	for (i = 0; i < TAM_VETOR; i++){
		
		// povoando o vetor
		printf("Digite o número do cadastro: \n");
		scanf("%d", &listaAtrasados[i].numeroCadastro);
		fflush(stdin);
		printf("Digite o valor do IPTU: \n");
		scanf("%f", &listaAtrasados[i].valorIptu);
		fflush(stdin);
		printf("Digite os meses em atraso: \n");
		scanf("%d", &listaAtrasados[i].mesesAtraso);
		fflush(stdin);
		printf("------------------------\n");
		
		// calculando a multa e o valor final
		listaAtrasados[i].valorMulta = listaAtrasados[i].mesesAtraso * 50;
		listaAtrasados[i].valorFinal = listaAtrasados[i].valorMulta + listaAtrasados[i].valorIptu;			
	}
	
	for (i = 0; i < TAM_VETOR; i++){
		// iterando o vetor para printar as informações das structs
		
		printf("Número do cadastro: %d\n", listaAtrasados[i].numeroCadastro);
		printf("Valor do IPTU: %.2f\n", listaAtrasados[i].valorIptu);
		printf("Meses em atraso: %d\n", listaAtrasados[i].mesesAtraso);
		printf("Valor da Multa: %.2f\n", listaAtrasados[i].valorMulta);
		printf("Valor final: %.2f\n", listaAtrasados[i].valorFinal);
		printf("------------------------\n");
	}
	
	return 0;
	system("pause");
}
