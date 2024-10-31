#include <stdio.h>

typedef struct {
    char nome[31];
    int registro;
    float salario;
} Tfunc;

int main() {
    Tfunc f1;

    printf("Nome: ");
    scanf("%s", &f1.nome);

    printf("Registro: ");
    scanf("%d", &f1.registro);

    printf("Salario: ");
    scanf("%f", &f1.salario);

    printf("Nome: %s\nRegistro: %d\nSalario: %.2f", f1.nome, f1.registro, f1.salario);

    return 0;
}
