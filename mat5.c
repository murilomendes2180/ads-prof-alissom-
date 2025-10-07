#include <stdio.h>
#include <conio.h>
#include <string.h>

#define TL 7
#define TC 7

void ler_m(int mat[TL][TC]) {
    int l, c, cont = 0;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            mat[l][c] = cont;
			cont++; 
        }
    }
}

void exibir_m(int mat[TL][TC]) {
    int l, c;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
        printf(" %d |",mat[l][c]);
        }
        printf("\n");
    }
}

int soma(int mat[TL][TC]) {
    int l, c,soma = 0;
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
            if (l == 4 || c == 2) {
                soma += mat[l][c];
            }
        }
    }

    return soma;
}
void main() {
    int mat[TL][TC];
    ler_m(mat);
    exibir_m(mat);
    printf("\nSoma: %d", soma(mat));
    getch(); 
}
