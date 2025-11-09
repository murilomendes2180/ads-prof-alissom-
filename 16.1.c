#include <stdio.h>
#include <conio.h>
#define TF 5

struct aluno {
    char nome[50];
    int faltas;
    float nota1;
    float nota2;
    float media;
};

void carregar_registro(struct aluno reg_aluno[TF]) {
    int i;
    printf("<<Carregar vetor de registro de alunos>>\n\n");
    for (i = 0; i < TF; i++) {
        fflush(stdin);
        printf("\nAluno [%d]:\n", i + 1);
        printf("Nome: ");
        gets(reg_aluno[i].nome);
        printf("Numero de faltas: ");
        scanf("%d", &reg_aluno[i].faltas);
        printf("Nota 1: ");
        scanf("%f", &reg_aluno[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &reg_aluno[i].nota2);
        reg_aluno[i].media = (reg_aluno[i].nota1 + reg_aluno[i].nota2) / 2;
    }
}

void exibir(struct aluno reg_aluno[TF]) {
    int i;
    printf("\n\n<<Exibir dados dos alunos>>\n\n");
    for (i = 0; i < TF; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", reg_aluno[i].nome);
        printf("Faltas: %d\n", reg_aluno[i].faltas);
        printf("Nota 1: %.2f\n", reg_aluno[i].nota1);
        printf("Nota 2: %.2f\n", reg_aluno[i].nota2);
        printf("Media: %.2f\n", reg_aluno[i].media);
    }
}

int maior_media(struct aluno reg_aluno[TF]) {
    int i, pos = 0;
    float maior = reg_aluno[0].media;
    for (i = 1; i < TF; i++) {
        if (reg_aluno[i].media > maior) {
            maior = reg_aluno[i].media;
            pos = i;
        }
    }
    return pos;
}

int menor_media(struct aluno reg_aluno[TF]) {
    int i, pos = 0;
    float menor = reg_aluno[0].media;
    for (i = 1; i < TF; i++) {
        if (reg_aluno[i].media < menor) {
            menor = reg_aluno[i].media;
            pos = i;
        }
    }
    return pos;
}

float media_geral(struct aluno reg_aluno[TF]) {
    int i;
    float soma = 0;
    for (i = 0; i < TF; i++) {
        soma += reg_aluno[i].media;
    }
    return soma / TF;
}

int aprovados(struct aluno reg_aluno[TF]) {
    int i, cont = 0;
    for (i = 0; i < TF; i++) {
        if (reg_aluno[i].media >= 7) {
            cont++;
        }
    }
    return cont;
}

int reprovados(struct aluno reg_aluno[TF]) {
    int i, cont = 0;
    for (i = 0; i < TF; i++) {
        if (reg_aluno[i].media < 7) {
            cont++;
        }
    }
    return cont;
}

int faltosos(struct aluno reg_aluno[TF]) {
    int i, cont = 0;
    for (i = 0; i < TF; i++) {
        if (reg_aluno[i].faltas > 20) {
            cont++;
        }
    }
    return cont;
}

void main() {
    struct aluno reg_aluno[TF];
    int pos_maior, pos_menor;
    float media_turma;
    int qtd_aprov, qtd_reprov, qtd_faltosos;

    carregar_registro(reg_aluno);
    exibir(reg_aluno);

    pos_maior = maior_media(reg_aluno);
    pos_menor = menor_media(reg_aluno);
    media_turma = media_geral(reg_aluno);
    qtd_aprov = aprovados(reg_aluno);
    qtd_reprov = reprovados(reg_aluno);
    qtd_faltosos = faltosos(reg_aluno);

    printf("\n\n<<Resultados>>\n");
    printf("Aluno com maior media: %s (Media: %.2f)\n", reg_aluno[pos_maior].nome, reg_aluno[pos_maior].media);
    printf("Aluno com menor media: %s (Media: %.2f)\n", reg_aluno[pos_menor].nome, reg_aluno[pos_menor].media);
    printf("Media geral da turma: %.2f\n", media_turma);
    printf("Alunos com media >= 7: %d\n", qtd_aprov);
    printf("Alunos com media < 7: %d\n", qtd_reprov);
    printf("Alunos com mais de 20 faltas: %d\n", qtd_faltosos);

    getch();
}

