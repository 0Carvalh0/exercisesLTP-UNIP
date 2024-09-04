#include "stdio.h"

int main() {
    float sa, a, sf;

    printf("Digite o salario atual: ");
    scanf("%f", &sa);

    a = sa * 0.1;

    sf = sa + a;

    printf("O aumento foi de: %f", a);

    printf("O salario final e: %f", sf);
}
