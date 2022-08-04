#include <stdio.h>
#include <stdlib.h>

/*
Altere o programa acima para que os valores do vetor não sejam fixos, e sim informados pelo usuário,
conforme abaixo
*/

int main(){
	int num[5];
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 40;
	num[4] = 50;
	
	scanf("%d", &num[0]);
	scanf("%d", &num[1]);
	scanf("%d", &num[2]);
	scanf("%d", &num[3]);
	scanf("%d", &num[4]);
	
	printf("---------\n");
	printf("%d\n", num[0]);
	printf("%d\n", num[1]);
	printf("%d\n", num[2]);
	printf("%d\n", num[3]);
	printf("%d\n", num[4]);
	
	system("pause");
	return 0;
	}
