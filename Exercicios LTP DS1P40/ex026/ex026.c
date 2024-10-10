#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
    int uc, cc, winner;

    while (uc < 1 || uc > 3) {
        printf("PEDRA, PAPEL, TESOURA!\n");
        printf("1 - PEDRA\n2 - PAPEL\n3 - TESOURA\n");

        printf("Qual voce vai escolher? ");
        scanf("%d", &uc);
    }

    srand(time(NULL));
    cc = rand()%3 + 1;

    printf("\nO usuario escolheu: ");
    if (uc == 1) {
        printf("PEDRA\n");
    } else if (uc == 2) {
        printf("PAPEL\n");
    } else {
        printf("TESOURA\n");
    }

    printf("O computador escolheu: ");
    if (cc == 1) {
        printf("PEDRA\n\n");
    } else if (cc == 2) {
        printf("PAPEL\n\n");
    } else {
        printf("TESOURA\n\n");
    }

    if (uc == cc) {
        winner = 3;
    } else if ((uc == 1 && cc == 3) || (uc == 2 && cc == 1) || uc == 3 && cc == 2) {
        winner = 1;
    } else {
        winner = 2;
    }

    if (winner == 1) {
        printf("PARABENS! Voce ganhou!");
    } else if (winner == 2) {
        printf("QUE PENA! Voce perdeu!");
    } else if (winner == 3) {
        printf("EMPATE!");
    }

    return 0;
}
