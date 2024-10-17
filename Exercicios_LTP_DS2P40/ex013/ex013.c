#include "stdio.h"

int main() {
    int ctrl;
    float real, dolar, euro, total;

    printf("Digite o valor da convercao que voce deseja fazer?\n");

    printf("1 - Real para Dolar\n");
    printf("2 - Dolar para Real\n");
    printf("3 - Real para Euro\n");
    printf("4 - Euro para Real\n");
    scanf("%d", &ctrl);
    printf("===================================\n");

    if (ctrl <= 2) {
        printf("Digite a cotacao do dolar: R$");
        scanf("%f", &dolar);

        if (ctrl == 1) {
            printf("Quantos reais voce quer converter? R$");
            scanf("%f", &real);

            total = real / dolar;
        } else {
            printf("Quantos dolares voce quer converter? $");
            scanf("%f", &real);

            total = real * dolar;
        }
    } else if (ctrl >= 3) {
        printf("Digite a cotacao do euro: R$");
        scanf("%f", &euro);

        if (ctrl == 3) {
            printf("Quantos reais voce quer converter? R$");
            scanf("%f", &real);

            total = real / euro;
        } else {
            printf("Quantos euros voce quer converter? €");
            scanf("%f", &real);

            total = real * euro;
        }
    }

    printf("Fazendo a convercao voce tera: %.2f", total);

    return 0;
}
