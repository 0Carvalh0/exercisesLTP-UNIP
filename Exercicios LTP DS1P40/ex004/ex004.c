#include "stdio.h"

int main() {
    float sa, a, sf;

    printf("Digite o salario atual: ");
    scanf("%f", &sa);

    a = sa * 0.1;

    sf = sa + a;

    printf("===================================================\n");

    printf("O aumento foi de: %f", a);

    printf("\nO salario final e: %f", sf);
    return 0;
}
