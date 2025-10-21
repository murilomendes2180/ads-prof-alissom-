#include <stdio.h>
#include <conio.h>
#define TF 4

struct dadoaluno{
	int idade;
	float media;

};

void carregar_registro(struct dadoaluno reg_dadoaluno[TF]){
	int i;
	printf("<<carregar vetor de registro>>\n\n");
	for (i=0; i<TF;i++){
	printf("\nregistro[%d]:", i + 1);
	printf("informe as idade:");
	scanf("%d", &reg_dadoaluno[i].idade);
	printf("informe as media:");
	scanf("%f", &reg_dadoaluno[i].media);
	}
}
	void exibir(struct dadoaluno reg_dadoaluno[TF]){
	int i;
	printf("<<exibir vetor registro>>\n\n");
		for(i=0;i<TF;i++){
			printf("\nregistro: %d", i + 1);
			printf("\nidade: %d", reg_dadoaluno[i].idade);
			printf("\nmedia: %0.2f", reg_dadoaluno[i].media);
		
	}
}


void main(){
	struct dadoaluno reg_dadoaluno[TF];
	carregar_registro(reg_dadoaluno);
	exibir(reg_dadoaluno);
	
}
