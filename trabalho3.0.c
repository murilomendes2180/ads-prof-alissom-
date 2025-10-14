#include <stdio.h>
#include <string.h>
#include <conio.h>
#define TL 4
#define TC 4


void ler_m(int mat[TL][TC]){
	int l,c ;
	for(l = 0;l < TL;l++){
		for(c = 0;c < TC; c++){
			printf("\nmatriz[%d][%d]:",l,c);
			 scanf("%d", &mat[l][c]);
		}
	}
}


void exibir(int mat[TL][TC]){
	int l,c,maior;
	for(l = 0;l < TL;l++){
		for(c = 0; c < TC;c++)
		printf(" %d |",mat[l][c]);{
			mat[l][c] = maior;
		}
	}
	 printf("\n");
	 
}

void exibir_m(int mat[TL][TC]){
	int l,c,maior,lm,cm;
	for(l = 0;l < TL;l++){
		for(c = 0; c < TC;c++){
			if (mat[l][c] > maior){
			maior= mat[l][c];
			lm = l;
			cm = c;
			}
		}
	}
	printf("  o maior valor eh[%d][%d]:%d |",lm,cm,maior);
	 
}




void main(){
	int mat[TL][TC],maior;
	ler_m(mat);
	exibir(mat);
	exibir_m(mat);
}
