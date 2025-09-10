#include <stdio.h>
#include <conio.h>
#define TF 10

void carregar_vetor(int vet[TF]){
	int i;
	for (i=0;i<TF; i++){
		vet[i] = (i + 1) * 10;
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
