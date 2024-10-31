#include <stdio.h>
#include <string.h>

int main() {
    char senha[9], senhacorreta[9];

    strcpy(senhacorreta, "olamundo");

    printf("Ola usuario, digite sua senha: ");
    fgets(senha, sizeof(senha), stdin);

    if (strcmp(senha, senhacorreta) == 0) {
        printf("SENHA CORRETA! Bem vindo!");
    } else {
        printf("SENHA INCORRETA!");
    }

    return 0;
}
