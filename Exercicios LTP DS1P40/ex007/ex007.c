// COTAÇÃO DO DOLAR HOJE ESTÁ EM R$5,64
#include "stdio.h"

int main() {
    float real, cotdolar, dolar;

    printf("Digite quantos reais voce tem na carteira: R$");
    scanf("%f", &real);

    printf("Digite qual e a cotacao do dolar hoje: R$");
    scanf("%f", &cotdolar);

    dolar = real / cotdolar;

    printf("===================================\n");

    printf("Fazendo a convercao do real para dolar, voce tem: $%f", dolar);
}
