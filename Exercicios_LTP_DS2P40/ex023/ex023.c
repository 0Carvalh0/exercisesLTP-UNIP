#include "stdio.h"

int main() {
    int i = 1, nmaior, nmenor, n;

    while (i <= 15) {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (i == 1) {
            nmaior = n;
            nmenor = n;
        }

        if (n >= nmaior) {
            nmaior = n;
        }

        if (n <= nmenor) {
            nmenor = n;
        }

        i++;
    }

    printf("\n=====================================================\n");
    printf("O maior numero e: %d,\nO menor numero e: %d", nmaior, nmenor);
    printf("\n=====================================================\n");

    return 0;
}
