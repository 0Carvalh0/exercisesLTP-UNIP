#include "stdio.h"

int main() {
    float b, h, a;

    printf("Digite a base do triangulo: ");
    scanf("%f", &b);

    printf("Digite a altura do trinangulo: ");
    scanf("%f", &h);

    a = (b*h)/2;

    printf("A area do triangulo e: %f", a);
}
