#include <stdio.h>
#include <conio.h>
#define TF 2

struct abelha {
	int codigo;
	char regiao[100];
	char estado[100];
	int qualificacao;
};



void carregar_registro(struct abelha  reg_abelha [TF]){
	int i;
	printf("<<carregar vetor de registro>>\n\n");
	for (i=0; i<TF;i++){
	fflush(stdin);
	printf("\nregistro[%d]:", i + 1);
	printf("informe o estado:");
	gets(reg_abelha[i].estado);
	printf("informe a regiao:");
	gets(reg_abelha[i].regiao);
	printf("informe o codigo:");
	scanf("%d", &reg_abelha[i].codigo);
	
	do{
		printf("informe a qualificação (1-forte 2-medio 3-fraco)");
		scanf("%d",&reg_abelha[i].qualificacao);
	}while(reg_abelha[i].qualificacao != 1 && reg_abelha[i].qualificacao != 2  && reg_abelha[i].qualificacao != 3);
	}
}

void exibir(struct abelha reg_abelha[TF]){
	int i;
	printf("<<exibir vetor registro>>\n\n");
		for(i=0;i<TF;i++){
			printf("\nregistro: %d", i + 1);
			printf("\ncodigo: %d", reg_abelha[i].codigo);
			printf("\nestado: %s", reg_abelha[i].estado);
			printf("\nregiao: %s", reg_abelha[i].regiao);
	}
}


void main(){
	struct abelha reg_abelha[TF];
	carregar_registro(reg_abelha);
	exibir(reg_abelha);

}
