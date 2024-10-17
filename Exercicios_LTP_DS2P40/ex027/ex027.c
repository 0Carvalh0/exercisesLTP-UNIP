#include "stdio.h"

int main() {
    int nums[10];

    for (int i=0; i<=9; i++) {
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &nums[i]);
    }

    printf("======================================\n");

    for (int k=0; k<=9; k++) {
        printf("%dx2 = %d\n", nums[k], (nums[k]*2));
    }

    return 0;
}
