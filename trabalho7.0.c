#include <stdio.h>
#include <string.h>
#include <conio.h>
#define TL 3
#define TC 3

void ler_m(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nmatriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
}

void exibir(int mat[TL][TC]){
	int l, c;
	printf("\n\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf(" %d |", mat[l][c]);
		}
		printf("\n");
	}
}

void exibir_outra(int mat[TL][TC]) {
	int l, c, soma = 0, soma_abaixo = 0;
	for(l = 0; l < TL; l++) {
		soma += mat[l][l];  
	}
	float media = soma / 3.0;
	printf("\n\nA media da diagonal eh: %0.2f\n", media);
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(mat[l][c] < media){
				soma_abaixo += mat[l][c];
			}
		}
	}
	
	printf("\nA soma dos elementos abaixo da media da diagonal principal eh: %d\n", soma_abaixo);
}

void main(){
	int mat[TL][TC];
	ler_m(mat);
	exibir(mat);
	exibir_outra(mat);
	exibir(mat);
}

