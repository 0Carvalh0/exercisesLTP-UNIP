#include "stdio.h"

int main() {
    int x, *px;

    x = 10;

    px = &x;

    printf("Variavel X:\nEndere�o: %d\nValor: %d\n", &x, x);

    printf("=================================\n");

    printf("Ponteiro px:\nEndere�o do ponteiro: %d\nEndere�o de X: %d\nValor de X: %d\n\n", &px, px, *px);

    return 0;
}
