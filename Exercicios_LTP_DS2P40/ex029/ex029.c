#include "stdio.h"

int main() {
    float med[20], medgeral=0;
    int abaixomedia=0, acimamedia=0;

    for (int i=0; i<=19; i++) {
        printf("Digite a %d media do aluno: ", i+1);
        scanf("%f", &med[i]);
    }

    for (int j=0; j<=19; j++) {
        medgeral = medgeral + med[j];
    }

    medgeral = medgeral / 20;

    for (int k=0; k<=19; k++) {
        if (med[k]<=medgeral) {
            abaixomedia = abaixomedia + 1;
        }

        if (med[k]>=medgeral) {
            acimamedia = acimamedia + 1;
        }
    }

    printf("Media geral: %.2f\n", medgeral);
    printf("Abaixo da media geral: %d\nAcima da media geral: %d", abaixomedia, acimamedia);

    return 0;
}
