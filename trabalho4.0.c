#include <stdio.h>
#include <string.h>
#include <conio.h>
#define TL 4
#define TC 4


void ler_m(int mat[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nmatriz[%d][%d]: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
}


void exibir_mat(int mat[TL][TC]){
	int l, c;
	printf("\nMatriz a:\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf(" %d |", mat[l][c]);
		}
		printf("\n");
	}
}


void exibir_matb(int matb[TL][TC]){
	int l, c;
	printf("\nMatriz b:\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf(" %d |", matb[l][c]);
		}
		printf("\n");
	}
}


void exibir_maiores(int matc[TL][TC]){
	int l, c;
	printf("\nMatriz com os maiores valores:\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf(" %d |", matc[l][c]);
		}
		printf("\n");
	}
}


void maiores(int mat[TL][TC], int matb[TL][TC], int matc[TL][TC]){
	int l, c;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if(mat[l][c] > matb[l][c]){
				matc[l][c] = mat[l][c];
			} else {
				matc[l][c] = matb[l][c];
			}
		}
	}
}

void main(){
	int mat[TL][TC], matb[TL][TC], matc[TL][TC];
	ler_m(mat);      
	ler_m(matb);    
	exibir_mat(mat);    
	exibir_matb(matb);   
	maiores(mat, matb, matc);  
	exibir_maiores(matc);       
}
