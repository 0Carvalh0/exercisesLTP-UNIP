#include "stdio.h"

int main() {
    int a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o primeiro valor: ");
    scanf("%d", &b);

    if (a == b) {
        printf("Os dois valores são IGUAIS!");
    } else {
        if (a > b) {
            printf("O primeiro valor e MAIOR que o segundo!");
        } else {
            printf("O primeiro valor e MENOR que o segundo!");
        }
    }

    return 0;
}
