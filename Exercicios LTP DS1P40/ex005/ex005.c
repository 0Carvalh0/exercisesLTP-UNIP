#include "stdio.h"

int main() {
    float vc, d, vf;

    printf("Digite o valor do produto: ");
    scanf("%f", &vc);

    d = vc * 0.05;
    vf = vc - d;

    printf("O desconto sera de: R$%f", d);

    printf("O valor final da compra sera de: R$%f", vf);
}
