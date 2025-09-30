#include <stdio.h>
#include <conio.h>
#define TL 4
#define TC 4


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

void encontra(int mat[TL][TC]){
	int l,c,num ,cont = 0;
	printf("\ninforme o numero:");
	scanf("%d",&num);
	for(l= 0;l < TL;l++){
			for(c = 0;c < TC;c++){
			if(num == mat[l][c]){
				printf("\nos numeros igual sao:[%d] [%d] %d",l,c);
				cont++;
			}
		}
	}
		if(cont == 0){
		printf("\n\nnumero invalido:");
	}
}



void main(){
	int mat[TL][TC];
	ler_m(mat);
	exibir_m(mat);
	encontra(mat);
}

