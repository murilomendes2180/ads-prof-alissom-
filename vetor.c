#include <stdio.h>
#include <conio.h>
#define TF 499999

void carregar_vetor(int vet[TF]){
	int i;
	for (i=0;i<TF; i++){
		printf("\ninforme a %d posicao", i);
		//scanf("%d", &vet[i]);
	}
}

void exibir(int vet[TF]){
	int i;
	for (i=0;i<TF; i++){
		printf("\ninforme a %d posicao", i,vet[1]);
	}
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	exibir(vet);
}
