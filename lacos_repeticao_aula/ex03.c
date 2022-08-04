#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que mostre na tela a tabuada do 7 e posteriormente a tabuada do 8 na tela
*/


int main(){
	int i, j, res;
	setlocale(LC_ALL, "");
	
	for (i = 7; i<=8; i++){
		for (j=1;j<=10; j++){
			res = j * i;
			printf("%d X %d = %d\n",j,i,res);
		}
	}	
	
	system("pause");
	return 0;
	
}
