#include <stdio.h>
#include <stdlib.h>

/*

Avalie o código fonte abaixo

** Há algum problema nesse código ? Ele compila ? Ele executa ? Qual o resultado em tela da execução desse
programa ?

Há um problema. O tamanho do array é menor do que a quantidade de entradas no scanf.
No entanto ele compila, executa e printa na tela todos os valores que foram inseridos.

O C permite que a gente exceda a memória, porém pode causar consequências no programa, 
como perder dados de outras variáveis que estavam no espaço de memória utilizado a mais pelo vetor.

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

