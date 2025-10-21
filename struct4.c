#include <stdio.h>
#include <conio.h>
#define TF 5

struct pesquisa {
	int idade;
	float salario;
	int nf;
	int sexo;
};



void carregar_registro(struct pesquisa  reg_pesquisa [TF]){
	int i;
	printf("<<carregar vetor de registro>>\n\n");
	for (i=0; i<TF;i++){
	printf("\nregistro[%d]:", i + 1);
	printf("informe a idade:");
	scanf("%d", &reg_pesquisa[i].idade);
	printf("informe o numero de filhos:");
	scanf("%d", &reg_pesquisa[i].nf);
	printf("informe o salario:");
	scanf("%f", &reg_pesquisa[i].salario);
	
	do{
		printf("informe o sexo(1-M 2-F)");
		scanf("%d",&reg_pesquisa[i].sexo);
	}while(reg_pesquisa[i].sexo != 1 && reg_pesquisa[i].sexo != 2);
	}
}

void exibir(struct pesquisa reg_pesquisa[TF]){
	int i;
	printf("<<exibir vetor registro>>\n\n");
		for(i=0;i<TF;i++){
			printf("\nregistro: %d", i + 1);
			printf("\nidade: %d", reg_pesquisa[i].idade);
			printf("\nnumero de filho: %d", reg_pesquisa[i].nf);
			printf("\nsalario: %0.2f", reg_pesquisa[i].salario);
		
	}
}

void media(struct pesquisa reg_pesquisa[TF]){
	int i , soma = 0;
	float media;
	for(i = 0; i < TF;i++){
		soma += reg_pesquisa[i].salario;
	}
	media = soma / TF;
	printf("\n\nmedia do salario: 0.2f",media);
}

void main(){
	struct pesquisa reg_pesquisa[TF];
	carregar_registro(reg_pesquisa);
	exibir(reg_pesquisa);
	media(reg_pesquisa);



}
