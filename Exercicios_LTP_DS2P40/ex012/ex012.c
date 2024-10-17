#include "stdio.h"

int main() {
    int a, b, c;

    printf("Digite o valor A: ");
    scanf("%d", &a);

    printf("Digite o valor B: ");
    scanf("%d", &b);

    printf("Digite o valor C: ");
    scanf("%d", &c);

    // printf("Desconsiderando valores iguais\n");

    if (a >= b && a >= c) {
        printf("O maior valor e o primeiro: %d!", a);
    } else {
        if (b >= c) {
            printf("O maior valor e o segundo: %d!", b);
        } else {
            printf("O maior valor e o terceiro: %d!", c);
        }
    }

    return 0;
}
