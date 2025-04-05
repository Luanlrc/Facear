#include <stdio.h>

int main() {
    int aux = 1;
    float soma = 0.0, num;

    printf("Digite 10 numeros:\n");

    while (aux <= 10) {
        printf("Digite o %d numero:\n", aux);
        scanf("%f", &num);
        soma += num;
        aux++;
    }

    printf("A soma dos 10 numeros e: %.2f\n", soma);

    return 0;
}
