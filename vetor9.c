#include <conio.h>
#include <stdio.h>
#define TF 5


void carregar_vetor(int vet[TF]){
	int i;
	for(i=0;i<TF;i++){
		do{
			printf("informe vet[%d] (positivo):",i);
			scanf("%d",&vet[i]);
			if(vet[i] < 0){
				printf("informe um numero positivo!\n");
			}
		}while (vet[i]<= 0);
	}
}

void mostra_vetor(int vet[TF]){
	int i,cont_ig = 0;
	for(i=0; i<TF;i++){
		if(vet[i]==vet[TF-1]){
			cont_ig++;
		}
	}
	printf("posição igual a o ultima %d",cont_ig);
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	mostra_vetor(vet);
}
