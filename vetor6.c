#include <stdio.h>
#include <conio.h>
#define TF 4

void carregar_vetor(int vet_d[TF]){
	int i;
	for (i=0;i<TF; i++){
	printf("\ninforme vetor %d:", i);
	scanf("%d", &vet_d[i]);
	
	}
}

void verso(int vet_d[TF], int vet_e[TF]){
	int i,j;
	for(i=0,j=TF-1; i<TF;i++,j--){
		vet_e[j] = vet_d[i];
	}
}

void exibir(int vet[TF]){
	int i;
	for (i=0;i<TF; i++){
		printf("\nvetor [%d]:%d", i,vet[i]);
	}
}

void main(){
	int vet_d[TF],vet_e[TF];
	carregar_vetor(vet_d);
	verso(vet_d,vet_e);
	exibir(vet_e);
}
