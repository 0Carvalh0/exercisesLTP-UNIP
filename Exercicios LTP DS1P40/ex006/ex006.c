// COTAÇÃO DO DOLAR HOJE ESTÁ EM R$5,64
#include "stdio.h"

int main() {
    float dolar, cotdolar, real;

    printf("Digite quantos dolares voce tem na carteira: $");
    scanf("%f", &dolar);

    printf("Digite qual e a cotacao do dolar hoje: R$");
    scanf("%f", &cotdolar);

    real = dolar * cotdolar;

    printf("===================================\n");

    printf("Fazendo a convercao do dolar para real, voce tem: R$%f", real);
}
