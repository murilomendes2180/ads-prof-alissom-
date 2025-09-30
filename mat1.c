#include <stdio.h>
#include <conio.h>
#define TL 3
#define TC 3


void ler_m(int mat[TL][TC]){
	int l,c ,num = 10;
	for(l = 0;l < TL;l++){
		for(c = 0;c < TC; c++){
			mat[l][c] = num;
			num += 10;
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

void soma (int mat[TL][TC]){
	int l,c,soma = 0;
	for(l = 0;l < TL;l++){
		for(c = 0;c < TL; c++){
			soma += mat[l][c];
		}
	}	
	printf("\na soma eh %d",soma);
}

void main(){
	int mat[TL][TC];
	ler_m(mat);
	exibir_m(mat);
	soma(mat);
}

