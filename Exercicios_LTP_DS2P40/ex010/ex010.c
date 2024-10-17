#include "stdio.h"

int main() {
    float n1, n2, med;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    med = (n1 + n2) / 2;

    printf("Sua media e: %.2f\n", med);

    if (med >= 7) {
        printf("Voce esta APROVADO!");
    } else {
        if (med >= 4) {
            printf("Voce esta de EXAME!");
        } else {
            printf("Voce esta REPROVADO!");
        }
    }

    return 0;
}
