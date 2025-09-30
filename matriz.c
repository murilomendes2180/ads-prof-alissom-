#include <stdio.h>
#include <conio.h>
#define TL 3
#define TC 3


void ler_m(int mat[TL][TC]){
	int l,c;
	for(l = 0;l < TL;l++){
		for(c = 0;c < TC; c++){
			printf("matriz[%d][%d]:",l,c);
			scanf("%d",&mat[l][c]);
		}
	}
}


void exibir_m(int mat[TL][TC]){
	int l,c;
	for(l = 0;l < TL;l++){
		for(c = 0; c < TC;c++){
			printf("\nmatriz[%d][%d]:%d",l,c,mat[l][c]);
		}
	}
}

void main(){
	int mat[TL][TC];
	ler_m(mat);
	exibir_m(mat);
}

