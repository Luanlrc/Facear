#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, temp;

    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Fibonacci(%d) = 0\n", n);
    } else if (n == 1) {
        printf("Fibonacci(%d) = 1\n", n);
    } else {
        for (i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        printf("Fibonacci(%d) = %llu\n", n, b);
    }
    return 0;
}
