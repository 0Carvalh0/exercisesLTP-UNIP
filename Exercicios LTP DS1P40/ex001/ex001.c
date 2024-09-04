#include "stdio.h"

int main() {
    int n1, n2, s;

    printf("Digite o 1° valor: ");
    scanf("%d", &n1);

    printf("Digite o 2° valor: ");
    scanf("%d", &n2);

    s = n1 + n2;

    printf("O resultado da soma é: %d", s);
    return 0;
}
