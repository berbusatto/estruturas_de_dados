#include <stdio.h>
#include <stdlib.h>

/*
Altere o programa acima para que os valores do vetor sejam mostrados multiplicados por 5.
*/

int main(){
	int num[5];
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	num[3] = 40;
	num[4] = 50;
	
	printf("%d\n", num[0] * 5);
	printf("%d\n", num[1] * 5);
	printf("%d\n", num[2] * 5);
	printf("%d\n", num[3] * 5);
	printf("%d\n", num[4] * 5);
	
	system("pause");
	return 0;
	}
