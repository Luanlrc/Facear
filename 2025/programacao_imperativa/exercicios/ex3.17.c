#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%i", &numero);

    int complemento = ~numero;

    printf("O complemento bit a bit de %i e: %i\n", numero, complemento);

    return 0;
}