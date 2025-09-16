#include <conio.h>
#include <stdio.h>
#define TF 6
//10.	Escrever um programa para ler um vetor de seis números inteiros; e mostrar a quantidade de números ímpares.


void carregar_vetor(int vet[TF]){
	int i;
	for(i=0;i<TF;i++){
		do{
			printf("informe vet[%d] (informe numeros):",i);
			scanf("%d",&vet[i]);
		}while (vet[i]<= 0);
	}
}

void mostra_vetor(int vet[TF]){
	int i,cont_im = 0;
	for(i=0; i<TF;i++){
		if(vet[i] % 2 ==1){
			cont_im++;
		}
		
			
	}
	printf("aqtde de impar %d",cont_im);
}

void main(){
	int vet[TF];
	carregar_vetor(vet);
	mostra_vetor(vet);
}
