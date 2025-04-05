#include <stdio.h>

int main() {
    int n, i, j;
    double E = 0.0;
    long long fatorial;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fatorial = 1;
        for (j = 1; j <= i; j++) {
            fatorial *= j;
        }
        E += 1.0 / fatorial;
    }

    printf("Valor de E: %.6f\n", E);
    return 0;
}
