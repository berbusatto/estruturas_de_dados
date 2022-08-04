#import <stdio.h>

struct tipo_funcionario {
	int numero;
	char nome[50];
	float salario_mes[12];
	float salario_ano;
};

int main () {
	struct tipo_funcionario func;
	int i;
	float sal_ano = 0.0;

	fflush(stdin);

	printf("\nInforme o codigo do funcionario: ");
	scanf("%d", &tipo_funcionario.numero);
	fflush(stdin);

	printf("\nInforme o nome do funcionario: ");
	gets(tipo_funcionario.nome);

	for (i=0; i <= 11; i++) {
		fflush(stdin);
		printf("Informe o salario do mes %d: ", i+1);
		scanf(tipo_funcionario.salario_mes[i]);
		sal_ano = sal_ano + tipo_funcionario.salario_mes[i];
	}
	
	func.salario_ano = sal_ano;
	printf("*************************************************************\n");
	printf("*************************************************************\n");
	printf("O codigo do funcionário eh %d \n", func.numero);
	printf("O nome do funcionário eh %s \n", func.nome);
	for (i=0; i <= 11; i++) {
		printf("Recebe no mes %d %.2f: \n", i+1, func.salario_mes[i]);
	}
	printf("O salario anual eh %f ", func.salario_ano);
	system("pause");
	return 0;
	}
