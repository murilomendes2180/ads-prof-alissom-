#include <stdio.h>
#define TL 3
#define TC 6

void ler_matriz(float mat[TL][TC]) {
    int l, c;
    for(l = 0; l < TL; l++) {
        for(c = 0; c < TC; c++) {
            printf("matriz[%d][%d]: ", l, c);
            scanf("%f", &mat[l][c]);
        }
    }
}

void exibir_matriz(float mat[TL][TC]) {
    int l, c;
    printf("\nMatriz:\n");
    for(l = 0; l < TL; l++) {
        for(c = 0; c < TC; c++) {
            printf("%8.2f ", mat[l][c]);
        }
        printf("\n");
    }
}

float soma_colunas_impares(float mat[TL][TC]) {
    float soma = 0;
    int l, c;
    for(c = 0; c < TC; c += 2) { 
        for(l = 0; l < TL; l++) {
            soma += mat[l][c];
        }
    }
    return soma;
}

float media_colunas(float mat[TL][TC]) {
    float soma = 0;
    int l, c;
    int colunas[2] = {1, 3}; 
    for(c = 0; c < 2; c++) {
        for(l = 0; l < TL; l++) {
            soma += mat[l][colunas[c]];
        }
    }
    return soma / (TL * 2);
}

void substituir_sexta(float mat[TL][TC]) {
    int l;
    for(l = 0; l < TL; l++) {
        mat[l][5] = mat[l][0] + mat[l][1]; 
    }
}

int main() {
    float mat[TL][TC];
    ler_matriz(mat);

    float soma_impares = soma_colunas_impares(mat);
    printf("\nSoma dos elementos das colunas ímpares: %.2f\n", soma_impares);

    float media = media_colunas(mat);
    printf("Media aritmetica das 2ª e 4ª colunas: %.2f\n", media);

    substituir_sexta(mat);
    printf("\nMatriz modificada:\n");
    exibir_matriz(mat);

    return 0;
}


