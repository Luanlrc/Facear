#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Multiplicação por 2 usando deslocamento de bits (<<)
    int multiplicacao = numero << 1;

    // Divisão por 2 usando deslocamento de bits (>>)
    int divisao = numero >> 1;

    printf("Multiplicacao por 2: %d\n", multiplicacao);
    printf("Divisao por 2: %d\n", divisao);

    return 0;
}
