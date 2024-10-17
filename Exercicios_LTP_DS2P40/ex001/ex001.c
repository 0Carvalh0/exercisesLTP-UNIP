#include "stdio.h"

int main() {
    int n1, n2, s;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);

    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    s = n1 + n2;

    printf("===================================================\n");

    printf("O resultado da soma e: %d", s);
    return 0;
}
