#include "stdio.h"

int main() {
    int op;
    float vop, i;

    while (op < 1 || op > 2) {
        printf("1-IMPORTACAO\n2-EXPORTACAO\n\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &op);
    }

    printf("Informe o valor da operacao: ");
    scanf("%f", &vop);

    if (op == 1) {
        if (vop <= 9000) {
            i = vop * 0.09;
        } else {
            if (vop <= 13600) {
                i = vop * 0.14;
            } else {
                i = vop * 0.18;
            }
        }
        printf("Imposto de importacao: %.2f", i);
    }

    if (op == 2) {
        if (vop <= 8000) {
            i = vop * 0.04;
        } else {
            if (vop <= 12000) {
                i = vop * 0.06;
            } else {
                i = vop * 0.08;
            }
        }
        printf("Imposto de exportacao: %.2f", i);
    }

    return 0;
}
