#include "stdio.h"

int main() {
    int x, *px;

    x = 10;

    px = &x;

    printf("Variavel X:\nEndereço: %d\nValor: %d\n", &x, x);

    printf("=================================\n");

    printf("Ponteiro px:\nEndereço do ponteiro: %d\nEndereço de X: %d\nValor de X: %d\n\n", &px, px, *px);

    return 0;
}
