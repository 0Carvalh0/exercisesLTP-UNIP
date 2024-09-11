#include "stdio.h"

int main() {
    float real, cotdolar, dolar;

    // ENTRADA
    printf("Digite qual e a cotacao do dolar hoje: R$");
    scanf("%f", &cotdolar);

    printf("Digite quantos reais voce tem na carteira: R$");
    scanf("%f", &real);

    // PROCESSAMENTO
    dolar = real / cotdolar;

    printf("===================================\n");

    // SAÍDA
    printf("Fazendo a convercao do real para dolar, voce tem: $%.2f", dolar);
    return 0;
}
