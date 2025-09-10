#include <stdio.h>
#include <conio.h>
#define TF 5

void carregar_vetor(int vet[TF]){
	int i;
	for (i=0;i<TF; i++){
	printf("\ninforme vetor %d:", i);
	scanf("%d", &vet[i]);
	
	}
}

void exibir(int vet[TF]){
	int i;
	for (i=0;i<TF; i++){
		printf("\nvetor [%d]:%d", i,vet[i]);
	}
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	exibir(vet);
}
