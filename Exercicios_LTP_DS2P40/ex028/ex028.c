#include "stdio.h"

int main() {
    float sal[15], med=0;
    int acimamed=0;

    for (int i=0; i<=14; i++) {
        printf("Digite o %d salario: ", i+1);
        scanf("%f", &sal[i]);
    }

    for (int k=0; k<=14; k++) {
        med = med + sal[k];
    }

    med = med/5;

    for (int j=0; j<=14; j++) {
        if (sal[j] >= med) {
            acimamed = acimamed + 1;
        }
    }

    printf("========================================\n");

    printf("Media geral: %.2f\n", med);
    printf("Salarios acima da media geral: %d", acimamed);

    return 0;
}
