#include <stdio.h>
#include <stdlib.h>

int main(){
	int num[5], entrada, i, soma = 0;
	
	for (i = 0; i<5, i++){
		scanf("%d", &num[i]);
		soma += num[i];
	}
	
	printf("%d\n", soma);
	
	system("pause");
	return 0;
	}
