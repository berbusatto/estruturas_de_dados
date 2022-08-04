#include <stdio.h>
#include <float.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	/*
	Armazene valores do tipo real em um vetor denominado vet_01 de 6 posições
	Multiplique por 1.5 o conteúdo de todas as posições pares
	Multiplique por 2.5 o conteúdo de todas as posições ímpares
	Mostre o conteúdo do vetor vet_01 na tela
	*/
	float vet_1[6];
	int i;
	for(i = 0; i < 6; i++){	
	scanf("%f", &vet_1[i]);
		if(i % 2 == 0){
			vet_1[i] *= 1.5;
		} else{
			vet_1[i] *= 2.5;
		}
	}
	for(i = 0; i < 6; i++){
		printf("%.1f\n", vet_1[i]);	
	}
	fflush(stdin);
	/*
	Armazene valores do tipo real em um vetor denominado vet_02 de 6 posições
	Multiplique por -1.5 o conteúdo de todas as posições pares
	Multiplique por -2.5 o conteúdo de todas as posições ímpares
	Mostre o conteúdo do vetor vet_02 na tela
	*/
	
	float vet_2[6];
	
	for(i = 0; i< 6; i++){
		scanf("%f", &vet_2[i]);
		if(i % 2 == 0){
			vet_2[i] *= -1.5;
		} else{
			vet_2[i] *= -2.5;
		}		
	}
	
	for(i = 0; i < 6; i++){
		printf("%.1f\n", vet_2[i]);	
	}
		printf("---------------\n");
	
	/*
	Calcule o produto escalar dos vetores vet_01 e vet_02. O produto escalar é formado pela multiplicação
	de seus componentes correspondentes e pela soma dos produtos resultantes.
	*/
	
	float prod_escalar = 0;
	
	for(i = 0; i < 6; i++){
		prod_escalar += vet_1[i] * vet_2[i];
	}
	printf("O produto escalar é %.1f\n", prod_escalar);
	printf("---------------\n");
	
	/*
	Some os vetores vet_01 e vet_02 em um vetor denominado vet_res
	Mostre na tela o maior valor e a respectiva posição do vetor vet_res
	Mostre na tela o menor valor e a respectiva posição do vetor vet_res
	Mostre na tela quantos números positivos há no vetor vet_res
	Mostre na tela quantos números negativos há no vetor vet_res
	Mostre na tela quantos números pares há no vetor vet_res
	Mostre na tela quantos números ímparea há no vetor vet_res			
	*/
	
	float vet_res[6], maior = FLT_MIN, menor = FLT_MAX; 
	int maiorPos, menorPos, qtdPosit = 0, qtdNegat = 0;
	
	for (i = 0; i < 6; i++){
		vet_res[i] = vet_1[i] + vet_2[i];
		
		if (vet_res[i] > maior){
			maiorPos = i;
			maior = vet_res[i];
		} else if (vet_res[i] < menor){
			menorPos = i;
			menor = vet_res[i];			
		}
		
		if (vet_res[i] >= 0){
			qtdPosit++;
		} else{
			qtdNegat++;
		}
	}	
	
	printf("O maior valor do vetor é %.1f na posicao %d\n", maior, maiorPos);
	printf("O menor valor do vetor é %.1f na posicao %d\n", menor, menorPos);

	printf("---------------\n");
	printf("A quantidade de números positivos é %d \n", qtdPosit);
	printf("A quantidade de números negativos é %d \n", qtdNegat);	
	
	printf("----------------\n");
	
	for (i = 0; i <6; i++){
		printf("%.1f", vet_res[i]);
	}
}
