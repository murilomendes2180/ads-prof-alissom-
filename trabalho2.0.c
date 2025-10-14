#include <stdio.h>
#include <string.h>
#include <conio.h>
#define TL 5
#define TC 5

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
	int l,c;
	for(l = 0;l < TL;l++){
		for(c = 0; c < TC;c++)
		printf(" %d |",mat[l][c]);{
		}
	}
	 printf("\n");
}



void exibir_outra(int mat[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            if (l == c) {
                mat[l][c] = 1;
            } else {
                mat[l][c] = 0;
            }
        }
    }
}


void main(){
	int mat[TL][TC];
	ler_m(mat);
	exibir(mat);
	exibir_outra(mat);
	exibir(mat);
}
