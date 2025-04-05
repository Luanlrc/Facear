#include <stdio.h>

int main() {
    int n, i, num, maior, contador = 1;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    printf("Digite um numero: ");
    scanf("%d", &num);
    maior = num;

    for (i = 1; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            contador = 1;
        } else if (num == maior) {
            contador++;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Ocorrencias do maior numero: %d\n", contador);
    return 0;
}
