#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Crie um programa que leia a matrícula e a idade de duas pessoa e indique na tela quem é o mais
	velho. Considere sempre idades diferentes
*/

int main(){
	char matricula1[6], matricula2[6];
	int idade1, idade2, verificador;
	setlocale(LC_ALL, "Portuguese");
	
	// o ideal para receber o input de string é gets(nome_da_string)
	
	printf("Digite uma matricula (6 digitos): ");
	scanf("%s", matricula1);
	printf("Digite uma idade: ");
	scanf("%d", &idade1);
	
	printf("Digite uma matricula (6 digitos): ");
	scanf("%s", matricula2);
	printf("Digite uma idade: ");
	scanf("%d", &idade2);
	
	if (!(idade1 == idade2)){	
		(idade1>idade2) ? printf("O aluno de matricula %s é mais velho. \n", matricula1) : printf("O aluno de matricula %s é mais velho. \n", matricula2);
	} else {
		printf("As idades são iguais.\n");
	}
		
	system("pause");
	return 0;	
}

