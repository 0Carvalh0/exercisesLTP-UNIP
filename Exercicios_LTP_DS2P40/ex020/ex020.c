#include "stdio.h"

int main() {
    int i, val, mult;

    printf("Voce quer a tabuada de qual valor: ");
    scanf("%d", &val);

    for (i=1; i<=10; i=i+1) {
        mult = val * i;

        printf("%d x %d = %d\n", val, i, mult);
    }
}
