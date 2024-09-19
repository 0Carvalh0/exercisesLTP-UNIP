#include "stdio.h"

int main() {
    int aa, an, id;

    printf("Qual o ano atual? ");
    scanf("%d", &aa);

    printf("Em que ano voce nasceu? ");
    scanf("%d", &an);

    id = aa - an;

    printf("Voce tem %d\n", id);

    if (id >= 18) {
        printf("Voce e MAIOR DE IDADE!");
    } else {
        printf("Voce e MENOR DE IDADE!");
    }

    return 0;
}
