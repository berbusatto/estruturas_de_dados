#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i;
	for(i = 10; i<=100; i++){
		printf("%d\n", i);
	}	
}
