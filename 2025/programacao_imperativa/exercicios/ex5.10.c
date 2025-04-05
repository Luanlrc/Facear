#include <stdio.h>

int main() {
    int i = 0, num, soma = 0, count = 0;
    while (i < 10) {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
        if (num > 0) {
            soma += num;
            count++;
            i++;
        }
    }
    printf("Media: %.2f\n", soma / (float)count);
    return 0;
}
