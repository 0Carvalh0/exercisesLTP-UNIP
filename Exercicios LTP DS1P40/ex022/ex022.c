#include "stdio.h"

int main() {
    int i = 1, quantMaior, quantMenor;
    float sal, medSal;

    while (i <= 15) {

        printf("Digite o salario do funcionario: R$");
        scanf("%f", &sal);

        if (sal <= 2000) {
            quantMenor = quantMenor + 1;
        }

        if (sal >= 5000) {
            quantMaior = quantMaior + 1;
        }

        medSal = medSal + sal;

        i++;
    }

    medSal = medSal / 15;

    printf("===============================================\n");
    printf("A quantidade de salarios ate R$2000 e: %d,\nA quantida de salarios acima de R$5000 e: %d,\nA media salarial e: R$%.2f", quantMenor, quantMaior, medSal);
    printf("\n===============================================\n");

    return 0;
}
