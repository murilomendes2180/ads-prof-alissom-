#include <stdio.h>
#include <string.h>
#include <conio.h>


void codificar(char *texto) {
    for (int i = 0; texto[i] != '\0'; i++) {
        switch (texto[i]) {
            case 'A':
                texto[i] = ';';
                break;
            case 'E':
                texto[i] = '-';
                break;
            case 'I':
                texto[i] = ',';
                break;
            case 'O':
                texto[i] = '.';
                break;
            case 'U':
                texto[i] = '+';
                break;
        }
    }
}

void main() {
    char texto[100];

    printf("Informe um texto: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0';
    codificar(texto);
    printf("Texto codificado: %s\n", texto);

}

