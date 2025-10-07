#include <stdio.h>
#include <conio.h>
#include <string.h>


#define TL 3
#define TC 3

void carregar(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("informe mat[%d][%d]:",l,c);
			scanf("%d",&mat[l][c]);
		}
	}
}

void exibir(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("\n\nmat[%d][%d]: %d",l,c,mat[l][c]);
		}
	}
}
void doble(int mat[TL][TC], int matd[TL][TC]){
	int l,c;
	printf("\n\nmultiplicar\n");
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			matd[l][c] = mat[l][c] * 2;
		}
	}
}

void main(){
	int mat[TL][TC],matd[TL][TC];
	carregar(mat);
	exibir(mat);
	doble(mat,matd);
	exibir(matd);
	
}
