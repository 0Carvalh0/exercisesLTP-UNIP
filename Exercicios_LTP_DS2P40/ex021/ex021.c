#include "stdio.h"

int main() {
    int i;
    float n1, n2;

    for (i = 1; i <= 30; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &n1);

        n2 = n1 + n2;
    }

    n1 = n2 / 30;

    printf("A media de nota dos alunos e: %.2f", n1);

    return 0;
}
