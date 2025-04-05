#include <stdio.h>

int main() {
    int num, i, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    printf("Soma dos divisores (exceto ele mesmo): %d\n", soma);
    return 0;
}
