#include <stdio.h>

void mensagem() {
    printf("Mensagem da funcao\n");
}

int soma(int a, int b) {
    int s;
    s = a + b;
    return s;
}

int main() {
    int x, y;

    printf("TESTES COM FUNCOES\n");
    mensagem();

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);

    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    printf("Resultado: %d", soma(x, y));

    return 0;
}
