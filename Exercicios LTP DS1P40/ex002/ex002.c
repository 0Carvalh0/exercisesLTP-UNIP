#include "stdio.h"

int main() {
    float n1, n2, m;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    m = (n1 + n2)/2;

    printf("===================================================\n");

    printf("Sua media e: %f", m);
    return 0;
}
