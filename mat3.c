#include <stdio.h>
#include <conio.h>

#define TL 4
#define TC 4

void ler_m(int mat[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            printf("matriz[%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
}

void exibir_m(int mat[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
        }
    }
}

void soma(int mat[TL][TC]) {
    int l, c;
    int soma_linha3 = 0;
    int soma_coluna2 = 0;
    int soma_total = 0;

    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            if (l == 2) {
                soma_linha3 += mat[l][c];
            }
            if (c == 1) {
                soma_coluna2 += mat[l][c];
            }
            soma_total += mat[l][c];
        }
    }

    printf("\nSoma da linha 3: %d", soma_linha3);
    printf("\nSoma da coluna 2: %d", soma_coluna2);
    printf("\nSoma total de todos os elementos: %d", soma_total);
}

void main() {
    int mat[TL][TC];
    ler_m(mat);
    exibir_m(mat);
    soma(mat);

    getch(); 
}

