

// Crie um programa em C que receba a matrícula de um aluno e o valor da mensalidade paga por
// esse aluno. Posteriormente imprima a mensagem “O aluno matrícula paga mensalmente R$
// mensalidade.”

#include <stdio.h>
#include <stdlib.h>

int main(){
	int matricula;
	float mensalidade;
	
	printf("Digite a matricula do aluno: \n");
	scanf("%d", &matricula);
	
	printf("Digite o valor da mensalidade: \n");
	scanf("%f", &mensalidade);
	
	printf("\nO aluno %d paga mensalmente R$%.2f de mensalidade. \n", matricula, mensalidade);
		
}
