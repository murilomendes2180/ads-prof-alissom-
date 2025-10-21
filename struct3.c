#include <stdio.h>
#include <conio.h>
#define TF 4

struct livro{
	int pg;
	float preco;
	char titulo[100];
	int ano;
	

};

void carregar_registro(struct livro reg_livro[TF]){
	int i;
	printf("<<carregar vetor de registro>>\n\n");
	for (i=0; i<TF;i++){
	fflush(stdin);
	printf("\nregistro[%d]:", i + 1);
	printf("informe ao titulo:");
	gets(reg_livro[i].titulo);
	printf("informe o ano:");
	scanf("%d", &reg_livro[i].ano);
	printf("informe as paginas:");
	scanf("%d", &reg_livro[i].pg);
	printf("informe o preco:");
	scanf("%f", &reg_livro[i].preco);
	}
}

void exibir(struct livro reg_livro[TF]){
	int i;
	printf("<<exibir vetor registro>>\n\n");
		for(i=0;i<TF;i++){
			printf("\nregistro: %d", i + 1);
			printf("\ntitulo: %s", reg_livro[i].titulo);
			printf("\nano: %d", reg_livro[i].ano);
			printf("\npaginas: %d", reg_livro[i].pg);
			printf("\npreco: %0.2f", reg_livro[i].preco);
		
	}
}

void media(struct livro reg_livro[TF]){
	int i , soma = 0;
	float media;
	for(i = 0; i < TF;i++){
		soma += reg_livro[i].pg;
	}
	media = soma / TF;
	printf("\n\nmedia de pagina: %0.2f",media);
}
void main(){
	struct livro reg_livro[TF];
	carregar_registro(reg_livro);
	exibir(reg_livro);
	media(reg_livro);
	
}
