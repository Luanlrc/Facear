#include <stdio.h>

int main() {
    int n, i, primo = 1;
    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Numero invalido.\n");
        return 0;
    }

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("%d eh primo.\n", n);
    else
        printf("%d nao e primo.\n", n);

    return 0;
}
