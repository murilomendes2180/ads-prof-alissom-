#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TL 5
#define TC 5
#define LIMITE 100

int existe(int cartela[TL][TC], int num) {
    int i, j;
    for(i = 0; i < TL; i++)
        for(j = 0; j < TC; j++)
            if(cartela[i][j] == num) return 1;
    return 0;
}

void gerar_cartela(int cartela[TL][TC]) {
    int i, j, num;

    for(i = 0; i < TL; i++)
        for(j = 0; j < TC; j++)
            cartela[i][j] = -1;

    srand(time(NULL));

    for(i = 0; i < TL; i++) {
        for(j = 0; j < TC; j++) {
            do {
                num = rand() % LIMITE;
            } while(existe(cartela, num));
            cartela[i][j] = num;
        }
    }
}

void exibir_cartela(int cartela[TL][TC]) {
    int i, j;
    printf("\n=== Cartela de Bingo ===\n\n");
    for(i = 0; i < TL; i++) {
        for(j = 0; j < TC; j++)
            printf("%3d ", cartela[i][j]);
        printf("\n");
    }
}

void main() {
    int cartela[TL][TC];
    gerar_cartela(cartela);
    exibir_cartela(cartela);
}


