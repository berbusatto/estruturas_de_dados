#include <stdio.h>
#include <stdlib.h>

/*

Avalie o c�digo fonte abaixo

** H� algum problema nesse c�digo ? Ele compila ? Ele executa ? Qual o resultado em tela da execu��o desse
programa ?

H� um problema. O tamanho do array � menor do que a quantidade de entradas no scanf.
No entanto ele compila, executa e printa na tela todos os valores que foram inseridos.

O C permite que a gente exceda a mem�ria, por�m pode causar consequ�ncias no programa, 
como perder dados de outras vari�veis que estavam no espa�o de mem�ria utilizado a mais pelo vetor.

*/

int main(){
	
	int i, num[5];
	
	for (i=0; i<=5;i++){
		scanf("%d", &num[i]);
	}
	for (i=0; i<=5;i++){
		printf("%d\n", num[i]);
	}
	
	system("pause");
	return 0;
	
}

