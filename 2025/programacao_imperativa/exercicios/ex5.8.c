#include <stdio.h>

int main() {
    int i, num, soma = 0;
    for (i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("Media: %.2f\n", soma / 10.0);
    return 0;
}