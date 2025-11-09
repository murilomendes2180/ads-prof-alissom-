#include <stdio.h>
#include <conio.h>
#define TF 7

struct participante {
    char nome[50];
    float altura;
    int cor_preferida;
    int cor_olhos;
};

void carregar_registro(struct participante reg_part[TF]) {
    int i;
    printf("<<Carregar vetor de registro de participantes>>\n\n");
    for (i = 0; i < TF; i++) {
        fflush(stdin);
        printf("\nParticipante [%d]:\n", i + 1);
        printf("Nome: ");
        gets(reg_part[i].nome);
        printf("Altura: ");
        scanf("%f", &reg_part[i].altura);
        do {
            printf("Cor preferida (1-branco, 2-vermelho, 3-amarelo, 4-verde): ");
            scanf("%d", &reg_part[i].cor_preferida);
        } while (reg_part[i].cor_preferida < 1 || reg_part[i].cor_preferida > 4);
        do {
            printf("Cor dos olhos (1-castanho, 2-preto, 3-azul, 4-verde): ");
            scanf("%d", &reg_part[i].cor_olhos);
        } while (reg_part[i].cor_olhos < 1 || reg_part[i].cor_olhos > 4);
    }
}

void exibir(struct participante reg_part[TF]) {
    int i;
    printf("\n\n<<Exibir dados das participantes>>\n\n");
    for (i = 0; i < TF; i++) {
        printf("\nParticipante %d:\n", i + 1);
        printf("Nome: %s\n", reg_part[i].nome);
        printf("Altura: %.2f\n", reg_part[i].altura);
        printf("Cor preferida: %d\n", reg_part[i].cor_preferida);
        printf("Cor dos olhos: %d\n", reg_part[i].cor_olhos);
    }
}

int mais_alta(struct participante reg_part[TF]) {
    int i, pos = 0;
    float maior = reg_part[0].altura;
    for (i = 1; i < TF; i++) {
        if (reg_part[i].altura > maior) {
            maior = reg_part[i].altura;
            pos = i;
        }
    }
    return pos;
}

int mais_baixa(struct participante reg_part[TF]) {
    int i, pos = 0;
    float menor = reg_part[0].altura;
    for (i = 1; i < TF; i++) {
        if (reg_part[i].altura < menor) {
            menor = reg_part[i].altura;
            pos = i;
        }
    }
    return pos;
}

float media_geral(struct participante reg_part[TF]) {
    int i;
    float soma = 0;
    for (i = 0; i < TF; i++) {
        soma += reg_part[i].altura;
    }
    return soma / TF;
}

int acima_media(struct participante reg_part[TF], float media) {
    int i, cont = 0;
    for (i = 0; i < TF; i++) {
        if (reg_part[i].altura > media) {
            cont++;
        }
    }
    return cont;
}

int olhos_azuis(struct participante reg_part[TF]) {
    int i, cont = 0;
    for (i = 0; i < TF; i++) {
        if (reg_part[i].cor_olhos == 3) {
            cont++;
        }
    }
    return cont;
}

float media_verde(struct participante reg_part[TF]) {
    int i, cont = 0;
    float soma = 0;
    for (i = 0; i < TF; i++) {
        if (reg_part[i].cor_preferida == 4) {
            soma += reg_part[i].altura;
            cont++;
        }
    }
    if (cont == 0) return 0;
    return soma / cont;
}

void main() {
    struct participante reg_part[TF];
    int pos_maior, pos_menor;
    float media_turma, media_verdes;
    int qtd_acima, qtd_azul;

    carregar_registro(reg_part);
    exibir(reg_part);

    pos_maior = mais_alta(reg_part);
    pos_menor = mais_baixa(reg_part);
    media_turma = media_geral(reg_part);
    qtd_acima = acima_media(reg_part, media_turma);
    qtd_azul = olhos_azuis(reg_part);
    media_verdes = media_verde(reg_part);

    printf("\n\n<<Resultados>>\n");
    printf("Participante mais alta: %s (Altura: %.2f)\n", reg_part[pos_maior].nome, reg_part[pos_maior].altura);
    printf("Participante mais baixa: %s (Altura: %.2f)\n", reg_part[pos_menor].nome, reg_part[pos_menor].altura);
    printf("Media geral das participantes: %.2f\n", media_turma);
    printf("Participantes acima da media: %d\n", qtd_acima);
    printf("Participantes com olhos azuis: %d\n", qtd_azul);
    printf("Media de altura das que preferem a cor verde: %.2f\n", media_verdes);

    getch();
}

