/*
O programa em C abaixo lê uma quantidade de salários informada pelo cliente. Após a leitura,
o programa questiona (1 única vez) se o cliente deseja cadastrar mais salários. Se não, é mostrada
na tela a listagem final. Se sim ¸o cliente informa o número de salários adicionais e lê esses salários.
Após essa leitura, é mostrada na tela a listagem final dos salários lidos.
*/


#include <stdio.h>
#include <stdlib.h>

struct funcionario {
	int cod;
	char nome[30];
	float salario;
};

int main (){
	float *p;
	int q_sal, q_n_sal;
	int i;
	char op;
	
	printf("Qual a quantidade de salarios que deseja armazenar ?");
	scanf("%d", &q_sal);
	p = (float *)malloc(q_sal*sizeof(float));
	
	for (i=0; i < q_sal ; i++) {
		printf("Informe o salario: ");
		scanf("%f", &p[i]);
	}
	
	printf("\n***********************************************\n");
	printf("\n Listagem dos Salarios\n");
	printf("\n***********************************************\n");
	
	for (i=0; i < q_sal ; i++) {
		printf("Salario lido: %.2f \n", p[i]);
	}
		fflush(stdin);
		printf("Deseja cadastra mais salarios ? (S para sim e N para nao)");
		scanf("%c", &op);
		
	if (op == 'S') {
		printf("Qual a quantidade de novos salarios ?");
		scanf("%d", &q_n_sal);
		p = (float *)realloc(p, (q_sal + q_n_sal)*sizeof(float));
		
		for (i = q_sal; i < (q_sal + q_n_sal) ; i++) {
			fflush(stdin);
			printf("\nInforme o salario: ");
			scanf("%f", &p[i]);
		}
	}
		printf("\n***********************************************\n");
		printf("\n Listagem FINAL dos Salarios\n");
		printf("\n***********************************************\n");
		for (i=0; i < (q_sal + q_n_sal) ; i++) {
		printf("Salário lido: %.2f \n", p[i]);
	}
	system ("pause");
	return 0;
}

