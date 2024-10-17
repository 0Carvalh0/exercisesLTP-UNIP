
#include "stdio.h"

int main() {
    float sal, des, ali, deducao;

    printf("Digite o salario do funcionario: R$");
    scanf("%f", &sal);

    if (sal > 4664.68) {
        ali = 0.275;
        deducao = 896.00;
    } else {
        if (sal > 3751.06) {
            ali = 0.225;
            deducao = 662.77;
        } else {
            if (sal > 2826.66) {
                ali = 0.15;
                deducao = 381.44;
            } else {
                if (sal > 2259.21) {
                    ali = 0.075;
                    deducao = 169.44;
                } else {
                    ali = 0;
                    deducao = 0;
                }
            }
        }
    }

    des = (sal - ali) - deducao;

    printf("=================================\n");

    printf("O desconto sera de: R$%.2f\nTOTAL: R$%.2f", deducao, des);

    return 0;
}
