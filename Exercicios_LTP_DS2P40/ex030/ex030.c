#include <stdio.h>
#include <string.h>

int main() {
    char string1[2], string2[2];

    printf("Digite um caracter: ");
    fgets(string1, sizeof(string1), stdin);

    strcpy(string2, string1);

    printf("String 1: %s\nString 2 (copia): %s", string1, string2);

    return 0;
}
