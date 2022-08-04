/*
Em um certo munic�pio, v�rios propriet�rios de im�veis est�o em atraso com o pagamento
do IPTU. Fa�a um programa em C para ler os dados de 50 im�veis, considerando os dados do
im�vel: n�mero de cadastro, valor do IPTU e quantidade de meses em atraso. Ap�s a leitura de
todas as informa��es, o software deve listar os dados de todos os im�veis, mostrando:
� Numero do cadastro
� Valor do IPTU
� Quantidade de meses em atraso
� Valor da Multa (essa informa��o tamb�m dever� fazer parte da STRUCT)
A multa � de R$ 50,00 por m�s de atraso.
*/

#include <stdio.h>
#include <locale.h>
#define TAM_VETOR 50

struct atrasados{
	int numeroCadastro, mesesAtraso;
	float valorIptu, valorMulta, valorFinal; 	
	// n�o sabia se declarava valorFinal na struct ou no main, decidi por aqui
};

int main(){
	setlocale(LC_ALL, "");
	
	struct atrasados listaAtrasados[TAM_VETOR];
	int i;
		
	for (i = 0; i < TAM_VETOR; i++){
		
		// povoando o vetor
		printf("Digite o n�mero do cadastro: \n");
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
		// iterando o vetor para printar as informa��es das structs
		
		printf("N�mero do cadastro: %d\n", listaAtrasados[i].numeroCadastro);
		printf("Valor do IPTU: %.2f\n", listaAtrasados[i].valorIptu);
		printf("Meses em atraso: %d\n", listaAtrasados[i].mesesAtraso);
		printf("Valor da Multa: %.2f\n", listaAtrasados[i].valorMulta);
		printf("Valor final: %.2f\n", listaAtrasados[i].valorFinal);
		printf("------------------------\n");
	}
	
	return 0;
	system("pause");
}
