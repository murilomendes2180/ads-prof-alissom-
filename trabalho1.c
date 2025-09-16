#include <conio.h>
#include <stdio.h>

#define TF 10


void carregar_vetor(int vet[TF]) {
    int i;
    for(i = 0; i < TF; i++) {
        do {
            printf("Informe vet[%d]: ", i);
            scanf("%d", &vet[i]);
            if(vet[i] <= 0) {
                printf("Informe um número positivo!\n");
            }
        } while (vet[i] <= 0);
    }
}

void mostra(int vet[TF]) {
    int i;
    int menor = vet[0];
    int maior = vet[0];

    for(i = 1; i < TF; i++) {
        if(vet[i] < menor) {
            menor = vet[i];
        }
        if(vet[i] > maior) {
            maior = vet[i];
        }
    }

    printf("O menor numero e: %d\n", menor);
    printf("O maior numero e: %d\n", maior);
}

int main() {
    int vet[TF];
    carregar_vetor(vet);
    mostra(vet);
}

