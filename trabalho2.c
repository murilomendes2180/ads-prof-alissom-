
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

float media(int vet[TF]){
	int i, soma = 0;
    for (i = 0; i < TF; i++) {
        soma += vet[i];
    }
    return (float)soma / TF;
}

void main(){
	int vet[TF];
    float resultado;
    carregar_vetor(vet);             
    resultado = media(vet);          

    printf("\nMédia das notas: %.2f\n", resultado);  

}
