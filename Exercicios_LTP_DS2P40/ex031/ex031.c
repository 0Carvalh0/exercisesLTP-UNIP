#include <stdio.h>
#include <string.h>

int main() {
    char nome[6], sobrenome[9];

    printf("Digite o primeiro nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);

    strcat(nome, sobrenome);
    printf("Ola, %s", nome);

    return 0;
}
