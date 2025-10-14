#include <stdio.h>
#include <string.h>
#include <conio.h>
#define TL 4
#define TC 4

void ler(int mat[TL][TC]){
	int l,c ;
	for(l = 0;l < TL;l++){
		for(c = 0;c < TC; c++){
			printf("\nmatriz[%d][%d]:",l,c);
			 scanf("%d", &mat[l][c]);
		}
	}
}

void exibir(int mat[TL][TC]){
	int l,c,cont = 0;
	for(l = 0;l < TL;l++){
		for(c = 0; c < TC;c++){
		if(mat[l][c] >= 11){
			 mat[l][c] = cont++;	
		}
		
		}
	}
	printf("os numeros maiores que 10 sao: %d",cont++);
}

void main(){
	int mat[TL][TC];
	ler(mat);
	exibir(mat);
}
