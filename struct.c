#include <stdio.h>
#include <conio.h>
#define TF 3

struct aluno{
	char nome[100];
	int falta;
	float  media;

};

void carregar_registro(struct aluno reg_aluno[TF]){
	int i;
	printf("<<carregar vetor de registro>>\n\n");
	for (i=0; i<TF;i++){

	fflush(stdin);
	printf("\nregistro[%d]:", i + 1);
	printf("informe o nome:");
	gets(reg_aluno[i].nome);
	printf("informe as faltas:");
	scanf("%d", &reg_aluno[i].falta);
	printf("informe as media:");
	scanf("%f", &reg_aluno[i].media);
	}
}
	void exibir(struct aluno reg_aluno[TF]){
	int i;
	printf("<<exibir vetor registro>>\n\n");
		for(i=0;i<TF;i++){
			printf("\nregistro: %d", i + 1);
			printf("\nnome: %s", reg_aluno[i].nome);
			printf("\nfaltas: %d", reg_aluno[i].falta);
			printf("\nmedia: %0.2f", reg_aluno[i].media);
		
	}
}

void main(){
	struct aluno reg_aluno[TF];
	carregar_registro(reg_aluno);
	exibir(reg_aluno);
	
}
