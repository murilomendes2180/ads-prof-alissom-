#include <stdio.h>
#include <conio.h>
#define TF 5

struct pessoa {
    char nome[50];
    float salario;
    char cpf[20];
    int idade;
    int sexo;
};

void carregar_registro(struct pessoa reg_pessoa[TF]) {
    int i;
    printf("<<Carregar vetor de registro>>\n\n");
    for (i = 0; i < TF; i++) {
        fflush(stdin);
        printf("\nRegistro [%d]:\n", i + 1);
        printf("Nome: ");
        gets(reg_pessoa[i].nome);
        printf("CPF: ");
        gets(reg_pessoa[i].cpf);
        printf("Idade: ");
        scanf("%d", &reg_pessoa[i].idade);
        printf("Salario: ");
        scanf("%f", &reg_pessoa[i].salario);
        do {
            printf("Sexo (1-Masculino, 2-Feminino): ");
            scanf("%d", &reg_pessoa[i].sexo);
        } while (reg_pessoa[i].sexo != 1 && reg_pessoa[i].sexo != 2);
    }
}

void exibir(struct pessoa reg_pessoa[TF]) {
    int i;
    printf("\n\n<<Exibir vetor de registro>>\n\n");
    for (i = 0; i < TF; i++) {
        printf("\nRegistro %d:\n", i + 1);
        printf("Nome: %s\n", reg_pessoa[i].nome);
        printf("CPF: %s\n", reg_pessoa[i].cpf);
        printf("Idade: %d\n", reg_pessoa[i].idade);
        printf("Salario: R$ %.2f\n", reg_pessoa[i].salario);
        printf("Sexo: %s\n", (reg_pessoa[i].sexo == 1) ? "Masculino" : "Feminino");
    }
}

float media(struct pessoa reg_pessoa[TF]) {
    int i;
    float soma = 0;
    for (i = 0; i < TF; i++) {
        soma += reg_pessoa[i].salario;
    }
    return soma / TF;
}

float maior(struct pessoa reg_pessoa[TF]) {
    int i;
    float maior = reg_pessoa[0].salario;
    for (i = 1; i < TF; i++) {
        if (reg_pessoa[i].salario > maior) {
            maior = reg_pessoa[i].salario;
        }
    }
    return maior;
}

int qtd_feminino(struct pessoa reg_pessoa[TF]) {
    int i, cont = 0;
    for (i = 0; i < TF; i++) {
        if (reg_pessoa[i].sexo == 2) {
            cont++;
        }
    }
    return cont;
}

void main() {
    struct pessoa reg_pessoa[TF];
    float media_s, maior_s;
    int qtd_fem;
    carregar_registro(reg_pessoa);
    exibir(reg_pessoa);
    media_s = media(reg_pessoa);
    maior_s = maior(reg_pessoa);
    qtd_fem = qtd_feminino(reg_pessoa);
    printf("\n\n<<Resultados>>\n");
    printf("Media salarial: R$ %.2f\n", media_s);
    printf("Maior salario: R$ %.2f\n", maior_s);
    printf("Quantidade de mulheres: %d\n", qtd_fem);
    getch();
}

