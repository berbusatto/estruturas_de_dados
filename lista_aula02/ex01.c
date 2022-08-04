#include <stdio.h>
#include <stdlib.h>

/*
Fazer um programa que:
? imprima a média aritmética dos números 8,9 e 7.
? imprima a média aritmética dos números 4, 5 e 6.
? Imprima a soma das duas médias.
? Imprima a media das medias.
*/

int main() {
	int media1, media2, media3, soma;
	
	media1 = (8 + 9 + 7) / 3;
	media2 = (4 + 5 + 6) / 3;
	soma = media1 + media2;
	media3 = (media1 + media2) / 2;
	
	printf("A media 1 eh %d e a media 2 eh %d\n", media1, media2);
	printf("A soma das duas medias eh %d\n", soma);
	printf("A media das medias eh %d\n", media3);
	
	
	system("pause");
	return 0;
}

