#include "stdio.h"

// uma empresa de decoração vende papeis de parede variados para residenciais e escritorios em geral. dependendo do modelo, o valor do papel de parede escolhido varia de preço que pode ser cotado de acordo com a area a se coberta. essa area de cobertura é medida em metros quadrados. cada area deve ser calculada separadamente fornecendoce para isso a altura e a largura de uma parede. para se calcular o valor total do projeto, é necessario obter as informações do tamanho da area a ser coberta, o valor do metro quadrado do papel de parede escolhido e o valor do frete para entrega.
// escreva um programa em C que receba as informações de entrada, calcule e apresente no final o valor do projeto, o valor do frete e o valor total pago (projeto + frete). o valor do frete é de 8% do valor do projeto

int main() {
    float wh, hh, mv, pv, fv, tv;

    printf("Qual e o valor cobrado pelo metro quadrado do papel de parede: R$");
    scanf("%f", &mv);

    printf("Qual a largura da parede: ");
    scanf("%f", &wh);

    printf("Qual a altura da parede: ");
    scanf("%f", &hh);

    pv = (wh * hh) * mv;

    fv = pv * 0.08;

    tv = pv + fv;

    printf("==================================================\n");

    printf("O valor do projeto sera de R$%.2f\nO valor do frete sera de R$%.2f\nO valor total a pagar sera de R$%.2f.", pv, fv, tv);

    printf("\n==================================================");
}
