#include <conio.h>
#include <stdio.h>

#define TF 10

void vetora (int vet[TF]){
	int i;
	for(i=0;i<TF;i++){
	printf("informe os numeros: [%d]",i);
	scanf("%d",&vet[i]);

	}
}

void somar (int vet[TF],int veta[TF], int vetb[TF]){
	int i;
	for(i=0;i<TF;i++){
		vetb[i] = vet[i] + veta[i];
	}
}

void mostra(int vet[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("\nvet[%d] = %d",i,vet[i]);
	}
}

void main(){
	int vet[TF],veta[TF],vetb[TF];
	vetora(vet);
	vetora(veta);
	somar(vet,veta,vetb);
	mostra(vetb);
	
}
