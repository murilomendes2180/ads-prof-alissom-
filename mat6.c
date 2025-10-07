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

void soma(int mat[TL][TC],int matb[TL][TC], int matc[TL][TC]) {
    int l, c,soma = 0;
    printf("\n\n<<somar>>\n");
    for (l = 0; l < TL; l++) {
        for (c = 0; c < TC; c++) {
                matc[l][c] = mat[l][c] + matb[l][c];
            }
        }
    }

void main() {
    int mat[TL][TC],matb[TL][TC],matc[TL][TC];
    ler_m(mat);
    exibir_m(mat);
    ler_m(matb);
    exibir_m(matb);
    soma(mat,matb,matc);
    exibir_m(matc);
    getch(); 
}
