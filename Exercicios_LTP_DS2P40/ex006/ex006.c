#include "stdio.h"

int main() {
    float dolar, cotdolar, real;

    // ENTRADA
    printf("Digite qual e a cotacao do dolar hoje: R$");
    scanf("%f", &cotdolar);

    printf("Digite quantos dolares voce tem na carteira: $");
    scanf("%f", &dolar);

    // PROCESSAMENTO
    real = dolar * cotdolar;

    printf("===================================\n");

    // SAÍDA
    printf("Fazendo a convercao do dolar para real, voce tem: R$%.2f", real);
    return 0;
}
