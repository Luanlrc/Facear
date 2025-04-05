#include <stdio.h>

void main() {
    int num, i;
    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    printf("Divisores de %d: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
